#pragma once
#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "RadiusInputModifier_TurnDeadZone.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class INTOTHERADIUS2_API URadiusInputModifier_TurnDeadZone : public UInputModifier {
    GENERATED_BODY()
public:
    URadiusInputModifier_TurnDeadZone();

private:
    UFUNCTION(BlueprintCallable)
    void OnSettingsChanged();
    
};

