#pragma once
#include "CoreMinimal.h"
#include "OnAttachmentComponentInitializedDelegate.generated.h"

class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttachmentComponentInitialized, UActorComponent*, AttachmentComponent);

