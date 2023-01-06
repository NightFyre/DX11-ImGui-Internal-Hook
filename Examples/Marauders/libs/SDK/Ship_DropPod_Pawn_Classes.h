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
	 * BlueprintGeneratedClass Ship_DropPod_Pawn.Ship_DropPod_Pawn_C
	 * Size -> 0x01A0 (FullSize[0x0D90] - InheritedSize[0x0BF0])
	 */
	class AShip_DropPod_Pawn_C : public ARaidSpaceship
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0BF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UParticleSystemComponent*                            P_DamagedFire;                                           // 0x0BF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess2;                                            // 0x0C00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box2;                                                    // 0x0C08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess1;                                            // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box1;                                                    // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialBillboardComponent*                         MaterialBillboard;                                       // 0x0C20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMultiCollisionCapsuleComponent*                     BreachCollision;                                         // 0x0C28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ThrustWhenBoosting;                                      // 0x0C30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_Boosting;                                          // 0x0C38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_Thrust_Top;                                   // 0x0C40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_Thrust_Bot;                                   // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_LeftSide;                                     // 0x0C50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_RightSide;                                    // 0x0C58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara_Wing_L;                                          // 0x0C60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara_Wing_R;                                          // 0x0C68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ExtraThrustersSound;                               // 0x0C70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Bot;                                            // 0x0C78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Top_R;                                          // 0x0C80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Top_L;                                          // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_MainThruster;                                 // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_LeftSide;                                       // 0x0CA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_RightSide;                                      // 0x0CA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ThrusterSound;                                     // 0x0CB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thrust;                                                  // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_hitEffect_3B01A1A0458FFF53C6C24681E6F3B923;   // 0x0CC0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_3B01A1A0458FFF53C6C24681E6F3B923;  // 0x0CC4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_YJLW[0x3];                                   // 0x0CC5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_06123DC4445526C631B86D8E7C7F25B9;  // 0x0CD0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_06123DC4445526C631B86D8E7C7F25B9;  // 0x0CD4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_4R70[0x3];                                   // 0x0CD5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0CD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       Debug_Animations;                                        // 0x0CE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4R9S[0x3];                                   // 0x0CE1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedAsAPercentage;                                      // 0x0CE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentGear_BP;                                          // 0x0CE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DesiredCameraBoomLength;                                 // 0x0CEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnRate;                                                // 0x0CF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LookUp;                                                  // 0x0CF4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraYaw_Target;                                        // 0x0CF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraPitch_Target;                                      // 0x0CFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraYaw_Current;                                       // 0x0D00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraPitch_Current;                                     // 0x0D04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            InitialRelativeRot;                                      // 0x0D08(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H167[0x4];                                   // 0x0D14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     SpaceAmbience;                                           // 0x0D18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SimulatePhysics;                                         // 0x0D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasRightThrusterOn;                                      // 0x0D28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasLeftThrusterOn;                                       // 0x0D29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QV95[0x2];                                   // 0x0D2A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            PrevDropPodMeshRot;                                      // 0x0D2C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentMeshRotDifference;                                // 0x0D38(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasGoingUpThrusterOn;                                    // 0x0D44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasGoingDownThrusterOn;                                  // 0x0D45(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasPlayingExtraThrusterSound;                            // 0x0D46(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TempBool;                                                // 0x0D47(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDropPodBoosting;                                       // 0x0D48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AJRX[0x7];                                   // 0x0D49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            Post_CameraBlur;                                         // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PP_StoredFarBolurDistance;                               // 0x0D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PP_Stored_NearBlurContrast;                              // 0x0D5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PP_Stored_CircleBlendStrength;                           // 0x0D60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Default_FOV;                                             // 0x0D64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FOV_Target;                                              // 0x0D68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DropIsBreaching;                                         // 0x0D6C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DropIsAlreadyLanding;                                    // 0x0D6D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_818Z[0x2];                                   // 0x0D6E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NewGearToUse;                                            // 0x0D70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultTarget_Arm_Length;                                // 0x0D74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         RotationSpeedCurve;                                      // 0x0D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsZoomedIn;                                              // 0x0D80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B56C[0x7];                                   // 0x0D81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            pp_Hit_React_HUD_Dynamic;                                // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetAbleToBreach(bool isAllowedToBreach);
		void Pod_Cinematic_CameraMove();
		void SetBoostingVisuals(bool BoostOn);
		void SetExtraThrustersLightIntensity();
		void ThrusterDirectionalChanges();
		void TurnOnOffNiagaraTrails(bool TurnOn);
		void PlayThrusterSounds(bool TryTurnOn);
		void WorkOutExtraThrusterSounds();
		void GoingUpThrusterParticle(bool TryTurn_On);
		void GoingDownThrusterParticle(bool TryTurn_On);
		void WorkOutExtraThrustersOnOff();
		void CalculateRotDifferenceForThrusters();
		void LeftThrusterParticle(bool TryTurn_On);
		void RightThrusterParticle(bool TryTurn_On);
		void CameraRotationOnMouseMove();
		void AdjustBoomLength();
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void InpActEvt_N_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ChangedGear(int32_t NewGear);
		void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveTick(float DeltaSeconds);
		void PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator);
		void ReceiveBeginPlay();
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_2(float AxisValue);
		void Turret_ControlAimPoint(const struct FVector& ControlAimLoc);
		void Ship_ActorPitchAmount(float PitchAmount);
		void DropPodisBreaching(bool isBreaching);
		void DropPodBoosting(bool IsBoosting);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
		void DropPod_Movement(const struct FRotator& RotMovementDelta, int32_t CurrentGear);
		void PlayerUpDownInputAxis(float Float);
		void Frigate_SpeedAsApercentage(float SpeedAsPercentage, float XY_Speed, float Z_Speed);
		void Frigate_Damage_Hull(bool isDamaged);
		void BoostEffectEvent();
		void Frigate_Damage_HelmGun(bool isDamaged);
		void Frigate_Damage_Turret(bool isDamaged);
		void Frigate_Damage_Engine(bool isDamaged);
		void PlayerLeftRightInputAxis(float Float);
		void Shoot(int32_t TurretID);
		void CameraRotation(const struct FRotator& CameraRotation, float RotClamp_Min, float RotClamp_Max, float TurretAnimRotSpeed);
		void GearChange(int32_t WhatGear);
		void DebugShipAnimations(bool ShouldDebugAnimations);
		void Trigger_PodCameraMove(const struct FVector& FromSocketOffset, const struct FRotator& FromRotation, const struct FVector& ToSocketOffset, const struct FRotator& ToRotation, float ToBoomLength);
		void AttachDropPodToShip();
		void isBreaching();
		void IsEnteringArea();
		void Force_DropPodGearChange(int32_t NewGearToUse);
		void Timed_BreachCheck();
		void ForceDropBoostingEffectForBreach();
		void BreachingEffects_Part1_Movement(bool PlayBreachEffects);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_5(float AxisValue);
		void OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void DropPodHasTakenDamage(float DamageAmount, int32_t Direction);
		void ExecuteUbergraph_Ship_DropPod_Pawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
