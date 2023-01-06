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
	 * BlueprintGeneratedClass BP_HUD_MainMenu.BP_HUD_MainMenu_C
	 * Size -> 0x0018 (FullSize[0x0328] - InheritedSize[0x0310])
	 */
	class ABP_HUD_MainMenu_C : public AHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0310(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWB_ProMainMenu_C*                                   WB_ProMainMenu;                                          // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateMainMenu(class UWB_ProMainMenu_C** WB_ProMainMenu);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_HUD_MainMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
