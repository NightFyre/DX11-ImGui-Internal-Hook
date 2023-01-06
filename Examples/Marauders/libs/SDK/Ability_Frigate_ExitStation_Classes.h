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
	 * BlueprintGeneratedClass Ability_Frigate_ExitStation.Ability_Frigate_ExitStation_C
	 * Size -> 0x0008 (FullSize[0x0420] - InheritedSize[0x0418])
	 */
	class UAbility_Frigate_ExitStation_C : public URaidGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void K2_ActivateAbility();
		void ExecuteUbergraph_Ability_Frigate_ExitStation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
