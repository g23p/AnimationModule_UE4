// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "LatentActions.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Engine/LatentActionManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ComponentAnimationHelper.generated.h"

/**
 * 
 */

static TArray<USceneComponent*> ComponentLatentInfoArr;

class ComponentAnimationClass
{
	float TotalTime;
	float TimeNow;
	USceneComponent* InComponent;
	bool bIsIncrement;
	FVector NewVector;
	FRotator NewRotation;
	FVector NewScale;
	FVector ComponentLocation;
	FRotator ComponentRotation;
	FVector ComponentScale;
	bool bFinished;
	FVector TargetLocation;
	FRotator TargetRotation;
	FVector TargetScale;

public:
	ComponentAnimationClass(float Duration, USceneComponent* Com, bool IsInc, FVector Vec, FRotator Rot, FVector Sca)
		: TotalTime(Duration)
		, TimeNow(0.f)
		, InComponent(Com)
		, bIsIncrement(IsInc)
		, NewVector(Vec)
		, NewRotation(Rot)
		, NewScale(Sca)
		, bFinished(false)
		, TargetLocation(FVector(0.f, 0.f, 0.f))
		, TargetRotation(FRotator(0.f, 0.f, 0.f))
	{
		ComponentLocation = InComponent->RelativeLocation;
		ComponentRotation = InComponent->RelativeRotation;
		ComponentScale = InComponent->RelativeScale3D;
		SetTargetTransform();
	}

	void myInit()
	{
		SetTargetTransform();
		ComponentLocation = InComponent->RelativeLocation;
		ComponentRotation = InComponent->RelativeRotation;
		ComponentScale = InComponent->RelativeScale3D;
	}

	void myUpdateOperation(float myElapsedTime)
	{
		TimeNow += myElapsedTime;

		if (TimeNow < TotalTime)
		{
			InComponent->SetRelativeLocation((TimeNow / TotalTime) * (TargetLocation - ComponentLocation) + ComponentLocation);
			InComponent->SetRelativeRotation((TimeNow / TotalTime) * (TargetRotation - ComponentRotation) + ComponentRotation);
			InComponent->SetRelativeScale3D((TimeNow / TotalTime) * (TargetScale - ComponentScale) + ComponentScale);
		}
		else
		{
			InComponent->SetRelativeRotation(TargetRotation);
			InComponent->SetRelativeLocation(TargetLocation);
			InComponent->SetRelativeScale3D(TargetScale);
			
			bFinished = true;
		}
	}

	bool IsFinished()
	{
		return bFinished;
	}

	void SetStartTransform(FVector StartVec, FRotator StartRot, FVector StartSca)
	{
		ComponentLocation = StartVec;
		ComponentRotation = StartRot;
		ComponentScale = StartSca;

		SetTargetTransform();
	}

	void GetTargetTransform(FVector& TargetVec, FRotator& TargetRot, FVector& TargetSca)
	{
		TargetVec = TargetLocation;
		TargetRot = TargetRotation;
		TargetSca = TargetScale;
	}

	USceneComponent* GetInComponent()
	{
		return InComponent;
	}

	void SetTargetTransform()
	{
		if (bIsIncrement)
		{
			TargetLocation = ComponentLocation + NewVector;
			TargetRotation = ComponentRotation + NewRotation;
			TargetScale = ComponentScale + NewScale;
		}
		else
		{
			TargetLocation = NewVector;
			TargetRotation = NewRotation;
			TargetScale = NewScale;
		}
	}
};

USTRUCT(BlueprintType)
struct FComponentAnimationStruct
{
	GENERATED_USTRUCT_BODY()
		ComponentAnimationClass* AnimationClass;
	
};

class ComponentAnimationContainer : public FPendingLatentAction
{
public:
	USceneComponent* MovingComponent;
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;
	int32 UUID;
	bool RunLock;
	TArray<ComponentAnimationClass*> ComponentAnimationArray;

	ComponentAnimationContainer(const FLatentActionInfo& LatentInfo, ComponentAnimationClass* InAnimationClass, USceneComponent* InComponent)
		: MovingComponent(InComponent)
		, ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
		, UUID(LatentInfo.UUID)
		, RunLock(false)
	{
		ComponentAnimationArray.Add(InAnimationClass);
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		if (!RunLock && ComponentAnimationArray.Num() != 0)
		{
			ComponentAnimationArray[0]->myInit();
			RunLock = true;
		}
		else if(RunLock)
		{
			if (!ComponentAnimationArray[0]->IsFinished())
			{
				ComponentAnimationArray[0]->myUpdateOperation(Response.ElapsedTime());
			}
			else
			{
				if (ComponentAnimationArray.Num() > 1)
				{
					FVector TargetLoc;
					FRotator TargetRot;
					FVector TargetSca;
					ComponentAnimationArray[0]->GetTargetTransform(TargetLoc, TargetRot, TargetSca);
					ComponentAnimationArray[1]->SetStartTransform(TargetLoc, TargetRot, TargetSca);
				}

				delete ComponentAnimationArray[0];
				ComponentAnimationArray[0] = nullptr;
				ComponentAnimationArray.RemoveAt(0);
				RunLock = false;
			}
		}
		else
		{
			ComponentLatentInfoArr.Remove(MovingComponent);
			Response.TriggerLink(ExecutionFunction, OutputLink, CallbackTarget);
			Response.DoneIf(true);
		}
	}

	void AddAnimation(ComponentAnimationClass* ComponentAnimation, bool FinishPreAction)
	{
		if (FinishPreAction)
		{
			FVector TargetLoc;
			FRotator TargetRot;
			FVector TargetSca;
			if (ComponentAnimationArray.Num() > 1)
			{
				for (int x = 0; x < ComponentAnimationArray.Num() - 1; x++)
				{
					ComponentAnimationArray[x]->GetTargetTransform(TargetLoc, TargetRot, TargetSca);
					ComponentAnimationArray[x + 1]->SetStartTransform(TargetLoc, TargetRot, TargetSca);
				}
				ComponentAnimationArray[ComponentAnimationArray.Num() - 1]->GetTargetTransform(TargetLoc, TargetRot, TargetSca);
			}
			else
			{
				ComponentAnimationArray[0]->GetTargetTransform(TargetLoc, TargetRot, TargetSca);
			}
			ComponentAnimation->SetStartTransform(TargetLoc, TargetRot, TargetSca);
			ComponentAnimationArray.Empty();
			RunLock = false;
		}
		ComponentAnimationArray.Add(ComponentAnimation);
	}
};

UCLASS()
class ANIMATIONMODULE_API UComponentAnimationHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	* @param InComponent       操作的component对象
	* @param Duration          动画的总时长
	* @param IsIncrement       否作为物体原状态的增量添加上去，不是增量则为目标
	* @param NewVector         Vector的增量或目标Vector
	* @param NewRotation       Rotation的增量或目标Rotation
	* @param NewScale          Scale的增量或目标Scale
	*/
	UFUNCTION(BlueprintPure, meta = (Duration = 1.f, IsIncrement = 1, AdvancedDisplay = 1), Category = "AnimationHelper|ComponentAnimation")
		static FComponentAnimationStruct MakeComponentAnimation(USceneComponent* InComponent, float Duration, 
			bool IsIncrement, FVector NewVector, FRotator NewRotation, FVector NewScale);

	/**
	* @param StopPreAction     立刻把上一个动作置为结束时的状态
	*/
	UFUNCTION(BlueprintCallable, meta = (Latent, LatentInfo = "LatentInfo", HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"), Category = "AnimationHelper|ComponentAnimation")
		static void PlayComponentAnimation(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FComponentAnimationStruct> AnimationStructArray, bool StopPreAction = false);

};

