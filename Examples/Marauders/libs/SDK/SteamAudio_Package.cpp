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
	 * 		Name   -> PredefinedFunction USteamAudioBakedListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioBakedListenerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioBakedListenerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioBakedSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioBakedSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioBakedSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioDynamicObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioDynamicObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioDynamicObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioGeometryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioGeometryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioGeometryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioListenerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioListenerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioListenerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioOcclusionSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioOcclusionSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioOcclusionSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioProbeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioProbeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioProbeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASteamAudioProbeVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASteamAudioProbeVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioProbeVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioReverbSubmixPluginPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioReverbSubmixPluginPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioReverbSubmixPluginPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioReverbSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioReverbSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioReverbSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioSerializedObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioSerializedObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioSerializedObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamAudioSpatializationSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamAudioSpatializationSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioSpatializationSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASteamAudioStaticMeshActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASteamAudioStaticMeshActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SteamAudio.SteamAudioStaticMeshActor");
		return ptr;
	}

}


