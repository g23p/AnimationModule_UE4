// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentAnimationHelper.h"
#include "Engine.h"

void UComponentAnimationHelper::PlayComponentAnimation(UObject * WorldContextObject, FLatentActionInfo LatentInfo, TArray<FComponentAnimationStruct> AnimationStructArray, bool bStopPreAction)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		ComponentAnimationHelper* AnimationHelper = ComponentAnimationHelper::GetInstance();

		TMap<USceneComponent*, TArray<FComponentAnimationStruct>> AnimationStructMapBuf;
		for (FComponentAnimationStruct AnimationStruct : AnimationStructArray)
		{
			if (TArray<FComponentAnimationStruct>* AnimationArrPtr = AnimationStructMapBuf.Find(AnimationStruct.InComponent))
			{
				AnimationArrPtr->Add(AnimationStruct);
			}
			else
			{
				TArray<FComponentAnimationStruct> AnimationArr;
				AnimationArr.Add(AnimationStruct);
				AnimationStructMapBuf.Add(AnimationStruct.InComponent, AnimationArr);
			}
		}

		for (TPair<USceneComponent*, TArray<FComponentAnimationStruct>> MapPair : AnimationStructMapBuf)
		{
			if (FComponentAnimationContainer* ComponentAnimationContainer = LatentActionManager.FindExistingAction<FComponentAnimationContainer>(LatentInfo.CallbackTarget,
				reinterpret_cast<intptr_t>(MapPair.Key)))
			{
				if (bStopPreAction)
				{
					FVector PreTargetLoc, PreTargetSca;
					FRotator PreTargetRot;

					AnimationHelper->StopAllAnimaAndGetPreTarget(MapPair.Key, PreTargetLoc, PreTargetRot, PreTargetSca);
					MapPair.Value[0].SetPreTarget(PreTargetLoc, PreTargetRot, PreTargetSca);
					AnimationHelper->Add(MapPair.Key, MapPair.Value);

					ComponentAnimationContainer->GetDataFromNewStruct();
					ComponentAnimationContainer->GetNewTransform();
				}
				else
				{
					MapPair.Value[0].SetPreTarget(MapPair.Key->GetComponentLocation(), MapPair.Key->GetComponentRotation(), MapPair.Key->GetComponentScale());
					AnimationHelper->Add(MapPair.Key, MapPair.Value);
				}
					
			}
			else
			{
				MapPair.Value[0].SetPreTarget(MapPair.Key->GetComponentLocation(), MapPair.Key->GetComponentRotation(), MapPair.Key->GetComponentScale());
				AnimationHelper->Add(MapPair.Key, MapPair.Value);

				LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, reinterpret_cast<intptr_t>(MapPair.Key),
					new FComponentAnimationContainer(LatentInfo, MapPair.Key));
			}
		}
	}
}

