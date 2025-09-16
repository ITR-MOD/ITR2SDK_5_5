#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnOnAmmoInsertedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnOnAmmoInserted, FGameplayTag, BulletTag);

