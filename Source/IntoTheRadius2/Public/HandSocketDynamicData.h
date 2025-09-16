#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VRBPDatatypes.h"
#include "HandSocketStaticData.h"
#include "HandSocketDynamicData.generated.h"

class ARadiusGrippableActorBase;
class UGripMotionControllerComponent;
class USceneComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UHandSocketDynamicData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSecondary;
    
    UHandSocketDynamicData();

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDropped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation, bool bNotUsed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpline() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetRelativeTransform(UGripMotionControllerComponent* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusGrippableActorBase* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHandSocketWorldLocation(UGripMotionControllerComponent* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetAttachParent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHandSocketStaticData BP_GetStaticData() const;
    
};

