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
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ShowPingProblemMessage
	 */
	struct UMM_LaunchToMatchMain_C_ShowPingProblemMessage_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.Enable the Launch Button
	 */
	struct UMM_LaunchToMatchMain_C_Enable_the_Launch_Button_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.PreConstruct
	 */
	struct UMM_LaunchToMatchMain_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.Construct
	 */
	struct UMM_LaunchToMatchMain_C_Construct_Params
	{	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UMM_LaunchToMatchMain_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_LaunchToMatchMain_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_LaunchToMatchMain_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ForceUnselectedLook
	 */
	struct UMM_LaunchToMatchMain_C_ForceUnselectedLook_Params
	{	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.SetShipIcon
	 */
	struct UMM_LaunchToMatchMain_C_SetShipIcon_Params
	{
	public:
		class FString                                              WhichShip;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ExecuteUbergraph_MM_LaunchToMatchMain
	 */
	struct UMM_LaunchToMatchMain_C_ExecuteUbergraph_MM_LaunchToMatchMain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UG5K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_LaunchToMatchMain.MM_LaunchToMatchMain_C.ED_LaunchBtnPressed__DelegateSignature
	 */
	struct UMM_LaunchToMatchMain_C_ED_LaunchBtnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
