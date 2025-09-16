#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadiusCondition.h"
#include "RadiusCondition_SteamPurchaseDate.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusCondition_SteamPurchaseDate : public URadiusCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime PurchaseDateMinimum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime PurchaseDateMaximum;
    
    URadiusCondition_SteamPurchaseDate();

};

