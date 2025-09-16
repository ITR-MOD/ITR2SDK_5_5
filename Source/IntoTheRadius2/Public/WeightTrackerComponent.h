#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "WeightTrackerComponent.generated.h"

class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UWeightTrackerComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UWeightTrackerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWeightTracker();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignalError(USoundBase* Sound);
    
};

