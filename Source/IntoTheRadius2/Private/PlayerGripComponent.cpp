#include "PlayerGripComponent.h"

UPlayerGripComponent::UPlayerGripComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaximumThrowingVelocity = 0.00f;
}

void UPlayerGripComponent::TurnSelectorsForIngameMenu(bool bTurnOn) const {
}

void UPlayerGripComponent::TriggerButtonPressed(const EVRHand Hand, const bool bPressed) {
}

void UPlayerGripComponent::SetupHand(EVRHand Hand, UGripMotionControllerComponent* Controller, USphereComponent* GrabSphere) {
}

void UPlayerGripComponent::ServerRequestOwnership_Implementation(EVRHand Hand, UPrimitiveComponent* Target) {
}

void UPlayerGripComponent::OnWaitingToGripActorInitialized(UObject* InitializeObject) {
}

void UPlayerGripComponent::OnUIBeamActivated(bool bIsActivated, EVRHand Hand) {
}

bool UPlayerGripComponent::HasGrippedActors(const EVRHand Hand, const EGripType GripType, const bool bActorValidityCheck) const {
    return false;
}

void UPlayerGripComponent::GripButtonPressed(const EVRHand Hand, const bool bPressed) {
}

TArray<AActor*> UPlayerGripComponent::GetGrippedActors(const EVRHand Hand, const EGripType GripType, const bool bActorValidityCheck) const {
    return TArray<AActor*>();
}

FGripOverlap UPlayerGripComponent::GetGripOverlap(const EVRHand Hand) const {
    return FGripOverlap{};
}

void UPlayerGripComponent::FPS_ReleaseGrip(const EVRHand Hand, const bool bTrigger) {
}

void UPlayerGripComponent::FPS_PressGrip(const EVRHand Hand, const bool bTrigger) {
}

void UPlayerGripComponent::FPS_ForceUpdateOverlaps(const EVRHand Hand) {
}

void UPlayerGripComponent::ForceGrab(const EVRHand Hand, AActor* Actor) {
}

void UPlayerGripComponent::ForceDropByHand(const EVRHand Hand, const bool bSimulate, const bool bTryAttachItemToMostRelevantHolster, const EGripType GripType) {
}

void UPlayerGripComponent::ForceDropByActor(AActor* ActorToDrop, const bool bSimulate, const bool bTryAttachItemToMostRelevantHolster, const EGripType GripType) {
}

void UPlayerGripComponent::DelayedForceGrab(const EVRHand Hand, AActor* Actor) {
}

void UPlayerGripComponent::ClimbingStepUp() {
}

void UPlayerGripComponent::ClientOwnershipRejected_Implementation(EVRHand Hand) {
}

void UPlayerGripComponent::BYButtonPressed(const EVRHand Hand, const bool bPressed) {
}

void UPlayerGripComponent::BYButtonHold(const EVRHand Hand, const bool bHold) const {
}

void UPlayerGripComponent::AXButtonPressed(const EVRHand Hand, const bool bPressed) {
}


