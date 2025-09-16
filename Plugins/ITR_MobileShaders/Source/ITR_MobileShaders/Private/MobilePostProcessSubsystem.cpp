#include "MobilePostProcessSubsystem.h"

UMobilePostProcessSubsystem::UMobilePostProcessSubsystem() {
    this->BlinkRadius = 2.00f;
    this->FadeToBlack = 0.00f;
    this->bGasMaskOn = false;
    this->GasMaskTexture = NULL;
    this->RecoilFactor = 0.00f;
    this->HealFactor = 0.00f;
    this->HealthOverlayTexture = NULL;
    this->DeadFactor = 0.00f;
    this->LowHealthFactor = 0.00f;
    this->VignetteRadius = 1.00f;
    this->NightVisionFactor = 0.00f;
    this->NightVisionInputLuminanceMin = 0.00f;
    this->NightVisionInputLuminanceMax = 0.40f;
    this->NightVisionOutputLuminanceMin = 0.10f;
    this->NightVisionOutputLuminanceMax = 1.00f;
    this->UnderwaterFactor = 0.00f;
    this->bIsTideEnabled = false;
    this->TideContrast = 0.00f;
    this->TideHide = 0.00f;
    this->TideSkyVisibility = 0.00f;
    this->TideEdgeWidth = 0.00f;
    this->TideDistance = 0.00f;
    this->SplitToningBalance = 0.00f;
    this->Saturation = 1.00f;
    this->Contrast = 1.00f;
}


