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
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.Set_SelectedVisuals
	 */
	struct UGuide_ItemBtn_SubWidget_C_Set_SelectedVisuals_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HoverDontSet;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.Construct
	 */
	struct UGuide_ItemBtn_SubWidget_C_Construct_Params
	{	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuide_ItemBtn_SubWidget_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuide_ItemBtn_SubWidget_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.PreConstruct
	 */
	struct UGuide_ItemBtn_SubWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuide_ItemBtn_SubWidget_C_BndEvt__Btn_Main_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.ForceUnselectedColour
	 */
	struct UGuide_ItemBtn_SubWidget_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.ExecuteUbergraph_Guide_ItemBtn_SubWidget
	 */
	struct UGuide_ItemBtn_SubWidget_C_ExecuteUbergraph_Guide_ItemBtn_SubWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Guide_ItemBtn_SubWidget.Guide_ItemBtn_SubWidget_C.GuideItemButtonPressed__DelegateSignature
	 */
	struct UGuide_ItemBtn_SubWidget_C_GuideItemButtonPressed__DelegateSignature_Params
	{
	public:
		class FName                                                SelectedRowName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
