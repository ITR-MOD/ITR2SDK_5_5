#pragma once
#include "CoreMinimal.h"
#include "OnMuzzleChangedDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMuzzleChanged, UActorComponent*, RelevantMuzzle);

