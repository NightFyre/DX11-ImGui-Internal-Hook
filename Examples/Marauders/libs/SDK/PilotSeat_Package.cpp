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
	 * 		Name   -> Function PilotSeat.PilotSeat_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.UserConstructionScript");
		
		APilotSeat_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.Timeline_0__FinishedFunc");
		
		APilotSeat_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.Timeline_0__UpdateFunc");
		
		APilotSeat_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnNotifyEnd_6FF6875B47FBF07F66BFCBA3D67FBD06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnNotifyEnd_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnNotifyEnd_6FF6875B47FBF07F66BFCBA3D67FBD06");
		
		APilotSeat_C_OnNotifyEnd_6FF6875B47FBF07F66BFCBA3D67FBD06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnNotifyBegin_6FF6875B47FBF07F66BFCBA3D67FBD06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnNotifyBegin_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnNotifyBegin_6FF6875B47FBF07F66BFCBA3D67FBD06");
		
		APilotSeat_C_OnNotifyBegin_6FF6875B47FBF07F66BFCBA3D67FBD06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnInterrupted_6FF6875B47FBF07F66BFCBA3D67FBD06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnInterrupted_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnInterrupted_6FF6875B47FBF07F66BFCBA3D67FBD06");
		
		APilotSeat_C_OnInterrupted_6FF6875B47FBF07F66BFCBA3D67FBD06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnBlendOut_6FF6875B47FBF07F66BFCBA3D67FBD06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnBlendOut_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnBlendOut_6FF6875B47FBF07F66BFCBA3D67FBD06");
		
		APilotSeat_C_OnBlendOut_6FF6875B47FBF07F66BFCBA3D67FBD06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnCompleted_6FF6875B47FBF07F66BFCBA3D67FBD06
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnCompleted_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnCompleted_6FF6875B47FBF07F66BFCBA3D67FBD06");
		
		APilotSeat_C_OnCompleted_6FF6875B47FBF07F66BFCBA3D67FBD06_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnNotifyEnd_C233401344CFE3954880C4841B30EAA4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnNotifyEnd_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnNotifyEnd_C233401344CFE3954880C4841B30EAA4");
		
		APilotSeat_C_OnNotifyEnd_C233401344CFE3954880C4841B30EAA4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnNotifyBegin_C233401344CFE3954880C4841B30EAA4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnNotifyBegin_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnNotifyBegin_C233401344CFE3954880C4841B30EAA4");
		
		APilotSeat_C_OnNotifyBegin_C233401344CFE3954880C4841B30EAA4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnInterrupted_C233401344CFE3954880C4841B30EAA4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnInterrupted_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnInterrupted_C233401344CFE3954880C4841B30EAA4");
		
		APilotSeat_C_OnInterrupted_C233401344CFE3954880C4841B30EAA4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnBlendOut_C233401344CFE3954880C4841B30EAA4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnBlendOut_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnBlendOut_C233401344CFE3954880C4841B30EAA4");
		
		APilotSeat_C_OnBlendOut_C233401344CFE3954880C4841B30EAA4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.OnCompleted_C233401344CFE3954880C4841B30EAA4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::OnCompleted_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.OnCompleted_C233401344CFE3954880C4841B30EAA4");
		
		APilotSeat_C_OnCompleted_C233401344CFE3954880C4841B30EAA4_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.Reset_CinematicPilotChair
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::Reset_CinematicPilotChair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.Reset_CinematicPilotChair");
		
		APilotSeat_C_Reset_CinematicPilotChair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.ReceiveBeginPlay");
		
		APilotSeat_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.Trigger_CinematicPilotChair
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::Trigger_CinematicPilotChair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.Trigger_CinematicPilotChair");
		
		APilotSeat_C_Trigger_CinematicPilotChair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.ReceiveTick");
		
		APilotSeat_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.LightFadeIn
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::LightFadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.LightFadeIn");
		
		APilotSeat_C_LightFadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.LightFadeOut
	 * 		Flags  -> ()
	 */
	void APilotSeat_C::LightFadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.LightFadeOut");
		
		APilotSeat_C_LightFadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PilotSeat.PilotSeat_C.ExecuteUbergraph_PilotSeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APilotSeat_C::ExecuteUbergraph_PilotSeat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PilotSeat.PilotSeat_C.ExecuteUbergraph_PilotSeat");
		
		APilotSeat_C_ExecuteUbergraph_PilotSeat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APilotSeat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APilotSeat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PilotSeat.PilotSeat_C");
		return ptr;
	}

}


