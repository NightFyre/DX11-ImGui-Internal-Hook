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
	 * BlueprintGeneratedClass BP_Keybinding_Functions.BP_Keybinding_Functions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_Keybinding_Functions_C : public UBlueprintFunctionLibrary
	{
	public:
		void CheckIsKeyInUse(const struct FKey& Key, class UObject* __WorldContext, bool* IsReserved, class FName* MappingName);
		bool FindAxisMappingKeyboardKeyByName(const class FName& ItemToFind, float ScaleLookingFor, class UObject* __WorldContext, struct FKey* Key, float* Scale);
		bool FindAxisMappingGamepadKeyByName(const class FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key, float* Scale);
		bool FindActionMappingKeyboardKeyByName(const class FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key);
		bool FindActionMappingGamepadKeyByName(const class FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key);
		void IsMouseKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsMouseKey);
		void IsKeyboardKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsKeyboardKey);
		void IsGamepadKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsGamepadKey);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
