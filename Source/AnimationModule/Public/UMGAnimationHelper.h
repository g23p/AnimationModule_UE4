// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "LatentActions.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "UMGAnimationHelper.generated.h"

/**
 * 
 */

static TArray<UWidget*> UMGLatentInfoArr;

class UMGAnimationClass
{
	float TotalTime;
	float TimeNow;
	UWidget* InWidget;
	UCanvasPanelSlot* WidgetSlot;
	bool bIsIncrement;
	FVector2D NewSize;
	FVector2D NewPosition;
	FVector2D Pivot;
	bool bIsNonlinear;
	bool bFinished;
	FVector2D UMGPosition;
	FVector2D UMGSize;
	FVector2D TargetPosition;
	FVector2D TargetSize;
	FVector2D Vector2DWithNewSize;

public:
	UMGAnimationClass(float Duration, UWidget* Widget, bool isInc, FVector2D Siz, FVector2D Pos, FVector2D Piv, bool IsNonlinear)
		: TotalTime(Duration)
		, TimeNow(0.f)
		, InWidget(Widget)
		, bIsIncrement(isInc)
		, NewSize(Siz)
		, NewPosition(Pos)
		, bIsNonlinear(IsNonlinear)
		, bFinished(false)
		, TargetPosition(FVector2D(0.f, 0.f))
		, TargetSize(FVector2D(0.f, 0.f))
	{
		WidgetSlot = Cast<UCanvasPanelSlot>(InWidget->Slot);
		UMGPosition = WidgetSlot->GetPosition();
		UMGSize = WidgetSlot->GetSize();

		Pivot = FVector2D(MakeLimit(Piv.X), MakeLimit(Piv.Y));

		Vector2DWithNewSize = -(NewSize * Pivot);

		SetDefaultInfo();
	}

	void myInit()
	{
		SetDefaultInfo();
		UMGPosition = WidgetSlot->GetPosition();
		UMGSize = WidgetSlot->GetSize();
		Vector2DWithNewSize = -(NewSize * Pivot);
	}

	void myUpdateOperation(float myElapsedTime)
	{
		TimeNow += myElapsedTime;

		if (TimeNow < TotalTime)
		{
			if (bIsNonlinear)
			{
				WidgetSlot->SetSize(UKismetMathLibrary::Vector2DInterpTo(WidgetSlot->GetSize(), TargetSize, myElapsedTime, 6 / TotalTime));
				WidgetSlot->SetPosition(UKismetMathLibrary::Vector2DInterpTo(WidgetSlot->GetPosition(), TargetPosition, myElapsedTime, 6 / TotalTime));
			}
			else
			{
				WidgetSlot->SetSize((TimeNow / TotalTime) * (TargetSize - UMGSize) + UMGSize);
				WidgetSlot->SetPosition((TimeNow / TotalTime) * (TargetPosition - UMGPosition) + UMGPosition);
			}
		}
		else
		{
			WidgetSlot->SetPosition(TargetPosition);
			WidgetSlot->SetSize(TargetSize);

			bFinished = true;
		}
	}

	bool IsFinished()
	{
		return bFinished;
	}

	void SetStartInfo(FVector2D StartPos, FVector2D StartSiz)
	{
		UMGPosition = StartPos;
		UMGSize = StartSiz;

		SetDefaultInfo();
	}

	void GetTargetInfo(FVector2D& TargetPos, FVector2D& TargetSiz)
	{
		TargetPos = TargetPosition;
		TargetSiz = TargetSize;
	}

	void SetDefaultInfo()
	{
		if (bIsIncrement)
		{
			TargetPosition = UMGPosition + NewPosition + Vector2DWithNewSize;
			TargetSize = UMGSize + NewSize;
		}
		else
		{
			TargetPosition = NewPosition - (NewSize - WidgetSlot->GetSize()) * Pivot;
			TargetSize = NewSize;
		}
	}

	UCanvasPanelSlot* GetInSlot()
	{
		return WidgetSlot;
	}

	UWidget* GetWidget()
	{
		return InWidget;
	}

	float MakeLimit(float num)
	{
		if (num > 1)
			return 1;
		else if (num < 0)
			return 0;
		else
			return num;
	}
};

USTRUCT(BlueprintType)
struct FUMGAniamtionStruct
{
	GENERATED_USTRUCT_BODY()
		UMGAnimationClass* AnimationClass;

};

class UMGAnimationContainer : public FPendingLatentAction
{
public:
	UWidget* MovingWidget;
	UCanvasPanelSlot* WidgetSlot;
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;
	int32 UUID;
	bool RunLock;
	TArray<UMGAnimationClass*> UMGAnimationArray;

	UMGAnimationContainer(const FLatentActionInfo& LatentInfo, UMGAnimationClass* InAnimationClass, UWidget* InWidget)
		: MovingWidget(InWidget)
		, ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, UUID(LatentInfo.UUID)
		, RunLock(false)
	{
		UMGAnimationArray.Add(InAnimationClass);
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		if (!RunLock && UMGAnimationArray.Num() != 0)
		{
			UMGAnimationArray[0]->myInit();
			RunLock = true;
		}
		else if (RunLock)
		{
			if (!UMGAnimationArray[0]->IsFinished())
			{
				UMGAnimationArray[0]->myUpdateOperation(Response.ElapsedTime());
			}
			else
			{
				if (UMGAnimationArray.Num() > 1)
				{
					FVector2D TargetPos;
					FVector2D TargetSiz;
					UMGAnimationArray[0]->GetTargetInfo(TargetPos, TargetSiz);
					UMGAnimationArray[1]->SetStartInfo(TargetPos, TargetSiz);
				}
				delete UMGAnimationArray[0];
				UMGAnimationArray[0] = nullptr;
				UMGAnimationArray.RemoveAt(0);
				RunLock = false;
			}
		}
		else
		{
			UMGLatentInfoArr.Remove(MovingWidget);
			Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
			Response.DoneIf(true);
		}
	}

	void AddAnimation(UMGAnimationClass* UMGAnimation, bool FinishPreAction)
	{
		if (FinishPreAction)
		{
			FVector2D TargetPos;
			FVector2D TargetSiz;
			if (UMGAnimationArray.Num() > 1)
			{
				for (int x = 0; x < UMGAnimationArray.Num() - 1; x++)
				{
					UMGAnimationArray[x]->GetTargetInfo(TargetPos, TargetSiz);
					UMGAnimationArray[x + 1]->SetStartInfo(TargetPos, TargetSiz);
				}
				UMGAnimationArray[UMGAnimationArray.Num() - 1]->GetTargetInfo(TargetPos, TargetSiz);
			}
			else if(UMGAnimationArray.Num() == 1)
			{
				UMGAnimationArray[0]->GetTargetInfo(TargetPos, TargetSiz);
			}
			UMGAnimation->SetStartInfo(TargetPos, TargetSiz);
			UMGAnimationArray.Empty();
			RunLock = false;
		}
		UMGAnimationArray.Add(UMGAnimation);
	}
};

UCLASS()
class ANIMATIONMODULE_API UUMGAnimationHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:


	/**
	* @param InWidget          操作的Widget对象
	* @param Duration          动画的总时长
	* @param IsIncrement       NewPosition和NewSize是否是作为物体原状态的增量添加上去，不是增量则为目标
	* @param NewPosition       Position的增量或目标Position
	* @param NewSize           Size的增量或目标Size
	* @param Pivot             增减大小时的锚点(0,0)为左上，(1,1)为右下
	* @param bIsNonlinear      动画是否为非线性
	*/
	UFUNCTION(BlueprintPure, meta = (AdvancedDisplay = 1, Duration = 1.f, IsIncrement = 1), Category = "AnimationHelper|UMGAnimation")
		static FUMGAniamtionStruct MakeUMGAnimation(UWidget* InWidget, float Duration, bool IsIncrement,
			FVector2D NewPosition, FVector2D NewSize, FVector2D Pivot, bool bIsNonlinear);

	/**
	* @param StopPreAction     立刻把上一个动作置为结束时的状态
	*/
	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "AnimationHelper|UMGAnimation")
		static void PlayUMGAnimation(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FUMGAniamtionStruct> AnimationStructArray, bool StopPreAction = false);

};
