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
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.TurnOnOffImportantIcon
	 */
	struct UMM_MainOptionsBtns_C_TurnOnOffImportantIcon_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.Set_SelectedVisuals
	 */
	struct UMM_MainOptionsBtns_C_Set_SelectedVisuals_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.PreConstruct
	 */
	struct UMM_MainOptionsBtns_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.Construct
	 */
	struct UMM_MainOptionsBtns_C_Construct_Params
	{	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMM_MainOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_MainOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_MainOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.ExecuteUbergraph_MM_MainOptionsBtns
	 */
	struct UMM_MainOptionsBtns_C_ExecuteUbergraph_MM_MainOptionsBtns_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_600R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_MainOptionsBtns.MM_MainOptionsBtns_C.ButtonHasBeenPressed__DelegateSignature
	 */
	struct UMM_MainOptionsBtns_C_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		EMenuState                                                 WhichButtonPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
