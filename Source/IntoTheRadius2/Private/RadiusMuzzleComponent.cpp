#include "RadiusMuzzleComponent.h"

URadiusMuzzleComponent::URadiusMuzzleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ComponentPriority = 0;
    this->SoundDryShot = NULL;
    this->ParticleComponent = NULL;
}

bool URadiusMuzzleComponent::ShootBullet(const FGameplayTag BulletTag) {
    return false;
}

void URadiusMuzzleComponent::PlayParticleFX() {
}

bool URadiusMuzzleComponent::GetOwnerWeaponStaticData(FWeaponStaticData& WeaponStaticData) {
    return false;
}


