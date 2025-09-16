#include "RadiusAIFirearmComponent.h"
#include "Net/UnrealNetwork.h"

URadiusAIFirearmComponent::URadiusAIFirearmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialProjectileSpeed = 71500.00f;
    this->WeaponClass = NULL;
    this->ShellClass = NULL;
    this->MuzzleVFXEmitter = NULL;
    this->TailsChannel = ECC_WorldStatic;
    this->WeaponMesh = NULL;
    this->Weapon = NULL;
    this->bDebug = false;
    this->Instigator = NULL;
    this->AudioComponent = NULL;
    this->FireSound = NULL;
    this->MuzzleVFX = NULL;
    this->DistanceToTarget = 0.00f;
    this->ShotsPerBurstCurve = NULL;
    this->BreakBetweenBurstsCurve = NULL;
    this->BulletSpreadCurve = NULL;
    this->CurrentAmmoInClip = 0.00f;
}

void URadiusAIFirearmComponent::StopFire() {
}

void URadiusAIFirearmComponent::StartFire(APawn* InInstigator, const bool bIsBurst, const bool bIsWhileMoving) {
}

void URadiusAIFirearmComponent::SpawnVFX() {
}

void URadiusAIFirearmComponent::SpawnShotSound() {
}

void URadiusAIFirearmComponent::SpawnBulletProjectile() {
}

void URadiusAIFirearmComponent::Shoot() {
}

void URadiusAIFirearmComponent::SetTargetVelocity() {
}

void URadiusAIFirearmComponent::SetTargetLocation(const FVector& Location) {
}

void URadiusAIFirearmComponent::SetShootingPoint() {
}

void URadiusAIFirearmComponent::SetDistanceToTarget(const float Distance) {
}

void URadiusAIFirearmComponent::SetAimLocation() {
}

void URadiusAIFirearmComponent::Reload() {
}

void URadiusAIFirearmComponent::OnReloadFinished() {
}

bool URadiusAIFirearmComponent::NeedReloadCheck() const {
    return false;
}

void URadiusAIFirearmComponent::InitShotgun(const int32 InNumPellets, const float InAccuracy) {
}

void URadiusAIFirearmComponent::Init(const FNPCCombatStateStaticData& CombatStateData, const FFirearm& Firearm) {
}

URadiusNPCWeaponComponent* URadiusAIFirearmComponent::GetWeapon() const {
    return NULL;
}

int32 URadiusAIFirearmComponent::GetCurrentAmmoInClip() const {
    return 0;
}

void URadiusAIFirearmComponent::EjectShell() {
}

float URadiusAIFirearmComponent::CalcBulletSpreadFactor() const {
    return 0.0f;
}

void URadiusAIFirearmComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusAIFirearmComponent, DistanceToTarget);
    DOREPLIFETIME(URadiusAIFirearmComponent, CurrentAmmoInClip);
}


