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
	 * BlueprintGeneratedClass BP_navigation_manager.BP_navigation_manager_C
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UBP_navigation_manager_C : public UObject
	{
	public:
		TArray<struct FFNavItem>                                   NavigableItemArray_raw;                                  // 0x0028(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    CurrentlyFocusedStep;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverrideEscape;                                          // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_93A5[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEscape;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEscapeWhenOverrideEnabled;                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOverrideEscape;                                        // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnNavigation;                                            // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectedItemChange;                                    // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectedItemValueChange;                               // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FFWidgetFix>                                 UpdatableItemArray;                                      // 0x00A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateAllShortcutIcons(ENavigationDeviceTypes Navigation_Device);
		void AddToShortcutUpdateList(const struct FFWidgetFix& Updatable_Widget, int32_t* Index);
		void OnValueChanged(bool Decrease);
		void GetSelectedItem(class UWidget** Widget);
		void GetCurrentStep(int32_t* CurrentStep);
		void NavigateTo(int32_t Index);
		void CustomNavigation(const class FString& CustomAction);
		void GetNavigableItemList(TArray<struct FFNavItem>* NavigableItemArray);
		void RemoveUnfocusedSteps(bool EscKeyPress);
		void SetOverrideEscape(bool OverrideEscape);
		void Remove(int32_t StepIndex, bool RemoveFromArrayOnly);
		void SimulateClick();
		void UpdateValue(bool Decrease);
		void CycleFirst();
		void CycleLast();
		void Navigate(const struct FKey& PressedKey, TArray<struct FKey>* ExpectedKey, ENavActionTypes ActionType, const class FString& CustomAction);
		void NavigateRight();
		void NavigateLeft();
		void NavigateDown();
		void NavigateUp();
		void NavItemMouseUnhover(int32_t SelectedIndex, int32_t StepIndex);
		void NavItemMouseHover(int32_t SelectedIndex, int32_t StepIndex);
		void SetNavigationFocus(bool Clear, int32_t StepIndex);
		void GetNavItemsFromContainer(class UWidget** Box, bool Vertical, TArray<struct FFWidgetFix>* Navigable_Widgets);
		void AddToNavigableArray(struct FFNavItem* Nav_Item, TArray<struct FFWidgetFix>* Final_Array);
		struct FEventReply OnInput(const struct FKey& Key);
		void OnSelectedItemValueChange__DelegateSignature();
		void OnSelectedItemChange__DelegateSignature();
		void OnNavigation__DelegateSignature(ENavigationDeviceTypes NavigationDevice);
		void OnOverrideEscape__DelegateSignature();
		void OnEscapeWhenOverrideEnabled__DelegateSignature();
		void OnEscape__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
