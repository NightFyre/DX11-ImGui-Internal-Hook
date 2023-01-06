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
	 * Function BP_navigation_manager.BP_navigation_manager_C.UpdateAllShortcutIcons
	 */
	struct UBP_navigation_manager_C_UpdateAllShortcutIcons_Params
	{
	public:
		ENavigationDeviceTypes                                     Navigation_Device;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.AddToShortcutUpdateList
	 */
	struct UBP_navigation_manager_C_AddToShortcutUpdateList_Params
	{
	public:
		struct FFWidgetFix                                         Updatable_Widget;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnValueChanged
	 */
	struct UBP_navigation_manager_C_OnValueChanged_Params
	{
	public:
		bool                                                       Decrease;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.GetSelectedItem
	 */
	struct UBP_navigation_manager_C_GetSelectedItem_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.GetCurrentStep
	 */
	struct UBP_navigation_manager_C_GetCurrentStep_Params
	{
	public:
		int32_t                                                    CurrentStep;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavigateTo
	 */
	struct UBP_navigation_manager_C_NavigateTo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.CustomNavigation
	 */
	struct UBP_navigation_manager_C_CustomNavigation_Params
	{
	public:
		class FString                                              CustomAction;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.GetNavigableItemList
	 */
	struct UBP_navigation_manager_C_GetNavigableItemList_Params
	{
	public:
		TArray<struct FFNavItem>                                   NavigableItemArray;                                      // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.RemoveUnfocusedSteps
	 */
	struct UBP_navigation_manager_C_RemoveUnfocusedSteps_Params
	{
	public:
		bool                                                       EscKeyPress;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JBQP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.SetOverrideEscape
	 */
	struct UBP_navigation_manager_C_SetOverrideEscape_Params
	{
	public:
		bool                                                       OverrideEscape;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.Remove
	 */
	struct UBP_navigation_manager_C_Remove_Params
	{
	public:
		int32_t                                                    StepIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RemoveFromArrayOnly;                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_02XJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.SimulateClick
	 */
	struct UBP_navigation_manager_C_SimulateClick_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.UpdateValue
	 */
	struct UBP_navigation_manager_C_UpdateValue_Params
	{
	public:
		bool                                                       Decrease;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ACDN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.CycleFirst
	 */
	struct UBP_navigation_manager_C_CycleFirst_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.CycleLast
	 */
	struct UBP_navigation_manager_C_CycleLast_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.Navigate
	 */
	struct UBP_navigation_manager_C_Navigate_Params
	{
	public:
		struct FKey                                                PressedKey;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		TArray<struct FKey>                                        ExpectedKey;                                             // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ENavActionTypes                                            ActionType;                                              // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M1BC[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CustomAction;                                            // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavigateRight
	 */
	struct UBP_navigation_manager_C_NavigateRight_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavigateLeft
	 */
	struct UBP_navigation_manager_C_NavigateLeft_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavigateDown
	 */
	struct UBP_navigation_manager_C_NavigateDown_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavigateUp
	 */
	struct UBP_navigation_manager_C_NavigateUp_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseUnhover
	 */
	struct UBP_navigation_manager_C_NavItemMouseUnhover_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.NavItemMouseHover
	 */
	struct UBP_navigation_manager_C_NavItemMouseHover_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.SetNavigationFocus
	 */
	struct UBP_navigation_manager_C_SetNavigationFocus_Params
	{
	public:
		bool                                                       Clear;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MI20[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    StepIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.GetNavItemsFromContainer
	 */
	struct UBP_navigation_manager_C_GetNavItemsFromContainer_Params
	{
	public:
		class UWidget*                                             Box;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Vertical;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6JQQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFWidgetFix>                                 Navigable_Widgets;                                       // 0x0010(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.AddToNavigableArray
	 */
	struct UBP_navigation_manager_C_AddToNavigableArray_Params
	{
	public:
		struct FFNavItem                                           Nav_Item;                                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		TArray<struct FFWidgetFix>                                 Final_Array;                                             // 0x0028(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnInput
	 */
	struct UBP_navigation_manager_C_OnInput_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FEventReply                                         ReturnValue;                                             // 0x0018(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnSelectedItemValueChange__DelegateSignature
	 */
	struct UBP_navigation_manager_C_OnSelectedItemValueChange__DelegateSignature_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnSelectedItemChange__DelegateSignature
	 */
	struct UBP_navigation_manager_C_OnSelectedItemChange__DelegateSignature_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnNavigation__DelegateSignature
	 */
	struct UBP_navigation_manager_C_OnNavigation__DelegateSignature_Params
	{
	public:
		ENavigationDeviceTypes                                     NavigationDevice;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnOverrideEscape__DelegateSignature
	 */
	struct UBP_navigation_manager_C_OnOverrideEscape__DelegateSignature_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnEscapeWhenOverrideEnabled__DelegateSignature
	 */
	struct UBP_navigation_manager_C_OnEscapeWhenOverrideEnabled__DelegateSignature_Params
	{	};

	/**
	 * Function BP_navigation_manager.BP_navigation_manager_C.OnEscape__DelegateSignature
	 */
	struct UBP_navigation_manager_C_OnEscape__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
