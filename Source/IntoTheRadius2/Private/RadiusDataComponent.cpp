#include "RadiusDataComponent.h"
#include "Net/UnrealNetwork.h"

URadiusDataComponent::URadiusDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URadiusDataComponent::OnRep_ItemDynamicDataPtr() {
}

void URadiusDataComponent::OnChildrenAttachmentChanged(const FString& ChangedChildName, bool IsSelfChange) {
}

void URadiusDataComponent::Continue_OnRep_ItemDynamicDataPtr() {
}

void URadiusDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URadiusDataComponent, ItemDynamicDataPtr);
}


