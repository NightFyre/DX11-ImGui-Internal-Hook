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
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.EnableTheButton
	 */
	struct UMM_GenericLargeBtn01_C_EnableTheButton_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.Set_SelectedVisuals
	 */
	struct UMM_GenericLargeBtn01_C_Set_SelectedVisuals_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.ForceUnselectedColour
	 */
	struct UMM_GenericLargeBtn01_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMM_GenericLargeBtn01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.Construct
	 */
	struct UMM_GenericLargeBtn01_C_Construct_Params
	{	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.PreConstruct
	 */
	struct UMM_GenericLargeBtn01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_GenericLargeBtn01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UMM_GenericLargeBtn01_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.UpdateMyButtonInfo
	 */
	struct UMM_GenericLargeBtn01_C_UpdateMyButtonInfo_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.ExecuteUbergraph_MM_GenericLargeBtn01
	 */
	struct UMM_GenericLargeBtn01_C_ExecuteUbergraph_MM_GenericLargeBtn01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_GenericLargeBtn01.MM_GenericLargeBtn01_C.GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct UMM_GenericLargeBtn01_C_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
