#include "GhostedAttachmentSlotComponent.h"

UGhostedAttachmentSlotComponent::UGhostedAttachmentSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttachmentPreviewComponent = NULL;
    this->PreviewItem = NULL;
}

void UGhostedAttachmentSlotComponent::OnOwnerInitialized(UObject* InitializedObject) {
}

void UGhostedAttachmentSlotComponent::OnOwnerContainerParentChanged(const FString& OldParentId, const FString& NewParentId) {
}

void UGhostedAttachmentSlotComponent::AttachmentPreviewTick() {
}


