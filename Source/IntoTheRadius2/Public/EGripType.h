#pragma once
#include "CoreMinimal.h"
#include "EGripType.generated.h"

UENUM(BlueprintType)
enum class EGripType : uint8 {
    None,
    Normal,
    Trigger,
    Secondary = 4,
    Climbing = 8,
    Multigrip = 16,
    NormalOrTrigger = 3,
    WithoutMultigrip = 15,
    WithoutNormal = 30,
    All,
};

