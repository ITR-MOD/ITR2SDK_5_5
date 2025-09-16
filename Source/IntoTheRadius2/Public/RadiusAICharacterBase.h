#pragma once
#include "CoreMinimal.h"
#include "AlsCharacter.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "AISightDebug.h"
#include "DistortionZoneInterface.h"
#include "OnStartedDetectTargetDelegate.h"
#include "OnStoppedSeeingTargetDelegate.h"
#include "RadiusAIBodyInterface.h"
#include "RadiusAISightInterface.h"
#include "RadiusDamageCauserInterface.h"
#include "RadiusExplosionReceiver.h"
#include "RadiusNpcSaveInterface.h"
#include "RadiusAICharacterBase.generated.h"

class AActor;
class AController;
class ARadiusAIControllerBase;
class UHealthComponent;
class UNPCConfig;
class URadiusZoneDetectionComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusAICharacterBase : public AAlsCharacter, public IRadiusAISightInterface, public IRadiusAIBodyInterface, public IGameplayTagAssetInterface, public IRadiusNpcSaveInterface, public IRadiusDamageCauserInterface, public IRadiusExplosionReceiver, public IDistortionZoneInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISightDebug AISightDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConfigTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusZoneDetectionComponent* ZoneDetectionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StaticGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GroupID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedDetectTarget OnStartedDetectTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoppedSeeingTarget OnStoppedSeeingTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusAIControllerBase* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
public:
    ARadiusAICharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSightPointOffset(UPARAM(Ref) FVector& NewSightPointOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnStartLoadLevel(FGameplayTag LevelTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeath(const AController* DeathInstigator, const AActor* DiedPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPawnViewLocation_BP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNPCNameByTag(FGameplayTag GameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ChangeMoveSpeed(float NewSpeed) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);

    virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags, );

protected:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer BP_GetOwnedGameplayTags() const override PURE_VIRTUAL(BP_GetOwnedGameplayTags, return FGameplayTagContainer{};);
    
};

