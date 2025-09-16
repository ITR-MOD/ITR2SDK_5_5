#include "RadiusFirearmBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "RadiusFirearmComponent.h"

ARadiusFirearmBase::ARadiusFirearmBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon Mesh"));
    this->WeaponMesh = (USkeletalMeshComponent*)RootComponent;
    this->FirearmComponent = CreateDefaultSubobject<URadiusFirearmComponent>(TEXT("Firearm Component"));
    this->FirearmComponent->SetupAttachment(RootComponent);
}

void ARadiusFirearmBase::OnContainerChildChanged_Internal(const FString& ChangedChildName, const bool IsSelfChange) {
}

FText ARadiusFirearmBase::GetWeaponNameByTag(const FGameplayTag GameplayTag) const {
    return FText::GetEmpty();
}

void ARadiusFirearmBase::CheckVirtualStock() {
}


