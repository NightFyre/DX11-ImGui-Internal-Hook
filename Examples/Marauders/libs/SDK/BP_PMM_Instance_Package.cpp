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
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.FindGradations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                In_Color                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                2                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                3                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                4                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::FindGradations(const struct FLinearColor& In_Color, struct FLinearColor* , struct FLinearColor* 2, struct FLinearColor* 3, struct FLinearColor* 4)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.FindGradations");
		
		UBP_PMM_Instance_C_FindGradations_Params params {};
		params.In_Color = In_Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if ( != nullptr)
			* = params.;
		if (2 != nullptr)
			*2 = params.2;
		if (3 != nullptr)
			*3 = params.3;
		if (4 != nullptr)
			*4 = params.4;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.FindPawnOrCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ACharacter*                                  AsCharacter                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       AsPawn                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::FindPawnOrCharacter(class UObject* Object, class ACharacter** AsCharacter, class APawn** AsPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.FindPawnOrCharacter");
		
		UBP_PMM_Instance_C_FindPawnOrCharacter_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsCharacter != nullptr)
			*AsCharacter = params.AsCharacter;
		if (AsPawn != nullptr)
			*AsPawn = params.AsPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.SetShowMouse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowMouse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PMM_Instance_C::SetShowMouse(bool bShowMouse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.SetShowMouse");
		
		UBP_PMM_Instance_C_SetShowMouse_Params params {};
		params.bShowMouse = bShowMouse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.SetInputType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::SetInputType(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.SetInputType");
		
		UBP_PMM_Instance_C_SetInputType_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UBP_PMM_Instance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.ReceiveInit");
		
		UBP_PMM_Instance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.HandleTravelError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETravelFailure                                     FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::HandleTravelError(ETravelFailure FailureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.HandleTravelError");
		
		UBP_PMM_Instance_C_HandleTravelError_Params params {};
		params.FailureType = FailureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.HandleNetworkError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ENetworkFailure                                    FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsServer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PMM_Instance_C::HandleNetworkError(ENetworkFailure FailureType, bool bIsServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.HandleNetworkError");
		
		UBP_PMM_Instance_C_HandleNetworkError_Params params {};
		params.FailureType = FailureType;
		params.bIsServer = bIsServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.HandlePauseMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Player_Character_or_Pawn                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::HandlePauseMenu(class UObject* Player_Character_or_Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.HandlePauseMenu");
		
		UBP_PMM_Instance_C_HandlePauseMenu_Params params {};
		params.Player_Character_or_Pawn = Player_Character_or_Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateBaseColor
	 * 		Flags  -> ()
	 */
	void UBP_PMM_Instance_C::UpdateBaseColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateBaseColor");
		
		UBP_PMM_Instance_C_UpdateBaseColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateButtonSounds
	 * 		Flags  -> ()
	 */
	void UBP_PMM_Instance_C::UpdateButtonSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateButtonSounds");
		
		UBP_PMM_Instance_C_UpdateButtonSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.ExecuteUbergraph_BP_PMM_Instance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::ExecuteUbergraph_BP_PMM_Instance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.ExecuteUbergraph_BP_PMM_Instance");
		
		UBP_PMM_Instance_C_ExecuteUbergraph_BP_PMM_Instance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateInputType__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInputType                                         InputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PMM_Instance_C::UpdateInputType__DelegateSignature(EInputType InputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PMM_Instance.BP_PMM_Instance_C.UpdateInputType__DelegateSignature");
		
		UBP_PMM_Instance_C_UpdateInputType__DelegateSignature_Params params {};
		params.InputType = InputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PMM_Instance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PMM_Instance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PMM_Instance.BP_PMM_Instance_C");
		return ptr;
	}

}


