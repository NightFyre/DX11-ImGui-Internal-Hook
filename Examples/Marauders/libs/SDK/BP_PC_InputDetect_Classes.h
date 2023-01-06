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
	 * BlueprintGeneratedClass BP_PC_InputDetect.BP_PC_InputDetect_C
	 * Size -> 0x0038 (FullSize[0x05A8] - InheritedSize[0x0570])
	 */
	class ABP_PC_InputDetect_C : public APlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0570(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FKey                                                LastPressedKey;                                          // 0x0578(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FKey                                                AnyKey;                                                  // 0x0590(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void FindRightInputType(const struct FKey& InputKey, struct FKey* LastPressedKey);
		bool GetIsMouseMoving();
		void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void UpdateMouseCursor();
		void ExecuteUbergraph_BP_PC_InputDetect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
