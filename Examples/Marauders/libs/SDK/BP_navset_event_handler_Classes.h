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
	 * BlueprintGeneratedClass BP_navset_event_handler.BP_navset_event_handler_C
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UBP_navset_event_handler_C : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnClick;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMouseHover;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMouseUnhover;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEscapeCall;                                            // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBackClick;                                             // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnValueChange;                                           // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnValueChange__DelegateSignature(bool Decrease);
		void OnBackClick__DelegateSignature();
		void OnEscapeCall__DelegateSignature(EEscapeBehaviour Behaviour);
		void OnMouseUnhover__DelegateSignature(int32_t SelectedIndex, int32_t StepIndex);
		void OnMouseHover__DelegateSignature(int32_t SelectedIndex, int32_t StepIndex);
		void OnClick__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
