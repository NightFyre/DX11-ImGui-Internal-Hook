#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass DebugInGameMenu_Widget.DebugInGameMenu_Widget_C
	 * Size -> 0x0340 (FullSize[0x05A0] - InheritedSize[0x0260])
	 */
	class UDebugInGameMenu_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             BACKBTN;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_DebugMissions;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_DebugMissions_2;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_PasswordBlocker;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_ClearConsoleCommand;                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_add_FastShip;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_add_HeavyShip;                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_add_HeavyShip_2;                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_add_ScoutShip;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_add_StartShip;                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_addVIP_Ship;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_AllAmmos;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_AllGuns;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_AllGuns_2;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_AllGuns_4;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_AllGuns_5;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Armour_Body;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Armour_Head;                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Bags;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Clearallships;                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_CraftMats;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_DeleteSave;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_GetStartItems;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_GetStartItemsVIP;                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Health;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_LotsItems_Equipment;                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_LotsItems_Items;                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Money;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Points;                                        // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_ShipAttachments;                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_ShipBowGuns;                                   // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_Switch_VIP_Status;                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_TravelToLocalServer;                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_UnlockRecipe;                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_UnlockRecipe_2;                                // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_UnlockRecipe_3;                                // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_WipePlayerData;                                // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_Debug_WipePlayerInventory;                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugActivateCameraMode;                             // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugActivateHIdePlayerUI;                           // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugClearMissions;                                  // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugIncrementMission;                               // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugPrestige;                                       // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugStartMission;                                   // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugStartMission_3;                                 // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugXP;                                             // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_DebugXP_2;                                           // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_EnterConsoleCommand;                                 // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Btn_TryPassword;                                         // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     ComboBoxString_FactionToAddXpTo_2;                       // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_129;                                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_Cash;                                    // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_ConsoleCommand;                          // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_DevSearchItem;                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_GiveItem;                                // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_MissionName;                             // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_Points;                                  // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_Prestige;                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_UnlockRecipe;                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_XP;                                      // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    EditableTextBox_XPForFaction_2;                          // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGenericBackground_Widget_C*                         GenericBackground_Widget;                                // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_GiveDebugItems;                                // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUniformGridPanel*                                   UniformGridPanel_DebugItems;                             // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CloseDebugMenu;                                          // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                ShipToAddName;                                           // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      ArrayAllGunsList_Part1;                                  // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ArrayAllGunsList_Part2;                                  // 0x0498(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_Ammos;                                             // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_Healths;                                           // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_Armour_Body;                                       // 0x04C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_Armour_Head;                                       // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_CraftMats;                                         // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_AllBags;                                           // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_ShipAttachTurrets;                                 // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_ShipAttachBowGuns;                                 // 0x0518(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DebugItemRow;                                            // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KGI9[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      Array_LotsItemsP1_Gear;                                  // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      Array_LotsItemsP2_Items;                                 // 0x0540(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ArrayAllGunsList_Part3;                                  // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ArrayAllGunsList_Part4;                                  // 0x0560(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PasswordFieldInput;                                      // 0x0570(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConsoleCommandInput;                                     // 0x0588(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DevSpawnItemsList_Search(bool Reset, const class FText& DoesContainThis);
		void GenerateList_OfAll_Items_InDT();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Money_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Points_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_UnlockRecipe_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__BACKBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_DeleteSave_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_add_StartShip_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_addVIP_Ship_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_add_FastShip_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_add_HeavyShip_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_add_HeavyShip_1_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_WipePlayerData_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_WipePlayerInventory_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_GetStartItems_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_GetStartItemsVIP_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_UnlockRecipe_1_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_UnlockRecipe_2_K2Node_ComponentBoundEvent_17_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_UnlockRecipe_3_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_AllGuns_1_K2Node_ComponentBoundEvent_19_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_AllGuns_2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Health_K2Node_ComponentBoundEvent_21_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Armour_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Armour_1_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Armour_Head_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Bags_K2Node_ComponentBoundEvent_25_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_ShipAttachments_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_Clearallships_K2Node_ComponentBoundEvent_27_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_add_ScoutShip_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_ShipBowGuns_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_Debug_TravelToLocalServer_K2Node_ComponentBoundEvent_30_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__Btn_DebugXP_1_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_EditableTextBox_DevSearchItem_K2Node_ComponentBoundEvent_35_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__DebugMenu_Widget_Btn_DebugXP_1_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_K2Node_ComponentBoundEvent_37_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_Debug_LotsItems_Equipment_1_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_3_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_Debug_AllGuns_4_K2Node_ComponentBoundEvent_40_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_TryPassword_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_42_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__DebugMenu_Widget_EditableTextBox_128_K2Node_ComponentBoundEvent_43_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_44_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__DebugMenu_Widget_EditableTextBox_XP_1_K2Node_ComponentBoundEvent_51_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__DebugMenu_Widget_Btn_EnterConsoleCommand_K2Node_ComponentBoundEvent_52_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugMenu_Widget_Btn_ClearConsoleCommand_K2Node_ComponentBoundEvent_53_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateCameraMode_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__DebugInGameMenu_Widget_Btn_DebugActivateHIdePlayerUI_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature();
		void ExecuteUbergraph_DebugInGameMenu_Widget(int32_t EntryPoint);
		void CloseDebugMenu__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
