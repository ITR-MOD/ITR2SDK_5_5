#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "VRBPDatatypes.h"
#include "EAttachFailureReason.h"
#include "EContainerType.h"
#include "OnHighlightChangedDelegate.h"
#include "ItemContainerInterface.generated.h"

class AActor;
class APawn;
class ARadiusItemBase;
class UActorComponent;
class UGripMotionControllerComponent;
class UObject;
class URadiusInitializeObject;

UINTERFACE(Blueprintable)
class UItemContainerInterface : public UInterface {
    GENERATED_BODY()
};

class IItemContainerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchItemsVisibility(const bool IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartHolstering(AActor* ItemActor, const FTransform RelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldChangeCollisionOnAttach();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHighlight(const bool bIsHighlight, const EVRHand Hand, ARadiusItemBase* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReturnsCorrectContainerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PutItemToContainer(AActor* ItemActor, FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayRattleSound(bool bIsRunning);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnItemGripped(AActor* ItemActor, UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOnHighlightChanged(ARadiusItemBase* Item, const bool bIsHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyAttachFailure(const EAttachFailureReason Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool NeedUpdateChildrenLocationOnSave() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWithinDistance(float DistanceToItem, const AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSuitableByTags(const FGameplayTag& ItemTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsOnlyGripItemByMainHandSocket();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnoughWeightForItem(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnoughSpaceForItem();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDependsWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsContainerValid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAvailable(UGripMotionControllerComponent* MotionController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InstantHolsterActor(AActor* ItemActor, FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HandleAutoreturnItem(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetTransformRelativeToParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetParentContainerObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    APawn* GetItemOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URadiusInitializeObject* GetInitializeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetHolstered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetContainerWorldLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetContainerTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EContainerType GetContainerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetContainerSoundType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetContainerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetAllowedGripTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UActorComponent* FindAttachmentSlot(FGameplayTag AttachmentID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DropHolsteredActor(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> DropHolstered();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DoesContainActor(const AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisablingSecondaryHandSockets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableHandSocketsIfNeeded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Continue_SpawnSavedItems(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeArmored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAcceptItem(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindOnHighlightChanged(const FOnHighlightChanged& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowsInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowsGripping(const FGameplayTagContainer& QueryGripTags, UGripMotionControllerComponent* MotionController);
    
};

