#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnAttachChangedDelegate.h"
#include "OnContainerParentChangedDelegate.h"
#include "RadiusInfoWidgetInterface.h"
#include "ItemInfo.generated.h"

class AActor;
class URadiusHolsterComponent;

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UItemInfo : public UUserWidget, public IRadiusInfoWidgetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerParentChanged OnHolsteredItemContainerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachChanged OnAttachChanged;
    
public:
    UItemInfo();

private:
    UFUNCTION(BlueprintCallable)
    void UnbindItemParentContainerChangedTracking(AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    void UnbindEventToAllContainersOnItem(AActor* Item);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHandInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHolsteredItemParentContainerChanged(const FString& NewParentId, const FString& OldParentId);
    
    UFUNCTION(BlueprintCallable)
    void OnHolsterAttachChanged(URadiusHolsterComponent* HolsterComponent, AActor* RadiusItem, bool bHasAttached);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsHandInfo();
    
private:
    UFUNCTION(BlueprintCallable)
    void BindItemParentContainerChangedTracking(AActor* Item);
    
    UFUNCTION(BlueprintCallable)
    void BindEventToAllContainersOnItem(AActor* Item);
    

    // Fix for true pure virtual functions not being implemented
};

