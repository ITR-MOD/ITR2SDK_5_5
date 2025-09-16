#include "RadiusHandSocketComponent.h"

URadiusHandSocketComponent::URadiusHandSocketComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->bDisableGripIfGrippedByMainGrip = false;
    this->SocketPriority = 1.00f;
    this->bUseActorLocationForSelector = false;
    this->bIsSecondary = false;
    this->bTriggerOnly = false;
    this->bDenyDistanceGrip = false;
    this->AllowedHands = EVRHand::Both;
    this->bCylindricalRotation = false;
    this->SystConfig = NULL;
}

void URadiusHandSocketComponent::SetShowVisualizationMesh(bool bShowMesh) {
}

bool URadiusHandSocketComponent::IsSlotForHand(EVRHand Hand) const {
    return false;
}

FGameplayTagContainer URadiusHandSocketComponent::GetSocketGripTags() const {
    return FGameplayTagContainer{};
}

FVector URadiusHandSocketComponent::GetHandSocketWorldLocation() const {
    return FVector{};
}

FTransform URadiusHandSocketComponent::GetHandSocketTransformBP(UGripMotionControllerComponent* QueryController, const bool bIgnoreOnlySnapMesh) {
    return FTransform{};
}


