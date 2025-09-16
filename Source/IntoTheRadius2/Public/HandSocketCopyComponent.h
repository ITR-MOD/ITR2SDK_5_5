#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HandSocketCopyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UHandSocketCopyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHandSocketCopyComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnUnholstered(UActorComponent* HolsterComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnHolstered(UActorComponent* HolsterComponent);
    
    UFUNCTION(BlueprintCallable)
    void Continue_OnHolstered();
    
};

