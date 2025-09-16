#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "AmmoStaticData.h"
#include "Firearm.h"
#include "NPCCombatStateStaticData.h"
#include "OnNoAmmoInClipDelegate.h"
#include "OnSetAimLocationDelegate.h"
#include "Templates/SubclassOf.h"
#include "RadiusAIFirearmComponent.generated.h"

class APawn;
class ARadiusShell;
class UAudioComponent;
class UCurveFloat;
class UParticleSystem;
class UParticleSystemComponent;
class URadiusNPCWeaponComponent;
class USoundBase;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusAIFirearmComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetAimLocation OnSetAimLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNoAmmoInClip OnNoAmmoInClip;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoStaticData AmmoStaticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialProjectileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UStaticMeshComponent> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARadiusShell> ShellClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleVFXEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AlsOverlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TailsChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusNPCWeaponComponent* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* FireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MuzzleVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DistanceToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShotsPerBurstCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BreakBetweenBurstsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BulletSpreadCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentAmmoInClip;
    
public:
    URadiusAIFirearmComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopFire();
    
    UFUNCTION(BlueprintCallable)
    void StartFire(APawn* InInstigator, const bool bIsBurst, const bool bIsWhileMoving);
    
    UFUNCTION(BlueprintCallable)
    void SpawnVFX();
    
    UFUNCTION(BlueprintCallable)
    void SpawnShotSound();
    
    UFUNCTION(BlueprintCallable)
    void SpawnBulletProjectile();
    
private:
    UFUNCTION(BlueprintCallable)
    void Shoot();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetVelocity();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetShootingPoint();
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceToTarget(const float Distance);
    
    UFUNCTION(BlueprintCallable)
    void SetAimLocation();
    
    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable)
    void OnReloadFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedReloadCheck() const;
    
    UFUNCTION(BlueprintCallable)
    void InitShotgun(const int32 InNumPellets, const float InAccuracy);
    
    UFUNCTION(BlueprintCallable)
    void Init(const FNPCCombatStateStaticData& CombatStateData, const FFirearm& Firearm);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusNPCWeaponComponent* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentAmmoInClip() const;
    
    UFUNCTION(BlueprintCallable)
    void EjectShell();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcBulletSpreadFactor() const;
    
};

