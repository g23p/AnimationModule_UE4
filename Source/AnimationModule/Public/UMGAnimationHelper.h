// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LatentActions.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Kismet/KismetMathLibrary.h"
#include "UMGAnimationHelper.generated.h"

USTRUCT(BlueprintType)
struct FUMGAnimationStruct 
{
	GENERATED_USTRUCT_BODY()

	/** 操作的widget对象 */
	UPROPERTY(BlueprintReadWrite)
		UWidget* InWidget = nullptr;

	/** 动画的总时长 */
	UPROPERTY(BlueprintReadWrite)
		float Duration = 1;

	/** 否作为物体原状态的增量添加上去，不是增量则为目标 */
	UPROPERTY(BlueprintReadWrite)
		bool bIsIncrement = true;

	/** Position的增量或目标Position */
	UPROPERTY(BlueprintReadWrite)
		FVector2D NewPosition = FVector2D(0.f, 0.f);

	/** Size的增量或目标Size */
	UPROPERTY(BlueprintReadWrite)
		FVector2D NewSize = FVector2D(0.f, 0.f);

	/** 动画是否为非线性 */
	UPROPERTY(BlueprintReadWrite)
		bool bIsNonlinear = true;

	UCanvasPanelSlot* WidgetSlot;

	FVector2D PreTargetPosition;
	FVector2D PreTargetSize;

	void SetPreTarget(FVector2D PreTargetPos, FVector2D PreTargetSiz)
	{
		PreTargetPosition = PreTargetPos;
		PreTargetSize = PreTargetSiz;
	}

	void GetTargetParam(FVector2D& TargetPosition, FVector2D& TargetSize)
	{
		if (bIsIncrement)
		{
			TargetPosition = PreTargetPosition + NewPosition;
			TargetSize = PreTargetSize + NewSize;
		}
		else
		{
			TargetPosition = NewPosition;
			TargetSize = NewSize;
		}
	}

};

class UMGAnimationHelper
{
	TMap<UWidget*, TArray<FUMGAnimationStruct>> UMGAnimationMap;

public:

	static UMGAnimationHelper* GetInstance()
	{
		static UMGAnimationHelper Instance;

		return &Instance;
	}

	void StopAllAnimationAndGetPreTarget(UWidget* TargetUMG, FVector2D& PreTargetPos, FVector2D& PreTargetSiz)
	{
		TArray<FUMGAnimationStruct>* AnimationStructArrPtr = UMGAnimationMap.Find(TargetUMG);
		if (AnimationStructArrPtr && AnimationStructArrPtr->Num() > 0)
		{
			TArray<FUMGAnimationStruct> AnimationStructArr = *AnimationStructArrPtr;
			AnimationStructArr[0].GetTargetParam(PreTargetPos, PreTargetSiz);

			for (int32 i = 1; i < AnimationStructArr.Num(); i++)
			{
				AnimationStructArr[i].SetPreTarget(PreTargetPos, PreTargetSiz);
				AnimationStructArr[i].GetTargetParam(PreTargetPos, PreTargetSiz);
			}

			UMGAnimationMap.Remove(TargetUMG);
		}
		else
		{
			if (UCanvasPanelSlot* WidgetSlot = Cast<UCanvasPanelSlot>(TargetUMG->Slot))
			{
				PreTargetPos = WidgetSlot->GetPosition();
				PreTargetSiz = WidgetSlot->GetSize();
			}
		}
	}

	void Add(UWidget* InUMG, TArray<FUMGAnimationStruct> InAnimationStructArr)
	{
		if (TArray<FUMGAnimationStruct>* AnimationStructArr = UMGAnimationMap.Find(InUMG))
		{
			AnimationStructArr->Append(InAnimationStructArr);
		}
		else
		{
			UMGAnimationMap.Add(InUMG, InAnimationStructArr);
		}
	}


	bool HasAnimation(UWidget* InUMG)
	{
		if (TArray<FUMGAnimationStruct>* AnimationStructArr = UMGAnimationMap.Find(InUMG))
		{
			if (AnimationStructArr->Num() > 0)
				return true;
		}
		
		return false;
	}

	TArray<FUMGAnimationStruct>* GetAnimationStructArr(UWidget* InUMG)
	{
		return UMGAnimationMap.Find(InUMG);
	}
};

class FUMGAnimationContainer : public FPendingLatentAction
{
public:
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;

	UWidget* UMGPtr;
	UCanvasPanelSlot* WidgetSlot;

	float TotalTime;
	bool bIsIncrement;
	FVector2D UMGPosition;
	FVector2D UMGSize;
	bool bIsNonlinear;

	FVector2D TargetPosition;
	FVector2D TargetSize;

	UMGAnimationHelper* AnimationHelper;
	TArray<FUMGAnimationStruct>* AnimationStructArr;
	
	float TimeNow;
	int32 StructArrIndex;
	bool bStopThisAction;

	FUMGAnimationContainer(const FLatentActionInfo& LatentInfo, UWidget* InWidget)
		: ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, UMGPtr(InWidget)
		, bStopThisAction(false)
	{
		AnimationHelper = UMGAnimationHelper::GetInstance();
		WidgetSlot = Cast<UCanvasPanelSlot>(UMGPtr->Slot);
		if (WidgetSlot && AnimationHelper->HasAnimation(InWidget))
		{
			GetNewStructArr();
			GetDataFromNewStruct();
			GetNewSlotData();
			
			TimeNow = 0.f;
			StructArrIndex = 0;
		}
		else
		{
			StopThisLatent();
		}

	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		TimeNow += Response.ElapsedTime();

		if (bStopThisAction)
		{
			Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
			Response.DoneIf(true);
		}

		if (TimeNow < TotalTime)
		{
			if (bIsNonlinear)
			{
				WidgetSlot->SetPosition(UKismetMathLibrary::Vector2DInterpTo(WidgetSlot->GetPosition(), TargetPosition, Response.ElapsedTime(), 6 / TotalTime));
				WidgetSlot->SetSize(UKismetMathLibrary::Vector2DInterpTo(WidgetSlot->GetSize(), TargetSize, Response.ElapsedTime(), 6 / TotalTime));
			}
			else
			{
				WidgetSlot->SetPosition((TimeNow / TotalTime) * (TargetPosition - UMGPosition) + UMGPosition);
				WidgetSlot->SetSize((TimeNow / TotalTime) * (TargetSize - UMGSize) + UMGSize);
			}
		}
		else
		{
			WidgetSlot->SetPosition(TargetPosition);
			WidgetSlot->SetSize(TargetSize);

			if (AnimationStructArr->Num() > 0)
				AnimationStructArr->RemoveAt(0);

			if (AnimationStructArr->Num() > 0)
			{
				AnimationStructArr->GetData()->SetPreTarget(TargetPosition, TargetSize);
				GetDataFromNewStruct();
				GetNewSlotData();
			}
			else
				StopThisLatent();
		}
	}

	void GetNewStructArr()
	{
		AnimationStructArr = AnimationHelper->GetAnimationStructArr(UMGPtr);
	}

	void GetDataFromNewStruct()
	{
		TotalTime = AnimationStructArr->GetData()->Duration;
		bIsIncrement = AnimationStructArr->GetData()->bIsIncrement;
		bIsNonlinear = AnimationStructArr->GetData()->bIsNonlinear;
		AnimationStructArr->GetData()->GetTargetParam(TargetPosition, TargetSize);
		TimeNow = 0.f;
	}

	void GetNewSlotData()
	{
		UMGPosition = WidgetSlot->GetPosition();
		UMGSize = WidgetSlot->GetSize();
	}

	void StopThisLatent()
	{
		bStopThisAction = true;
	}
};

/**
 * 
 */
UCLASS()
class ANIMATIONMODULE_API UUMGAnimationHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "AnimationHelper|UMGAnimation")
		static void PlayUMGAnimation(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FUMGAnimationStruct> AnimationStructArr, bool bStopPreAction = false);

};
