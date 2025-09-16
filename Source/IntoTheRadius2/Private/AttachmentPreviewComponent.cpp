#include "AttachmentPreviewComponent.h"

UAttachmentPreviewComponent::UAttachmentPreviewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemActor = NULL;
    this->ClonedRootComponent = NULL;
}

void UAttachmentPreviewComponent::CloneItem(AActor* OriginalItemActor) {
}


