#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "RadiusSwitchComponent.generated.h"

class URadiusItemDynamicData;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusSwitchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SwitchMarkTag;
    
    URadiusSwitchComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleSwitchState();
    
    UFUNCTION(BlueprintCallable)
    void SetSwitchState(const bool bIsOn);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSwitchState(const bool bIsOn);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchUpdated(const bool bOn);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnItemTagChanged(const FGameplayTag Tag, const bool bAdded);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDataUnlink(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnItemDataLink();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSwitchState() const;
    
};

