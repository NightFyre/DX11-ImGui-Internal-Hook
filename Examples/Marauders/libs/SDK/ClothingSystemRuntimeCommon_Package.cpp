/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothConfigCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothConfigCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothConfigCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothSharedConfigCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothSharedConfigCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingAssetCustomData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetCustomData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothingAssetCommon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothingAssetCommon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClothLODDataCommon_Legacy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClothLODDataCommon_Legacy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
		return ptr;
	}

}


