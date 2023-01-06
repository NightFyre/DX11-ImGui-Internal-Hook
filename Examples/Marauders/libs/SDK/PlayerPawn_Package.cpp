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
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.FlashbangFadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FinishedFading                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::FlashbangFadeOut(bool* FinishedFading)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.FlashbangFadeOut");
		
		APlayerPawn_C_FlashbangFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinishedFading != nullptr)
			*FinishedFading = params.FinishedFading;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Flashbang_CalculateValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     FlashLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Instance_Distance                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Instance_Angle                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Instance_Screenposition_X                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Instance_Screenposition_Y                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Instance_bISBehindPlayer                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::Flashbang_CalculateValues(const struct FVector& FlashLocation, float* Instance_Distance, float* Instance_Angle, float* Instance_Screenposition_X, float* Instance_Screenposition_Y, bool* Instance_bISBehindPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Flashbang_CalculateValues");
		
		APlayerPawn_C_Flashbang_CalculateValues_Params params {};
		params.FlashLocation = FlashLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instance_Distance != nullptr)
			*Instance_Distance = params.Instance_Distance;
		if (Instance_Angle != nullptr)
			*Instance_Angle = params.Instance_Angle;
		if (Instance_Screenposition_X != nullptr)
			*Instance_Screenposition_X = params.Instance_Screenposition_X;
		if (Instance_Screenposition_Y != nullptr)
			*Instance_Screenposition_Y = params.Instance_Screenposition_Y;
		if (Instance_bISBehindPlayer != nullptr)
			*Instance_bISBehindPlayer = params.Instance_bISBehindPlayer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Flashbang_CheckForLineOfSight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     FlashBangStartLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::Flashbang_CheckForLineOfSight(const struct FVector& FlashBangStartLocation, bool* bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Flashbang_CheckForLineOfSight");
		
		APlayerPawn_C_Flashbang_CheckForLineOfSight_Params params {};
		params.FlashBangStartLocation = FlashBangStartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Analytics_VoiceLineUsed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      VoiceLineUsed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::Analytics_VoiceLineUsed(const class FString& VoiceLineUsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Analytics_VoiceLineUsed");
		
		APlayerPawn_C_Analytics_VoiceLineUsed_Params params {};
		params.VoiceLineUsed = VoiceLineUsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InterfaceSendValuesToAnimBP
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::InterfaceSendValuesToAnimBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InterfaceSendValuesToAnimBP");
		
		APlayerPawn_C_InterfaceSendValuesToAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.StaminaCalculations
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::StaminaCalculations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.StaminaCalculations");
		
		APlayerPawn_C_StaminaCalculations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_1__FinishedFunc");
		
		APlayerPawn_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_1__UpdateFunc");
		
		APlayerPawn_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_2__FinishedFunc");
		
		APlayerPawn_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_2__UpdateFunc");
		
		APlayerPawn_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_0__FinishedFunc");
		
		APlayerPawn_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_0__UpdateFunc");
		
		APlayerPawn_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_3__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_3__FinishedFunc");
		
		APlayerPawn_C_Timeline_3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Timeline_3__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::Timeline_3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Timeline_3__UpdateFunc");
		
		APlayerPawn_C_Timeline_3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.HitPostEffect__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::HitPostEffect__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.HitPostEffect__FinishedFunc");
		
		APlayerPawn_C_HitPostEffect__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.HitPostEffect__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::HitPostEffect__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.HitPostEffect__UpdateFunc");
		
		APlayerPawn_C_HitPostEffect__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9");
		
		APlayerPawn_C_InpActEvt_ToggleFireMode_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice01_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice01_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice01_K2Node_InputActionEvent_8");
		
		APlayerPawn_C_InpActEvt_Voice01_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice02_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice02_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice02_K2Node_InputActionEvent_7");
		
		APlayerPawn_C_InpActEvt_Voice02_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice03_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice03_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice03_K2Node_InputActionEvent_6");
		
		APlayerPawn_C_InpActEvt_Voice03_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice04_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice04_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice04_K2Node_InputActionEvent_5");
		
		APlayerPawn_C_InpActEvt_Voice04_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice05_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice05_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice05_K2Node_InputActionEvent_4");
		
		APlayerPawn_C_InpActEvt_Voice05_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice06_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice06_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice06_K2Node_InputActionEvent_3");
		
		APlayerPawn_C_InpActEvt_Voice06_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice07_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice07_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice07_K2Node_InputActionEvent_2");
		
		APlayerPawn_C_InpActEvt_Voice07_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice08_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_Voice08_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_Voice08_K2Node_InputActionEvent_1");
		
		APlayerPawn_C_InpActEvt_Voice08_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.InpActEvt_F_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::InpActEvt_F_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.InpActEvt_F_K2Node_InputKeyEvent_1");
		
		APlayerPawn_C_InpActEvt_F_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnLoaded_6FF4C9544EDDD0BC8561C89898811C29
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::OnLoaded_6FF4C9544EDDD0BC8561C89898811C29(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnLoaded_6FF4C9544EDDD0BC8561C89898811C29");
		
		APlayerPawn_C_OnLoaded_6FF4C9544EDDD0BC8561C89898811C29_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32");
		
		APlayerPawn_C_OnLoaded_EC6577E2432FB6B13CA5CC97DF178E32_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnLoaded_AD2B2025447837D17B29C18B74ECDFA9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::OnLoaded_AD2B2025447837D17B29C18B74ECDFA9(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnLoaded_AD2B2025447837D17B29C18B74ECDFA9");
		
		APlayerPawn_C_OnLoaded_AD2B2025447837D17B29C18B74ECDFA9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241");
		
		APlayerPawn_C_OnLoaded_6108BEB644C84F8E510C6DBF5B9E2241_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnLowHealthBloodStart
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::OnLowHealthBloodStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnLowHealthBloodStart");
		
		APlayerPawn_C_OnLowHealthBloodStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnLowHealthBloodEnd
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::OnLowHealthBloodEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnLowHealthBloodEnd");
		
		APlayerPawn_C_OnLowHealthBloodEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.DrivingFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableFrigateHelmComponent*            HelmOut                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::DrivingFrigate(class URaidUseableFrigateHelmComponent* HelmOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.DrivingFrigate");
		
		APlayerPawn_C_DrivingFrigate_Params params {};
		params.HelmOut = HelmOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.DrivingTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class URaidUseableTurretConrtrolComponent*         TurretOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::DrivingTurret(class URaidUseableTurretConrtrolComponent* TurretOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.DrivingTurret");
		
		APlayerPawn_C_DrivingTurret_Params params {};
		params.TurretOut = TurretOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.TurnOffTheDriving
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::TurnOffTheDriving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.TurnOffTheDriving");
		
		APlayerPawn_C_TurnOffTheDriving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.TurnOffTheGunner
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::TurnOffTheGunner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.TurnOffTheGunner");
		
		APlayerPawn_C_TurnOffTheGunner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnProxyHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Impact                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APlayerPawn_C::OnProxyHitReact(const struct FHitResult& Impact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnProxyHitReact");
		
		APlayerPawn_C_OnProxyHitReact_Params params {};
		params.Impact = Impact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.K2_OnStartCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.K2_OnStartCrouch");
		
		APlayerPawn_C_K2_OnStartCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.K2_OnEndCrouch");
		
		APlayerPawn_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.StaminaChargeStart
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::StaminaChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.StaminaChargeStart");
		
		APlayerPawn_C_StaminaChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.StaminaChargeEnd
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::StaminaChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.StaminaChargeEnd");
		
		APlayerPawn_C_StaminaChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnJumped
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnJumped");
		
		APlayerPawn_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.PlayEmoteVoice
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::PlayEmoteVoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.PlayEmoteVoice");
		
		APlayerPawn_C_PlayEmoteVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.MulticastPlayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               is_A_Shout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        VoiceSet_DT_Row                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  VoiceSet_DT                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::MulticastPlayVoice(bool is_A_Shout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.MulticastPlayVoice");
		
		APlayerPawn_C_MulticastPlayVoice_Params params {};
		params.is_A_Shout = is_A_Shout;
		params.VoiceSet_DT_Row = VoiceSet_DT_Row;
		params.VoiceSet_DT = VoiceSet_DT;
		params.VoiceLine = VoiceLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.RunOnServerVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAShout                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        VoiceSet_DT_Row                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataTable*                                  VoiceSet_DT                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        VoiceLine                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::RunOnServerVoice(bool IsAShout, const class FName& VoiceSet_DT_Row, class UDataTable* VoiceSet_DT, const class FName& VoiceLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.RunOnServerVoice");
		
		APlayerPawn_C_RunOnServerVoice_Params params {};
		params.IsAShout = IsAShout;
		params.VoiceSet_DT_Row = VoiceSet_DT_Row;
		params.VoiceSet_DT = VoiceSet_DT;
		params.VoiceLine = VoiceLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.TryPlayVoice
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::TryPlayVoice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.TryPlayVoice");
		
		APlayerPawn_C_TryPlayVoice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.ReceiveTick");
		
		APlayerPawn_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.ReceiveEndPlay");
		
		APlayerPawn_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.ReceiveBeginPlay");
		
		APlayerPawn_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.WeaponisBroken
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::WeaponisBroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.WeaponisBroken");
		
		APlayerPawn_C_WeaponisBroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.SendBlockingDistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isBlocking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlockingDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::SendBlockingDistance(bool isBlocking, float BlockingDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.SendBlockingDistance");
		
		APlayerPawn_C_SendBlockingDistance_Params params {};
		params.isBlocking = isBlocking;
		params.BlockingDistance = BlockingDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.IsUsingCameraTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingCameraTurret                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::IsUsingCameraTurret(bool UsingCameraTurret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.IsUsingCameraTurret");
		
		APlayerPawn_C_IsUsingCameraTurret_Params params {};
		params.UsingCameraTurret = UsingCameraTurret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.JumpHasBeenTriggered
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::JumpHasBeenTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.JumpHasBeenTriggered");
		
		APlayerPawn_C_JumpHasBeenTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.CrouchStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isCrouchingNow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::CrouchStateChange(bool isCrouchingNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.CrouchStateChange");
		
		APlayerPawn_C_CrouchStateChange_Params params {};
		params.isCrouchingNow = isCrouchingNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.DoProxyHitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APlayerPawn_C::DoProxyHitReact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.DoProxyHitReact");
		
		APlayerPawn_C_DoProxyHitReact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.PlayHurtAnim
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::PlayHurtAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.PlayHurtAnim");
		
		APlayerPawn_C_PlayHurtAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.StaminaVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StaminaPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::StaminaVars(float StaminaPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.StaminaVars");
		
		APlayerPawn_C_StaminaVars_Params params {};
		params.StaminaPercent = StaminaPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.DelayWeaponVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Turn_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveRight_Input                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LookUp_Input                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::DelayWeaponVars(float Turn_Input, float MoveRight_Input, float LookUp_Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.DelayWeaponVars");
		
		APlayerPawn_C_DelayWeaponVars_Params params {};
		params.Turn_Input = Turn_Input;
		params.MoveRight_Input = MoveRight_Input;
		params.LookUp_Input = LookUp_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.WeaponDelayVars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Turn_Input                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveRight_Input                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LookUp_Input                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::WeaponDelayVars(float Turn_Input, float MoveRight_Input, float LookUp_Input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.WeaponDelayVars");
		
		APlayerPawn_C_WeaponDelayVars_Params params {};
		params.Turn_Input = Turn_Input;
		params.MoveRight_Input = MoveRight_Input;
		params.LookUp_Input = LookUp_Input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.IsUsingPilotSeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingPilotSeat                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::IsUsingPilotSeat(bool UsingPilotSeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.IsUsingPilotSeat");
		
		APlayerPawn_C_IsUsingPilotSeat_Params params {};
		params.UsingPilotSeat = UsingPilotSeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.IsUsingTurret
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UsingTurret                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::IsUsingTurret(bool UsingTurret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.IsUsingTurret");
		
		APlayerPawn_C_IsUsingTurret_Params params {};
		params.UsingTurret = UsingTurret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnPlayReachOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AnimToUse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::OnPlayReachOutAnim(const class FName& AnimToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnPlayReachOutAnim");
		
		APlayerPawn_C_OnPlayReachOutAnim_Params params {};
		params.AnimToUse = AnimToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.HumanPlayerDied
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::HumanPlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.HumanPlayerDied");
		
		APlayerPawn_C_HumanPlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.TurnOffTheCameraTurret
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::TurnOffTheCameraTurret()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.TurnOffTheCameraTurret");
		
		APlayerPawn_C_TurnOffTheCameraTurret_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Trigger_CameraMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::Trigger_CameraMode(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Trigger_CameraMode");
		
		APlayerPawn_C_Trigger_CameraMode_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.CamMode_Multi
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::CamMode_Multi(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.CamMode_Multi");
		
		APlayerPawn_C_CamMode_Multi_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.FakeAddInput
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::FakeAddInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.FakeAddInput");
		
		APlayerPawn_C_FakeAddInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.Shooting_Shaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TurnOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APlayerPawn_C::Shooting_Shaking(bool TurnOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.Shooting_Shaking");
		
		APlayerPawn_C_Shooting_Shaking_Params params {};
		params.TurnOn = TurnOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.CheckForBlockingTrace
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::CheckForBlockingTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.CheckForBlockingTrace");
		
		APlayerPawn_C_CheckForBlockingTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.TickRelativeOffsetTheMask
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::TickRelativeOffsetTheMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.TickRelativeOffsetTheMask");
		
		APlayerPawn_C_TickRelativeOffsetTheMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OxygenDyingTimer
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::OxygenDyingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OxygenDyingTimer");
		
		APlayerPawn_C_OxygenDyingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void APlayerPawn_C::BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		APlayerPawn_C_BndEvt__PlayerPawn_WizVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.BeenFlashbanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     FlashLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              LengthBeforeFade                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSFlashbangSettings                         FlashbangSettings                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::BeenFlashbanged(const struct FVector& FlashLocation, float LengthBeforeFade, const struct FSFlashbangSettings& FlashbangSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.BeenFlashbanged");
		
		APlayerPawn_C_BeenFlashbanged_Params params {};
		params.FlashLocation = FlashLocation;
		params.LengthBeforeFade = LengthBeforeFade;
		params.FlashbangSettings = FlashbangSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.FadeOutFlashBangEffect
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::FadeOutFlashBangEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.FadeOutFlashBangEffect");
		
		APlayerPawn_C_FadeOutFlashBangEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.FadeOutTheFlashbangEffects
	 * 		Flags  -> ()
	 */
	void APlayerPawn_C::FadeOutTheFlashbangEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.FadeOutTheFlashbangEffects");
		
		APlayerPawn_C_FadeOutTheFlashbangEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.OnTakeAnyDamage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.OnTakeAnyDamage_Event");
		
		APlayerPawn_C_OnTakeAnyDamage_Event_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.PlayerHasTakenDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      DamageType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::PlayerHasTakenDamage(float Damage, int32_t Direction, const class FString& DamageType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.PlayerHasTakenDamage");
		
		APlayerPawn_C_PlayerHasTakenDamage_Params params {};
		params.Damage = Damage;
		params.Direction = Direction;
		params.DamageType = DamageType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawn_C::ExecuteUbergraph_PlayerPawn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawn.PlayerPawn_C.ExecuteUbergraph_PlayerPawn");
		
		APlayerPawn_C_ExecuteUbergraph_PlayerPawn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerPawn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPawn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn.PlayerPawn_C");
		return ptr;
	}

}


