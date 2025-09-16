#pragma once
#include "CoreMinimal.h"
#include "OnContainerParentChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContainerParentChangedMulticast, const FString&, OldParentId, const FString&, NewParentId);

