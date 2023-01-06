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
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.FindGradations
	 */
	//struct UBP_PMM_Instance_C_FindGradations_Params
	//{
	//public:
	//	struct FLinearColor                                        In_Color;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FLinearColor                                        2;                                                       // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FLinearColor                                        3;                                                       // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//	struct FLinearColor                                        4;                                                       // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.FindPawnOrCharacter
	 */
	struct UBP_PMM_Instance_C_FindPawnOrCharacter_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ACharacter*                                          AsCharacter;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               AsPawn;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.SetShowMouse
	 */
	struct UBP_PMM_Instance_C_SetShowMouse_Params
	{
	public:
		bool                                                       bShowMouse;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.SetInputType
	 */
	struct UBP_PMM_Instance_C_SetInputType_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.ReceiveInit
	 */
	struct UBP_PMM_Instance_C_ReceiveInit_Params
	{	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.HandleTravelError
	 */
	struct UBP_PMM_Instance_C_HandleTravelError_Params
	{
	public:
		ETravelFailure                                             FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.HandleNetworkError
	 */
	struct UBP_PMM_Instance_C_HandleNetworkError_Params
	{
	public:
		ENetworkFailure                                            FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsServer;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.HandlePauseMenu
	 */
	struct UBP_PMM_Instance_C_HandlePauseMenu_Params
	{
	public:
		class UObject*                                             Player_Character_or_Pawn;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateBaseColor
	 */
	struct UBP_PMM_Instance_C_UpdateBaseColor_Params
	{	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateButtonSounds
	 */
	struct UBP_PMM_Instance_C_UpdateButtonSounds_Params
	{	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.ExecuteUbergraph_BP_PMM_Instance
	 */
	struct UBP_PMM_Instance_C_ExecuteUbergraph_BP_PMM_Instance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateInputType__DelegateSignature
	 */
	struct UBP_PMM_Instance_C_UpdateInputType__DelegateSignature_Params
	{
	public:
		EInputType                                                 InputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
