#include "RadiusZoneDetectionComponent.h"

URadiusZoneDetectionComponent::URadiusZoneDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheckInterval = 0.50f;
    this->CurrentZone = NULL;
}

void URadiusZoneDetectionComponent::SetEnabled(const bool bIsEnabled) {
}

void URadiusZoneDetectionComponent::CheckZone() {
}


