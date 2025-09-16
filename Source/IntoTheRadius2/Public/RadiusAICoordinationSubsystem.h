#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "ActionsCooldownInfo.h"
#include "AmbushInfo.h"
#include "AttackRoleDelegateDelegate.h"
#include "CoverVolumeInfo.h"
#include "EAmbushType.h"
#include "NPCCoordinationInfo.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusAICoordinationSubsystem.generated.h"

class AActor;
class AController;
class APawn;
class ARadiusAIControllerBase;
class AVantageCoverManager;
class UNPCConfig;
class USoundBase;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusAICoordinationSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ARadiusAIControllerBase*, FNPCCoordinationInfo> NPCCoordinationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> AudibleAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AttackRoleReserveTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle OptimizationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmbushInfo> CreepAmbushInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAmbushInfo> MimicAmbushInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FCoverVolumeInfo> VantageCoverVolumeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVantageCoverManager* VantageCoverManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USoundBase*, FActionsCooldownInfo> ActionSoundTimers;
    
public:
    URadiusAICoordinationSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnRegisterNpc(ARadiusAIControllerBase* AIController);
    
    UFUNCTION(BlueprintCallable)
    void UnOccupyAmbush(AController* InController, const int32 AmbushIdx, const EAmbushType AmbushType);
    
    UFUNCTION(BlueprintCallable)
    void SetAgentsStateIdleBeforeSave();
    
private:
    UFUNCTION(BlueprintCallable)
    void SelectAudibleAgents();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestAttackRole(ARadiusAIControllerBase* AIController, FAttackRoleDelegate AttackRoleDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNpc(ARadiusAIControllerBase* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OccupyAmbush(AController* InController, const int32 AmbushIdx, const EAmbushType AmbushType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackRoleAvailable(ARadiusAIControllerBase* AIController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyoneFromGroupAttacking(ARadiusAIControllerBase* AIController) const;
    
    UFUNCTION(BlueprintCallable)
    void InitVantageCoverManager(AVantageCoverManager* InVantageCoverManager);
    
    UFUNCTION(BlueprintCallable)
    bool HasAttackRole(ARadiusAIControllerBase* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeammatesCount(const ARadiusAIControllerBase* AIController) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetRelevantVantageCoverVolumes(const AActor* QuerierPawn, const float MaxAttackDist, const bool bIsVantageVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNpcAttackRoleCount(ARadiusAIControllerBase* AIController, bool bGetAttackers) const;
    
    UFUNCTION(BlueprintCallable)
    FAmbushInfo GetAmbush(AActor* QuerierPawn, float FindDistance, const EAmbushType AmbushType);
    
    UFUNCTION(BlueprintCallable)
    TArray<APawn*> GetAgentsInRadius(const float Radius, const AActor* QuerierPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetAgentsInGroup(const uint8 GroupID) const;
    
    UFUNCTION(BlueprintCallable)
    void FreeAttackRole(ARadiusAIControllerBase* AIController);
    
};

