#pragma once
#include "CoreMinimal.h"
#include "ESentryDatabaseLocation.generated.h"

UENUM(BlueprintType)
enum class ESentryDatabaseLocation : uint8 {
    ProjectDirectory,
    ProjectUserDirectory,
};

