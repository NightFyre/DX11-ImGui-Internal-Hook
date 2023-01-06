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
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.AttachmentRow_SetupInfo
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_AttachmentRow_SetupInfo_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.IsSelectedLook
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_IsSelectedLook_Params
	{
	public:
		bool                                                       isSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.Construct
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.BndEvt__Btn_ShipAttachment_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_BndEvt__Btn_ShipAttachment_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.BndEvt__Btn_ShipAttachment_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_BndEvt__Btn_ShipAttachment_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.ForceUnselectedColour
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_ForceUnselectedColour_Params
	{	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.ExecuteUbergraph_SIGIS_ShipAttachmentRow_Subwidget
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_ExecuteUbergraph_SIGIS_ShipAttachmentRow_Subwidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.ShipAttachPressed_RemoveAttach__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_ShipAttachPressed_RemoveAttach__DelegateSignature_Params
	{
	public:
		EShipAttachmentSlot                                        RemoveWhichSlot;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C.ShipAttachmentPressed__DelegateSignature
	 */
	struct USIGIS_ShipAttachmentRow_Subwidget_C_ShipAttachmentPressed__DelegateSignature_Params
	{
	public:
		class ASIGISInventoryItem*                                 WpnObjectRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemDTrowName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EShipAttachmentSlot                                        WhichAttachSlot;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
