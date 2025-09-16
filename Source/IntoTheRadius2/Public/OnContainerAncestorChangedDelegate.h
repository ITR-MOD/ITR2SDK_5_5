#pragma once
#include "CoreMinimal.h"
#include "OnContainerAncestorChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnContainerAncestorChanged, const FString&, ContainerThatChangedParent, const FString&, OldParentId, const FString&, NewParentId);

