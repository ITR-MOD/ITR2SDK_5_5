#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "TagToTransformsList.generated.h"

USTRUCT(Atomic, BlueprintType)
struct FTagToTransformsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTransform> List;
    
    INTOTHERADIUS2_API FTagToTransformsList();
};

