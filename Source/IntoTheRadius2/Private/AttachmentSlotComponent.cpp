#include "AttachmentSlotComponent.h"
#include "Net/UnrealNetwork.h"

UAttachmentSlotComponent::UAttachmentSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSplinePositioning = false;
    this->bRelativeSpline = false;
    this->ContainerType = EContainerType::Undefined;
    this->bOnlyOwnerCanInteract = false;
    this->bDisableWhenOnPlayer = false;
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
    this->OptionalCollision = NULL;
    this->AttachDistance = 25.00f;
    this->LerpCoefficient = 6.00f;
    this->AttachErrorSoundOverride = NULL;
    this->bShouldRattleWhenItemIn = false;
    this->RattleSoundOverride = NULL;
    this->bPlayAttachSound = true;
    this->AttachSoundOverride = NULL;
    this->bPlayDetachSound = false;
    this->DetachSoundOverride = NULL;
    this->bEnableAttachedItemTick = false;
    this->HighlightEffect = NULL;
    this->HolderMarkTexture = NULL;
    this->ModulesRotationLimitDegrees = 180.00f;
    this->bDisableWhenNotInHands = false;
    this->bCanDisableSecondaryHS = false;
    this->bCanDisableMainHS = false;
    this->AttachedActor = NULL;
    this->AttachedActorCache = NULL;
    this->InitializeComponent = NULL;
    this->HighlightComponent = NULL;
    this->RattleAudioComponent = NULL;
    this->OwnerWeightTracker = NULL;
}

void UAttachmentSlotComponent::WaitForSyncTransformComponent() {
}

void UAttachmentSlotComponent::UpdateSocketAttachment() {
}

void UAttachmentSlotComponent::UpdateItemAsInContainer(AActor* ItemActor) {
}

void UAttachmentSlotComponent::SpawnSavedItems() {
}

void UAttachmentSlotComponent::SetAttachmentDisabled(const bool bNewDisabled) {
}

void UAttachmentSlotComponent::SetAttachedActor(ARadiusGrippableActorBase* ActorToHolster) {
}

void UAttachmentSlotComponent::RemoveAttachedActor() {
}

void UAttachmentSlotComponent::OnRep_AttachedActor() {
}

void UAttachmentSlotComponent::OnEndOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAttachmentSlotComponent::OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData) {
}

void UAttachmentSlotComponent::OnBeginOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UAttachmentSlotComponent::OnAttachmentSlotChildrenChange_Internal(const FString& ChangedChildName, bool IsSelfChange) {
}

void UAttachmentSlotComponent::Multicast_StartAttaching_Implementation(AActor* ItemActor, const FTransform AttachTransform) {
}

bool UAttachmentSlotComponent::IsDisabled() const {
    return false;
}

void UAttachmentSlotComponent::InitializeContainer_Internal() {
}

bool UAttachmentSlotComponent::HasAttachedActor() const {
    return false;
}

void UAttachmentSlotComponent::HandleHolsterEndOverlap(AActor* OtherActor, UPrimitiveComponent* OverlapComponent) {
}

void UAttachmentSlotComponent::HandleHolsteredActorGrip(UGripMotionControllerComponent* MotionController, const FBPActorGripInformation& GripInfo, AActor* GrippedActor) {
}

void UAttachmentSlotComponent::HandleHolsterBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OverlapComponent) {
}

FString UAttachmentSlotComponent::GetParentContainerID() const {
    return TEXT("");
}

ARadiusGrippableActorBase* UAttachmentSlotComponent::GetAttachedActor() const {
    return NULL;
}

FTransform UAttachmentSlotComponent::GetAdditionalTransformByTag(const FGameplayTag& ActorTag) const {
    return FTransform{};
}

void UAttachmentSlotComponent::EventOnChildrenAttachmentChanged(UActorComponent* AttachmentComponent, AActor* ItemActor, bool bAttached) {
}

void UAttachmentSlotComponent::Continue_SpawnSavedItems_Internal(AActor* ItemActor) {
}

void UAttachmentSlotComponent::Continue_InitializeContainer_Internal() {
}

void UAttachmentSlotComponent::CheckAndSpawnLosslessItem() {
}

void UAttachmentSlotComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttachmentSlotComponent, AttachedActor);
}


