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
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ShipAttachSlot_RefreshNumbUseableAttachments
	 */
	struct USIGIS_ShipAttachmentSlots_C_ShipAttachSlot_RefreshNumbUseableAttachments_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T417[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.AreAnyAttachmentsOfThisTypeEquipped
	 */
	struct USIGIS_ShipAttachmentSlots_C_AreAnyAttachmentsOfThisTypeEquipped_Params
	{
	public:
		bool                                                       IsOneEquipped;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ShipAttchmentSlot_IsSelectedLook
	 */
	struct USIGIS_ShipAttachmentSlots_C_ShipAttchmentSlot_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.PreSetup
	 */
	struct USIGIS_ShipAttachmentSlots_C_PreSetup_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ForceUnselectedColour
	 */
	struct USIGIS_ShipAttachmentSlots_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.Refresh_WhatsInShipAttachSlot
	 */
	struct USIGIS_ShipAttachmentSlots_C_Refresh_WhatsInShipAttachSlot_Params
	{
	public:
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P14Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemName;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.PreConstruct
	 */
	struct USIGIS_ShipAttachmentSlots_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentSlots_C_BndEvt__Btn_SlotPressed_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ExecuteUbergraph_SIGIS_ShipAttachmentSlots
	 */
	struct USIGIS_ShipAttachmentSlots_C_ExecuteUbergraph_SIGIS_ShipAttachmentSlots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipAttachmentSlots.SIGIS_ShipAttachmentSlots_C.ED_ShipAttachmentSlotPressed__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentSlots_C_ED_ShipAttachmentSlotPressed__DelegateSignature_Params
	{
	public:
		EShipAttachmentSlot                                        PressedAttachmentSlot;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
