#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator.h"
#include "HTNDecorator_HasEnoughAttackers.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNDecorator_HasEnoughAttackers : public UHTNDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckAlreadyAttacking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpectedAttackers;
    
public:
    UHTNDecorator_HasEnoughAttackers();

};

