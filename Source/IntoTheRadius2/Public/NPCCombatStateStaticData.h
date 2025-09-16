#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NPCCombatStateStaticData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FNPCCombatStateStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange AttackDistRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    FNPCCombatStateStaticData();
};

