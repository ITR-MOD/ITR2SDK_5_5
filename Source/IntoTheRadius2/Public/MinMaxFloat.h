#pragma once
#include "CoreMinimal.h"
#include "MinMaxFloat.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FMinMaxFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    INTOTHERADIUS2_API FMinMaxFloat();
};

