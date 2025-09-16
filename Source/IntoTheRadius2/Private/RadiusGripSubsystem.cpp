#include "RadiusGripSubsystem.h"

URadiusGripSubsystem::URadiusGripSubsystem() {
}

void URadiusGripSubsystem::UnregisterHolster(const FString& ContainerUid) {
}

bool URadiusGripSubsystem::TryAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem, const bool bMultigrippedItem) {
    return false;
}

void URadiusGripSubsystem::RemoveAttachedItemFromTrack(const EVRHand Hand) {
}

void URadiusGripSubsystem::RegisterHolster(const FString& ContainerUid, UObject* ContainerObject) {
}

UObject* URadiusGripSubsystem::GetMostRelevantContainer(const EVRHand Hand) {
    return NULL;
}

bool URadiusGripSubsystem::CanAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem) const {
    return false;
}

void URadiusGripSubsystem::AddContainerToTrack(const EVRHand Hand, UObject* Container, const bool bAttachedItem, const bool bMultigrippedItem) {
}

void URadiusGripSubsystem::AddAttachedItemToTrack(const EVRHand Hand, AActor* AttachedItem) {
}


