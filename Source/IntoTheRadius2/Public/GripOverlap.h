#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EGripState.h"
#include "GripOverlap.generated.h"

class UHandSocketDynamicData;

USTRUCT(BlueprintType)
struct FGripOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UHandSocketDynamicData*> FoundSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGripState GripState;
    
    INTOTHERADIUS2_API FGripOverlap();
};

