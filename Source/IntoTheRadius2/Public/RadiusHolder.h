#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EContainerType.h"
#include "ItemContainerInterface.h"
#include "RadiusHolder.generated.h"

class ARadiusGrippableActorBase;
class UObject;
class URadiusInitializeObject;
class URadiusItemDynamicData;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API ARadiusHolder : public AActor, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOwnerCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedGripTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventCollisionWithAttachedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContainerType ContainerType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusInitializeObject* InitializeComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HolsteredActors, meta=(AllowPrivateAccess=true))
    TArray<ARadiusGrippableActorBase*> HolsteredActors;
    
    ARadiusHolder(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TryUpdateHolsteredActors();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSavedItems();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HolsteredActors();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeContainer_Internal();
    
private:
    UFUNCTION()
    void Continue_SpawnSavedItems_Internal(const TArray<TWeakObjectPtr<UObject>>& ItemActors);
    
    UFUNCTION(BlueprintCallable)
    void Continue_BeginPlay();
    

    // Fix for true pure virtual functions not being implemented
};

