#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "OnOnAmmoInsertedDelegate.h"
#include "RadiusSecondaryAmmoLoadComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class USoundBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusSecondaryAmmoLoadComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnAmmoInserted OnAmmoInserted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* InsertAmmoSound;
    
public:
    URadiusSecondaryAmmoLoadComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_OnAmmoInserted_Internal(const FGameplayTag BulletTag);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Multicast_OnAmmoInserted_Internal(const FGameplayTag BulletTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnAmmoInserted(FGameplayTag Bullet) const;
    
};

