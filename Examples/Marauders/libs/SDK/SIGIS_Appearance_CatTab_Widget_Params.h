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
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ShipAttachSlot_RefreshNumbUseableAttachments
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_ShipAttachSlot_RefreshNumbUseableAttachments_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.AreAnyAttachmentsOfThisTypeEquipped
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_AreAnyAttachmentsOfThisTypeEquipped_Params
	{
	public:
		bool                                                       IsOneEquipped;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.AppearCategoryTab_IsSelectedLook
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_AppearCategoryTab_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoNotSetAsState;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.PreSetup
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_PreSetup_Params
	{	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ForceUnselectedColour
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.PreConstruct
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_ExecuteUbergraph_SIGIS_Appearance_CatTab_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_Appearance_CatTab_Widget.SIGIS_Appearance_CatTab_Widget_C.ED_CharBodyPartFilterPressed__DelegateSignature
	 */
	struct USIGIS_Appearance_CatTab_Widget_C_ED_CharBodyPartFilterPressed__DelegateSignature_Params
	{
	public:
		ECosmeticSlot                                              WhichBodyPart;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
