#pragma once
#include "CoreMinimal.h"
#include "AmbushConfig.h"
#include "AmbushData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAmbushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmbushConfig> Ambushes;
    
    FAmbushData();
};

