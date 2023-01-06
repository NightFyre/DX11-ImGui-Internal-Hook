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
	 * Function MenuPlayerController.MenuPlayerController_C.CenterOutMouse
	 */
	struct AMenuPlayerController_C_CenterOutMouse_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.DragItemStopSound
	 */
	struct AMenuPlayerController_C_DragItemStopSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.DragItemStartSound
	 */
	struct AMenuPlayerController_C_DragItemStartSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.OnLoaded_F2824D544019EA2DC6C4DDA438C83372
	 */
	struct AMenuPlayerController_C_OnLoaded_F2824D544019EA2DC6C4DDA438C83372_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.InpActEvt_Y_K2Node_InputKeyEvent_2
	 */
	struct AMenuPlayerController_C_InpActEvt_Y_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.InpActEvt_N_K2Node_InputKeyEvent_1
	 */
	struct AMenuPlayerController_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_4
	 */
	struct AMenuPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.InpActEvt_MenuSelect_K2Node_InputActionEvent_3
	 */
	struct AMenuPlayerController_C_InpActEvt_MenuSelect_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.InpActEvt_InGameMenu_K2Node_InputActionEvent_2
	 */
	struct AMenuPlayerController_C_InpActEvt_InGameMenu_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.InpActEvt_ToggleInventory_K2Node_InputActionEvent_1
	 */
	struct AMenuPlayerController_C_InpActEvt_ToggleInventory_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.UI_StartedDrag
	 */
	struct AMenuPlayerController_C_UI_StartedDrag_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.UI_EndedDrag
	 */
	struct AMenuPlayerController_C_UI_EndedDrag_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.UILeveledUP
	 */
	struct AMenuPlayerController_C_UILeveledUP_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.PlaySoftRef_2DSound
	 */
	struct AMenuPlayerController_C_PlaySoftRef_2DSound_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.OnShowUIDestroyPrompt
	 */
	struct AMenuPlayerController_C_OnShowUIDestroyPrompt_Params
	{
	public:
		class FString                                              ItemUID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ItemData;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.MM_ConfirmDestroyItemReturnFromMenu
	 */
	struct AMenuPlayerController_C_MM_ConfirmDestroyItemReturnFromMenu_Params
	{
	public:
		class FString                                              UIDString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                ItemName;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.MM_CancelDestroyItem
	 */
	struct AMenuPlayerController_C_MM_CancelDestroyItem_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.FAKE_LevelUpUI
	 */
	struct AMenuPlayerController_C_FAKE_LevelUpUI_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.FirstStartComic
	 */
	struct AMenuPlayerController_C_FirstStartComic_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.FirstTimeGuide_HasBeenClosed
	 */
	struct AMenuPlayerController_C_FirstTimeGuide_HasBeenClosed_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.ItemAttemptedToScrap
	 */
	struct AMenuPlayerController_C_ItemAttemptedToScrap_Params
	{
	public:
		class FName                                                ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScrapSuccesful;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.ReceiveBeginPlay
	 */
	struct AMenuPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.OnMutatedItem
	 */
	struct AMenuPlayerController_C_OnMutatedItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.CantFoldItemsInside
	 */
	struct AMenuPlayerController_C_CantFoldItemsInside_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.OnAntiCheatCheck
	 */
	struct AMenuPlayerController_C_OnAntiCheatCheck_Params
	{
	public:
		bool                                                       HasAntiCheat;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EEOSEAntiCheatClientViolationType                          ViolationOut;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Y7R[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ViolationDetails;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.EscapePressed
	 */
	struct AMenuPlayerController_C_EscapePressed_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.OnItemRepaired
	 */
	struct AMenuPlayerController_C_OnItemRepaired_Params
	{
	public:
		class FName                                                ItemData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.CantLandEmemyOnBoard
	 */
	struct AMenuPlayerController_C_CantLandEmemyOnBoard_Params
	{	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.EventShowMouse
	 */
	struct AMenuPlayerController_C_EventShowMouse_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuPlayerController.MenuPlayerController_C.ExecuteUbergraph_MenuPlayerController
	 */
	struct AMenuPlayerController_C_ExecuteUbergraph_MenuPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
