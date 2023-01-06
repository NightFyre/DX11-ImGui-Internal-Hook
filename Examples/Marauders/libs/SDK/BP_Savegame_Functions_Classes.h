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
	 * BlueprintGeneratedClass BP_Savegame_Functions.BP_Savegame_Functions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_Savegame_Functions_C : public UBlueprintFunctionLibrary
	{
	public:
		bool Load_ADSType(class UObject* __WorldContext, int32_t* ADSType);
		bool Save_ADSType(int32_t ADS_Type, class UObject* __WorldContext);
		bool Load_CrouchType(class UObject* __WorldContext, int32_t* CrouchType);
		bool Save_CrouchType(int32_t CrouchType, class UObject* __WorldContext);
		void Set_OthersMicVolume(float Volume, class UObject* __WorldContext);
		bool Load_OthersMicVolume(class UObject* __WorldContext, float* OthersMicVolume);
		bool Save_OthersMicVolume(float OthersMicVolume, class UObject* __WorldContext);
		void Set_MyMicrophoneOnOff_Refresh(class UObject* __WorldContext);
		bool Load_MyMicrophoneOnOff(class UObject* __WorldContext, bool* bMyMicrophoneIsOn);
		bool Save_MyMicrophoneOnOff(bool bMicrophoneOn, class UObject* __WorldContext);
		bool Load_Voice(class UObject* __WorldContext, class FName* VoiceUsing);
		bool Save_Voice(const class FName& VoiceSetUsing, class UObject* __WorldContext);
		bool LoadMotionBlur(class UObject* __WorldContext, int32_t* MotionBlur);
		bool SaveMotionblur(int32_t MotionBlur, class UObject* __WorldContext);
		bool J_Load_Graphics(class UObject* __WorldContext, int32_t* VideoQuality);
		bool J_Save_Graphics(int32_t NewVideoSettingsInt, class UObject* __WorldContext);
		void J_SetGraphicsSettings(bool SetDefaultValues, bool bUseBenchmarkTest, int32_t Int, class UObject* __WorldContext);
		void LoadAndApplyControlSettings(bool SetDefaultValues, class UObject* __WorldContext);
		bool Load_Invert_Y(class UObject* __WorldContext, bool* Invert_Y);
		bool Save_Invert_Y(bool InvertY, class UObject* __WorldContext);
		bool Load_Invert_X(class UObject* __WorldContext, bool* Invert_X);
		bool Save_Invert_X(bool InvertX, class UObject* __WorldContext);
		bool Load_Sensitivity04(class UObject* __WorldContext, float* Sensitivity);
		bool Save_Sensitivity04(float Sensitivity, class UObject* __WorldContext);
		bool Load_Sensitivity03(class UObject* __WorldContext, float* Sensitivity);
		bool Save_Sensitivity03(float Sensitivity, class UObject* __WorldContext);
		bool Load_Sensitivity02(class UObject* __WorldContext, float* Sensitivity);
		bool Save_Sensitivity02(float Sensitivity, class UObject* __WorldContext);
		bool Load_Sensitivity01(class UObject* __WorldContext, float* Sensitivity);
		bool Save_Sensitivity01(float Sensitivity, class UObject* __WorldContext);
		bool DoesControlSettingsSaveExist(class UObject* __WorldContext);
		bool DeleteControlSettingsSave(class UObject* __WorldContext);
		void ActivateSoundMixes(class UObject* __WorldContext);
		float FindVolume(float Volume, class UObject* __WorldContext);
		void SetMusicOn(bool bMusicOn, class UObject* __WorldContext);
		void SetOutputProfile(int32_t OutputProfile, class UObject* __WorldContext);
		void SetVolume_SoundEffects(float Volume, class UObject* __WorldContext);
		void SetVolume_Dialogue_HijackForUI(float Volume, class UObject* __WorldContext);
		void SetVolume_Music(float Volume, class UObject* __WorldContext);
		void SetVolume_Master(float Volume, class UObject* __WorldContext);
		void LoadAndApplyAudioSettings(bool SetDefaultValues, class UObject* __WorldContext);
		bool DoesAudioSettingsSaveExist(class UObject* __WorldContext);
		bool DeleteAudioSettingsSave(class UObject* __WorldContext);
		bool Load_Subtitles(class UObject* __WorldContext, bool* bSubtitles);
		bool Save_Subtitles(bool bSubtitles, class UObject* __WorldContext);
		bool Load_MusicOn(class UObject* __WorldContext, bool* bMusic);
		bool Save_MusicOn(bool bMusic, class UObject* __WorldContext);
		bool Load_OutputProfile(class UObject* __WorldContext, int32_t* OutputProfile);
		bool Save_OutputProfile(int32_t OutputProfile, class UObject* __WorldContext);
		bool Load_SoundEffectsVolume(class UObject* __WorldContext, float* SoundEffectsVolume);
		bool Save_SoundEffectsVolume(float SoundEffectsVolume, class UObject* __WorldContext);
		bool Load_DialogueVolume_HijackForUI(class UObject* __WorldContext, float* DialogueVolume);
		bool Save_DialogueVolume_HijackForUI(float DialogueVolume, class UObject* __WorldContext);
		bool Load_MusicVolume(class UObject* __WorldContext, float* MusicVolume);
		bool Save_MusicVolume(float MusicVolume, class UObject* __WorldContext);
		bool Load_MasterVolume(class UObject* __WorldContext, float* MasterVolume);
		bool Save_MasterVolume(float MasterVolume, class UObject* __WorldContext);
		bool LoadPostProcessQuality(class UObject* __WorldContext, int32_t* PostProcessQuality);
		bool SavePostProcessQuality(int32_t PostProcessQuality, class UObject* __WorldContext);
		bool LoadViewDistance(class UObject* __WorldContext, int32_t* ViewDistanceQuality);
		bool SaveViewDistance(int32_t ViewDistanceQuality, class UObject* __WorldContext);
		bool LoadFoliageQuality(class UObject* __WorldContext, int32_t* FoliageQuality);
		bool SaveFoliageQuality(int32_t FoliageQuality, class UObject* __WorldContext);
		bool LoadAAQuality(class UObject* __WorldContext, int32_t* AAQuality);
		bool SaveAAQuality(int32_t AAQuality, class UObject* __WorldContext);
		bool LoadVisualEffectsQuality(class UObject* __WorldContext, int32_t* VisualEffectsQuality);
		bool SaveVisualEffectsQuality(int32_t VisualEffectsQuality, class UObject* __WorldContext);
		bool LoadShadowQuality(class UObject* __WorldContext, int32_t* ShadowQuality);
		bool SaveShadowQuality(int32_t ShadowQuality, class UObject* __WorldContext);
		bool LoadTextureQuality(class UObject* __WorldContext, int32_t* TextureQuality);
		bool SaveTextureQuality(int32_t TextureQuality, class UObject* __WorldContext);
		bool LoadVsync(class UObject* __WorldContext, bool* VerticalSync);
		bool SaveVsync(bool VerticalSync, class UObject* __WorldContext);
		bool LoadFrameRateLimit(class UObject* __WorldContext, float* FrameRateLimit);
		bool SaveFrameRateLimit(float FrameRateLimit, class UObject* __WorldContext);
		bool LoadDynamicResolution(class UObject* __WorldContext, bool* DynamicResolution);
		bool SaveDynamicResolution(bool DynamicResolution, class UObject* __WorldContext);
		bool LoadResolutionScale(class UObject* __WorldContext, float* ResolutionScale);
		bool SaveResolutionScale(float ResolutionScale, class UObject* __WorldContext);
		void LoadAndApplyGraphicSettings(bool SetDefaultValues, bool bUseBenchmarkTest, class UObject* __WorldContext);
		bool LoadWindowMode(class UObject* __WorldContext, EWindowMode* WindowMode);
		bool SaveWindowMode(EWindowMode WindowMode, class UObject* __WorldContext);
		bool DeleteVideoSettingsSave(class UObject* __WorldContext);
		bool LoadScreenResolution(class UObject* __WorldContext, struct FIntPoint* ScreenResolution);
		bool DoesVideoSettingsSaveExist(class UObject* __WorldContext);
		bool SaveScreenResolution(const struct FIntPoint& ScreenResolution, class UObject* __WorldContext);
		bool LoadAxisMappingScales_Gamepad(class UObject* __WorldContext, TArray<float>* AxisMappingScales_Gamepad);
		bool LoadAxisMappingScales_KeyboardMouse(class UObject* __WorldContext, TArray<float>* AxisMappingScales_KeyboardMouse);
		bool SaveAxisMappingScales_Gamepad(TArray<float>* Scales, class UObject* __WorldContext);
		bool SaveAxisMappingScales_KeyboardMouse(TArray<float>* ScaleValues, class UObject* __WorldContext);
		bool LoadAxisMappings_Gamepad(class UObject* __WorldContext, TMap<class FName, struct FKey>* AxisMappings_Gamepad);
		bool LoadAxisMappings_KeyboardMouse(class UObject* __WorldContext, TMap<class FName, struct FKey>* AxisMappings_KeyboardMouse);
		bool LoadActionMappings_Gamepad(class UObject* __WorldContext, TMap<class FName, struct FKey>* ActionMappings_Gamepad);
		bool SaveAxisMappings_Gamepad(TMap<class FName, struct FKey> Map, class UObject* __WorldContext);
		bool SaveAxisMappings_KeyboardMouse(TMap<class FName, struct FKey> Map, class UObject* __WorldContext);
		bool SaveActionMappings_Gamepad(TMap<class FName, struct FKey> Map, class UObject* __WorldContext);
		bool LoadActionMappings_KeyboardMouse(class UObject* __WorldContext, TMap<class FName, struct FKey>* ActionMappings_KeyboardMouse);
		bool SaveActionMappings_KeyboardMouse(TMap<class FName, struct FKey> Map, class UObject* __WorldContext);
		bool DoesInputDefaultsExist(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
