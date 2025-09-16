#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ItemConfiguration.h"
#include "RadiusItemStaticData.h"
#include "RadiusItemInterface.generated.h"

class AActor;
class ARadiusHolder;
class IRadiusComponentInterface;
class URadiusComponentInterface;
class IRadiusDataComponentInterface;
class URadiusDataComponentInterface;
class UActorComponent;
class UGS_GunTools;
class UGripMotionControllerComponent;
class UHandSocketDynamicData;
class UObject;
class URadiusDamageType;
class URadiusItemDynamicData;
class USoundBase;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusItemInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusItemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchItemStabilization();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemHighlight(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetItemConfiguration(const FItemConfiguration NewConfiguration);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDenyItemUse(const bool bDeny);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetDenyItemTertiaryUse(const bool bDeny);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestItemChangeCollisionProfile(const bool bAttached);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveGameplayTag(const FGameplayTag TagToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReleaseNetOwnership();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReconfigureItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnholstered(UActorComponent* Holster);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHolstered(UActorComponent* Holster);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemUseEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemUseBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemTertiaryUseEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemTertiaryUseBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsTriggerGripped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInPlayerHands();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDenyItemUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDenyItemTertiaryUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAllowSecondaryUseWhenGrippedByTrigger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InstantReleaseNetOwnership();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HighlightCleanedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasDynamicData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasAttachments() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UObject*> GetRadiusWeaponComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetRadiusItemTypeID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IRadiusDataComponentInterface> GetRadiusDataComponentAccessor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URadiusItemDynamicData* GetItemDynamicData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FItemConfiguration GetItemConfiguration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetItemBaseStaticData(FRadiusItemStaticData& ItemBaseStaticData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USoundBase* GetItemAttachToPanelSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UHandSocketDynamicData*> GetHandSockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetGSGunTools(UGS_GunTools*& GunTools);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGrippingControllers(UGripMotionControllerComponent*& PrimaryController, UGripMotionControllerComponent*& SecondaryController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetAttachParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetAttachments(const bool bIncludeChildren, const bool bIncludeHolders);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UActorComponent* GetAttachHolster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ARadiusHolder* GetAttachHolder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TScriptInterface<IRadiusComponentInterface>> GetActorRadiusComponentsByTag(FGameplayTag ItemGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TScriptInterface<IRadiusComponentInterface>> GetActorRadiusComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceEndSecondaryGrip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ForceEndPrimaryGrip(bool bTryAttachItemToMostRelevantHolster);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DamageDurabilityFromShot(const float DeltaDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateBlockedDynamicDataOnGrip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CountDamageMitigation(const URadiusDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckGameplayTag(FGameplayTag Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeDurability(const float DeltaDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTakeDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanGrip(const FGameplayTagContainer& QueryGripTags, UGripMotionControllerComponent* MotionController, FGameplayTagContainer& AllowedGripTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeMultigripped(const UHandSocketDynamicData* HandSocket, const AActor* SecondActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlockCreatingDynamicDataOnGrip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddGameplayTag(const FGameplayTag NewTag);
    
};

