#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FindNestComponent.generated.h"

class AActor;
class IArtefactNestInterface;
class UArtefactNestInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UFindNestComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> NestActors;
    
public:
    UFindNestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnArtefactNestSpawned(AActor* SpawnedNest);
    
    UFUNCTION(BlueprintCallable)
    void OnArtefactNestDestroyed(AActor* SpawnedNest);
    
    UFUNCTION(BlueprintCallable)
    TArray<TScriptInterface<IArtefactNestInterface>> GetNestsInCone(const FVector StartLocation, const FVector Direction, const float Length, const float ConeBaseRadius);
    
    UFUNCTION(BlueprintCallable)
    void FindClosestNest(int32 NestReactLevel, float DetectingRange, bool& IsFound, AActor*& OutClosestNest);
    
};

