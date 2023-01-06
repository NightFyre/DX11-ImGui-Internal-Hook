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
	 * 		RVA    -> 0x01BD57F0
	 * 		Name   -> Function MediaAssets.MediaSource.Validate
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaSource::Validate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");
		
		UMediaSource_Validate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B162F0
	 * 		Name   -> Function MediaAssets.MediaSource.GetURL
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UMediaSource::GetURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetURL");
		
		UMediaSource_GetURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6820
	 * 		Name   -> Function MediaAssets.FileMediaSource.SetFilePath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFileMediaSource::SetFilePath(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");
		
		UFileMediaSource_SetFilePath_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4310
	 * 		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaBlueprintFunctionLibrary::STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");
		
		UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDevices != nullptr)
			*OutDevices = params.OutDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4230
	 * 		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaBlueprintFunctionLibrary::STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");
		
		UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDevices != nullptr)
			*OutDevices = params.OutDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4150
	 * 		Name   -> Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FMediaCaptureDevice>                 OutDevices                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Filter                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaBlueprintFunctionLibrary::STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");
		
		UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params {};
		params.Filter = Filter;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDevices != nullptr)
			*OutDevices = params.OutDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA7200
	 * 		Name   -> Function MediaAssets.MediaPlayer.SupportsSeeking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::SupportsSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsSeeking");
		
		UMediaPlayer_SupportsSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA71D0
	 * 		Name   -> Function MediaAssets.MediaPlayer.SupportsScrubbing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::SupportsScrubbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsScrubbing");
		
		UMediaPlayer_SupportsScrubbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA7100
	 * 		Name   -> Function MediaAssets.MediaPlayer.SupportsRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SupportsRate(float Rate, bool Unthinned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SupportsRate");
		
		UMediaPlayer_SupportsRate_Params params {};
		params.Rate = Rate;
		params.Unthinned = Unthinned;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA7020
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetViewRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetViewRotation(const struct FRotator& Rotation, bool Absolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewRotation");
		
		UMediaPlayer_SetViewRotation_Params params {};
		params.Rotation = Rotation;
		params.Absolute = Absolute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6F10
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetViewField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Horizontal                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Vertical                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Absolute                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetViewField(float Horizontal, float Vertical, bool Absolute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetViewField");
		
		UMediaPlayer_SetViewField_Params params {};
		params.Horizontal = Horizontal;
		params.Vertical = Vertical;
		params.Absolute = Absolute;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6E10
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FrameRate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate");
		
		UMediaPlayer_SetVideoTrackFrameRate_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		params.FrameRate = FrameRate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6D10
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetTrackFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTrackFormat");
		
		UMediaPlayer_SetTrackFormat_Params params {};
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6C90
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetTimeDelay
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   TimeDelay                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetTimeDelay(const struct FTimespan& TimeDelay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetTimeDelay");
		
		UMediaPlayer_SetTimeDelay_Params params {};
		params.TimeDelay = TimeDelay;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6AE0
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetRate");
		
		UMediaPlayer_SetRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6A50
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetNativeVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetNativeVolume(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetNativeVolume");
		
		UMediaPlayer_SetNativeVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA68C0
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Looping                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SetLooping(bool Looping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetLooping");
		
		UMediaPlayer_SetLooping_Params params {};
		params.Looping = Looping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA65C0
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        PlayerName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetDesiredPlayerName(const class FName& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetDesiredPlayerName");
		
		UMediaPlayer_SetDesiredPlayerName_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6530
	 * 		Name   -> Function MediaAssets.MediaPlayer.SetBlockOnTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::SetBlockOnTime(const struct FTimespan& Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SetBlockOnTime");
		
		UMediaPlayer_SetBlockOnTime_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6470
	 * 		Name   -> Function MediaAssets.MediaPlayer.SelectTrack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.SelectTrack");
		
		UMediaPlayer_SelectTrack_Params params {};
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA63D0
	 * 		Name   -> Function MediaAssets.MediaPlayer.Seek
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   Time                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::Seek(const struct FTimespan& Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Seek");
		
		UMediaPlayer_Seek_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA63A0
	 * 		Name   -> Function MediaAssets.MediaPlayer.Rewind
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlayer::Rewind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Rewind");
		
		UMediaPlayer_Rewind_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA62B0
	 * 		Name   -> Function MediaAssets.MediaPlayer.Reopen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlayer::Reopen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Reopen");
		
		UMediaPlayer_Reopen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6160
	 * 		Name   -> Function MediaAssets.MediaPlayer.Previous
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlayer::Previous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Previous");
		
		UMediaPlayer_Previous_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6130
	 * 		Name   -> Function MediaAssets.MediaPlayer.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlayer::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Play");
		
		UMediaPlayer_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6100
	 * 		Name   -> Function MediaAssets.MediaPlayer.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlayer::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Pause");
		
		UMediaPlayer_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6050
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenURL");
		
		UMediaPlayer_OpenURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5F50
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceWithOptions");
		
		UMediaPlayer_OpenSourceWithOptions_Params params {};
		params.MediaSource = MediaSource;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5D60
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenSourceLatent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMediaPlayerOptions                         Options                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::OpenSourceLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options, bool* bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSourceLatent");
		
		UMediaPlayer_OpenSourceLatent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.MediaSource = MediaSource;
		params.Options = Options;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5CD0
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenSource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenSource(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenSource");
		
		UMediaPlayer_OpenSource_Params params {};
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5C10
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylistIndex");
		
		UMediaPlayer_OpenPlaylistIndex_Params params {};
		params.InPlaylist = InPlaylist;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5B70
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenPlaylist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaPlaylist*                              InPlaylist                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenPlaylist(class UMediaPlaylist* InPlaylist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenPlaylist");
		
		UMediaPlayer_OpenPlaylist_Params params {};
		params.InPlaylist = InPlaylist;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5AC0
	 * 		Name   -> Function MediaAssets.MediaPlayer.OpenFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::OpenFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.OpenFile");
		
		UMediaPlayer_OpenFile_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5A70
	 * 		Name   -> Function MediaAssets.MediaPlayer.Next
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UMediaPlayer::Next()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Next");
		
		UMediaPlayer_Next_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5A40
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsReady");
		
		UMediaPlayer_IsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5A10
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsPreparing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsPreparing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPreparing");
		
		UMediaPlayer_IsPreparing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA59E0
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPlaying");
		
		UMediaPlayer_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA59B0
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsPaused");
		
		UMediaPlayer_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5980
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsLooping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsLooping");
		
		UMediaPlayer_IsLooping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5950
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsConnecting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsConnecting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsConnecting");
		
		UMediaPlayer_IsConnecting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5920
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsClosed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsClosed");
		
		UMediaPlayer_IsClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA58F0
	 * 		Name   -> Function MediaAssets.MediaPlayer.IsBuffering
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::IsBuffering()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.IsBuffering");
		
		UMediaPlayer_IsBuffering_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5800
	 * 		Name   -> Function MediaAssets.MediaPlayer.HasError
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::HasError()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.HasError");
		
		UMediaPlayer_HasError_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5790
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetViewRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator UMediaPlayer::GetViewRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetViewRotation");
		
		UMediaPlayer_GetViewRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5690
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMediaPlayer::GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackType");
		
		UMediaPlayer_GetVideoTrackType_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA55C0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FFloatRange UMediaPlayer::GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates");
		
		UMediaPlayer_GetVideoTrackFrameRates_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5500
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMediaPlayer::GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate");
		
		UMediaPlayer_GetVideoTrackFrameRate_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5430
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UMediaPlayer::GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackDimensions");
		
		UMediaPlayer_GetVideoTrackDimensions_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5370
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMediaPlayer::GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio");
		
		UMediaPlayer_GetVideoTrackAspectRatio_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5340
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMediaPlayer::GetVerticalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetVerticalFieldOfView");
		
		UMediaPlayer_GetVerticalFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5300
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UMediaPlayer::GetURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetURL");
		
		UMediaPlayer_GetURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA51F0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTrackLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMediaPlayer::GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackLanguage");
		
		UMediaPlayer_GetTrackLanguage_Params params {};
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5130
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTrackFormat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackFormat");
		
		UMediaPlayer_GetTrackFormat_Params params {};
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5010
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTrackDisplayName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FText UMediaPlayer::GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTrackDisplayName");
		
		UMediaPlayer_GetTrackDisplayName_Params params {};
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4FD0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTimeDelay
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UMediaPlayer::GetTimeDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTimeDelay");
		
		UMediaPlayer_GetTimeDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4F90
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UMediaPlayer::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetTime");
		
		UMediaPlayer_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4E90
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetSupportedRates
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<struct FFloatRange>                         OutRates                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlayer::GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSupportedRates");
		
		UMediaPlayer_GetSupportedRates_Params params {};
		params.Unthinned = Unthinned;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutRates != nullptr)
			*OutRates = params.OutRates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4D80
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetSelectedTrack
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetSelectedTrack(EMediaPlayerTrack TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetSelectedTrack");
		
		UMediaPlayer_GetSelectedTrack_Params params {};
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4D50
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMediaPlayer::GetRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetRate");
		
		UMediaPlayer_GetRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4BF0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetPlaylistIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMediaPlayer::GetPlaylistIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylistIndex");
		
		UMediaPlayer_GetPlaylistIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B0A0F0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetPlaylist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMediaPlaylist* UMediaPlayer::GetPlaylist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlaylist");
		
		UMediaPlayer_GetPlaylist_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4BB0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetPlayerName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UMediaPlayer::GetPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetPlayerName");
		
		UMediaPlayer_GetPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4B20
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetNumTracks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetNumTracks(EMediaPlayerTrack TrackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTracks");
		
		UMediaPlayer_GetNumTracks_Params params {};
		params.TrackType = TrackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4A60
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetNumTrackFormats
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		EMediaPlayerTrack                                  TrackType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetNumTrackFormats");
		
		UMediaPlayer_GetNumTrackFormats_Params params {};
		params.TrackType = TrackType;
		params.TrackIndex = TrackIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA48C0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetMediaName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UMediaPlayer::GetMediaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetMediaName");
		
		UMediaPlayer_GetMediaName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4880
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UMediaPlayer::GetLastVideoSampleProcessedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastVideoSampleProcessedTime");
		
		UMediaPlayer_GetLastVideoSampleProcessedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4840
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UMediaPlayer::GetLastAudioSampleProcessedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetLastAudioSampleProcessedTime");
		
		UMediaPlayer_GetLastAudioSampleProcessedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4810
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMediaPlayer::GetHorizontalFieldOfView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView");
		
		UMediaPlayer_GetHorizontalFieldOfView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4770
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetDuration
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UMediaPlayer::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDuration");
		
		UMediaPlayer_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4730
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UMediaPlayer::GetDesiredPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetDesiredPlayerName");
		
		UMediaPlayer_GetDesiredPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4630
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMediaPlayer::GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackType");
		
		UMediaPlayer_GetAudioTrackType_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4570
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate");
		
		UMediaPlayer_GetAudioTrackSampleRate_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA44B0
	 * 		Name   -> Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            TrackIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FormatIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMediaPlayer::GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.GetAudioTrackChannels");
		
		UMediaPlayer_GetAudioTrackChannels_Params params {};
		params.TrackIndex = TrackIndex;
		params.FormatIndex = FormatIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4130
	 * 		Name   -> Function MediaAssets.MediaPlayer.Close
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMediaPlayer::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.Close");
		
		UMediaPlayer_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4080
	 * 		Name   -> Function MediaAssets.MediaPlayer.CanPlayUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::CanPlayUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlayUrl");
		
		UMediaPlayer_CanPlayUrl_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA3FF0
	 * 		Name   -> Function MediaAssets.MediaPlayer.CanPlaySource
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlayer::CanPlaySource(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPlaySource");
		
		UMediaPlayer_CanPlaySource_Params params {};
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA3FC0
	 * 		Name   -> Function MediaAssets.MediaPlayer.CanPause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMediaPlayer::CanPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlayer.CanPause");
		
		UMediaPlayer_CanPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA62E0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Replace
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMediaSource*                                Replacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::Replace(int32_t Index, class UMediaSource* Replacement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Replace");
		
		UMediaPlaylist_Replace_Params params {};
		params.Index = Index;
		params.Replacement = Replacement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6220
	 * 		Name   -> Function MediaAssets.MediaPlaylist.RemoveAt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::RemoveAt(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.RemoveAt");
		
		UMediaPlaylist_RemoveAt_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6190
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Remove
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::Remove(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Remove");
		
		UMediaPlaylist_Remove_Params params {};
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5AA0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Num
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UMediaPlaylist::Num()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Num");
		
		UMediaPlaylist_Num_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA5830
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Insert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaPlaylist::Insert(class UMediaSource* MediaSource, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Insert");
		
		UMediaPlaylist_Insert_Params params {};
		params.MediaSource = MediaSource;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4CB0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.GetRandom
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            OutIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::GetRandom(int32_t* OutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetRandom");
		
		UMediaPlaylist_GetRandom_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIndex != nullptr)
			*OutIndex = params.OutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4C10
	 * 		Name   -> Function MediaAssets.MediaPlaylist.GetPrevious
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::GetPrevious(int32_t* InOutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetPrevious");
		
		UMediaPlaylist_GetPrevious_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutIndex != nullptr)
			*InOutIndex = params.InOutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA49C0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.GetNext
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InOutIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::GetNext(int32_t* InOutIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.GetNext");
		
		UMediaPlaylist_GetNext_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutIndex != nullptr)
			*InOutIndex = params.InOutIndex;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA43F0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Get
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMediaSource* UMediaPlaylist::Get(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Get");
		
		UMediaPlaylist_Get_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA3CF0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.AddUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::AddUrl(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddUrl");
		
		UMediaPlaylist_AddUrl_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA3C40
	 * 		Name   -> Function MediaAssets.MediaPlaylist.AddFile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FilePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::AddFile(const class FString& FilePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.AddFile");
		
		UMediaPlaylist_AddFile_Params params {};
		params.FilePath = FilePath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA3BB0
	 * 		Name   -> Function MediaAssets.MediaPlaylist.Add
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaSource*                                MediaSource                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMediaPlaylist::Add(class UMediaSource* MediaSource)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaPlaylist.Add");
		
		UMediaPlaylist_Add_Params params {};
		params.MediaSource = MediaSource;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaPlaylist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaPlaylist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6B70
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<float>                                      InFrequenciesToAnalyze                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMediaSoundComponentFFTSize                        InFFTSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings");
		
		UMediaSoundComponent_SetSpectralAnalysisSettings_Params params {};
		params.InFrequenciesToAnalyze = InFrequenciesToAnalyze;
		params.InFFTSize = InFFTSize;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6950
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetMediaPlayer");
		
		UMediaSoundComponent_SetMediaPlayer_Params params {};
		params.NewMediaPlayer = NewMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6760
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AttackTimeMsec                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ReleaseTimeMsec                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings");
		
		UMediaSoundComponent_SetEnvelopeFollowingsettings_Params params {};
		params.AttackTimeMsec = AttackTimeMsec;
		params.ReleaseTimeMsec = ReleaseTimeMsec;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA66D0
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInSpectralAnalysisEnabled                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis");
		
		UMediaSoundComponent_SetEnableSpectralAnalysis_Params params {};
		params.bInSpectralAnalysisEnabled = bInSpectralAnalysisEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA6640
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bInEnvelopeFollowing                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaSoundComponent::SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing");
		
		UMediaSoundComponent_SetEnableEnvelopeFollowing_Params params {};
		params.bInEnvelopeFollowing = bInEnvelopeFollowing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4E10
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetSpectralData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<struct FMediaSoundComponentSpectralData> UMediaSoundComponent::GetSpectralData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetSpectralData");
		
		UMediaSoundComponent_GetSpectralData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4960
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMediaPlayer* UMediaSoundComponent::GetMediaPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetMediaPlayer");
		
		UMediaSoundComponent_GetMediaPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA47B0
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMediaSoundComponent::GetEnvelopeValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.GetEnvelopeValue");
		
		UMediaSoundComponent_GetEnvelopeValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA3DA0
	 * 		Name   -> Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSoundAttenuationSettings                   OutAttenuationSettings                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UMediaSoundComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply");
		
		UMediaSoundComponent_BP_GetAttenuationSettingsToApply_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAttenuationSettings != nullptr)
			*OutAttenuationSettings = params.OutAttenuationSettings;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaSoundComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaSoundComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA69D0
	 * 		Name   -> Function MediaAssets.MediaTexture.SetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMediaPlayer*                                NewMediaPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMediaTexture::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.SetMediaPlayer");
		
		UMediaTexture_SetMediaPlayer_Params params {};
		params.NewMediaPlayer = NewMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA57D0
	 * 		Name   -> Function MediaAssets.MediaTexture.GetWidth
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMediaTexture::GetWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetWidth");
		
		UMediaTexture_GetWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4990
	 * 		Name   -> Function MediaAssets.MediaTexture.GetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UMediaPlayer* UMediaTexture::GetMediaPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetMediaPlayer");
		
		UMediaTexture_GetMediaPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA47E0
	 * 		Name   -> Function MediaAssets.MediaTexture.GetHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UMediaTexture::GetHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetHeight");
		
		UMediaTexture_GetHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CA4480
	 * 		Name   -> Function MediaAssets.MediaTexture.GetAspectRatio
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UMediaTexture::GetAspectRatio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaTexture.GetAspectRatio");
		
		UMediaTexture_GetAspectRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMediaTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMediaTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlatformMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlatformMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimeSynchronizableMediaSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimeSynchronizableMediaSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}

}


