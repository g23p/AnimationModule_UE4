// Fill out your copyright notice in the Description page of Project Settings.

#include "UMGAnimationHelper.h"


FUMGAniamtionStruct UUMGAnimationHelper::MakeUMGAnimation(UWidget* InWidget, float Duration, bool IsIncrement, FVector2D NewPosition, FVector2D NewSize, FVector2D Pivot, bool bIsNonlinear)
{
	UMGAnimationClass* AnimationClass = new UMGAnimationClass(Duration, InWidget, IsIncrement, NewSize, NewPosition, Pivot, bIsNonlinear);
	FUMGAniamtionStruct AnimationStruct;
	AnimationStruct.AnimationClass = AnimationClass;

	return AnimationStruct;
}

void UUMGAnimationHelper::PlayUMGAnimation(UObject * WorldContextObject, FLatentActionInfo LatentInfo, TArray<FUMGAniamtionStruct> AnimationStructArray, bool StopPreAction)
{
	if (UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject))
	{
		TArray<UWidget*> UWidgetBeenAdd;
		UMGAnimationContainer* AnimationContainer;
		FLatentActionManager& LatentActionManager = World->GetLatentActionManager();
		for (FUMGAniamtionStruct UMGAnimationStruct : AnimationStructArray)
		{
			if (!UMGLatentInfoArr.Contains(UMGAnimationStruct.AnimationClass->GetWidget()))
			{
				LatentActionManager.AddNewAction(LatentInfo.CallbackTarget, reinterpret_cast<intptr_t>(UMGAnimationStruct.AnimationClass->GetWidget()), new UMGAnimationContainer(LatentInfo, UMGAnimationStruct.AnimationClass, UMGAnimationStruct.AnimationClass->GetWidget()));
				UMGLatentInfoArr.Add(UMGAnimationStruct.AnimationClass->GetWidget());
				if (StopPreAction)
					UWidgetBeenAdd.Add(UMGAnimationStruct.AnimationClass->GetWidget());
			}
			else
			{
				if ((AnimationContainer = LatentActionManager.FindExistingAction<UMGAnimationContainer>(LatentInfo.CallbackTarget, reinterpret_cast<intptr_t>(UMGAnimationStruct.AnimationClass->GetWidget()))) != NULL)
				{
					if (StopPreAction && !UWidgetBeenAdd.Contains(UMGAnimationStruct.AnimationClass->GetWidget()))
					{
						UWidgetBeenAdd.Add(UMGAnimationStruct.AnimationClass->GetWidget());
						AnimationContainer->AddAnimation(UMGAnimationStruct.AnimationClass, true);
					}
					else
					{
						AnimationContainer->AddAnimation(UMGAnimationStruct.AnimationClass, false);
					}
				}
			}
		}
	}
}
