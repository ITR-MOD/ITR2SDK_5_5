#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "PlayerVoiceChatActor.generated.h"

class APlayerState;
class UAudioComponent;
class UMicrophoneSpeakComponent;
class USceneComponent;
class USoundAttenuation;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API APlayerVoiceChatActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerNameReceived, const FString&, Name);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerMicrophoneOnReceived, bool, IsMicrophoneOn);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, ReplicatedUsing=OnRep_MicrophoneSpeakComponent, meta=(AllowPrivateAccess=true))
    UMicrophoneSpeakComponent* MicrophoneSpeakComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    APlayerState* ownerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 idVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=RepNotifyPlayerName, meta=(AllowPrivateAccess=true))
    FString playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=RepNotifyIsMicrophoneOn, meta=(AllowPrivateAccess=true))
    bool IsMicrophoneOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=RepNotifyVoiceVolume, meta=(AllowPrivateAccess=true))
    float voiceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> radioChannelSubscribed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Attenuation, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAttenuation> Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=RepNotifySourceEffectAsset, meta=(AllowPrivateAccess=true))
    FString pathToSourceChainEffectAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ServerPerformAntiCheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AntiCheatAllowUseProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool AntiCheatAllowUseGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AntiCheatMaxProximityRange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerNameReceived OnPlayerNameReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMicrophoneOnReceived OnIsMicrophoneOnReceived;
    
    APlayerVoiceChatActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void setOverrideLocallySourceEffectPath(bool enableSourceEffect, bool overrideLocally, const FString& _pathToSourceEffectAsset);
    
    UFUNCTION(BlueprintCallable)
    void setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, TSoftObjectPtr<USoundAttenuation> NewAttenuation);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxProximityRangeOnServer(float _maxProximityRange);
    
    UFUNCTION(BlueprintCallable)
    void setLocallyMultiplierVolume(float multiplierVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowUseProximityOnServer(bool _allowUseRange);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetSourceChainEffect(bool enableSourceChainEffect, const FString& _pathToSourceChainEffect);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetAttenuation(bool bEnableAttenuation, TSoftObjectPtr<USoundAttenuation> NewAttenuation);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetAllowUseGlobal(bool _allowUseGlobal);
    
    UFUNCTION(BlueprintCallable)
    void ServerRemoveChannel(int32 channelToRemove);
    
    UFUNCTION(BlueprintCallable)
    void ServerAddChannel(int32 channelToAdd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSourceChainEffectPath(const FString& _pathToSourceChainEffectAsset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsMicrophoneOn(bool _isMicrophoneOn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetAttenuation(const USoundAttenuation* NewAttenuation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestRemoveChannel(int32 channelToRemove);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestAddChannel(int32 channelToAdd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeMicrophoneVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void RepNotifyVoiceVolume();
    
    UFUNCTION(BlueprintCallable)
    void RepNotifySourceEffectAsset();
    
    UFUNCTION(BlueprintCallable)
    void RepNotifyPlayerName();
    
    UFUNCTION(BlueprintCallable)
    void RepNotifyIsMicrophoneOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MicrophoneSpeakComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Attenuation();
    
    UFUNCTION(BlueprintCallable)
    void MuteAudio(bool isMute);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_UpdatePosAudioComp(FVector worldPos, FRotator worldRotation);
    
    UFUNCTION(BlueprintCallable)
    bool IsMicrophoneComponentValid();
    
    UFUNCTION(BlueprintCallable)
    float getLocallyMultiplierVolume();
    
    UFUNCTION(BlueprintCallable)
    void DelegateEndPlayOwner(AActor* act, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

