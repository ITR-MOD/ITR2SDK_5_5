#pragma once
#include "CoreMinimal.h"
#include "OnChildrenAttachmentChangedDelegate.generated.h"

class AActor;
class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnChildrenAttachmentChanged, UActorComponent*, AttachmentComponent, AActor*, ItemActor, bool, bAttached);

