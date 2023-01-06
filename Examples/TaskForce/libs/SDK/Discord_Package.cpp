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
	 * 		RVA    -> 0x00405090
	 * 		Name   -> Function Discord.DiscordHelpers.UpdatePresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordHelpers::UpdatePresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord.DiscordHelpers.UpdatePresence");
		
		UDiscordHelpers_UpdatePresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00405070
	 * 		Name   -> Function Discord.DiscordHelpers.Shutdown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordHelpers::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord.DiscordHelpers.Shutdown");
		
		UDiscordHelpers_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00405050
	 * 		Name   -> Function Discord.DiscordHelpers.RunCallbacks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordHelpers::RunCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord.DiscordHelpers.RunCallbacks");
		
		UDiscordHelpers_RunCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00404F70
	 * 		Name   -> Function Discord.DiscordHelpers.Respond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Reply                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordHelpers::Respond(const class FString& userId, int32_t Reply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord.DiscordHelpers.Respond");
		
		UDiscordHelpers_Respond_Params params {};
		params.userId = userId;
		params.Reply = Reply;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00404E30
	 * 		Name   -> Function Discord.DiscordHelpers.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      applicationId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               autoRegister                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      optionalSteamId                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiscordHelpers::Initialize(const class FString& applicationId, bool autoRegister, const class FString& optionalSteamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord.DiscordHelpers.Initialize");
		
		UDiscordHelpers_Initialize_Params params {};
		params.applicationId = applicationId;
		params.autoRegister = autoRegister;
		params.optionalSteamId = optionalSteamId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00404E10
	 * 		Name   -> Function Discord.DiscordHelpers.ClearPresence
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDiscordHelpers::ClearPresence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Discord.DiscordHelpers.ClearPresence");
		
		UDiscordHelpers_ClearPresence_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiscordHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiscordHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Discord.DiscordHelpers");
		return ptr;
	}

}


