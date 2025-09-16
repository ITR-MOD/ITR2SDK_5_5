#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttachmentStaticData.h"
#include "WeaponModuleStaticData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FWeaponModuleStaticData : public FAttachmentStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ModuleTypeIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> RequiredSlotIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> BlockedSlotIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablesVirtualStock;
    
    FWeaponModuleStaticData();
};

