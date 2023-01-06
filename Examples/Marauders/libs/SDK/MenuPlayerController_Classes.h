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
	 * BlueprintGeneratedClass MenuPlayerController.MenuPlayerController_C
	 * Size -> 0x0018 (FullSize[0x0B08] - InheritedSize[0x0AF0])
	 */
	class AMenuPlayerController_C : public ARaidPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       ShowMouse;                                               // 0x0AF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InventoryShow;                                           // 0x0AF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInEditor;                                              // 0x0AFA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IUWB[0x5];                                   // 0x0AFB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USIGIS_MM_DiscardCheck_C*                            RefDiscard_ItemCheckWidget;                              // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CenterOutMouse();
		void DragItemStopSound(const class FName& ItemRowName);
		void DragItemStartSound(const class FName& ItemRowName);
		void OnLoaded_F2824D544019EA2DC6C4DDA438C83372(class UObject* Loaded);
		void InpActEvt_Y_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_MenuSelect_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_MenuSelect_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_InGameMenu_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_ToggleInventory_K2Node_InputActionEvent_1(const struct FKey& Key);
		void UI_StartedDrag(const class FName& ItemRowName);
		void UI_EndedDrag(const class FName& ItemRowName);
		void UILeveledUP();
		void PlaySoftRef_2DSound();
		void OnShowUIDestroyPrompt(const class FString& ItemUID, const class FName& ItemData);
		void MM_ConfirmDestroyItemReturnFromMenu(const class FString& UIDString, const class FName& ItemName);
		void MM_CancelDestroyItem();
		void FAKE_LevelUpUI();
		void FirstStartComic();
		void FirstTimeGuide_HasBeenClosed();
		void ItemAttemptedToScrap(const class FName& ItemData, bool ScrapSuccesful);
		void ReceiveBeginPlay();
		void OnMutatedItem(const class FName& ItemRowName);
		void CantFoldItemsInside();
		void OnAntiCheatCheck(bool HasAntiCheat, EEOSEAntiCheatClientViolationType ViolationOut, const class FString& ViolationDetails);
		void EscapePressed();
		void OnItemRepaired(const class FName& ItemData);
		void CantLandEmemyOnBoard();
		void EventShowMouse(bool Show);
		void ExecuteUbergraph_MenuPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
