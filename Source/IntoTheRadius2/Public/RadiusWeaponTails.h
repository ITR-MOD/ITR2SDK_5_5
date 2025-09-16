#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusWeaponTailsInterface.h"
#include "RadiusWeaponTails.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusWeaponTails : public AActor, public IRadiusWeaponTailsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TailName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    ARadiusWeaponTails(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

