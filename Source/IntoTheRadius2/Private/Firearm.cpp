#include "Firearm.h"

FFirearm::FFirearm() {
    this->FireRateSingleMin = 0.00f;
    this->FireRateSingleMax = 0.00f;
    this->FireRateBurst = 0.00f;
    this->FireDuration = 0.00f;
    this->ShotsPerBurstDeviationMax = 0;
    this->ShotsPerBurstMax = 0;
    this->ShotsPerBurstCurve = NULL;
    this->BurstFireDist = 0.00f;
    this->bIsAutomatic = false;
    this->BreakBetweenBurstsMin = 0.00f;
    this->BreakBetweenBurstsMax = 0.00f;
    this->BreakBetweenBurstsCurve = NULL;
    this->bCanFireInMove = false;
    this->BulletSpreadHalfAngleMin = 0.00f;
    this->BulletSpreadHalfAngleMax = 0.00f;
    this->BulletSpreadCurve = NULL;
    this->MaxAccuracyReachTime = 0.00f;
    this->BestAttackDistance = 0.00f;
    this->OptimalAttackRangeThreshold = 0.00f;
    this->MaxAmmoInClip = 0;
    this->AmmoInClipToReloadRatio = 0.00f;
    this->FireSound = NULL;
}

