#include "RadiusSwitchComponent.h"

URadiusSwitchComponent::URadiusSwitchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URadiusSwitchComponent::ToggleSwitchState() {
}

void URadiusSwitchComponent::SetSwitchState(const bool bIsOn) {
}

void URadiusSwitchComponent::Server_SetSwitchState_Implementation(const bool bIsOn) {
}


void URadiusSwitchComponent::OnItemTagChanged(const FGameplayTag Tag, const bool bAdded) {
}

void URadiusSwitchComponent::OnItemDataUnlink(URadiusItemDynamicData* PreviousDynamicData) {
}

void URadiusSwitchComponent::OnItemDataLink() {
}

bool URadiusSwitchComponent::GetSwitchState() const {
    return false;
}


