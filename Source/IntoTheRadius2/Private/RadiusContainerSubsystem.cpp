#include "RadiusContainerSubsystem.h"

URadiusContainerSubsystem::URadiusContainerSubsystem() {
}

void URadiusContainerSubsystem::RequestUnbindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged& Event) {
}

void URadiusContainerSubsystem::RequestUnbindOnContainerInstantAttachedActor(const FString& ContainerID, const FOnContainerInstantAttachedActor& Event) {
}

void URadiusContainerSubsystem::RequestUnbindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged& Event) {
}

void URadiusContainerSubsystem::RequestUnbindOnContainerAncestorChanged(const FString& ContainerID, const FOnContainerAncestorChanged& Event) {
}

void URadiusContainerSubsystem::RequestBindOnContainerParentChanged(const FString& ContainerID, const FOnContainerParentChanged& Event) {
}

void URadiusContainerSubsystem::RequestBindOnContainerInstantAttachedActor(const FString& ContainerID, const FOnContainerInstantAttachedActor& Event) {
}

void URadiusContainerSubsystem::RequestBindOnContainerChildrenChanged(const FString& ContainerID, const FOnContainerChildrenChanged& Event) {
}

void URadiusContainerSubsystem::RequestBindOnContainerAncestorChanged(const FString& ContainerID, const FOnContainerAncestorChanged& Event) {
}

bool URadiusContainerSubsystem::PutItemToContainer(UObject* Container, AActor* ItemActor) {
    return false;
}

void URadiusContainerSubsystem::PrintContainersStructure() {
}

bool URadiusContainerSubsystem::IsPlayerContainerID(const FString& ContainerID) const {
    return false;
}

bool URadiusContainerSubsystem::IsConcretePlayerContainerID(const APlayerState* PlayerState, const FString& ContainerID) const {
    return false;
}

void URadiusContainerSubsystem::InstantHolsterActor(UObject* Container, AActor* ItemActor) {
}

FTransform URadiusContainerSubsystem::GetWorldTransform(const FString& ContainerUid, const FTransform& InitialTransform) {
    return FTransform{};
}

FString URadiusContainerSubsystem::GetTopParentContainerID(const FString& ContainerID) const {
    return TEXT("");
}

FString URadiusContainerSubsystem::GetParentContainerID(const FString& ContainerID) const {
    return TEXT("");
}

void URadiusContainerSubsystem::GetItemContainerBP(const FString& ContainerID, bool& bFound, UItemContainerData*& ContainerData) {
}

FString URadiusContainerSubsystem::GetCurrentLevelContainerID() {
    return TEXT("");
}

TMap<FString, UItemContainerData*> URadiusContainerSubsystem::GetContainers() {
    return TMap<FString, UItemContainerData*>();
}

UObject* URadiusContainerSubsystem::GetContainerObject(const FString& ContainerID) const {
    return NULL;
}

bool URadiusContainerSubsystem::GetAllPlayerItems(AActor* Player, TArray<ARadiusItemBase*>& Items) const {
    return false;
}

TArray<ARadiusItemBase*> URadiusContainerSubsystem::GetAllChildItems(const FString& ParentContainerID) const {
    return TArray<ARadiusItemBase*>();
}

TArray<FString> URadiusContainerSubsystem::GetAllChildContainerIDs(const FString& ParentContainerID, const bool bIncludeChildren) const {
    return TArray<FString>();
}

TArray<ARadiusItemBase*> URadiusContainerSubsystem::GetAllAncestorItems(const FString& ContainerID) const {
    return TArray<ARadiusItemBase*>();
}

TArray<FString> URadiusContainerSubsystem::GetAllAncestorContainerIDs(const FString& ContainerID) const {
    return TArray<FString>();
}

void URadiusContainerSubsystem::FireOnPlayerContainerChanged(const FString& PlayerID, const FString& ParentID, const FString& ContainerID, const bool bHasAttached) const {
}

bool URadiusContainerSubsystem::DropHolsteredActor(UObject* Container, AActor* Item) {
    return false;
}

TArray<AActor*> URadiusContainerSubsystem::DropHolstered(UObject* Container) {
    return TArray<AActor*>();
}

void URadiusContainerSubsystem::AddContainerToContainer(UObject* ContainerObj, const UObject* ParentContainerObj, const FTransform& RelativeTransform) {
}


