#pragma once
#include "CoreMinimal.h"
#include "EGripState.generated.h"

UENUM(BlueprintType)
enum class EGripState : uint8 {
    NotSelected,
    NormalSelected,
    DistanceSelected,
    DistanceLocked,
    DistanceLerping,
};

