#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RadiusWeaponTailsInterface.generated.h"

UINTERFACE(Blueprintable)
class URadiusWeaponTailsInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusWeaponTailsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetName() const;
    
};

