#pragma once
#include "CoreMinimal.h"
#include "RadiusItemChangedDurabilityDelegateDelegate.generated.h"

class ARadiusItemBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRadiusItemChangedDurabilityDelegate, ARadiusItemBase*, ItemActor);

