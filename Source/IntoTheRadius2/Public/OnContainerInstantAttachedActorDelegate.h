#pragma once
#include "CoreMinimal.h"
#include "OnContainerInstantAttachedActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContainerInstantAttachedActor, const FString&, ContainerID, AActor*, AttachedActor);

