#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusDamageCauserInterface.h"
#include "RadiusFirearmSoundInterface.h"
#include "RadiusItemBase.h"
#include "RadiusItemDelegateNoParamsDelegate.h"
#include "RadiusFirearmBase.generated.h"

class URadiusFirearmComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusFirearmBase : public ARadiusItemBase, public IRadiusDamageCauserInterface, public IRadiusFirearmSoundInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusFirearmComponent* FirearmComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemModuleChanged;
    
    ARadiusFirearmBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnContainerChildChanged_Internal(const FString& ChangedChildName, const bool IsSelfChange);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeaponNameByTag(const FGameplayTag GameplayTag) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckVirtualStock();
    

    // Fix for true pure virtual functions not being implemented
};

