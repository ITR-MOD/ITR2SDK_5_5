#include "FindNestComponent.h"

UFindNestComponent::UFindNestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFindNestComponent::OnArtefactNestSpawned(AActor* SpawnedNest) {
}

void UFindNestComponent::OnArtefactNestDestroyed(AActor* SpawnedNest) {
}

TArray<TScriptInterface<IArtefactNestInterface>> UFindNestComponent::GetNestsInCone(const FVector StartLocation, const FVector Direction, const float Length, const float ConeBaseRadius) {
    return TArray<TScriptInterface<IArtefactNestInterface>>();
}

void UFindNestComponent::FindClosestNest(int32 NestReactLevel, float DetectingRange, bool& IsFound, AActor*& OutClosestNest) {
}


