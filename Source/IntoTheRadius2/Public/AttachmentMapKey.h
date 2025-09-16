#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AttachmentMapKey.generated.h"

USTRUCT(BlueprintType)
struct FAttachmentMapKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AttachNodeUid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttachSlotId;
    
    INTOTHERADIUS2_API FAttachmentMapKey();
};
FORCEINLINE uint32 GetTypeHash(const FAttachmentMapKey) { return 0; }

