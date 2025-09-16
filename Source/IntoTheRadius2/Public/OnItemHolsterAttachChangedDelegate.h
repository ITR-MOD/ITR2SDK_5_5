#pragma once
#include "CoreMinimal.h"
#include "OnItemHolsterAttachChangedDelegate.generated.h"

class AActor;
class URadiusHolsterComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemHolsterAttachChanged, URadiusHolsterComponent*, HolsterComponent, AActor*, RadiusItem, bool, bHasAttached);

