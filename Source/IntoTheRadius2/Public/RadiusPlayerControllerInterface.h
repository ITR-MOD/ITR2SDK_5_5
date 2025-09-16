#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EMoneyChangeReason.h"
#include "RadiusPlayerControllerInterface.generated.h"

class AActor;
class UObject;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusPlayerControllerInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusPlayerControllerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAttaching(UObject* AttachmentSlot, AActor* ItemActor, FTransform AttachTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeMoney(int32 DeltaMoney, const FString& AnalyticsString, EMoneyChangeReason MoneyChangeReason);
    
};

