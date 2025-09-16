#pragma once
#include "CoreMinimal.h"
#include "SightShapeInfo.h"
#include "SightZonesInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FSightZonesInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo Central;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo Main;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSightShapeInfo Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DetectTimeCurve;
    
    FSightZonesInfo();
};

