#include "RadiusShell.h"
#include "Components/StaticMeshComponent.h"

ARadiusShell::ARadiusShell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Shell Mesh"));
    this->ShellMeshComponent = (UStaticMeshComponent*)RootComponent;
}


