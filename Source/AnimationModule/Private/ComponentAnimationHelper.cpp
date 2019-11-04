// Fill out your copyright notice in the Description page of Project Settings.

#include "ComponentAnimationHelper.h"

FComponentAnimationStruct UComponentAnimationHelper::MakeComponentAnimation(USceneComponent* InComponent, float Duration, bool IsIncrement, FVector NewVector, FRotator NewRotation, FVector NewScale, bool IsNonlinear)
{
	ComponentAnimationClass* AnimationClass = new ComponentAnimationClass(Duration, InComponent, IsIncrement, NewVector, NewRotation, NewScale, IsNonlinear);
	FComponentAnimationStruct AnimationStruct;
	AnimationStruct.AnimationClass = AnimationClass;

	return AnimationStruct;
}

void UComponentAnimationHelper::PlayComponentAnimation(UObject * WorldContextObject, FLatentActionInfo LatentInfo, TArray<FComponentAnimationStruct> AnimationStructArray, bool StopPreAction)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		TArray<USceneComponent*> ComponentBeenAdd;
		ComponentAnimationContainer* AnimationContainer;
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		for (FComponentAnimationStruct ComponentAnimationStruct : AnimationStructArray)
		{
			if (!ComponentLatentInfoArr.Contains(ComponentAnimationStruct.AnimationClass->GetInComponent()))
			{
				LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, reinterpret_cast<intptr_t>(ComponentAnimationStruct.AnimationClass->GetInComponent()), new ComponentAnimationContainer(LatentInfo, ComponentAnimationStruct.AnimationClass, ComponentAnimationStruct.AnimationClass->GetInComponent()));
				ComponentLatentInfoArr.Add(ComponentAnimationStruct.AnimationClass->GetInComponent());
				if(StopPreAction)
					ComponentBeenAdd.Add(ComponentAnimationStruct.AnimationClass->GetInComponent());
			}
			else
			{
				if ((AnimationContainer = LatentActionManager.FindExistingAction<ComponentAnimationContainer>(LatentInfo.CallbackTarget, reinterpret_cast<intptr_t>(ComponentAnimationStruct.AnimationClass->GetInComponent()))) != NULL)
				{
					if (StopPreAction && !ComponentBeenAdd.Contains(ComponentAnimationStruct.AnimationClass->GetInComponent()))
					{
						ComponentBeenAdd.Add(ComponentAnimationStruct.AnimationClass->GetInComponent());
						AnimationContainer->AddAnimation(ComponentAnimationStruct.AnimationClass, true);
					}
					else
					{
						AnimationContainer->AddAnimation(ComponentAnimationStruct.AnimationClass, false);
					}
				}
			}
		}
	}
}

