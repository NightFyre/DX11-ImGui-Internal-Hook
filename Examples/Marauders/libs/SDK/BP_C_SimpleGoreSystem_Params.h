#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.CalculateBloodEffectRotation
	 */
	struct UBP_C_SimpleGoreSystem_C_CalculateBloodEffectRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.Dismember
	 */
	struct UBP_C_SimpleGoreSystem_C_Dismember_Params
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0BYM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimationAsset*                                     AnimMontageToPlay;                                       // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.DismemberWithCheck
	 */
	struct UBP_C_SimpleGoreSystem_C_DismemberWithCheck_Params
	{
	public:
		class FName                                                Bone;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ImpactNormal;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XTSJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        DeathAnimationMontage;                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_C_SimpleGoreSystem.BP_C_SimpleGoreSystem_C.ExecuteUbergraph_BP_C_SimpleGoreSystem
	 */
	struct UBP_C_SimpleGoreSystem_C_ExecuteUbergraph_BP_C_SimpleGoreSystem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K9NQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
