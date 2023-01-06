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
	 * WidgetBlueprintGeneratedClass SIGIS_ShipManagement_Widget.SIGIS_ShipManagement_Widget_C
	 * Size -> 0x0098 (FullSize[0x02F8] - InheritedSize[0x0260])
	 */
	class USIGIS_ShipManagement_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_GoBack_ShipManagment;               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_1;                                           // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URetainerBox*                                        RetainerBox_12;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_ShipList;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USIGIS_ShipManagmentRow_C*                           SIGIS_ShipManagmentRow;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_ShipManagmentHaveNoShips;                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CurrentNumberMax;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_CurrentNumberOfShips;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Ship_SelectAttachment_Desc;                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FHangerShipInfo>                             HangarShipInfoStruct;                                    // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             ED_RemoveShip;                                           // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ED_CloseShipManagementMenu;                              // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USIGIS_InventoryWidget_C*                            Ref_InventoryMenu;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UPopup02_Widget_C*                                   CurrentPopup_Widget;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void BndEvt__SIGIS_ShipManagement_Widget_MM_GenericSmallBtn01_GoBack_ShipManagment_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void DeleteThisShipTriggered(const class FName& WhichDataTableRow, const class FString& FrigID, int32_t ScrapReward);
		void Refresh_List();
		void Confirm_CloseThePopup();
		void Cancel_CloseThePopup();
		void ExecuteUbergraph_SIGIS_ShipManagement_Widget(int32_t EntryPoint);
		void ED_CloseShipManagementMenu__DelegateSignature();
		void ED_RemoveShip__DelegateSignature(const class FName& ShipDataTable, const class FString& ToDelete_FrigID, int32_t RewardMoney);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
