#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AddContainerToContainerContext.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAddContainerToContainerContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ContainerObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> ParentObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RelativeTransform;
    
    FAddContainerToContainerContext();
};

