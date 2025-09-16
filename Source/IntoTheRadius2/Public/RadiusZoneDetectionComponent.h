#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/CollisionProfile.h"
#include "RadiusZoneDetectionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusZoneDetectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollisionProfileName ZoneCollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentZone;
    
public:
    URadiusZoneDetectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bIsEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckZone();
    
};

