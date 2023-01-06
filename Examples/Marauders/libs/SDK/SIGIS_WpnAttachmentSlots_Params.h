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
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.AreAnyAttachmentsOfThisTypeEquipped
	 */
	struct USIGIS_WpnAttachmentSlots_C_AreAnyAttachmentsOfThisTypeEquipped_Params
	{
	public:
		bool                                                       IsOneEquipped;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.WpnAttchmentSlot_IsSelectedLook
	 */
	struct USIGIS_WpnAttachmentSlots_C_WpnAttchmentSlot_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.PreSetup
	 */
	struct USIGIS_WpnAttachmentSlots_C_PreSetup_Params
	{	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.Refresh_AttachAmountAvailable
	 */
	struct USIGIS_WpnAttachmentSlots_C_Refresh_AttachAmountAvailable_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.Refresh_WhatsInWpnAttachmentSlot
	 */
	struct USIGIS_WpnAttachmentSlots_C_Refresh_WhatsInWpnAttachmentSlot_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EUO2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemName;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_WpnAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_WpnAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ForceUnselectedColour
	 */
	struct USIGIS_WpnAttachmentSlots_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_WpnAttachmentSlots_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_WpnAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.PreConstruct
	 */
	struct USIGIS_WpnAttachmentSlots_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ExecuteUbergraph_SIGIS_WpnAttachmentSlots
	 */
	struct USIGIS_WpnAttachmentSlots_C_ExecuteUbergraph_SIGIS_WpnAttachmentSlots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ED_AttachSlot_RemoveButtonPressed__DelegateSignature
	 */
	struct USIGIS_WpnAttachmentSlots_C_ED_AttachSlot_RemoveButtonPressed__DelegateSignature_Params
	{
	public:
		EAttachmentSlot                                            RemoveThisAttachSlot;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_WpnAttachmentSlots.SIGIS_WpnAttachmentSlots_C.ED_AttachmentSlotPressed__DelegateSignature
	 */
	struct USIGIS_WpnAttachmentSlots_C_ED_AttachmentSlotPressed__DelegateSignature_Params
	{
	public:
		EAttachmentSlot                                            PressedAttachmentSlot;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
