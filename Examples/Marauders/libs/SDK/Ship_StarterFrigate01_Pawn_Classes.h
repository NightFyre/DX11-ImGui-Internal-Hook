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
	 * BlueprintGeneratedClass Ship_StarterFrigate01_Pawn.Ship_StarterFrigate01_Pawn_C
	 * Size -> 0x0190 (FullSize[0x0E68] - InheritedSize[0x0CD8])
	 */
	class AShip_StarterFrigate01_Pawn_C : public ABase_Frigate_Ship_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0CD8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UMaterialBillboardComponent*                         MaterialBillboard;                                       // 0x0CE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_RustbucketBlackSmoke;                           // 0x0CE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Persistant;                                     // 0x0CF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara_MainThruster;                                    // 0x0CF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara_Wing_R;                                          // 0x0D00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara_Wing_L;                                          // 0x0D08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_Top;                                          // 0x0D10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Top_R1;                                         // 0x0D18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_Bottom;                                       // 0x0D20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Bottom;                                         // 0x0D28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Top_L;                                          // 0x0D30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_RightSide;                                    // 0x0D38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_LeftSide;                                     // 0x0D40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_MainThruster;                                 // 0x0D48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMultiCollisionCapsuleComponent*                     MultiCollisionCapsule2;                                  // 0x0D50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_HullDamage04;                                          // 0x0D58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_HullDamage03;                                          // 0x0D60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_HullDamage02;                                          // 0x0D68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_HullDamage01;                                          // 0x0D70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_HelmGunDamage;                                         // 0x0D78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_EngineDamage;                                          // 0x0D80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            P_TurretDamage;                                          // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URaidFrigateHitVolumeComponent*                      RaidFrigateHitVolumeHelmGun;                             // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URaidFrigateHitVolumeComponent*                      RaidFrigateHitVolumeTurret;                              // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMultiCollisionCapsuleComponent*                     MultiCollisionCapsule1;                                  // 0x0DA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ThrusterLeftRightSound;                            // 0x0DA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio_ThrusterSound;                                     // 0x0DB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_Main;                                           // 0x0DB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_RightSide;                                      // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Thruster_LeftSide;                                       // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URaidFrigateHitVolumeComponent*                      RaidFrigateHitVolume;                                    // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URaidUseableFrigatePodDockComponent*                 RaidUseableFrigatePodDock;                               // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URaidUseableFrigatePodDockComponent*                 RaidUseableFrigatePodDock1;                              // 0x0DE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_hitEffect_4FC64F234753D022117E3183BD20319D;   // 0x0DE8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_4FC64F234753D022117E3183BD20319D;  // 0x0DEC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_UE7C[0x3];                                   // 0x0DED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0DF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      SpeedAsAPercentage;                                      // 0x0DF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2DKO[0x4];                                   // 0x0DFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     SpaceAmbience;                                           // 0x0E00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasRightThrusterOn;                                      // 0x0E08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasLeftThrusterOn;                                       // 0x0E09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasSubThrusterOn;                                        // 0x0E0A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasMainThrusterOn;                                       // 0x0E0B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    CurrentSpeedGear;                                        // 0x0E0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TryNewSpeedGear;                                         // 0x0E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasPlayingLeftRightThrusterSound;                        // 0x0E14(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VS4M[0x3];                                   // 0x0E15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DesiredCameraBoomLength;                                 // 0x0E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      InputRightLeft;                                          // 0x0E1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EngineIsDamaged;                                         // 0x0E20(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurretIsDamaged;                                         // 0x0E21(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MainGunIsDamaged;                                        // 0x0E22(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HullIsDamaged;                                           // 0x0E23(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurretWasDamagedPrevCheck;                               // 0x0E24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EngineWasDamagedPrevCheck;                               // 0x0E25(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HullWasDamagedPrevCheck;                                 // 0x0E26(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZPFV[0x1];                                   // 0x0E27(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RightThrusterBrightness;                                 // 0x0E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasGoingUpThrusterOn;                                    // 0x0E2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasGoingDownThrusterOn;                                  // 0x0E2D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8CLR[0x2];                                   // 0x0E2E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InputUpDown;                                             // 0x0E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasPrevTurningHard;                                      // 0x0E34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SKA7[0x3];                                   // 0x0E35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MainThrusterScaleToUse;                                  // 0x0E38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FrigateEnteredArea;                                      // 0x0E3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S4MB[0x3];                                   // 0x0E3D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EnterArea_BoomLength;                                    // 0x0E40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RunCinematicCameraMove;                                  // 0x0E44(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TTAO[0x3];                                   // 0x0E45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Store_RelativeRot;                                       // 0x0E48(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DefaultTarget_Arm_Length;                                // 0x0E54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsZoomedIn;                                              // 0x0E58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AZL5[0x7];                                   // 0x0E59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            pp_Hit_React_HUD_Dynamic;                                // 0x0E60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void NiagaraTrails_OnOff();
		void Ship_ForwardSpeed(float* ForwardSpeed);
		void Thrusters_UpDown_OnOff();
		void Thrusters_LeftRight_OnOff();
		void CinematicMoveFrigateCamera();
		void ThrustersDirectionalChanges();
		void GoingUpThrusterParticle(bool TryTurnOn);
		void GoingDownThrusterParticle(bool TryTurnOn);
		void DamageEffects_ShipHull(float DamageAmount_Percent);
		void DamageEffects_HelmGun(bool TurnOn);
		void DamageEffects_Engine(bool TurnOn);
		void DamageEffects_Turret(bool TurnOn);
		void AdjustBoomLength();
		void PlayLeftRightThrusterSound(bool TryTurnOn);
		void SetMainThrusterParticle(bool TryTurnOn);
		void ActivateSubThrusters(bool TryTurnOn);
		void LeftThrusterParticle(bool TryTurnOn);
		void RightThrusterParticle(bool TryTurnOn);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_1(float AxisValue);
		void BndEvt__RaidUseableFrigatePodDock1_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void BndEvt__RaidUseableFrigatePodDock_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void InitialCheck_TurningHard();
		void PlayAHardTurnSound();
		void ShipHealthCheck();
		void Trigger_FrigateCinematicCameraMove(const struct FTransform& ToSocketOffset, const struct FRotator& ToRotation, float ToBoomLength);
		void Frigate_IsEnteringArea();
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_5(float AxisValue);
		void OnFaceRotation(const struct FRotator& NewRotation, float DeltaTime);
		void PawnTakenDamage(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ShipTakeDamage(float DamageAmount, int32_t Direction);
		void ExecuteUbergraph_Ship_StarterFrigate01_Pawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
