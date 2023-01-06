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
	 * Function Weap_Knife.Weap_Knife_C.GetMeleeWpnSkelMesh
	 */
	struct AWeap_Knife_C_GetMeleeWpnSkelMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              SkelMesh;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weap_Knife.Weap_Knife_C.StartDamageTrace
	 */
	struct AWeap_Knife_C_StartDamageTrace_Params
	{	};

	/**
	 * Function Weap_Knife.Weap_Knife_C.StopDamageTrace
	 */
	struct AWeap_Knife_C_StopDamageTrace_Params
	{	};

	/**
	 * Function Weap_Knife.Weap_Knife_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AWeap_Knife_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T3S9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Weap_Knife.Weap_Knife_C.ReceiveBeginPlay
	 */
	struct AWeap_Knife_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Weap_Knife.Weap_Knife_C.BrokenWeaponEvent
	 */
	struct AWeap_Knife_C_BrokenWeaponEvent_Params
	{	};

	/**
	 * Function Weap_Knife.Weap_Knife_C.ExecuteUbergraph_Weap_Knife
	 */
	struct AWeap_Knife_C_ExecuteUbergraph_Weap_Knife_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9IGO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
