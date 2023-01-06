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
	 * Function Guide_Widget.Guide_Widget_C.SetSelectedLook
	 */
	struct UGuide_Widget_C_SetSelectedLook_Params
	{
	public:
		class FName                                                NameOfSelected;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Guide_Widget.Guide_Widget_C.FillInGuideInfo
	 */
	struct UGuide_Widget_C_FillInGuideInfo_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Guide_Widget.Guide_Widget_C.Construct
	 */
	struct UGuide_Widget_C_Construct_Params
	{	};

	/**
	 * Function Guide_Widget.Guide_Widget_C.BndEvt__Guide_Widget_MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature
	 */
	struct UGuide_Widget_C_BndEvt__Guide_Widget_MM_GenericSmallBtn01_GoBack_StatsMenu_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function Guide_Widget.Guide_Widget_C.PressedARow
	 */
	struct UGuide_Widget_C_PressedARow_Params
	{
	public:
		class FName                                                GuideRowName;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Guide_Widget.Guide_Widget_C.ExecuteUbergraph_Guide_Widget
	 */
	struct UGuide_Widget_C_ExecuteUbergraph_Guide_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Guide_Widget.Guide_Widget_C.ED_CloseGuide__DelegateSignature
	 */
	struct UGuide_Widget_C_ED_CloseGuide__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
