#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "RadiusTickableWorldSubsystem.h"
#include "RadiusGripSubsystem.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusGripSubsystem : public URadiusTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> HolstersAndHolders;
    
public:
    URadiusGripSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterHolster(const FString& ContainerUid);
    
    UFUNCTION(BlueprintCallable)
    bool TryAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem, const bool bMultigrippedItem);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAttachedItemFromTrack(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHolster(const FString& ContainerUid, UObject* ContainerObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetMostRelevantContainer(const EVRHand Hand);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttachItemToMostRelevantHolster(const EVRHand Hand, const bool bAttachedItem) const;
    
    UFUNCTION(BlueprintCallable)
    void AddContainerToTrack(const EVRHand Hand, UObject* Container, const bool bAttachedItem, const bool bMultigrippedItem);
    
    UFUNCTION(BlueprintCallable)
    void AddAttachedItemToTrack(const EVRHand Hand, AActor* AttachedItem);
    
};

