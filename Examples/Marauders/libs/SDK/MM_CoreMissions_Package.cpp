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
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.SetCosmeticBodyLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::SetCosmeticBodyLook(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.SetCosmeticBodyLook");
		
		AMM_CoreMissions_C_SetCosmeticBodyLook_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.SetCosmeticHeadLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::SetCosmeticHeadLook(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.SetCosmeticHeadLook");
		
		AMM_CoreMissions_C_SetCosmeticHeadLook_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AMM_CoreMissions_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.UserConstructionScript");
		
		AMM_CoreMissions_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_0E09B95D446008F88D074C8869BD53D8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::OnLoaded_0E09B95D446008F88D074C8869BD53D8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_0E09B95D446008F88D074C8869BD53D8");
		
		AMM_CoreMissions_C_OnLoaded_0E09B95D446008F88D074C8869BD53D8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_6459CD9F4948AA47B9A504929D4F8D75
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::OnLoaded_6459CD9F4948AA47B9A504929D4F8D75(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_6459CD9F4948AA47B9A504929D4F8D75");
		
		AMM_CoreMissions_C_OnLoaded_6459CD9F4948AA47B9A504929D4F8D75_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_54AAAB43426F0F85976D809EE994DE5F
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::OnLoaded_54AAAB43426F0F85976D809EE994DE5F(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_54AAAB43426F0F85976D809EE994DE5F");
		
		AMM_CoreMissions_C_OnLoaded_54AAAB43426F0F85976D809EE994DE5F_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_A828E42D403CE37D41797BBD77EBD14A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::OnLoaded_A828E42D403CE37D41797BBD77EBD14A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_A828E42D403CE37D41797BBD77EBD14A");
		
		AMM_CoreMissions_C_OnLoaded_A828E42D403CE37D41797BBD77EBD14A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_DFA70B7340C57D2D4A6C28A70571CB43
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::OnLoaded_DFA70B7340C57D2D4A6C28A70571CB43(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_DFA70B7340C57D2D4A6C28A70571CB43");
		
		AMM_CoreMissions_C_OnLoaded_DFA70B7340C57D2D4A6C28A70571CB43_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_AB2FE7DC45667CBE08A55D9085855075
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::OnLoaded_AB2FE7DC45667CBE08A55D9085855075(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.OnLoaded_AB2FE7DC45667CBE08A55D9085855075");
		
		AMM_CoreMissions_C_OnLoaded_AB2FE7DC45667CBE08A55D9085855075_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.ContractsMenuHasBeenOpened
	 * 		Flags  -> ()
	 */
	void AMM_CoreMissions_C::ContractsMenuHasBeenOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.ContractsMenuHasBeenOpened");
		
		AMM_CoreMissions_C_ContractsMenuHasBeenOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.Update_CoreMissionsScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChapterMissionUI                           Scene                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FMenuPlayerLook                             PlayersActualLook                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMM_CoreMissions_C::Update_CoreMissionsScene(const struct FChapterMissionUI& Scene, const struct FMenuPlayerLook& PlayersActualLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.Update_CoreMissionsScene");
		
		AMM_CoreMissions_C_Update_CoreMissionsScene_Params params {};
		params.Scene = Scene;
		params.PlayersActualLook = PlayersActualLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.ReceiveTick");
		
		AMM_CoreMissions_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMM_CoreMissions_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.ReceiveBeginPlay");
		
		AMM_CoreMissions_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.ShowHide_ContractsShipInHangar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMM_CoreMissions_C::ShowHide_ContractsShipInHangar(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.ShowHide_ContractsShipInHangar");
		
		AMM_CoreMissions_C_ShowHide_ContractsShipInHangar_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MM_CoreMissions.MM_CoreMissions_C.ExecuteUbergraph_MM_CoreMissions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMM_CoreMissions_C::ExecuteUbergraph_MM_CoreMissions(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MM_CoreMissions.MM_CoreMissions_C.ExecuteUbergraph_MM_CoreMissions");
		
		AMM_CoreMissions_C_ExecuteUbergraph_MM_CoreMissions_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMM_CoreMissions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMM_CoreMissions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MM_CoreMissions.MM_CoreMissions_C");
		return ptr;
	}

}


