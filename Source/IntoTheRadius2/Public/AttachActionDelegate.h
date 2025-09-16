#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttachActionDelegate.generated.h"

class ARadiusGrippableActorBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAttachAction, FGameplayTag, Action, ARadiusGrippableActorBase*, RadiusItem);

