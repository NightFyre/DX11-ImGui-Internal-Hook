#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Character.BP_Character_C.FindTaunt
	 */
	struct ABP_Character_C_FindTaunt_Params
	{
	public:
		bool                                                       Alpha;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UJMH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Taunt;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.OnRep_CurrentSkin
	 */
	struct ABP_Character_C_OnRep_CurrentSkin_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.UpdateSkin
	 */
	struct ABP_Character_C_UpdateSkin_Params
	{
	public:
		struct FTaskForceSkin                                      Skin;                                                    // 0x0000(0x02F0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.UpdateCameraAspectRatio
	 */
	struct ABP_Character_C_UpdateCameraAspectRatio_Params
	{
	public:
		float                                                      AspectRatio;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.GetCameraRotation
	 */
	struct ABP_Character_C_GetCameraRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1Q0P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Character.BP_Character_C.UpdateMeshes
	 */
	struct ABP_Character_C_UpdateMeshes_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.UpdateCamera
	 */
	struct ABP_Character_C_UpdateCamera_Params
	{
	public:
		bool                                                       IsFirstPerson;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.FootTrace
	 */
	struct ABP_Character_C_FootTrace_Params
	{
	public:
		class FName                                                Socket;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Scale;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Offset;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Hit;                                                     // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L0MB[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Normal;                                                  // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ResetProjectileParticles
	 */
	struct ABP_Character_C_ResetProjectileParticles_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.IsRotating
	 */
	struct ABP_Character_C_IsRotating_Params
	{
	public:
		bool                                                       Rotating;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.IsControllerLocked
	 */
	struct ABP_Character_C_IsControllerLocked_Params
	{
	public:
		bool                                                       Locked;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character.BP_Character_C.UserConstructionScript
	 */
	struct ABP_Character_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.MovingRotate__FinishedFunc
	 */
	struct ABP_Character_C_MovingRotate__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.MovingRotate__UpdateFunc
	 */
	struct ABP_Character_C_MovingRotate__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.IdleRotate__FinishedFunc
	 */
	struct ABP_Character_C_IdleRotate__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.IdleRotate__UpdateFunc
	 */
	struct ABP_Character_C_IdleRotate__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.LockedRotate__FinishedFunc
	 */
	struct ABP_Character_C_LockedRotate__FinishedFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.LockedRotate__UpdateFunc
	 */
	struct ABP_Character_C_LockedRotate__UpdateFunc_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveTick
	 */
	struct ABP_Character_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ReceiveBeginPlay
	 */
	struct ABP_Character_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Character.BP_Character_C.CustomizeCharacter
	 */
	struct ABP_Character_C_CustomizeCharacter_Params
	{
	public:
		class USkeletalMesh*                                       Head;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh*                                       Hat;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnDeath
	 */
	struct ABP_Character_C_K2_OnDeath_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I2RN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APawn*                                               InstigatingPawn;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ReceivePossessed
	 */
	struct ABP_Character_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnCallout
	 */
	struct ABP_Character_C_K2_OnCallout_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnTaunt3D
	 */
	struct ABP_Character_C_K2_OnTaunt3D_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnTaunt2D
	 */
	struct ABP_Character_C_K2_OnTaunt2D_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.K2_OnTauntMessage
	 */
	struct ABP_Character_C_K2_OnTauntMessage_Params
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.SetSkin
	 */
	struct ABP_Character_C_SetSkin_Params
	{
	public:
		struct FTaskForceSkin                                      Skin;                                                    // 0x0000(0x02F0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.SetControlRotation
	 */
	struct ABP_Character_C_SetControlRotation_Params
	{
	public:
		float                                                      Pitch;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Yaw;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character.BP_Character_C.ExecuteUbergraph_BP_Character
	 */
	struct ABP_Character_C_ExecuteUbergraph_BP_Character_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
