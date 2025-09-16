#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Grippables/HandSocketComponent.h"
#include "MultigripHSInfo.generated.h"

USTRUCT(BlueprintType)
struct FMultigripHSInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SecondItemTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBPVRHandPoseBonePair> CustomPoseDeltasReplacement;
    
    INTOTHERADIUS2_API FMultigripHSInfo();
};

