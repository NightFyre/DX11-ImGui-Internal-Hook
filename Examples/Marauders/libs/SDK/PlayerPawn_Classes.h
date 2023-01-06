#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PlayerPawn.PlayerPawn_C
	 * Size -> 0x01C0 (FullSize[0x0D70] - InheritedSize[0x0BB0])
	 */
	class APlayerPawn_C : public ARaidPlayerCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAudioComponent*                                     Audio_FlashbangRinging;                                  // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D_Flashbang;                       // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x0BC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    CameraOnlyForCameraMode;                                 // 0x0BD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkinnedDecalSampler*                                SkinnedDecalSampler;                                     // 0x0BD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAIPerceptionStimuliSourceComponent*                 AIPerceptionStimuliSource;                               // 0x0BE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPawnNoiseEmitterComponent*                          PawnNoiseEmitter;                                        // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Voice;                                             // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FPSMask;                                                 // 0x0BF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      HitPostEffect_hitEffect_AF381F074C09A39E68577BB64E09F4F8; // 0x0C00(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         HitPostEffect__Direction_AF381F074C09A39E68577BB64E09F4F8; // 0x0C04(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_EZ4Q[0x3];                                   // 0x0C05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  HitPostEffect;                                           // 0x0C08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_3_NewTrack_0_3B198C8E44ED4182909C70B795905B4C;  // 0x0C10(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_3__Direction_3B198C8E44ED4182909C70B795905B4C;  // 0x0C14(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_USSS[0x3];                                   // 0x0C15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_4;                                              // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_LeftRight_DA45A90F4938A5F0301307AF00155F6B;   // 0x0C20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_ForwardBackward_DA45A90F4938A5F0301307AF00155F6B; // 0x0C24(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_DA45A90F4938A5F0301307AF00155F6B;  // 0x0C28(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_JR2B[0x7];                                   // 0x0C29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0C30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_2_Chrome_4B2D0E6540194804432D5CAE52EC1E06;      // 0x0C38(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_2_Vignette_4B2D0E6540194804432D5CAE52EC1E06;    // 0x0C3C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_4B2D0E6540194804432D5CAE52EC1E06;  // 0x0C40(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_CVH2[0x7];                                   // 0x0C41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_Chrome_E01CCF6646BD5956C0AB428A3A1C4BDC;      // 0x0C50(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_Vignette_E01CCF6646BD5956C0AB428A3A1C4BDC;    // 0x0C54(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_E01CCF6646BD5956C0AB428A3A1C4BDC;  // 0x0C58(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_S6UG[0x7];                                   // 0x0C59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0C60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                MPS_Anims;                                               // 0x0C68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaPercent;                                          // 0x0C70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasPlayingBreathingBefore;                               // 0x0C74(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WROF[0x3];                                   // 0x0C75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              TestWeapon;                                              // 0x0C78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Mask_InitialRelativeRotation;                            // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LDAZ[0x8];                                   // 0x0C88(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Mask_InitialRelativeTransform;                           // 0x0C90(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UMaterialInterface*                                  LowHeathMat;                                             // 0x0CC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Pressed;                                                 // 0x0CC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LocalBool;                                               // 0x0CC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DHL6[0x2];                                   // 0x0CCA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Presses;                                                 // 0x0CCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TH_Voice;                                                // 0x0CD0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                VoiceLine;                                               // 0x0CD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                LastPayerVoiceLine;                                      // 0x0CE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                VoiceSetDTRow;                                           // 0x0CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShakeInShip_FwdBck;                                      // 0x0CF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShakeInShip_LeftRight;                                   // 0x0CF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            PP_Flashbang_Dynamic;                                    // 0x0CF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_DistanceCurve;                                 // 0x0D00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_AngleCurve;                                    // 0x0D08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_FlashIntensityCurve;                           // 0x0D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_FlashFadeSpeedCurve;                           // 0x0D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_FlashDurationCurve;                            // 0x0D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_AfterimageIntensity;                           // 0x0D28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Flashbang_RingingIntensityCurve;                         // 0x0D30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlashIntensity;                                          // 0x0D38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FullFlashDuration;                                       // 0x0D3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FlashFadeSpeed;                                          // 0x0D40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FadeInterval;                                            // 0x0D44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TH_FlashbangEffect;                                      // 0x0D48(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      AfterimageIntensity;                                     // 0x0D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4GPC[0x4];                                   // 0x0D54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              Flashbang_RenderTexture;                                 // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RingingVolume;                                           // 0x0D60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RingingFadeSpeed;                                        // 0x0D64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            pp_Hit_React_HUD_Dynamic;                                // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void FlashbangFadeOut(bool* FinishedFading);
		void Flashbang_CalculateValues(const struct FVector& FlashLocation, float* Instance_Distance, float* Instance_Angle, float* Instance_Screenposition_X, float* Instance_Screenposition_Y, bool* Instance_bISBehindPlayer);
		void Flashbang_CheckForLineOfSight(const struct FVector& FlashBangStartLocation, bool* bLocked);
		void Analytics_VoiceLineUsed(const class FString& VoiceLineUsed);
		void InterfaceSendValuesToAnimBP();
		void StaminaCalculations();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_3__FinishedFunc();
		void Timeline_3__UpdateFunc();
		void HitPostEffect__FinishedFunc();
		void HitPostEffect__UpdateFunc();
		void InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Voice01_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Voice02_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Voice03_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Voice04_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Voice05_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_Voice06_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Voice07_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Voice08_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_F_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void OnLoaded_6FF4C9544EDDD0BC8561C89898811C29(class UObject* Loaded);
		void OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32(class UObject* Loaded);
		void OnLoaded_AD2B2025447837D17B29C18B74ECDFA9(class UObject* Loaded);
		void OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241(class UObject* Loaded);
		void OnLowHealthBloodStart();
		void OnLowHealthBloodEnd();
		void DrivingFrigate(class URaidUseableFrigateHelmComponent* HelmOut);
		void DrivingTurret(class URaidUseableTurretConrtrolComponent* TurretOut);
		void TurnOffTheDriving();
		void TurnOffTheGunner();
		void OnProxyHitReact(const struct FHitResult& Impact);
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void StaminaChargeStart();
		void StaminaChargeEnd();
		void OnJumped();
		void PlayEmoteVoice();
		void MulticastPlayVoice(bool is_A_Shout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine);
		void RunOnServerVoice(bool IsAShout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine);
		void TryPlayVoice();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveBeginPlay();
		void WeaponisBroken();
		void SendBlockingDistance(bool isBlocking, float BlockingDistance);
		void IsUsingCameraTurret(bool UsingCameraTurret);
		void JumpHasBeenTriggered();
		void CrouchStateChange(bool isCrouchingNow);
		void DoProxyHitReact(const struct FHitResult& HitResult);
		void PlayHurtAnim();
		void StaminaVars(float StaminaPercent);
		void DelayWeaponVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void WeaponDelayVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void IsUsingPilotSeat(bool UsingPilotSeat);
		void IsUsingTurret(bool UsingTurret);
		void OnPlayReachOutAnim(const class FName& AnimToUse);
		void HumanPlayerDied();
		void TurnOffTheCameraTurret();
		void Trigger_CameraMode(bool TurnOn);
		void CamMode_Multi(bool TurnOn);
		void FakeAddInput();
		void Shooting_Shaking(bool TurnOn);
		void CheckForBlockingTrace();
		void TickRelativeOffsetTheMask();
		void OxygenDyingTimer();
		void BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BeenFlashbanged(const struct FVector& FlashLocation, float LengthBeforeFade, const struct FSFlashbangSettings& FlashbangSettings);
		void FadeOutFlashBangEffect();
		void FadeOutTheFlashbangEffects();
		void OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void PlayerHasTakenDamage(float Damage, int32_t Direction, const class FString& DamageType);
		void ExecuteUbergraph_PlayerPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
