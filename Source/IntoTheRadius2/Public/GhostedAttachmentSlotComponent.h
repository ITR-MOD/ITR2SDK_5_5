#pragma once
#include "CoreMinimal.h"
#include "AttachmentSlotComponent.h"
#include "GhostedAttachmentSlotComponent.generated.h"

class ARadiusItemBase;
class UAttachmentPreviewComponent;
class UObject;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UGhostedAttachmentSlotComponent : public UAttachmentSlotComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAttachmentPreviewComponent* AttachmentPreviewComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusItemBase* PreviewItem;
    
public:
    UGhostedAttachmentSlotComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerInitialized(UObject* InitializedObject);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerContainerParentChanged(const FString& OldParentId, const FString& NewParentId);
    
    UFUNCTION(BlueprintCallable)
    void AttachmentPreviewTick();
    
};

