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
	 * 		Name   -> PredefinedFunction UOcclusionPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOcclusionPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.OcclusionPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReverbPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReverbPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.ReverbPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpatializationPluginSourceSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpatializationPluginSourceSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SpatializationPluginSourceSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEncodingSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEncodingSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEncodingSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAudioEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAudioEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.AudioEndpointSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundModulatorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundModulatorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundModulatorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEndpointSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEndpointSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEndpointSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEffectSettingsBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectSettingsBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectSettingsBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundfieldEffectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundfieldEffectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AudioExtensions.SoundfieldEffectBase");
		return ptr;
	}

}


