#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "RadiusNPCWeaponComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusNPCWeaponComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* WeaponMesh;
    
public:
    URadiusNPCWeaponComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponMesh(UStaticMesh* NewWeaponMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShootingPoint() const;
    
};

