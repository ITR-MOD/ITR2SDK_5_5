#include "RadiusNPCWeaponComponent.h"

URadiusNPCWeaponComponent::URadiusNPCWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponMesh = NULL;
}

void URadiusNPCWeaponComponent::SetWeaponMesh(UStaticMesh* NewWeaponMesh) {
}

FVector URadiusNPCWeaponComponent::GetShootingPoint() const {
    return FVector{};
}


