#pragma once
#include "CoreMinimal.h"
#include "OnContainerParentChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContainerParentChanged, const FString&, OldParentId, const FString&, NewParentId);

