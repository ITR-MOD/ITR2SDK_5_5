#include "NPCSightStaticData.h"

FNPCSightStaticData::FNPCSightStaticData() {
    this->FriendDeathSpotDistModifier = 0.00f;
    this->CrouchTargetSpotDistMultiplier = 0.00f;
    this->LightSourceOnDistanceMultiplier = 0.00f;
    this->DaytimeVisibilityDistCurve = NULL;
    this->FullBodyTargetSpotTimeMultiplier = 0.00f;
    this->MinTracesNumNonBlockedForFullBody = 0;
    this->LightSourceOnSpotTimeMultiplier = 0.00f;
    this->DaytimeVisibilitySpotTimeCurve = NULL;
    this->DistortionZoneMaxSightDistance = 0.00f;
    this->OneDistortionZoneMaxSightDistance = 0.00f;
    this->BothInDistortionZoneSpotTimeModifier = 0.00f;
    this->OneInDistortionZoneSpotTimeModifier = 0.00f;
    this->FogAnomalyMaxSightDistance = 0.00f;
    this->OneInFogAnomalyMaxSightDistance = 0.00f;
    this->BothInFogAnomalySpotTimeModifier = 0.00f;
    this->OneInFogAnomalySpotTimeModifier = 0.00f;
}

