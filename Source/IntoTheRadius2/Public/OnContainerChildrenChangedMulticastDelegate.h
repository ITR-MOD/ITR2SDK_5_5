#pragma once
#include "CoreMinimal.h"
#include "OnContainerChildrenChangedMulticastDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnContainerChildrenChangedMulticast, const FString&, ChangedChildName, const bool, IsSelfChange);

