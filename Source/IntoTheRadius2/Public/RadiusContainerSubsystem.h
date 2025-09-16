#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnAnyContainerChangedDelegate.h"
#include "OnContainerAncestorChangedDelegate.h"
#include "OnContainerChildrenChangedDelegate.h"
#include "OnContainerInstantAttachedActorDelegate.h"
#include "OnContainerParentChangedDelegate.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusContainerSubsystem.generated.h"

class AActor;
class APlayerState;
class ARadiusItemBase;
class UItemContainerData;
class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusContainerSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyContainerChanged OnAnyContainerChangedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UItemContainerData*> InventoryContainers;
    
public:
    URadiusContainerSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerInstantAttachedActor(const FString& ContainerID, const FOnContainerInstantAttachedActor& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnbindOnContainerAncestorChanged(const FString& ContainerID, const FOnContainerAncestorChanged& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerInstantAttachedActor(const FString& ContainerID, const FOnContainerInstantAttachedActor& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged& Event);
    
    UFUNCTION(BlueprintCallable)
    void RequestBindOnContainerAncestorChanged(const FString& ContainerID, const FOnContainerAncestorChanged& Event);
    
    UFUNCTION(BlueprintCallable)
    bool PutItemToContainer(UObject* Container, AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable)
    void PrintContainersStructure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerContainerID(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConcretePlayerContainerID(const APlayerState* PlayerState, const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable)
    void InstantHolsterActor(UObject* Container, AActor* ItemActor);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetWorldTransform(const FString& ContainerUid, const FTransform& InitialTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTopParentContainerID(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParentContainerID(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable)
    void GetItemContainerBP(const FString& ContainerID, bool& bFound, UItemContainerData*& ContainerData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentLevelContainerID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, UItemContainerData*> GetContainers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetContainerObject(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllPlayerItems(AActor* Player, TArray<ARadiusItemBase*>& Items) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARadiusItemBase*> GetAllChildItems(const FString& ParentContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllChildContainerIDs(const FString& ParentContainerID, const bool bIncludeChildren) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARadiusItemBase*> GetAllAncestorItems(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllAncestorContainerIDs(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerContainerChanged(const FString& PlayerID, const FString& ParentID, const FString& ContainerID, const bool bHasAttached) const;
    
    UFUNCTION(BlueprintCallable)
    bool DropHolsteredActor(UObject* Container, AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> DropHolstered(UObject* Container);
    
    UFUNCTION(BlueprintCallable)
    void AddContainerToContainer(UObject* ContainerObj, const UObject* ParentContainerObj, const FTransform& RelativeTransform);
    
};

