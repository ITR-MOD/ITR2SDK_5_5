#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VRBPDatatypes.h"
#include "EGripType.h"
#include "GripOverlap.h"
#include "PlayerGripComponent.generated.h"

class AActor;
class UGripMotionControllerComponent;
class UObject;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UPlayerGripComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumThrowingVelocity;
    
public:
    UPlayerGripComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TurnSelectorsForIngameMenu(bool bTurnOn) const;
    
    UFUNCTION(BlueprintCallable)
    void TriggerButtonPressed(const EVRHand Hand, const bool bPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetupHand(EVRHand Hand, UGripMotionControllerComponent* Controller, USphereComponent* GrabSphere);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestOwnership(EVRHand Hand, UPrimitiveComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnWaitingToGripActorInitialized(UObject* InitializeObject);
    
    UFUNCTION(BlueprintCallable)
    void OnUIBeamActivated(bool bIsActivated, EVRHand Hand);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGrippedActors(const EVRHand Hand, const EGripType GripType, const bool bActorValidityCheck) const;
    
    UFUNCTION(BlueprintCallable)
    void GripButtonPressed(const EVRHand Hand, const bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetGrippedActors(const EVRHand Hand, const EGripType GripType, const bool bActorValidityCheck) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGripOverlap GetGripOverlap(const EVRHand Hand) const;
    
    UFUNCTION(BlueprintCallable)
    void FPS_ReleaseGrip(const EVRHand Hand, const bool bTrigger);
    
    UFUNCTION(BlueprintCallable)
    void FPS_PressGrip(const EVRHand Hand, const bool bTrigger);
    
    UFUNCTION(BlueprintCallable)
    void FPS_ForceUpdateOverlaps(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void ForceGrab(const EVRHand Hand, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ForceDropByHand(const EVRHand Hand, const bool bSimulate, const bool bTryAttachItemToMostRelevantHolster, const EGripType GripType);
    
    UFUNCTION(BlueprintCallable)
    void ForceDropByActor(AActor* ActorToDrop, const bool bSimulate, const bool bTryAttachItemToMostRelevantHolster, const EGripType GripType);
    
    UFUNCTION(BlueprintCallable)
    void DelayedForceGrab(const EVRHand Hand, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClimbingStepUp();
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOwnershipRejected(EVRHand Hand);
    
public:
    UFUNCTION(BlueprintCallable)
    void BYButtonPressed(const EVRHand Hand, const bool bPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BYButtonHold(const EVRHand Hand, const bool bHold) const;
    
    UFUNCTION(BlueprintCallable)
    void AXButtonPressed(const EVRHand Hand, const bool bPressed);
    
};

