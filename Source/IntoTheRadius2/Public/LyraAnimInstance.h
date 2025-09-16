#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "LyraAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Game)
class ULyraAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTagPropertyMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDistance;
    
public:
    ULyraAnimInstance();

};

