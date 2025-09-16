#include "HandSocketDynamicData.h"

UHandSocketDynamicData::UHandSocketDynamicData() {
    this->bDisabled = false;
    this->bIsSecondary = false;
}

void UHandSocketDynamicData::OnOwnerGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation) {
}

void UHandSocketDynamicData::OnOwnerDropped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation, bool bNotUsed) {
}

bool UHandSocketDynamicData::HasSpline() const {
    return false;
}

FName UHandSocketDynamicData::GetSocketName() const {
    return NAME_None;
}

FTransform UHandSocketDynamicData::GetRelativeTransform(UGripMotionControllerComponent* Controller) const {
    return FTransform{};
}

ARadiusGrippableActorBase* UHandSocketDynamicData::GetOwner() const {
    return NULL;
}

FVector UHandSocketDynamicData::GetHandSocketWorldLocation(UGripMotionControllerComponent* Controller) const {
    return FVector{};
}

USceneComponent* UHandSocketDynamicData::GetAttachParent() const {
    return NULL;
}

FHandSocketStaticData UHandSocketDynamicData::BP_GetStaticData() const {
    return FHandSocketStaticData{};
}


