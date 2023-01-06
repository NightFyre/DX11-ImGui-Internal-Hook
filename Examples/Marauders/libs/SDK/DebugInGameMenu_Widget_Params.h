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
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.DevSpawnItemsList_Search
	 */
	struct UDebugInGameMenu_Widget_C_DevSpawnItemsList_Search_Params
	{
	public:
		bool                                                       Reset;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MQJW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DoesContainThis;                                         // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.GenerateList_OfAll_Items_InDT
	 */
	struct UDebugInGameMenu_Widget_C_GenerateList_OfAll_Items_InDT_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.Construct
	 */
	struct UDebugInGameMenu_Widget_C_Construct_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.Tick
	 */
	struct UDebugInGameMenu_Widget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.ExecuteUbergraph_DebugInGameMenu_Widget
	 */
	struct UDebugInGameMenu_Widget_C_ExecuteUbergraph_DebugInGameMenu_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SL9L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugInGameMenu_Widget.DebugInGameMenu_Widget_C.CloseDebugMenu__DelegateSignature
	 */
	struct UDebugInGameMenu_Widget_C_CloseDebugMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
