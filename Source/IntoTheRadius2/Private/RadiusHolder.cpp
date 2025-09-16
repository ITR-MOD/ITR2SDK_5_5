#include "RadiusHolder.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

ARadiusHolder::ARadiusHolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bOnlyOwnerCanInteract = false;
    this->bPreventCollisionWithAttachedItem = false;
    this->ContainerType = EContainerType::Undefined;
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->InitializeComponent = NULL;
}

void ARadiusHolder::TryUpdateHolsteredActors() {
}

void ARadiusHolder::SpawnSavedItems() {
}

void ARadiusHolder::OnRep_HolsteredActors_Implementation() {
}

void ARadiusHolder::OnDataUnlinking_Implementation(URadiusItemDynamicData* PreviousDynamicData) {
}

void ARadiusHolder::InitializeContainer_Internal() {
}

void ARadiusHolder::Continue_SpawnSavedItems_Internal(const TArray<TWeakObjectPtr<UObject>>& ItemActors) {
}

void ARadiusHolder::Continue_BeginPlay() {
}

void ARadiusHolder::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARadiusHolder, HolsteredActors);
}


