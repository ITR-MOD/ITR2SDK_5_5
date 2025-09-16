#include "FLItems.h"

UFLItems::UFLItems() {
}

void UFLItems::SwitchActorVisibilityOnOwner(AActor* Actor, const bool bNewHidden, const bool bIncludeChildren) {
}

void UFLItems::PackItemsToBox(UPrimitiveComponent* CollisionComp, TArray<AActor*> ActorsToPack, bool bExcludeNonFit, bool bProjectOnGround, TArray<AActor*>& Excluded) {
}

void UFLItems::KillContainerChildren(UObject* WorldContext, const FString& ContainerID, bool bKillItemActors) {
}

void UFLItems::KillContainerAndAllChildren(UObject* WorldContext, const FString& ContainerID, bool bKillItemActors) {
}

void UFLItems::IsShopItemData(const URadiusItemDynamicData* ItemData, EBlueprintResultYesNo& Result) {
}

void UFLItems::IsShopItemActor(const AActor* Item, EBlueprintResultYesNo& Result) {
}

bool UFLItems::IsItemAttachedToItem(UObject* WorldContext, UObject* Container) {
    return false;
}

bool UFLItems::IsInPlayerInventory(UObject* WorldContext, const FString& ContainerID) {
    return false;
}

AActor* UFLItems::GetWeaponBaseIfWeaponPart(AActor* Actor) {
    return NULL;
}

AActor* UFLItems::GetWeaponBaseFromAttachment(AActor* Actor) {
    return NULL;
}

AActor* UFLItems::GetTopParentItemActor(AActor* Actor) {
    return NULL;
}

float UFLItems::GetShotLoudness(const FWeaponStaticData& WeaponStaticData) {
    return 0.0f;
}

float UFLItems::GetProjectileStartVelocity(const AActor* WeaponActor, const FWeaponStaticData& WeaponStaticData, const FAmmoStaticData& AmmoStaticData) {
    return 0.0f;
}

float UFLItems::GetProjectileAccuracyDegrees(const AActor* WeaponActor, const FWeaponStaticData& WeaponStaticData, const FAmmoStaticData& AmmoStaticData) {
    return 0.0f;
}

UGripMotionControllerComponent* UFLItems::GetPrimaryControllerForActor(AActor* Actor) {
    return NULL;
}

AActor* UFLItems::GetParentItemActor(AActor* Actor) {
    return NULL;
}

AActor* UFLItems::GetModuleTopParent(AActor* Actor) {
    return NULL;
}

ALostAndFound* UFLItems::GetLostAndFound(UObject* WorldContextObject) {
    return NULL;
}

float UFLItems::GetItemSelfDurabilityRatio(const AActor* Item) {
    return 0.0f;
}

float UFLItems::GetItemDurabilityRatio(const AActor* Item) {
    return 0.0f;
}

TArray<AActor*> UFLItems::GetChildWeaponParts(AActor* Actor) {
    return TArray<AActor*>();
}

TArray<FString> UFLItems::GetAllPlayerContainerIDs(UObject* WorldContext) {
    return TArray<FString>();
}

UObject* UFLItems::FindParentContainerByOverlap(UPrimitiveComponent* PrimitiveToCheck) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::FindAttachedMagazine(const URadiusItemDynamicData* WeaponDynamicData) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::FindAttachedArmorPlate(const UObject* WorldContextObject, const FString& ArmorInstanceID) {
    return NULL;
}

TArray<AActor*> UFLItems::FilterOutWeaponParts(TArray<AActor*> Actors) {
    return TArray<AActor*>();
}

URadiusItemDynamicData* UFLItems::CreateNewDynamicDataFromActor(AActor* ItemActor) {
    return NULL;
}

URadiusItemDynamicData* UFLItems::CreateNewDynamicData(const UObject* WorldContext, FGameplayTag ItemType, FItemConfiguration ItemConfiguration, const FString& ParentContainer, FTransform Transform) {
    return NULL;
}

bool UFLItems::CheckHasTrashMark(const AActor* Item) {
    return false;
}

bool UFLItems::CheckHasShopMark(const AActor* Item) {
    return false;
}

void UFLItems::CalculateSmoothingAlpha(bool& bOutIsAligned, float& OutAlignAlpha, USceneComponent* VRCameraRef, UMeshComponent* Mesh, const FName SocketName, const float DistanceLimit, const float AlphaThreshold) {
}

float UFLItems::CalculateNormalizedReliability(const AActor* WeaponActor) {
    return 0.0f;
}

float UFLItems::CalculateNormalizedRecoil(const AActor* WeaponActor) {
    return 0.0f;
}

float UFLItems::CalculateContainerItemsWeight(UObject* WorldContext, const FString& ContainerID) {
    return 0.0f;
}

void UFLItems::CalculateChildItemsWeightAndCapacity(AActor* ItemActor, float& TotalWeight, float& Capacity) {
}

TArray<UActorComponent*> UFLItems::AddStartingGearToDynamicData(APawn* PlayerPawn, const FGearConfig GearConfig, const bool bIsLeftHanded) {
    return TArray<UActorComponent*>();
}


