#include "RadiusBulletComponent.h"

URadiusBulletComponent::URadiusBulletComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MuzzleVelocity = 0.00f;
    this->MaxImpactVelocity = 1000.00f;
    this->DefaultDensity = 1.00f;
    this->NoiseLoudness = 1.00f;
    this->NoiseRange = 800.00f;
    this->DefaultMaterial = NULL;
    this->MetalMaterial = NULL;
    this->PenetrationScale = 100.00f;
    this->RicochetForceScale = 0.50f;
    this->DamageTypeClass = NULL;
    this->BulletTag = TEXT("Bullet");
}

void URadiusBulletComponent::ProcessHit(const FHitResult& HitResult, const FVector& Velocity) {
}

void URadiusBulletComponent::Initialize(const FAmmoStaticData& InAmmoData, const float InMuzzleVelocity, const float InDamageModifier, AActor* InOwner) {
}


