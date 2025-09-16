#include "FLWidgets.h"

UFLWidgets::UFLWidgets() {
}

void UFLWidgets::UpdateAllBullets(UObject* Mag, UHierarchicalInstancedStaticMeshComponent* Bullets, URadiusItemStackComponent* StackComponent, USkeletalMeshComponent* SkeletalMeshComponent, URadiusDataComponent* DataComponent, bool IsInAmmoBox) {
}

bool UFLWidgets::IsItemListsEquals(TArray<FGameplayTag> A, TArray<FGameplayTag> B) {
    return false;
}

FText UFLWidgets::GetWeaponMissingEssentialPartName(const AActor* WeaponActor) {
    return FText::GetEmpty();
}

TArray<FGameplayTag> UFLWidgets::GetDifferentElementsBetweenLists(const TArray<FGameplayTag>& A, const TArray<FGameplayTag>& B) {
    return TArray<FGameplayTag>();
}

void UFLWidgets::GetChamberedAmmoData(const UObject* WorldContextObject, URadiusItemDynamicData* WeaponDynamicData, FAmmoStaticData& AmmoStaticData, bool& HasChamberedData) {
}

void UFLWidgets::GeneratePlayerBasketItems(const UObject* WorldContextObject, const FString& PlayerContainerUID, TArray<ARadiusItemBase*>& LOCPlayerBasket) {
}

bool UFLWidgets::DoesWeaponHasEssentialParts(const AActor* WeaponActor) {
    return false;
}

void UFLWidgets::ConvertItemsToTags(TArray<ARadiusItemBase*> Items, TArray<FGameplayTag>& OutTags) {
}

int32 UFLWidgets::CalculatePriceByTags(const UObject* WorldContextObject, const TArray<FGameplayTag>& ItemTags) {
    return 0;
}

void UFLWidgets::CalculatePrice(const UObject* WorldContextObject, TArray<ARadiusItemBase*> Items, int32& Price) {
}


