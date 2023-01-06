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
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.Set_SelectedVisuals
	 */
	struct UMM_SecondaryOptionsBtns_C_Set_SelectedVisuals_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMM_SecondaryOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.PreConstruct
	 */
	struct UMM_SecondaryOptionsBtns_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_SecondaryOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_SecondaryOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.ForceUnselectedColour
	 */
	struct UMM_SecondaryOptionsBtns_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UMM_SecondaryOptionsBtns_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.ExecuteUbergraph_MM_SecondaryOptionsBtns
	 */
	struct UMM_SecondaryOptionsBtns_C_ExecuteUbergraph_MM_SecondaryOptionsBtns_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T3AL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_SecondaryOptionsBtns.MM_SecondaryOptionsBtns_C.SecondaryButtonHasBeenPressed__DelegateSignature
	 */
	struct UMM_SecondaryOptionsBtns_C_SecondaryButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		E_MM_SecondaryOptions                                      WhichButtonPressed;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
