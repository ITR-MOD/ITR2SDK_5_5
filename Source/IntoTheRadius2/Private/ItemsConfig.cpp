#include "ItemsConfig.h"

UItemsConfig::UItemsConfig() {
    this->WeaponStaticDataTable = NULL;
    this->AmmoStaticDataTable = NULL;
    this->AmmoContainerStaticDataTable = NULL;
    this->AttachmentStaticDataTable = NULL;
    this->GeneralItemStaticDataTable = NULL;
    this->NestSettings = NULL;
    this->HandSocketDataTable = NULL;
    this->AmmoShellClass = NULL;
    this->MuzzleOffset = 5.00f;
    this->AutoreturnHolsterDataKey = TEXT("AutoreturnHolster");
    this->AttachmentsPreviewMaterial = NULL;
    this->AttachmentsPreviewCollisionChannel = ECC_WorldStatic;
    this->TimeToSleep = 5.00f;
    this->RattleSoundDefault = NULL;
    this->AttachErrorSoundDefault = NULL;
    this->AttachSoundDefault = NULL;
    this->DetachSoundDefault = NULL;
    this->ItemsExtractionRevision = 0;
    this->bTraceComplexDuringReverseLineTrace = false;
}


