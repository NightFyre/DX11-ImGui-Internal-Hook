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
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetMotionBlur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MotionBlurSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetMotionBlur(int32_t MotionBlurSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetMotionBlur");
		
		UWB_Options_Video_C_SetMotionBlur_Params params {};
		params.MotionBlurSetting = MotionBlurSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.OnScalabilitySettingsDiffer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDiffer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Video_C::OnScalabilitySettingsDiffer(bool* bDiffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnScalabilitySettingsDiffer");
		
		UWB_Options_Video_C_OnScalabilitySettingsDiffer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDiffer != nullptr)
			*bDiffer = params.bDiffer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.RunAndApplyHardwareBenchmark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WorkScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::RunAndApplyHardwareBenchmark(int32_t WorkScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.RunAndApplyHardwareBenchmark");
		
		UWB_Options_Video_C_RunAndApplyHardwareBenchmark_Params params {};
		params.WorkScale = WorkScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.IsCustom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsCustom                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Video_C::IsCustom(int32_t Index, bool* bIsCustom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsCustom");
		
		UWB_Options_Video_C_IsCustom_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsCustom != nullptr)
			*bIsCustom = params.bIsCustom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetScalabilityButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWB_StateButton_C*>                   Array                                                      (Parm, OutParm, ContainsInstancedReference)
	 */
	void UWB_Options_Video_C::GetScalabilityButtons(TArray<class UWB_StateButton_C*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetScalabilityButtons");
		
		UWB_Options_Video_C_GetScalabilityButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetPostProcessQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetPostProcessQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetPostProcessQuality");
		
		UWB_Options_Video_C_SetPostProcessQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetPostProcessQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetPostProcessQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetPostProcessQuality");
		
		UWB_Options_Video_C_GetPostProcessQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetViewDistanceQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetViewDistanceQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetViewDistanceQuality");
		
		UWB_Options_Video_C_SetViewDistanceQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetViewDistanceQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetViewDistanceQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetViewDistanceQuality");
		
		UWB_Options_Video_C_GetViewDistanceQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetFoliageQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetFoliageQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetFoliageQuality");
		
		UWB_Options_Video_C_SetFoliageQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetFoliageQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetFoliageQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetFoliageQuality");
		
		UWB_Options_Video_C_GetFoliageQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetAAQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetAAQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetAAQuality");
		
		UWB_Options_Video_C_SetAAQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetAAQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetAAQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetAAQuality");
		
		UWB_Options_Video_C_GetAAQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetVisualEffectsQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetVisualEffectsQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetVisualEffectsQuality");
		
		UWB_Options_Video_C_SetVisualEffectsQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetVisualEffectsQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetVisualEffectsQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetVisualEffectsQuality");
		
		UWB_Options_Video_C_GetVisualEffectsQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetShadowQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetShadowQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetShadowQuality");
		
		UWB_Options_Video_C_SetShadowQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetShadowQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetShadowQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetShadowQuality");
		
		UWB_Options_Video_C_GetShadowQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetTextureQuality
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetTextureQuality(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetTextureQuality");
		
		UWB_Options_Video_C_SetTextureQuality_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetTextureQuality
	 * 		Flags  -> ()
	 */
	int32_t UWB_Options_Video_C::GetTextureQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetTextureQuality");
		
		UWB_Options_Video_C_GetTextureQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetVsync
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Video_C::GetVsync()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetVsync");
		
		UWB_Options_Video_C_GetVsync_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetVSync
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Video_C::SetVSync(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetVSync");
		
		UWB_Options_Video_C_SetVSync_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetFrameRateLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              limit                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::GetFrameRateLimit(float* limit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetFrameRateLimit");
		
		UWB_Options_Video_C_GetFrameRateLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (limit != nullptr)
			*limit = params.limit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetFrameRateLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewLimit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetFrameRateLimit(float NewLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetFrameRateLimit");
		
		UWB_Options_Video_C_SetFrameRateLimit_Params params {};
		params.NewLimit = NewLimit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetResolutionScaleNormalized
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScaleNormalized                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetResolutionScaleNormalized(float NewScaleNormalized)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetResolutionScaleNormalized");
		
		UWB_Options_Video_C_SetResolutionScaleNormalized_Params params {};
		params.NewScaleNormalized = NewScaleNormalized;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetResolutionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              NewScaleValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetResolutionScale(float NewScaleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetResolutionScale");
		
		UWB_Options_Video_C_SetResolutionScale_Params params {};
		params.NewScaleValue = NewScaleValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetResolutionScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentScaleNormalized                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentScaleValue                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::GetResolutionScale(float* CurrentScaleNormalized, float* CurrentScaleValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetResolutionScale");
		
		UWB_Options_Video_C_GetResolutionScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentScaleNormalized != nullptr)
			*CurrentScaleNormalized = params.CurrentScaleNormalized;
		if (CurrentScaleValue != nullptr)
			*CurrentScaleValue = params.CurrentScaleValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SaveSettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::SaveSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SaveSettings");
		
		UWB_Options_Video_C_SaveSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ApplyAllSettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ApplyAllSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplyAllSettings");
		
		UWB_Options_Video_C_ApplyAllSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ApplySettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ApplySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplySettings");
		
		UWB_Options_Video_C_ApplySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ApplyNonResolutionSettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ApplyNonResolutionSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplyNonResolutionSettings");
		
		UWB_Options_Video_C_ApplyNonResolutionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.IsScreenResolutionDirty
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Video_C::IsScreenResolutionDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsScreenResolutionDirty");
		
		UWB_Options_Video_C_IsScreenResolutionDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.IsFulllscreenModeDirty
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Video_C::IsFulllscreenModeDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsFulllscreenModeDirty");
		
		UWB_Options_Video_C_IsFulllscreenModeDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetWindowMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWindowMode                                        InFullscreenMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetWindowMode(EWindowMode InFullscreenMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetWindowMode");
		
		UWB_Options_Video_C_SetWindowMode_Params params {};
		params.InFullscreenMode = InFullscreenMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetWindowMode
	 * 		Flags  -> ()
	 */
	EWindowMode UWB_Options_Video_C::GetWindowMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetWindowMode");
		
		UWB_Options_Video_C_GetWindowMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.FindButtonResolutionState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Resolution                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            FoundIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::FindButtonResolutionState(const struct FIntPoint& Resolution, bool* Found, int32_t* FoundIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.FindButtonResolutionState");
		
		UWB_Options_Video_C_FindButtonResolutionState_Params params {};
		params.Resolution = Resolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
		if (FoundIndex != nullptr)
			*FoundIndex = params.FoundIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.TranslateResolutionFromButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FIntPoint                                   IntPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::TranslateResolutionFromButton(const class FName& InName, struct FIntPoint* IntPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.TranslateResolutionFromButton");
		
		UWB_Options_Video_C_TranslateResolutionFromButton_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntPoint != nullptr)
			*IntPoint = params.IntPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetScreenResolutionName
	 * 		Flags  -> ()
	 */
	class FName UWB_Options_Video_C::GetScreenResolutionName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetScreenResolutionName");
		
		UWB_Options_Video_C_GetScreenResolutionName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.HasState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWB_StateButton_C*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasState                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Video_C::HasState(class UWB_StateButton_C* Target, const class FName& Name, bool* HasState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.HasState");
		
		UWB_Options_Video_C_HasState_Params params {};
		params.Target = Target;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasState != nullptr)
			*HasState = params.HasState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ApplyResolutionSettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ApplyResolutionSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ApplyResolutionSettings");
		
		UWB_Options_Video_C_ApplyResolutionSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetDynamicResolutionEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Video_C::SetDynamicResolutionEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetDynamicResolutionEnabled");
		
		UWB_Options_Video_C_SetDynamicResolutionEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionEnabled
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Video_C::IsDynamicResolutionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionEnabled");
		
		UWB_Options_Video_C_IsDynamicResolutionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionDirty
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Video_C::IsDynamicResolutionDirty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.IsDynamicResolutionDirty");
		
		UWB_Options_Video_C_IsDynamicResolutionDirty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetLastConfirmedScreenResolution
	 * 		Flags  -> ()
	 */
	struct FIntPoint UWB_Options_Video_C::GetLastConfirmedScreenResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetLastConfirmedScreenResolution");
		
		UWB_Options_Video_C_GetLastConfirmedScreenResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetScreenResolution
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntPoint                                   Resolution                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::SetScreenResolution(const struct FIntPoint& Resolution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetScreenResolution");
		
		UWB_Options_Video_C_SetScreenResolution_Params params {};
		params.Resolution = Resolution;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetDesktopResolution
	 * 		Flags  -> ()
	 */
	struct FIntPoint UWB_Options_Video_C::GetDesktopResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetDesktopResolution");
		
		UWB_Options_Video_C_GetDesktopResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetScreenResolution
	 * 		Flags  -> ()
	 */
	struct FIntPoint UWB_Options_Video_C::GetScreenResolution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetScreenResolution");
		
		UWB_Options_Video_C_GetScreenResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetUserSettings
	 * 		Flags  -> ()
	 */
	class UGameUserSettings* UWB_Options_Video_C::GetUserSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetUserSettings");
		
		UWB_Options_Video_C_GetUserSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.GetIsGamepad
	 * 		Flags  -> ()
	 */
	bool UWB_Options_Video_C::GetIsGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.GetIsGamepad");
		
		UWB_Options_Video_C_GetIsGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ScrollToCurrentlyFocusedWidget
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ScrollToCurrentlyFocusedWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ScrollToCurrentlyFocusedWidget");
		
		UWB_Options_Video_C_ScrollToCurrentlyFocusedWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.NavToBackButton
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::NavToBackButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.NavToBackButton");
		
		UWB_Options_Video_C_NavToBackButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.NavToOptionsButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::NavToOptionsButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.NavToOptionsButtons");
		
		UWB_Options_Video_C_NavToOptionsButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.NavToTextButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::NavToTextButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.NavToTextButtons");
		
		UWB_Options_Video_C_NavToTextButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.OnPreviewKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UWB_Options_Video_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnPreviewKeyDown");
		
		UWB_Options_Video_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ActivateWidget
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ActivateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ActivateWidget");
		
		UWB_Options_Video_C_ActivateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.OnInputSwitched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::OnInputSwitched(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnInputSwitched");
		
		UWB_Options_Video_C_OnInputSwitched_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.CheckFocus
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::CheckFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.CheckFocus");
		
		UWB_Options_Video_C_CheckFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ClickBack
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::ClickBack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ClickBack");
		
		UWB_Options_Video_C_ClickBack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetGamepadAppearance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_Options_Video_C::SetGamepadAppearance(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetGamepadAppearance");
		
		UWB_Options_Video_C_SetGamepadAppearance_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.HandleRemoveWidget
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::HandleRemoveWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.HandleRemoveWidget");
		
		UWB_Options_Video_C_HandleRemoveWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.OnConfirmReset
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::OnConfirmReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnConfirmReset");
		
		UWB_Options_Video_C_OnConfirmReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetDefaultValues
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::SetDefaultValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetDefaultValues");
		
		UWB_Options_Video_C_SetDefaultValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.InitializeVideoSettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::InitializeVideoSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.InitializeVideoSettings");
		
		UWB_Options_Video_C_InitializeVideoSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_Resolution_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetupButtons
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::SetupButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetupButtons");
		
		UWB_Options_Video_C_SetupButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.CheckSettings
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::CheckSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.CheckSettings");
		
		UWB_Options_Video_C_CheckSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.SetSavedValues
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::SetSavedValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.SetSavedValues");
		
		UWB_Options_Video_C_SetSavedValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_WindowMode_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_ResolutionScale_K2Node_ComponentBoundEvent_0_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_DynamicResolution_K2Node_ComponentBoundEvent_1_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_FrameRateLimit_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_VerticalSync_K2Node_ComponentBoundEvent_3_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_TextureQuality_K2Node_ComponentBoundEvent_4_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_ShadowQuality_K2Node_ComponentBoundEvent_5_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_VisualEffectsQuality_K2Node_ComponentBoundEvent_6_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_AA_Quality_K2Node_ComponentBoundEvent_7_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_FoliageQuality_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_ViewDistance_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_PostProcessQuality_K2Node_ComponentBoundEvent_10_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_OverallQuality_K2Node_ComponentBoundEvent_11_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.OnCancelRequest
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::OnCancelRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnCancelRequest");
		
		UWB_Options_Video_C_OnCancelRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StateName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            StateIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature(const class FName& StateName, int32_t StateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__Option_MotionBlur_K2Node_ComponentBoundEvent_12_OnStateChanged__DelegateSignature_Params params {};
		params.StateName = StateName;
		params.StateIndex = StateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature");
		
		UWB_Options_Video_C_BndEvt__MM_GenericBtn_Audio_ResetToDefault_K2Node_ComponentBoundEvent_13_GenericSmallBtnPressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.ExecuteUbergraph_WB_Options_Video
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWB_Options_Video_C::ExecuteUbergraph_WB_Options_Video(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.ExecuteUbergraph_WB_Options_Video");
		
		UWB_Options_Video_C_ExecuteUbergraph_WB_Options_Video_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WB_Options_Video.WB_Options_Video_C.OnClicked_Back__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWB_Options_Video_C::OnClicked_Back__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_Options_Video.WB_Options_Video_C.OnClicked_Back__DelegateSignature");
		
		UWB_Options_Video_C_OnClicked_Back__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_Options_Video_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_Options_Video_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_Options_Video.WB_Options_Video_C");
		return ptr;
	}

}


