#pragma once
#include "CoreMinimal.h"
#include "HTNDecorator.h"
#include "HTNDecorator_TeammatesLeft.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHTNDecorator_TeammatesLeft : public UHTNDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfMoreThan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeammatesCount;
    
public:
    UHTNDecorator_TeammatesLeft();

};

