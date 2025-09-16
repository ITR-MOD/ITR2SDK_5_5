#pragma once
#include "CoreMinimal.h"
#include "MinMaxFloat.h"
#include "SightShapeInfo.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSightShapeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZoneDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAngle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat ZoneDetectTimeIdle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinMaxFloat ZoneDetectTimeCombat;
    
    FSightShapeInfo();
};

