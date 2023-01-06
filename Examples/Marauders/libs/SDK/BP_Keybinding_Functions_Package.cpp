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
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.CheckIsKeyInUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsReserved                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        MappingName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Keybinding_Functions_C::CheckIsKeyInUse(const struct FKey& Key, class UObject* __WorldContext, bool* IsReserved, class FName* MappingName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.CheckIsKeyInUse");
		
		UBP_Keybinding_Functions_C_CheckIsKeyInUse_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsReserved != nullptr)
			*IsReserved = params.IsReserved;
		if (MappingName != nullptr)
			*MappingName = params.MappingName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingKeyboardKeyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleLookingFor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Keybinding_Functions_C::FindAxisMappingKeyboardKeyByName(const class FName& ItemToFind, float ScaleLookingFor, class UObject* __WorldContext, struct FKey* Key, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingKeyboardKeyByName");
		
		UBP_Keybinding_Functions_C_FindAxisMappingKeyboardKeyByName_Params params {};
		params.ItemToFind = ItemToFind;
		params.ScaleLookingFor = ScaleLookingFor;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Scale != nullptr)
			*Scale = params.Scale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingGamepadKeyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBP_Keybinding_Functions_C::FindAxisMappingGamepadKeyByName(const class FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindAxisMappingGamepadKeyByName");
		
		UBP_Keybinding_Functions_C_FindAxisMappingGamepadKeyByName_Params params {};
		params.ItemToFind = ItemToFind;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		if (Scale != nullptr)
			*Scale = params.Scale;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingKeyboardKeyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	bool UBP_Keybinding_Functions_C::FindActionMappingKeyboardKeyByName(const class FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingKeyboardKeyByName");
		
		UBP_Keybinding_Functions_C_FindActionMappingKeyboardKeyByName_Params params {};
		params.ItemToFind = ItemToFind;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingGamepadKeyByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToFind                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        Key                                                        (Parm, OutParm, HasGetValueTypeHash)
	 */
	bool UBP_Keybinding_Functions_C::FindActionMappingGamepadKeyByName(const class FName& ItemToFind, class UObject* __WorldContext, struct FKey* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.FindActionMappingGamepadKeyByName");
		
		UBP_Keybinding_Functions_C_FindActionMappingGamepadKeyByName_Params params {};
		params.ItemToFind = ItemToFind;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsMouseKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsMouseKey                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Keybinding_Functions_C::IsMouseKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsMouseKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsMouseKey");
		
		UBP_Keybinding_Functions_C_IsMouseKey_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsMouseKey != nullptr)
			*bIsMouseKey = params.bIsMouseKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsKeyboardKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsKeyboardKey                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Keybinding_Functions_C::IsKeyboardKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsKeyboardKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsKeyboardKey");
		
		UBP_Keybinding_Functions_C_IsKeyboardKey_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsKeyboardKey != nullptr)
			*bIsKeyboardKey = params.bIsKeyboardKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsGamepadKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsGamepadKey                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Keybinding_Functions_C::IsGamepadKey(const struct FKey& Key, class UObject* __WorldContext, bool* bIsGamepadKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Keybinding_Functions.BP_Keybinding_Functions_C.IsGamepadKey");
		
		UBP_Keybinding_Functions_C_IsGamepadKey_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsGamepadKey != nullptr)
			*bIsGamepadKey = params.bIsGamepadKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Keybinding_Functions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Keybinding_Functions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Keybinding_Functions.BP_Keybinding_Functions_C");
		return ptr;
	}

}


