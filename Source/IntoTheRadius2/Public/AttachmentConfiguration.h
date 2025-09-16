#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttachmentConfiguration.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAttachmentConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ItemTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDurabilityRatio;
    
    FAttachmentConfiguration();
};

