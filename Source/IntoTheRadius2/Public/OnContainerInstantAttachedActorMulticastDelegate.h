#pragma once
#include "CoreMinimal.h"
#include "OnContainerInstantAttachedActorMulticastDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContainerInstantAttachedActorMulticast, const FString&, ContainerID, const AActor*, AttachedActor);

