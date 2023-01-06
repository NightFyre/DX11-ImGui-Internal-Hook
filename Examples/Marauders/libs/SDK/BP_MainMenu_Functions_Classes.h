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
	 * BlueprintGeneratedClass BP_MainMenu_Functions.BP_MainMenu_Functions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_MainMenu_Functions_C : public UBlueprintFunctionLibrary
	{
	public:
		void SetupParameters(class UObject* __WorldContext);
		void DestroyCaptureCharacter(class UObject* __WorldContext);
		bool IsCaptureCharacterExisting(class UObject* __WorldContext);
		void Get_WB_PauseMenu(class UObject* __WorldContext, class UWB_PauseMenu_C** WB_PauseMenu);
		void UnbindOnCancelRequest(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void UnbindOnConfirmRequest(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void RemoveRequest(class UObject* __WorldContext);
		void BindOnCancelRequest(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void BindOnConfirmRequest(const class FScriptDelegate& Event, class UObject* __WorldContext);
		bool CreateRequest(bool bShowOnlyOkButton, bool bUseCancelCountdown, const class FText& HeadText, const class FText& MessageText, class UObject* __WorldContext);
		void HasAnyKeybindingButtonFocus(class UObject* __WorldContext, bool* HasFocus);
		void HasAnyProgressButtonFocus(class UObject* __WorldContext, bool* HasFocus);
		void HasAnyButtonFocus(class UObject* __WorldContext, bool* HasFocus);
		void Get_WB_MainMenu(class UObject* __WorldContext, class UWB_ProMainMenu_C** WB_ProMainMenu);
		void Get_HUD_MainMenu(class UObject* __WorldContext, class ABP_HUD_MainMenu_C** AsHUD_Main_Menu);
		void Get_PC_MainMenu(class UObject* __WorldContext, class ABP_PC_MainMenu_C** AsPC_Main_Menu);
		void Get_GM_MainMenu(class UObject* __WorldContext, class ABP_GM_MainMenu_C** AsGM_Main_Menu);
		void HandleResponsiveHovering(bool bResponsiveHovering, class UWB_NativeButton_C* ButtonToFocus, class APlayerController* OwningPlayer, class UObject* __WorldContext);
		void UnhoverAllNativeButtons(class UWB_NativeButton_C* Exception, class UObject* __WorldContext);
		void GetPC_InputDetect(class UObject* __WorldContext, class ABP_PC_InputDetect_C** AsPC_Input_Detect);
		void SetRightInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key);
		void FindInputType(const struct FKey& InputKey, class UObject* __WorldContext, struct FKey* LastPressed_Key, EInputType* InputType);
		void GetVRControllerKeys(class UObject* __WorldContext, TArray<struct FKey>* Oculus_VR_Keys);
		void GetMouseKeys(class UObject* __WorldContext, TArray<struct FKey>* MouseKeys);
		void GetKeyboardKeys(class UObject* __WorldContext, TArray<struct FKey>* KeyboardKeys);
		void GetGamepadKeys(class UObject* __WorldContext, TArray<struct FKey>* GamepadKeys);
		void GetShowMouse(class UObject* __WorldContext, bool* bShowMouse);
		void SetShowMouse(bool bShowMouse, class UObject* __WorldContext);
		void UnbindOnInputTypeSwitched(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void BindOnInputTypeSwitched(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void SetInputType(EInputType InputType, class UObject* __WorldContext);
		void GetInputType(class UObject* __WorldContext, EInputType* InputType);
		void Get_PMM_Instance(class UObject* __WorldContext, class UBP_PMM_Instance_C** AsPMM_Instance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
