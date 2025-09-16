#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "VRBPDatatypes.h"
#include "AttachActionDelegate.h"
#include "EContainerType.h"
#include "ItemContainerInterface.h"
#include "OnChildrenAttachmentChangedDelegate.h"
#include "AttachmentSlotComponent.generated.h"

class AActor;
class ARadiusGrippableActorBase;
class UAudioComponent;
class UGripMotionControllerComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UPrimitiveComponent;
class URadiusInitializeObject;
class URadiusItemDynamicData;
class UShapeComponent;
class USoundBase;
class USphereComponent;
class UTexture;
class UWeightTrackerComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UAttachmentSlotComponent : public UActorComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChildrenAttachmentChanged OnChildrenAttachmentChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttachAction OnAttachAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttachmentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference CustomParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PointRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplinePositioning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelativeSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SplineSecondPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContainerType ContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOwnerCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhenOnPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInteractionWhenDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeArmored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDistanceGripStoredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedGripTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventCollisionWithAttachedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCollisionIgnoresOnAttach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateCollisionIgnoresOnDetach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyGripInOverlapZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDetachTopAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyGripItemByMainHandSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* OptionalCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AcceptedItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTransform> AdditionalTransformByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AttachErrorSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRattleWhenItemIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* RattleSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAttachSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AttachSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayDetachSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* DetachSoundOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAttachedItemTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HighlightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* HolderMarkTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ModulesRotationLimitDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EContainerType> AvailableOnlyInContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhenNotInHands;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDisableSecondaryHS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDisableMainHS;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttachedActor, meta=(AllowPrivateAccess=true))
    ARadiusGrippableActorBase* AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusGrippableActorBase* AttachedActorCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USphereComponent*> OverlappedGrabSpheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusInitializeObject* InitializeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* HighlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* RattleAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeightTrackerComponent* OwnerWeightTracker;
    
public:
    UAttachmentSlotComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void WaitForSyncTransformComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSocketAttachment();
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemAsInContainer(AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSavedItems();
    
    UFUNCTION(BlueprintCallable)
    void SetAttachmentDisabled(const bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachedActor(ARadiusGrippableActorBase* ActorToHolster);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedActor();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttachedActor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachmentSlotChildrenChange_Internal(const FString& ChangedChildName, bool IsSelfChange);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartAttaching(AActor* ItemActor, const FTransform AttachTransform);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeContainer_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAttachedActor() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleHolsterEndOverlap(AActor* OtherActor, UPrimitiveComponent* OverlapComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleHolsteredActorGrip(UGripMotionControllerComponent* MotionController, const FBPActorGripInformation& GripInfo, AActor* GrippedActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleHolsterBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OverlapComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParentContainerID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusGrippableActorBase* GetAttachedActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetAdditionalTransformByTag(const FGameplayTag& ActorTag) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EventOnChildrenAttachmentChanged(UActorComponent* AttachmentComponent, AActor* ItemActor, bool bAttached);
    
public:
    UFUNCTION(BlueprintCallable)
    void Continue_SpawnSavedItems_Internal(AActor* ItemActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void Continue_InitializeContainer_Internal();
    
    UFUNCTION(BlueprintCallable)
    void CheckAndSpawnLosslessItem();
    

    // Fix for true pure virtual functions not being implemented
};

