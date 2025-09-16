#pragma once
#include "CoreMinimal.h"
#include "ESentryCliLogLevel.generated.h"

UENUM(BlueprintType)
enum class ESentryCliLogLevel : uint8 {
    Trace,
    Debug,
    Info,
    Warn,
    Error,
};

