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
	 * BlueprintGeneratedClass BP_PMM_Instance.BP_PMM_Instance_C
	 * Size -> 0x0060 (FullSize[0x0208] - InheritedSize[0x01A8])
	 */
	class UBP_PMM_Instance_C : public UGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       bShowMouse;                                              // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EInputType                                                 InputType;                                               // 0x01B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HT7[0x6];                                   // 0x01B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateInputType;                                         // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bPauseMenuActive;                                        // 0x01C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G4QV[0x7];                                   // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWB_PauseMenu_C*                                     WB_PauseMenu;                                            // 0x01D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             PlayerCharacter;                                         // 0x01D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseBaseColor;                                           // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P3U7[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BaseColor;                                               // 0x01E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseButtonSounds;                                        // 0x01F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7LMU[0x3];                                   // 0x01F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          ButtonSound_Hovered;                                     // 0x01F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          ButtonSound_Clicked;                                     // 0x0200(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		//void FindGradations(const struct FLinearColor& In_Color, struct FLinearColor* , struct FLinearColor* 2, struct FLinearColor* 3, struct FLinearColor* 4);
		void FindPawnOrCharacter(class UObject* Object, class ACharacter** AsCharacter, class APawn** AsPawn);
		void SetShowMouse(bool bShowMouse);
		void SetInputType(EInputType InputType);
		void ReceiveInit();
		void HandleTravelError(ETravelFailure FailureType);
		void HandleNetworkError(ENetworkFailure FailureType, bool bIsServer);
		void HandlePauseMenu(class UObject* Player_Character_or_Pawn);
		void UpdateBaseColor();
		void UpdateButtonSounds();
		void ExecuteUbergraph_BP_PMM_Instance(int32_t EntryPoint);
		void UpdateInputType__DelegateSignature(EInputType InputType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
