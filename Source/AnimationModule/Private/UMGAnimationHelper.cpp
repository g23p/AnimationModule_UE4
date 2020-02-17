// Fill out your copyright notice in the Description page of Project Settings.


#include "UMGAnimationHelper.h"
#include "Engine.h"

void UUMGAnimationHelper::PlayUMGAnimation(UObject * WorldContextObject, FLatentActionInfo LatentInfo, TArray<FUMGAnimationStruct> AnimationStructArr, bool bStopPreAction)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		UMGAnimationHelper* AnimationHelper = UMGAnimationHelper::GetInstance();

		TMap<UWidget*, TArray<FUMGAnimationStruct>> AnimationStructMapBuf;
		for (FUMGAnimationStruct AnimationStruct : AnimationStructArr)
		{
			if (TArray<FUMGAnimationStruct>* AnimationArrPtr = AnimationStructMapBuf.Find(AnimationStruct.InWidget))
			{
				AnimationArrPtr->Add(AnimationStruct);
			}
			else
			{
				TArray<FUMGAnimationStruct> AnimationArr;
				AnimationArr.Add(AnimationStruct);
				AnimationStructMapBuf.Add(AnimationStruct.InWidget, AnimationArr);
			}
		}

		for (TPair<UWidget*, TArray<FUMGAnimationStruct>> MapPair : AnimationStructMapBuf)
		{
			if (UCanvasPanelSlot* WidgetSlot = Cast<UCanvasPanelSlot>(MapPair.Key->Slot))
			{
				if (FUMGAnimationContainer* UMGAnimationContainer = LatentActionManager.FindExistingAction<FUMGAnimationContainer>(LatentInfo.CallbackTarget, 
					reinterpret_cast<intptr_t>(MapPair.Key)))
				{
					if (bStopPreAction)
					{
						FVector2D PreTargetPos, PreTargetSiz;

						AnimationHelper->StopAllAnimationAndGetPreTarget(MapPair.Key, PreTargetPos, PreTargetSiz);
						MapPair.Value[0].SetPreTarget(PreTargetPos, PreTargetSiz);
						AnimationHelper->Add(MapPair.Key, MapPair.Value);

						UMGAnimationContainer->GetNewStructArr();
						UMGAnimationContainer->GetDataFromNewStruct();
					}
					else
					{
						MapPair.Value[0].SetPreTarget(WidgetSlot->GetPosition(), WidgetSlot->GetSize());
						AnimationHelper->Add(MapPair.Key, MapPair.Value);
					}
				}
				else
				{
					
					MapPair.Value[0].SetPreTarget(WidgetSlot->GetPosition(), WidgetSlot->GetSize());
					AnimationHelper->Add(MapPair.Key, MapPair.Value);

					LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, reinterpret_cast<intptr_t>(MapPair.Key),
						new FUMGAnimationContainer(LatentInfo, MapPair.Key));
				}
			}
		}
	}
}
