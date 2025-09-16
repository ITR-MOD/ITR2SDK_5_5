#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusPooledObjectInterface.h"
#include "RadiusShellInterface.h"
#include "RadiusShell.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusShell : public AActor, public IRadiusShellInterface, public IRadiusPooledObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShellMeshComponent;
    
    ARadiusShell(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

