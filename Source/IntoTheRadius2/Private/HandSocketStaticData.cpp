#include "HandSocketStaticData.h"

FHandSocketStaticData::FHandSocketStaticData() {
    this->bDisableGripIfGrippedByMainGrip = false;
    this->SocketPriority = 0.00f;
    this->bUseActorLocationForSelector = false;
    this->bIsSecondaryInitial = false;
    this->bTriggerOnly = false;
    this->bDenyDistanceGrip = false;
    this->AllowedHands = EVRHand::Left;
    this->bFlipForLeftHand = false;
    this->bOnlyFlipRotation = false;
    this->MirrorAxis = EVRAxis::X;
    this->FlipAxis = EVRAxis::X;
    this->bAlwaysInRange = false;
    this->bMatchRotation = false;
    this->OverrideDistance = 0.00f;
    this->bDisabledInitial = false;
    this->bCylindricalRotation = false;
}

