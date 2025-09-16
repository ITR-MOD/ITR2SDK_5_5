#pragma once
#include "CoreMinimal.h"
#include "Engine/ReplicatedState.h"
#include "Grippables/GrippableActor.h"
#include "OnDistanceGripChangedDelegate.h"
#include "RadiusItemDelegateOnHolsteredDelegate.h"
#include "RadiusItemInterface.h"
#include "RadiusGrippableActorBase.generated.h"

class UHandSocketDynamicData;
class UMeshComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;
class USyncTransformComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusGrippableActorBase : public AGrippableActor, public IRadiusItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDistanceGripChanged OnDistanceGripChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateOnHolstered OnItemHolstered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateOnHolstered OnItemRemovedFromHolster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USyncTransformComponent* SyncTransfromComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysAttachedProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEnableGravityOnDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRetainPosAfterPrimaryGripReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSecondaryUseWhenGrippedByTrigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMeshComponent*, FName> CachedCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHandSocketDynamicData*> HandSockets;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint32 OwnershipId;
    
public:
    ARadiusGrippableActorBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFloating();
    
protected:
    UFUNCTION(Server, Unreliable)
    void ServerRepMovement(const FRepMovement& InMovement);
    
    UFUNCTION(Reliable, Server)
    void ServerReleaseOwnership(uint32 InOwnershipId);
    
    UFUNCTION(BlueprintCallable)
    bool PollSmoothRemove();
    
    UFUNCTION(BlueprintCallable)
    bool PollSendRepMovement();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* GetStaticMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetSkeletalMeshComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void AfterBeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

