#pragma once
#include "CoreMinimal.h"
#include "OnContainerAncestorChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnContainerAncestorChangedMulticast, const FString&, ContainerThatChangedParent, const FString&, OldParentId, const FString&, NewParentId);

