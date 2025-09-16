#include "RadiusAICoordinationSubsystem.h"

URadiusAICoordinationSubsystem::URadiusAICoordinationSubsystem() {
    this->NPCConfig = NULL;
    this->VantageCoverManager = NULL;
}

void URadiusAICoordinationSubsystem::UnRegisterNpc(ARadiusAIControllerBase* AIController) {
}

void URadiusAICoordinationSubsystem::UnOccupyAmbush(AController* InController, const int32 AmbushIdx, const EAmbushType AmbushType) {
}

void URadiusAICoordinationSubsystem::SetAgentsStateIdleBeforeSave() {
}

void URadiusAICoordinationSubsystem::SelectAudibleAgents() {
}

bool URadiusAICoordinationSubsystem::RequestAttackRole(ARadiusAIControllerBase* AIController, FAttackRoleDelegate AttackRoleDelegate) {
    return false;
}

void URadiusAICoordinationSubsystem::RegisterNpc(ARadiusAIControllerBase* AIController) {
}

void URadiusAICoordinationSubsystem::OccupyAmbush(AController* InController, const int32 AmbushIdx, const EAmbushType AmbushType) {
}

bool URadiusAICoordinationSubsystem::IsAttackRoleAvailable(ARadiusAIControllerBase* AIController) const {
    return false;
}

bool URadiusAICoordinationSubsystem::IsAnyoneFromGroupAttacking(ARadiusAIControllerBase* AIController) const {
    return false;
}

void URadiusAICoordinationSubsystem::InitVantageCoverManager(AVantageCoverManager* InVantageCoverManager) {
}

bool URadiusAICoordinationSubsystem::HasAttackRole(ARadiusAIControllerBase* AIController) {
    return false;
}

int32 URadiusAICoordinationSubsystem::GetTeammatesCount(const ARadiusAIControllerBase* AIController) const {
    return 0;
}

TArray<AActor*> URadiusAICoordinationSubsystem::GetRelevantVantageCoverVolumes(const AActor* QuerierPawn, const float MaxAttackDist, const bool bIsVantageVolume) {
    return TArray<AActor*>();
}

int32 URadiusAICoordinationSubsystem::GetNpcAttackRoleCount(ARadiusAIControllerBase* AIController, bool bGetAttackers) const {
    return 0;
}

FAmbushInfo URadiusAICoordinationSubsystem::GetAmbush(AActor* QuerierPawn, float FindDistance, const EAmbushType AmbushType) {
    return FAmbushInfo{};
}

TArray<APawn*> URadiusAICoordinationSubsystem::GetAgentsInRadius(const float Radius, const AActor* QuerierPawn) {
    return TArray<APawn*>();
}

TArray<APawn*> URadiusAICoordinationSubsystem::GetAgentsInGroup(const uint8 GroupID) const {
    return TArray<APawn*>();
}

void URadiusAICoordinationSubsystem::FreeAttackRole(ARadiusAIControllerBase* AIController) {
}


