#pragma once
#include "CoreMinimal.h"
#include "NPCIdleStateStaticData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FNPCIdleStateStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPatrol;
    
    FNPCIdleStateStaticData();
};

