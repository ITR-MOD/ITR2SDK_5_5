#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "AmmoStaticData.h"
#include "EBlueprintResultYesNo.h"
#include "GearConfig.h"
#include "ItemConfiguration.h"
#include "WeaponStaticData.h"
#include "FLItems.generated.h"

class AActor;
class ALostAndFound;
class APawn;
class UActorComponent;
class UGripMotionControllerComponent;
class UMeshComponent;
class UObject;
class UPrimitiveComponent;
class URadiusItemDynamicData;
class USceneComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLItems : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLItems();

    UFUNCTION(BlueprintCallable)
    static void SwitchActorVisibilityOnOwner(AActor* Actor, const bool bNewHidden, const bool bIncludeChildren);
    
    UFUNCTION(BlueprintCallable)
    static void PackItemsToBox(UPrimitiveComponent* CollisionComp, TArray<AActor*> ActorsToPack, bool bExcludeNonFit, bool bProjectOnGround, TArray<AActor*>& Excluded);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void KillContainerChildren(UObject* WorldContext, const FString& ContainerID, bool bKillItemActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void KillContainerAndAllChildren(UObject* WorldContext, const FString& ContainerID, bool bKillItemActors);
    
    UFUNCTION(BlueprintCallable)
    static void IsShopItemData(const URadiusItemDynamicData* ItemData, EBlueprintResultYesNo& Result);
    
    UFUNCTION(BlueprintCallable)
    static void IsShopItemActor(const AActor* Item, EBlueprintResultYesNo& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsItemAttachedToItem(UObject* WorldContext, UObject* Container);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsInPlayerInventory(UObject* WorldContext, const FString& ContainerID);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetWeaponBaseIfWeaponPart(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetWeaponBaseFromAttachment(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetTopParentItemActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetShotLoudness(const FWeaponStaticData& WeaponStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProjectileStartVelocity(const AActor* WeaponActor, const FWeaponStaticData& WeaponStaticData, const FAmmoStaticData& AmmoStaticData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProjectileAccuracyDegrees(const AActor* WeaponActor, const FWeaponStaticData& WeaponStaticData, const FAmmoStaticData& AmmoStaticData);
    
    UFUNCTION(BlueprintCallable)
    static UGripMotionControllerComponent* GetPrimaryControllerForActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetParentItemActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetModuleTopParent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ALostAndFound* GetLostAndFound(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetItemSelfDurabilityRatio(const AActor* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetItemDurabilityRatio(const AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetChildWeaponParts(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TArray<FString> GetAllPlayerContainerIDs(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FindParentContainerByOverlap(UPrimitiveComponent* PrimitiveToCheck);
    
    UFUNCTION(BlueprintCallable)
    static URadiusItemDynamicData* FindAttachedMagazine(const URadiusItemDynamicData* WeaponDynamicData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URadiusItemDynamicData* FindAttachedArmorPlate(const UObject* WorldContextObject, const FString& ArmorInstanceID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> FilterOutWeaponParts(TArray<AActor*> Actors);
    
    UFUNCTION(BlueprintCallable)
    static URadiusItemDynamicData* CreateNewDynamicDataFromActor(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static URadiusItemDynamicData* CreateNewDynamicData(const UObject* WorldContext, FGameplayTag ItemType, FItemConfiguration ItemConfiguration, const FString& ParentContainer, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckHasTrashMark(const AActor* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckHasShopMark(const AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateSmoothingAlpha(bool& bOutIsAligned, float& OutAlignAlpha, USceneComponent* VRCameraRef, UMeshComponent* Mesh, const FName SocketName, const float DistanceLimit, const float AlphaThreshold);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateNormalizedReliability(const AActor* WeaponActor);
    
    UFUNCTION(BlueprintCallable)
    static float CalculateNormalizedRecoil(const AActor* WeaponActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float CalculateContainerItemsWeight(UObject* WorldContext, const FString& ContainerID);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateChildItemsWeightAndCapacity(AActor* ItemActor, float& TotalWeight, float& Capacity);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> AddStartingGearToDynamicData(APawn* PlayerPawn, const FGearConfig GearConfig, const bool bIsLeftHanded);
    
};

