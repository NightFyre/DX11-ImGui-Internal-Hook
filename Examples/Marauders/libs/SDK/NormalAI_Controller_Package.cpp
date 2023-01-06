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
	 * 		Name   -> Function NormalAI_Controller.NormalAI_Controller_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANormalAI_Controller_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NormalAI_Controller.NormalAI_Controller_C.ReceiveBeginPlay");
		
		ANormalAI_Controller_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NormalAI_Controller.NormalAI_Controller_C.OnDestroyed_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANormalAI_Controller_C::OnDestroyed_Event_1(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NormalAI_Controller.NormalAI_Controller_C.OnDestroyed_Event_1");
		
		ANormalAI_Controller_C_OnDestroyed_Event_1_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NormalAI_Controller.NormalAI_Controller_C.ExecuteUbergraph_NormalAI_Controller
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANormalAI_Controller_C::ExecuteUbergraph_NormalAI_Controller(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NormalAI_Controller.NormalAI_Controller_C.ExecuteUbergraph_NormalAI_Controller");
		
		ANormalAI_Controller_C_ExecuteUbergraph_NormalAI_Controller_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANormalAI_Controller_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANormalAI_Controller_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NormalAI_Controller.NormalAI_Controller_C");
		return ptr;
	}

}


