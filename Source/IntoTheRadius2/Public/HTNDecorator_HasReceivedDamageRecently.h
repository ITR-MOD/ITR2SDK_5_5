#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator.h"
#include "HTNDecorator_HasReceivedDamageRecently.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNDecorator_HasReceivedDamageRecently : public UHTNDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagePercent;
    
    UHTNDecorator_HasReceivedDamageRecently();

};

