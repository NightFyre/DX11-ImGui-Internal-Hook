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
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AGunnerSeat01_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.Timeline_0__FinishedFunc");
		
		AGunnerSeat01_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AGunnerSeat01_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.Timeline_0__UpdateFunc");
		
		AGunnerSeat01_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnNotifyEnd_38F1C74B409C46FCBA27488DC1958AD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnNotifyEnd_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnNotifyEnd_38F1C74B409C46FCBA27488DC1958AD7");
		
		AGunnerSeat01_C_OnNotifyEnd_38F1C74B409C46FCBA27488DC1958AD7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnNotifyBegin_38F1C74B409C46FCBA27488DC1958AD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnNotifyBegin_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnNotifyBegin_38F1C74B409C46FCBA27488DC1958AD7");
		
		AGunnerSeat01_C_OnNotifyBegin_38F1C74B409C46FCBA27488DC1958AD7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnInterrupted_38F1C74B409C46FCBA27488DC1958AD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnInterrupted_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnInterrupted_38F1C74B409C46FCBA27488DC1958AD7");
		
		AGunnerSeat01_C_OnInterrupted_38F1C74B409C46FCBA27488DC1958AD7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnBlendOut_38F1C74B409C46FCBA27488DC1958AD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnBlendOut_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnBlendOut_38F1C74B409C46FCBA27488DC1958AD7");
		
		AGunnerSeat01_C_OnBlendOut_38F1C74B409C46FCBA27488DC1958AD7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnCompleted_38F1C74B409C46FCBA27488DC1958AD7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnCompleted_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnCompleted_38F1C74B409C46FCBA27488DC1958AD7");
		
		AGunnerSeat01_C_OnCompleted_38F1C74B409C46FCBA27488DC1958AD7_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnNotifyEnd_3377FEE444454B6BC151EBAF86399E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnNotifyEnd_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnNotifyEnd_3377FEE444454B6BC151EBAF86399E05");
		
		AGunnerSeat01_C_OnNotifyEnd_3377FEE444454B6BC151EBAF86399E05_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnNotifyBegin_3377FEE444454B6BC151EBAF86399E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnNotifyBegin_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnNotifyBegin_3377FEE444454B6BC151EBAF86399E05");
		
		AGunnerSeat01_C_OnNotifyBegin_3377FEE444454B6BC151EBAF86399E05_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnInterrupted_3377FEE444454B6BC151EBAF86399E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnInterrupted_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnInterrupted_3377FEE444454B6BC151EBAF86399E05");
		
		AGunnerSeat01_C_OnInterrupted_3377FEE444454B6BC151EBAF86399E05_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnBlendOut_3377FEE444454B6BC151EBAF86399E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnBlendOut_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnBlendOut_3377FEE444454B6BC151EBAF86399E05");
		
		AGunnerSeat01_C_OnBlendOut_3377FEE444454B6BC151EBAF86399E05_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.OnCompleted_3377FEE444454B6BC151EBAF86399E05
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::OnCompleted_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.OnCompleted_3377FEE444454B6BC151EBAF86399E05");
		
		AGunnerSeat01_C_OnCompleted_3377FEE444454B6BC151EBAF86399E05_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGunnerSeat01_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.ReceiveBeginPlay");
		
		AGunnerSeat01_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.Trigger_GunnerSeat
	 * 		Flags  -> ()
	 */
	void AGunnerSeat01_C::Trigger_GunnerSeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.Trigger_GunnerSeat");
		
		AGunnerSeat01_C_Trigger_GunnerSeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.ReceiveTick");
		
		AGunnerSeat01_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.LightFadeIn
	 * 		Flags  -> ()
	 */
	void AGunnerSeat01_C::LightFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.LightFadeIn");
		
		AGunnerSeat01_C_LightFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.LightFadeOut
	 * 		Flags  -> ()
	 */
	void AGunnerSeat01_C::LightFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.LightFadeOut");
		
		AGunnerSeat01_C_LightFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GunnerSeat01.GunnerSeat01_C.ExecuteUbergraph_GunnerSeat01
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGunnerSeat01_C::ExecuteUbergraph_GunnerSeat01(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GunnerSeat01.GunnerSeat01_C.ExecuteUbergraph_GunnerSeat01");
		
		AGunnerSeat01_C_ExecuteUbergraph_GunnerSeat01_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGunnerSeat01_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGunnerSeat01_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GunnerSeat01.GunnerSeat01_C");
		return ptr;
	}

}


