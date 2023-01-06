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
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_ADSType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ADSType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_ADSType(class UObject* __WorldContext, int32_t* ADSType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_ADSType");
		
		UBP_Savegame_Functions_C_Load_ADSType_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ADSType != nullptr)
			*ADSType = params.ADSType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_ADSType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ADS_Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_ADSType(int32_t ADS_Type, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_ADSType");
		
		UBP_Savegame_Functions_C_Save_ADSType_Params params {};
		params.ADS_Type = ADS_Type;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_CrouchType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CrouchType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_CrouchType(class UObject* __WorldContext, int32_t* CrouchType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_CrouchType");
		
		UBP_Savegame_Functions_C_Load_CrouchType_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrouchType != nullptr)
			*CrouchType = params.CrouchType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_CrouchType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CrouchType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_CrouchType(int32_t CrouchType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_CrouchType");
		
		UBP_Savegame_Functions_C_Save_CrouchType_Params params {};
		params.CrouchType = CrouchType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Set_OthersMicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::Set_OthersMicVolume(float Volume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Set_OthersMicVolume");
		
		UBP_Savegame_Functions_C_Set_OthersMicVolume_Params params {};
		params.Volume = Volume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_OthersMicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OthersMicVolume                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_OthersMicVolume(class UObject* __WorldContext, float* OthersMicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_OthersMicVolume");
		
		UBP_Savegame_Functions_C_Load_OthersMicVolume_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OthersMicVolume != nullptr)
			*OthersMicVolume = params.OthersMicVolume;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_OthersMicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OthersMicVolume                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_OthersMicVolume(float OthersMicVolume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_OthersMicVolume");
		
		UBP_Savegame_Functions_C_Save_OthersMicVolume_Params params {};
		params.OthersMicVolume = OthersMicVolume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Set_MyMicrophoneOnOff_Refresh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::Set_MyMicrophoneOnOff_Refresh(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Set_MyMicrophoneOnOff_Refresh");
		
		UBP_Savegame_Functions_C_Set_MyMicrophoneOnOff_Refresh_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MyMicrophoneOnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMyMicrophoneIsOn                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::Load_MyMicrophoneOnOff(class UObject* __WorldContext, bool* bMyMicrophoneIsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MyMicrophoneOnOff");
		
		UBP_Savegame_Functions_C_Load_MyMicrophoneOnOff_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bMyMicrophoneIsOn != nullptr)
			*bMyMicrophoneIsOn = params.bMyMicrophoneIsOn;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MyMicrophoneOnOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMicrophoneOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_MyMicrophoneOnOff(bool bMicrophoneOn, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MyMicrophoneOnOff");
		
		UBP_Savegame_Functions_C_Save_MyMicrophoneOnOff_Params params {};
		params.bMicrophoneOn = bMicrophoneOn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Voice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceUsing                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_Voice(class UObject* __WorldContext, class FName* VoiceUsing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Voice");
		
		UBP_Savegame_Functions_C_Load_Voice_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoiceUsing != nullptr)
			*VoiceUsing = params.VoiceUsing;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Voice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VoiceSetUsing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Voice(const class FName& VoiceSetUsing, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Voice");
		
		UBP_Savegame_Functions_C_Save_Voice_Params params {};
		params.VoiceSetUsing = VoiceSetUsing;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadMotionBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MotionBlur                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadMotionBlur(class UObject* __WorldContext, int32_t* MotionBlur)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadMotionBlur");
		
		UBP_Savegame_Functions_C_LoadMotionBlur_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MotionBlur != nullptr)
			*MotionBlur = params.MotionBlur;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveMotionblur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MotionBlur                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveMotionblur(int32_t MotionBlur, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveMotionblur");
		
		UBP_Savegame_Functions_C_SaveMotionblur_Params params {};
		params.MotionBlur = MotionBlur;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.J_Load_Graphics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            VideoQuality                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::J_Load_Graphics(class UObject* __WorldContext, int32_t* VideoQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.J_Load_Graphics");
		
		UBP_Savegame_Functions_C_J_Load_Graphics_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VideoQuality != nullptr)
			*VideoQuality = params.VideoQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.J_Save_Graphics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewVideoSettingsInt                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::J_Save_Graphics(int32_t NewVideoSettingsInt, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.J_Save_Graphics");
		
		UBP_Savegame_Functions_C_J_Save_Graphics_Params params {};
		params.NewVideoSettingsInt = NewVideoSettingsInt;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.J_SetGraphicsSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetDefaultValues                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseBenchmarkTest                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Int                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::J_SetGraphicsSettings(bool SetDefaultValues, bool bUseBenchmarkTest, int32_t Int, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.J_SetGraphicsSettings");
		
		UBP_Savegame_Functions_C_J_SetGraphicsSettings_Params params {};
		params.SetDefaultValues = SetDefaultValues;
		params.bUseBenchmarkTest = bUseBenchmarkTest;
		params.Int = Int;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyControlSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetDefaultValues                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::LoadAndApplyControlSettings(bool SetDefaultValues, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyControlSettings");
		
		UBP_Savegame_Functions_C_LoadAndApplyControlSettings_Params params {};
		params.SetDefaultValues = SetDefaultValues;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Invert_Y                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::Load_Invert_Y(class UObject* __WorldContext, bool* Invert_Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_Y");
		
		UBP_Savegame_Functions_C_Load_Invert_Y_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Invert_Y != nullptr)
			*Invert_Y = params.Invert_Y;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_Y
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InvertY                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Invert_Y(bool InvertY, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_Y");
		
		UBP_Savegame_Functions_C_Save_Invert_Y_Params params {};
		params.InvertY = InvertY;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Invert_X                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::Load_Invert_X(class UObject* __WorldContext, bool* Invert_X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Invert_X");
		
		UBP_Savegame_Functions_C_Load_Invert_X_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Invert_X != nullptr)
			*Invert_X = params.Invert_X;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_X
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InvertX                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Invert_X(bool InvertX, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Invert_X");
		
		UBP_Savegame_Functions_C_Save_Invert_X_Params params {};
		params.InvertX = InvertX;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sensitivity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_Sensitivity04(class UObject* __WorldContext, float* Sensitivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity04");
		
		UBP_Savegame_Functions_C_Load_Sensitivity04_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sensitivity != nullptr)
			*Sensitivity = params.Sensitivity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity04
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sensitivity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Sensitivity04(float Sensitivity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity04");
		
		UBP_Savegame_Functions_C_Save_Sensitivity04_Params params {};
		params.Sensitivity = Sensitivity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity03
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sensitivity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_Sensitivity03(class UObject* __WorldContext, float* Sensitivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity03");
		
		UBP_Savegame_Functions_C_Load_Sensitivity03_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sensitivity != nullptr)
			*Sensitivity = params.Sensitivity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity03
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sensitivity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Sensitivity03(float Sensitivity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity03");
		
		UBP_Savegame_Functions_C_Save_Sensitivity03_Params params {};
		params.Sensitivity = Sensitivity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sensitivity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_Sensitivity02(class UObject* __WorldContext, float* Sensitivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity02");
		
		UBP_Savegame_Functions_C_Load_Sensitivity02_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sensitivity != nullptr)
			*Sensitivity = params.Sensitivity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity02
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sensitivity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Sensitivity02(float Sensitivity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity02");
		
		UBP_Savegame_Functions_C_Save_Sensitivity02_Params params {};
		params.Sensitivity = Sensitivity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Sensitivity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_Sensitivity01(class UObject* __WorldContext, float* Sensitivity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Sensitivity01");
		
		UBP_Savegame_Functions_C_Load_Sensitivity01_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sensitivity != nullptr)
			*Sensitivity = params.Sensitivity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Sensitivity                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Sensitivity01(float Sensitivity, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Sensitivity01");
		
		UBP_Savegame_Functions_C_Save_Sensitivity01_Params params {};
		params.Sensitivity = Sensitivity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesControlSettingsSaveExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DoesControlSettingsSaveExist(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesControlSettingsSaveExist");
		
		UBP_Savegame_Functions_C_DoesControlSettingsSaveExist_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteControlSettingsSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DeleteControlSettingsSave(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteControlSettingsSave");
		
		UBP_Savegame_Functions_C_DeleteControlSettingsSave_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.ActivateSoundMixes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::ActivateSoundMixes(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.ActivateSoundMixes");
		
		UBP_Savegame_Functions_C_ActivateSoundMixes_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.FindVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBP_Savegame_Functions_C::FindVolume(float Volume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.FindVolume");
		
		UBP_Savegame_Functions_C_FindVolume_Params params {};
		params.Volume = Volume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetMusicOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMusicOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::SetMusicOn(bool bMusicOn, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetMusicOn");
		
		UBP_Savegame_Functions_C_SetMusicOn_Params params {};
		params.bMusicOn = bMusicOn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetOutputProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutputProfile                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::SetOutputProfile(int32_t OutputProfile, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetOutputProfile");
		
		UBP_Savegame_Functions_C_SetOutputProfile_Params params {};
		params.OutputProfile = OutputProfile;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_SoundEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::SetVolume_SoundEffects(float Volume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_SoundEffects");
		
		UBP_Savegame_Functions_C_SetVolume_SoundEffects_Params params {};
		params.Volume = Volume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Dialogue_HijackForUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::SetVolume_Dialogue_HijackForUI(float Volume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Dialogue_HijackForUI");
		
		UBP_Savegame_Functions_C_SetVolume_Dialogue_HijackForUI_Params params {};
		params.Volume = Volume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Music
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::SetVolume_Music(float Volume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Music");
		
		UBP_Savegame_Functions_C_SetVolume_Music_Params params {};
		params.Volume = Volume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::SetVolume_Master(float Volume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SetVolume_Master");
		
		UBP_Savegame_Functions_C_SetVolume_Master_Params params {};
		params.Volume = Volume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyAudioSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetDefaultValues                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::LoadAndApplyAudioSettings(bool SetDefaultValues, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyAudioSettings");
		
		UBP_Savegame_Functions_C_LoadAndApplyAudioSettings_Params params {};
		params.SetDefaultValues = SetDefaultValues;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesAudioSettingsSaveExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DoesAudioSettingsSaveExist(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesAudioSettingsSaveExist");
		
		UBP_Savegame_Functions_C_DoesAudioSettingsSaveExist_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteAudioSettingsSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DeleteAudioSettingsSave(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteAudioSettingsSave");
		
		UBP_Savegame_Functions_C_DeleteAudioSettingsSave_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Subtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSubtitles                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::Load_Subtitles(class UObject* __WorldContext, bool* bSubtitles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_Subtitles");
		
		UBP_Savegame_Functions_C_Load_Subtitles_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSubtitles != nullptr)
			*bSubtitles = params.bSubtitles;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Subtitles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSubtitles                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_Subtitles(bool bSubtitles, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_Subtitles");
		
		UBP_Savegame_Functions_C_Save_Subtitles_Params params {};
		params.bSubtitles = bSubtitles;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMusic                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::Load_MusicOn(class UObject* __WorldContext, bool* bMusic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicOn");
		
		UBP_Savegame_Functions_C_Load_MusicOn_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bMusic != nullptr)
			*bMusic = params.bMusic;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMusic                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_MusicOn(bool bMusic, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicOn");
		
		UBP_Savegame_Functions_C_Save_MusicOn_Params params {};
		params.bMusic = bMusic;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_OutputProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutputProfile                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_OutputProfile(class UObject* __WorldContext, int32_t* OutputProfile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_OutputProfile");
		
		UBP_Savegame_Functions_C_Load_OutputProfile_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputProfile != nullptr)
			*OutputProfile = params.OutputProfile;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_OutputProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutputProfile                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_OutputProfile(int32_t OutputProfile, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_OutputProfile");
		
		UBP_Savegame_Functions_C_Save_OutputProfile_Params params {};
		params.OutputProfile = OutputProfile;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_SoundEffectsVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              SoundEffectsVolume                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_SoundEffectsVolume(class UObject* __WorldContext, float* SoundEffectsVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_SoundEffectsVolume");
		
		UBP_Savegame_Functions_C_Load_SoundEffectsVolume_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoundEffectsVolume != nullptr)
			*SoundEffectsVolume = params.SoundEffectsVolume;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_SoundEffectsVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              SoundEffectsVolume                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_SoundEffectsVolume(float SoundEffectsVolume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_SoundEffectsVolume");
		
		UBP_Savegame_Functions_C_Save_SoundEffectsVolume_Params params {};
		params.SoundEffectsVolume = SoundEffectsVolume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_DialogueVolume_HijackForUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DialogueVolume                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_DialogueVolume_HijackForUI(class UObject* __WorldContext, float* DialogueVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_DialogueVolume_HijackForUI");
		
		UBP_Savegame_Functions_C_Load_DialogueVolume_HijackForUI_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DialogueVolume != nullptr)
			*DialogueVolume = params.DialogueVolume;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_DialogueVolume_HijackForUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DialogueVolume                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_DialogueVolume_HijackForUI(float DialogueVolume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_DialogueVolume_HijackForUI");
		
		UBP_Savegame_Functions_C_Save_DialogueVolume_HijackForUI_Params params {};
		params.DialogueVolume = DialogueVolume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MusicVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_MusicVolume(class UObject* __WorldContext, float* MusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MusicVolume");
		
		UBP_Savegame_Functions_C_Load_MusicVolume_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MusicVolume != nullptr)
			*MusicVolume = params.MusicVolume;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MusicVolume                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_MusicVolume(float MusicVolume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MusicVolume");
		
		UBP_Savegame_Functions_C_Save_MusicVolume_Params params {};
		params.MusicVolume = MusicVolume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MasterVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MasterVolume                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Load_MasterVolume(class UObject* __WorldContext, float* MasterVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Load_MasterVolume");
		
		UBP_Savegame_Functions_C_Load_MasterVolume_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MasterVolume != nullptr)
			*MasterVolume = params.MasterVolume;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MasterVolume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              MasterVolume                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::Save_MasterVolume(float MasterVolume, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.Save_MasterVolume");
		
		UBP_Savegame_Functions_C_Save_MasterVolume_Params params {};
		params.MasterVolume = MasterVolume;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadPostProcessQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PostProcessQuality                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadPostProcessQuality(class UObject* __WorldContext, int32_t* PostProcessQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadPostProcessQuality");
		
		UBP_Savegame_Functions_C_LoadPostProcessQuality_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PostProcessQuality != nullptr)
			*PostProcessQuality = params.PostProcessQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SavePostProcessQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PostProcessQuality                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SavePostProcessQuality(int32_t PostProcessQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SavePostProcessQuality");
		
		UBP_Savegame_Functions_C_SavePostProcessQuality_Params params {};
		params.PostProcessQuality = PostProcessQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadViewDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ViewDistanceQuality                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadViewDistance(class UObject* __WorldContext, int32_t* ViewDistanceQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadViewDistance");
		
		UBP_Savegame_Functions_C_LoadViewDistance_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ViewDistanceQuality != nullptr)
			*ViewDistanceQuality = params.ViewDistanceQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveViewDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ViewDistanceQuality                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveViewDistance(int32_t ViewDistanceQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveViewDistance");
		
		UBP_Savegame_Functions_C_SaveViewDistance_Params params {};
		params.ViewDistanceQuality = ViewDistanceQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFoliageQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FoliageQuality                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadFoliageQuality(class UObject* __WorldContext, int32_t* FoliageQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFoliageQuality");
		
		UBP_Savegame_Functions_C_LoadFoliageQuality_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoliageQuality != nullptr)
			*FoliageQuality = params.FoliageQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFoliageQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            FoliageQuality                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveFoliageQuality(int32_t FoliageQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFoliageQuality");
		
		UBP_Savegame_Functions_C_SaveFoliageQuality_Params params {};
		params.FoliageQuality = FoliageQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAAQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AAQuality                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadAAQuality(class UObject* __WorldContext, int32_t* AAQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAAQuality");
		
		UBP_Savegame_Functions_C_LoadAAQuality_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AAQuality != nullptr)
			*AAQuality = params.AAQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAAQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AAQuality                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveAAQuality(int32_t AAQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAAQuality");
		
		UBP_Savegame_Functions_C_SaveAAQuality_Params params {};
		params.AAQuality = AAQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVisualEffectsQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            VisualEffectsQuality                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadVisualEffectsQuality(class UObject* __WorldContext, int32_t* VisualEffectsQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVisualEffectsQuality");
		
		UBP_Savegame_Functions_C_LoadVisualEffectsQuality_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VisualEffectsQuality != nullptr)
			*VisualEffectsQuality = params.VisualEffectsQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVisualEffectsQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            VisualEffectsQuality                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveVisualEffectsQuality(int32_t VisualEffectsQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVisualEffectsQuality");
		
		UBP_Savegame_Functions_C_SaveVisualEffectsQuality_Params params {};
		params.VisualEffectsQuality = VisualEffectsQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadShadowQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ShadowQuality                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadShadowQuality(class UObject* __WorldContext, int32_t* ShadowQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadShadowQuality");
		
		UBP_Savegame_Functions_C_LoadShadowQuality_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShadowQuality != nullptr)
			*ShadowQuality = params.ShadowQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveShadowQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShadowQuality                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveShadowQuality(int32_t ShadowQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveShadowQuality");
		
		UBP_Savegame_Functions_C_SaveShadowQuality_Params params {};
		params.ShadowQuality = ShadowQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadTextureQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TextureQuality                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadTextureQuality(class UObject* __WorldContext, int32_t* TextureQuality)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadTextureQuality");
		
		UBP_Savegame_Functions_C_LoadTextureQuality_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextureQuality != nullptr)
			*TextureQuality = params.TextureQuality;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveTextureQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextureQuality                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveTextureQuality(int32_t TextureQuality, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveTextureQuality");
		
		UBP_Savegame_Functions_C_SaveTextureQuality_Params params {};
		params.TextureQuality = TextureQuality;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               VerticalSync                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::LoadVsync(class UObject* __WorldContext, bool* VerticalSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadVsync");
		
		UBP_Savegame_Functions_C_LoadVsync_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VerticalSync != nullptr)
			*VerticalSync = params.VerticalSync;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVsync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VerticalSync                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveVsync(bool VerticalSync, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveVsync");
		
		UBP_Savegame_Functions_C_SaveVsync_Params params {};
		params.VerticalSync = VerticalSync;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFrameRateLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FrameRateLimit                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadFrameRateLimit(class UObject* __WorldContext, float* FrameRateLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadFrameRateLimit");
		
		UBP_Savegame_Functions_C_LoadFrameRateLimit_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrameRateLimit != nullptr)
			*FrameRateLimit = params.FrameRateLimit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFrameRateLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              FrameRateLimit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveFrameRateLimit(float FrameRateLimit, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveFrameRateLimit");
		
		UBP_Savegame_Functions_C_SaveFrameRateLimit_Params params {};
		params.FrameRateLimit = FrameRateLimit;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadDynamicResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DynamicResolution                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBP_Savegame_Functions_C::LoadDynamicResolution(class UObject* __WorldContext, bool* DynamicResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadDynamicResolution");
		
		UBP_Savegame_Functions_C_LoadDynamicResolution_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DynamicResolution != nullptr)
			*DynamicResolution = params.DynamicResolution;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveDynamicResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DynamicResolution                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveDynamicResolution(bool DynamicResolution, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveDynamicResolution");
		
		UBP_Savegame_Functions_C_SaveDynamicResolution_Params params {};
		params.DynamicResolution = DynamicResolution;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadResolutionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ResolutionScale                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadResolutionScale(class UObject* __WorldContext, float* ResolutionScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadResolutionScale");
		
		UBP_Savegame_Functions_C_LoadResolutionScale_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResolutionScale != nullptr)
			*ResolutionScale = params.ResolutionScale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveResolutionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ResolutionScale                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveResolutionScale(float ResolutionScale, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveResolutionScale");
		
		UBP_Savegame_Functions_C_SaveResolutionScale_Params params {};
		params.ResolutionScale = ResolutionScale;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyGraphicSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SetDefaultValues                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUseBenchmarkTest                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Savegame_Functions_C::LoadAndApplyGraphicSettings(bool SetDefaultValues, bool bUseBenchmarkTest, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAndApplyGraphicSettings");
		
		UBP_Savegame_Functions_C_LoadAndApplyGraphicSettings_Params params {};
		params.SetDefaultValues = SetDefaultValues;
		params.bUseBenchmarkTest = bUseBenchmarkTest;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadWindowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EWindowMode                                        WindowMode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadWindowMode(class UObject* __WorldContext, EWindowMode* WindowMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadWindowMode");
		
		UBP_Savegame_Functions_C_LoadWindowMode_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WindowMode != nullptr)
			*WindowMode = params.WindowMode;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveWindowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowMode                                        WindowMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveWindowMode(EWindowMode WindowMode, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveWindowMode");
		
		UBP_Savegame_Functions_C_SaveWindowMode_Params params {};
		params.WindowMode = WindowMode;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteVideoSettingsSave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DeleteVideoSettingsSave(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DeleteVideoSettingsSave");
		
		UBP_Savegame_Functions_C_DeleteVideoSettingsSave_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadScreenResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntPoint                                   ScreenResolution                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::LoadScreenResolution(class UObject* __WorldContext, struct FIntPoint* ScreenResolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadScreenResolution");
		
		UBP_Savegame_Functions_C_LoadScreenResolution_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenResolution != nullptr)
			*ScreenResolution = params.ScreenResolution;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesVideoSettingsSaveExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DoesVideoSettingsSaveExist(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesVideoSettingsSaveExist");
		
		UBP_Savegame_Functions_C_DoesVideoSettingsSaveExist_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveScreenResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   ScreenResolution                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveScreenResolution(const struct FIntPoint& ScreenResolution, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveScreenResolution");
		
		UBP_Savegame_Functions_C_SaveScreenResolution_Params params {};
		params.ScreenResolution = ScreenResolution;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      AxisMappingScales_Gamepad                                  (Parm, OutParm)
	 */
	bool UBP_Savegame_Functions_C::LoadAxisMappingScales_Gamepad(class UObject* __WorldContext, TArray<float>* AxisMappingScales_Gamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_Gamepad");
		
		UBP_Savegame_Functions_C_LoadAxisMappingScales_Gamepad_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AxisMappingScales_Gamepad != nullptr)
			*AxisMappingScales_Gamepad = params.AxisMappingScales_Gamepad;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_KeyboardMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      AxisMappingScales_KeyboardMouse                            (Parm, OutParm)
	 */
	bool UBP_Savegame_Functions_C::LoadAxisMappingScales_KeyboardMouse(class UObject* __WorldContext, TArray<float>* AxisMappingScales_KeyboardMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappingScales_KeyboardMouse");
		
		UBP_Savegame_Functions_C_LoadAxisMappingScales_KeyboardMouse_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AxisMappingScales_KeyboardMouse != nullptr)
			*AxisMappingScales_KeyboardMouse = params.AxisMappingScales_KeyboardMouse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      Scales                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveAxisMappingScales_Gamepad(TArray<float>* Scales, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_Gamepad");
		
		UBP_Savegame_Functions_C_SaveAxisMappingScales_Gamepad_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scales != nullptr)
			*Scales = params.Scales;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_KeyboardMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<float>                                      ScaleValues                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveAxisMappingScales_KeyboardMouse(TArray<float>* ScaleValues, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappingScales_KeyboardMouse");
		
		UBP_Savegame_Functions_C_SaveAxisMappingScales_KeyboardMouse_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScaleValues != nullptr)
			*ScaleValues = params.ScaleValues;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FKey>                     AxisMappings_Gamepad                                       (Parm, OutParm)
	 */
	bool UBP_Savegame_Functions_C::LoadAxisMappings_Gamepad(class UObject* __WorldContext, TMap<class FName, struct FKey>* AxisMappings_Gamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_Gamepad");
		
		UBP_Savegame_Functions_C_LoadAxisMappings_Gamepad_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AxisMappings_Gamepad != nullptr)
			*AxisMappings_Gamepad = params.AxisMappings_Gamepad;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_KeyboardMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FKey>                     AxisMappings_KeyboardMouse                                 (Parm, OutParm)
	 */
	bool UBP_Savegame_Functions_C::LoadAxisMappings_KeyboardMouse(class UObject* __WorldContext, TMap<class FName, struct FKey>* AxisMappings_KeyboardMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadAxisMappings_KeyboardMouse");
		
		UBP_Savegame_Functions_C_LoadAxisMappings_KeyboardMouse_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AxisMappings_KeyboardMouse != nullptr)
			*AxisMappings_KeyboardMouse = params.AxisMappings_KeyboardMouse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FKey>                     ActionMappings_Gamepad                                     (Parm, OutParm)
	 */
	bool UBP_Savegame_Functions_C::LoadActionMappings_Gamepad(class UObject* __WorldContext, TMap<class FName, struct FKey>* ActionMappings_Gamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_Gamepad");
		
		UBP_Savegame_Functions_C_LoadActionMappings_Gamepad_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionMappings_Gamepad != nullptr)
			*ActionMappings_Gamepad = params.ActionMappings_Gamepad;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKey>                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveAxisMappings_Gamepad(TMap<class FName, struct FKey> Map, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_Gamepad");
		
		UBP_Savegame_Functions_C_SaveAxisMappings_Gamepad_Params params {};
		params.Map = Map;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_KeyboardMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKey>                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveAxisMappings_KeyboardMouse(TMap<class FName, struct FKey> Map, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveAxisMappings_KeyboardMouse");
		
		UBP_Savegame_Functions_C_SaveAxisMappings_KeyboardMouse_Params params {};
		params.Map = Map;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_Gamepad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKey>                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveActionMappings_Gamepad(TMap<class FName, struct FKey> Map, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_Gamepad");
		
		UBP_Savegame_Functions_C_SaveActionMappings_Gamepad_Params params {};
		params.Map = Map;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_KeyboardMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FName, struct FKey>                     ActionMappings_KeyboardMouse                               (Parm, OutParm)
	 */
	bool UBP_Savegame_Functions_C::LoadActionMappings_KeyboardMouse(class UObject* __WorldContext, TMap<class FName, struct FKey>* ActionMappings_KeyboardMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.LoadActionMappings_KeyboardMouse");
		
		UBP_Savegame_Functions_C_LoadActionMappings_KeyboardMouse_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActionMappings_KeyboardMouse != nullptr)
			*ActionMappings_KeyboardMouse = params.ActionMappings_KeyboardMouse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_KeyboardMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<class FName, struct FKey>                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::SaveActionMappings_KeyboardMouse(TMap<class FName, struct FKey> Map, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.SaveActionMappings_KeyboardMouse");
		
		UBP_Savegame_Functions_C_SaveActionMappings_KeyboardMouse_Params params {};
		params.Map = Map;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesInputDefaultsExist
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Savegame_Functions_C::DoesInputDefaultsExist(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Savegame_Functions.BP_Savegame_Functions_C.DoesInputDefaultsExist");
		
		UBP_Savegame_Functions_C_DoesInputDefaultsExist_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Savegame_Functions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Savegame_Functions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Savegame_Functions.BP_Savegame_Functions_C");
		return ptr;
	}

}


