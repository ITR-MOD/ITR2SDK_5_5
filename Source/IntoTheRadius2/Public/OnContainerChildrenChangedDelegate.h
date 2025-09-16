#pragma once
#include "CoreMinimal.h"
#include "OnContainerChildrenChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnContainerChildrenChanged, const FString&, ChangedChildName, bool, IsSelfChange);

