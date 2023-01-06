/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * 		Name   -> PredefinedFunction UMaterialShaderQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialShaderQualitySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MaterialShaderQualitySettings.MaterialShaderQualitySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShaderPlatformQualitySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShaderPlatformQualitySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings");
		return ptr;
	}

}


