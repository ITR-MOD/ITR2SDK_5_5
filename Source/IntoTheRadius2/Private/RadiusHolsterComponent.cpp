#include "RadiusHolsterComponent.h"
#include "Net/UnrealNetwork.h"

URadiusHolsterComponent::URadiusHolsterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitializeComponent = NULL;
    this->bOnlyOwnerCanInteract = false;
    this->bDisableWhenOnPlayer = false;
    this->bDisableWhenNotInHands = false;
    this->bAllowInteractionWhenDisabled = true;
    this->bCanBeArmored = false;
    this->bCanDistanceGripStoredItems = false;
    this->bPreventCollisionWithAttachedItem = false;
    this->bUpdateCollisionIgnoresOnAttach = true;
    this->bUpdateCollisionIgnoresOnDetach = true;
    this->bOnlyGripInOverlapZone = false;
    this->bOnlyDetachTopAttachment = false;
    this->bOnlyGripItemByMainHandSocket = false;
    this->bIsDisabled = false;
    this->ContainerType = EContainerType::Undefined;
    this->OptionalCollision = NULL;
    this->bCanDisableSecondaryHS = false;
    this->bCanDisableMainHS = false;
    this->HolsteredActor = NULL;
    this->MultigrippedHolsteredActor = NULL;
    this->HolsterCacheForReps = NULL;
    this->MultigrippedHolsterCacheForReps = NULL;
}

void URadiusHolsterComponent::WaitForSyncTransformComponent() {
}

void URadiusHolsterComponent::UpdateReplicatedHolsteredActor(URadiusHolsterComponent* HolsterComponent) {
}

void URadiusHolsterComponent::UpdateItemAsInContainer(AActor* ItemActor) {
}

void URadiusHolsterComponent::SpawnSavedItems() {
}

void URadiusHolsterComponent::SetMultigrippedHolsteredActor_Implementation(ARadiusGrippableActorBase* ActorToHolster) {
}

void URadiusHolsterComponent::SetHolsteredActor_Implementation(ARadiusGrippableActorBase* ActorToHolster) {
}

void URadiusHolsterComponent::SetHolsterDisabled(const bool bNewDisabled) {
}

void URadiusHolsterComponent::RemoveMultigrippedHolsteredActor() {
}

void URadiusHolsterComponent::RemoveHolsteredActor() {
}


void URadiusHolsterComponent::OnRep_MultigrippedHolsteredActor_Implementation() {
}

void URadiusHolsterComponent::OnRep_HolsteredActor_Implementation() {
}

void URadiusHolsterComponent::OnHolsterChildrenChange_Internal(const FString& ChangedChildName, bool IsSelfChange) {
}

void URadiusHolsterComponent::OnEndOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void URadiusHolsterComponent::OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData) {
}

void URadiusHolsterComponent::OnBeginOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool URadiusHolsterComponent::IsReadyToHolster() const {
    return false;
}

bool URadiusHolsterComponent::IsDisabled() const {
    return false;
}

void URadiusHolsterComponent::InitializeContainer_Internal() {
}

bool URadiusHolsterComponent::HasHolsteredActor() const {
    return false;
}

void URadiusHolsterComponent::HandleHolsterEndOverlap_Implementation(AActor* OtherActor, UPrimitiveComponent* OverlapComponent) {
}

void URadiusHolsterComponent::HandleHolsteredActorGrip_Implementation(UGripMotionControllerComponent* MotionController, const FBPActorGripInformation& GripInfo, AActor* GrippedActor) {
}

void URadiusHolsterComponent::HandleHolsterBeginOverlap_Implementation(AActor* OtherActor, UPrimitiveComponent* OverlapComponent) {
}

int32 URadiusHolsterComponent::GetSavedItems_Implementation(TArray<URadiusItemDynamicData*>& SavedItemDynamicDatas) const {
    return 0;
}

FString URadiusHolsterComponent::GetOwnerContainerUid() const {
    return TEXT("");
}

ARadiusGrippableActorBase* URadiusHolsterComponent::GetHolsteredActor() const {
    return NULL;
}


void URadiusHolsterComponent::DoInstantHolster() {
}

void URadiusHolsterComponent::Continue_UpdateReplicatedHolsteredActor() {
}

void URadiusHolsterComponent::Continue_SpawnSavedItems_Internal(AActor* ItemActor) {
}

void URadiusHolsterComponent::Continue_InstantHolsterActor(URadiusHolsterComponent* HolsterComponent) {
}

void URadiusHolsterComponent::Continue_InitializeContainer_Internal() {
}

void URadiusHolsterComponent::CheckAndSpawnLosslessItem() {
}

void URadiusHolsterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusHolsterComponent, HolsteredActor);
    DOREPLIFETIME(URadiusHolsterComponent, MultigrippedHolsteredActor);
}


