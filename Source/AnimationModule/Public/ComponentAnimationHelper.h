// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LatentActions.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Kismet/KismetMathLibrary.h"

#include "ComponentAnimationHelper.generated.h"

USTRUCT(BlueprintType)
struct FComponentAnimationStruct
{
	GENERATED_USTRUCT_BODY()

	/** 操作的component对象 */
	UPROPERTY(BlueprintReadWrite)
		USceneComponent* InComponent = nullptr;

	/** 动画的总时长 */
	UPROPERTY(BlueprintReadWrite)
		float Duration = 1;

	/** 否作为物体原状态的增量添加上去，不是增量则为目标 */
	UPROPERTY(BlueprintReadWrite)
		bool bIsIncrement = true;

	/** Vector的增量或目标Vector */
	UPROPERTY(BlueprintReadWrite)
		FVector NewLocation = FVector(0, 0, 0);

	/** Rotation的增量或目标Rotation */
	UPROPERTY(BlueprintReadWrite)
		FRotator NewRotation = FRotator(0, 0, 0);

	/** Scale的增量或目标Scale */
	UPROPERTY(BlueprintReadWrite)
		FVector NewScale = FVector(0, 0, 0);

	/** 动画是否为非线性 */
	UPROPERTY(BlueprintReadWrite)
		bool bIsNonlinear = true;

	UPROPERTY()
		FVector PreTargetLocation;

	UPROPERTY()
		FRotator PreTargetRotation;

	UPROPERTY()
		FVector PreTargetScale;

	void SetPreTarget(FVector PreTargetLoc, FRotator PreTargetRot, FVector PreTargetSca)
	{
		PreTargetLocation = PreTargetLoc;
		PreTargetRotation = PreTargetRot;
		PreTargetScale = PreTargetSca;
	}

	void GetTargetParam(FVector& TargetLocation, FRotator& TargetRotation, FVector& TargetScale)
	{
		if (bIsIncrement)
		{
			TargetLocation = PreTargetLocation + NewLocation;
			TargetRotation = PreTargetRotation + NewRotation;
			TargetScale = PreTargetScale + NewScale;
		}
		else
		{
			TargetLocation = NewLocation;
			TargetRotation = NewRotation;
			TargetScale = NewScale;
		}
	}

};

class ComponentAnimationHelper
{
private:

	UPROPERTY()
		TMap<USceneComponent*, TArray<FComponentAnimationStruct>> ComponentAnimationMap;

public:

	static ComponentAnimationHelper* GetInstance()
	{
		static ComponentAnimationHelper Instance;

		return &Instance;
	}

	int32 Num()
	{
		return ComponentAnimationMap.Num();
	}

	void StopAllAnimaAndGetPreTarget(USceneComponent* TargetComponent, FVector& PreTargetLoc, FRotator& PreTargetRot, FVector& PreTargetSca)
	{
		TArray<FComponentAnimationStruct>* AnimationStructArrPtr = ComponentAnimationMap.Find(TargetComponent);
		if (AnimationStructArrPtr && AnimationStructArrPtr->Num() > 0)
		{
			TArray<FComponentAnimationStruct> AnimationStructArr = *AnimationStructArrPtr;
			AnimationStructArr[0].GetTargetParam(PreTargetLoc, PreTargetRot, PreTargetSca);

			for (int32 i = 1; i < AnimationStructArr.Num(); i++)
			{
				AnimationStructArr[i].SetPreTarget(PreTargetLoc, PreTargetRot, PreTargetSca);
				AnimationStructArr[i].GetTargetParam(PreTargetLoc, PreTargetRot, PreTargetSca);
			}

			ComponentAnimationMap.Remove(TargetComponent);
		}
		else
		{
			PreTargetLoc = TargetComponent->GetComponentLocation();
			PreTargetRot = TargetComponent->GetComponentRotation();
			PreTargetSca = TargetComponent->GetComponentScale();
		}
	}
	
	void Add(USceneComponent* InComponent, TArray<FComponentAnimationStruct> InAnimationStructArr)
	{
		if (TArray<FComponentAnimationStruct>* AnimationStructArr = ComponentAnimationMap.Find(InComponent))
		{
			AnimationStructArr->Append(InAnimationStructArr);
		}
		else
		{
			ComponentAnimationMap.Add(InComponent, InAnimationStructArr);
		}
	}

	bool HasAnimation(USceneComponent* InComponent)
	{
		if (TArray<FComponentAnimationStruct>* AnimationStructArr = ComponentAnimationMap.Find(InComponent))
		{
			if (AnimationStructArr->Num() > 0)
				return true;
		}

		return false;
	}


	TArray<FComponentAnimationStruct>* GetAnimationStructArr(USceneComponent* InComponent)
	{
		return ComponentAnimationMap.Find(InComponent);
	}
};

class FComponentAnimationContainer : public FPendingLatentAction
{
public:
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;

	USceneComponent* ComponentPtr;

	float TotalTime;
	bool bIsIncrement;
	FVector ComponentLocation;
	FRotator ComponentRotation;
	FVector ComponentScale;
	bool bIsNonlinear;

	FVector TargetLocation;
	FRotator TargetRotation;
	FVector TargetScale;

	ComponentAnimationHelper* AnimationHelper;

	float TimeNow;
	int32 StructArrIndex;

	bool bStopThisAction;

	FComponentAnimationContainer(const FLatentActionInfo& LatentInfo, USceneComponent* InComponent)
		: ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, ComponentPtr(InComponent)
		, bStopThisAction(false)
	{
		AnimationHelper = ComponentAnimationHelper::GetInstance();
		if (AnimationHelper->HasAnimation(InComponent))
		{
			GetDataFromNewStruct();
			GetNewTransform();

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
				ComponentPtr->SetWorldLocation(UKismetMathLibrary::VInterpTo(ComponentPtr->GetComponentLocation(), TargetLocation, Response.ElapsedTime(), 6 / TotalTime));
				ComponentPtr->SetWorldRotation(UKismetMathLibrary::RInterpTo(ComponentPtr->GetComponentRotation(), TargetRotation, Response.ElapsedTime(), 6 / TotalTime));
				ComponentPtr->SetWorldScale3D(UKismetMathLibrary::VInterpTo(ComponentPtr->GetComponentScale(), TargetScale, Response.ElapsedTime(), 6 / TotalTime));
			}
			else
			{
				ComponentPtr->SetWorldLocation((TimeNow / TotalTime) * (TargetLocation - ComponentLocation) + ComponentLocation);
				ComponentPtr->SetWorldRotation((TimeNow / TotalTime) * (TargetRotation - ComponentRotation) + ComponentRotation);
				ComponentPtr->SetWorldScale3D((TimeNow / TotalTime) * (TargetScale - ComponentScale) + ComponentScale);
			}
		}
		else
		{
			ComponentPtr->SetWorldLocation(TargetLocation);
			ComponentPtr->SetWorldRotation(TargetRotation);
			ComponentPtr->SetWorldScale3D(TargetScale);

			if (AnimationHelper->GetAnimationStructArr(ComponentPtr)->Num() > 0)
			{
				AnimationHelper->GetAnimationStructArr(ComponentPtr)->RemoveAt(0);
			}

			if (AnimationHelper->GetAnimationStructArr(ComponentPtr)->Num() > 0)
			{
				AnimationHelper->GetAnimationStructArr(ComponentPtr)->GetData()->SetPreTarget(TargetLocation, TargetRotation, TargetScale);
				GetDataFromNewStruct();
				GetNewTransform();
			}
			else
			{
				StopThisLatent();
			}
		}
	}

	void GetDataFromNewStruct()
	{
		TotalTime = AnimationHelper->GetAnimationStructArr(ComponentPtr)->GetData()->Duration;
		bIsIncrement = AnimationHelper->GetAnimationStructArr(ComponentPtr)->GetData()->bIsIncrement;
		bIsNonlinear = AnimationHelper->GetAnimationStructArr(ComponentPtr)->GetData()->bIsNonlinear;
		AnimationHelper->GetAnimationStructArr(ComponentPtr)->GetData()->GetTargetParam(TargetLocation, TargetRotation, TargetScale);

		TimeNow = 0.f;
	}

	void GetNewTransform()
	{
		ComponentLocation = ComponentPtr->GetComponentLocation();
		ComponentRotation = ComponentPtr->GetComponentRotation();
		ComponentScale = ComponentPtr->GetComponentScale();
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
class ANIMATIONMODULE_API UComponentAnimationHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	/**
	* @param StopPreAction     立刻把上一个动作置为结束时的状态
	*/
	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "AnimationHelper|ComponentAnimation")
		static void PlayComponentAnimation(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FComponentAnimationStruct> AnimationStructArray, bool bStopPreAction = false);

};
