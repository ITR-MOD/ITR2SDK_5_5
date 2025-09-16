#pragma once
#include "CoreMinimal.h"
#include "RadiusItemDelegateOnHolsteredDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadiusItemDelegateOnHolstered, UActorComponent*, Holster);

