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
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.SetExtractionMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       HostageGrabbed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       HostageKilled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       HostageExtracted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 */
	void UTaskForceExtractionMode_C::SetExtractionMessages(TMap<int32_t, class FString> HostageGrabbed, TMap<int32_t, class FString> HostageKilled, TMap<int32_t, class FString> HostageExtracted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.SetExtractionMessages");
		
		UTaskForceExtractionMode_C_SetExtractionMessages_Params params {};
		params.HostageGrabbed = HostageGrabbed;
		params.HostageKilled = HostageKilled;
		params.HostageExtracted = HostageExtracted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.SetExtractionSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           HostageGrabbedVoice                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           HostageKilledVoice                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TMap<int32_t, class USoundCue*>                    HostageKilledMusic                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TArray<class USoundCue*>                           HostageExtractedVoice                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TMap<int32_t, class USoundCue*>                    HostageExtractedMusic                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 */
	void UTaskForceExtractionMode_C::SetExtractionSounds(TArray<class USoundCue*> HostageGrabbedVoice, TArray<class USoundCue*> HostageKilledVoice, TMap<int32_t, class USoundCue*> HostageKilledMusic, TArray<class USoundCue*> HostageExtractedVoice, TMap<int32_t, class USoundCue*> HostageExtractedMusic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.SetExtractionSounds");
		
		UTaskForceExtractionMode_C_SetExtractionSounds_Params params {};
		params.HostageGrabbedVoice = HostageGrabbedVoice;
		params.HostageKilledVoice = HostageKilledVoice;
		params.HostageKilledMusic = HostageKilledMusic;
		params.HostageExtractedVoice = HostageExtractedVoice;
		params.HostageExtractedMusic = HostageExtractedMusic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.RemoveExtractionZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBoxComponent*                               Zone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceExtractionMode_C::RemoveExtractionZone(class UBoxComponent* Zone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.RemoveExtractionZone");
		
		UTaskForceExtractionMode_C_RemoveExtractionZone_Params params {};
		params.Zone = Zone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.ClearExtractionZones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTaskForceExtractionMode_C::ClearExtractionZones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.ClearExtractionZones");
		
		UTaskForceExtractionMode_C_ClearExtractionZones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.AddExtractionZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBoxComponent*                               Zone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTaskForceIcon                              Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceExtractionMode_C::AddExtractionZone(class UBoxComponent* Zone, int32_t TeamID, const struct FTaskForceIcon& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.AddExtractionZone");
		
		UTaskForceExtractionMode_C_AddExtractionZone_Params params {};
		params.Zone = Zone;
		params.TeamID = TeamID;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.RemoveHostage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerStart*                                Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceExtractionMode_C::RemoveHostage(class APlayerStart* Spawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.RemoveHostage");
		
		UTaskForceExtractionMode_C_RemoveHostage_Params params {};
		params.Spawn = Spawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.ClearHostages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTaskForceExtractionMode_C::ClearHostages()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.ClearHostages");
		
		UTaskForceExtractionMode_C_ClearHostages_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceExtractionMode.TaskForceExtractionMode_C.AddHostage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerStart*                                Spawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Hat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Shirt                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Pants                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Shoes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Gloves                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Gear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceExtractionMode_C::AddHostage(class APlayerStart* Spawn, const class FName& Name, class USkeletalMeshComponent* Head, class USkeletalMeshComponent* Body, class USkeletalMeshComponent* Hat, class USkeletalMeshComponent* Shirt, class USkeletalMeshComponent* Pants, class USkeletalMeshComponent* Shoes, class USkeletalMeshComponent* Gloves, class USkeletalMeshComponent* Gear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceExtractionMode.TaskForceExtractionMode_C.AddHostage");
		
		UTaskForceExtractionMode_C_AddHostage_Params params {};
		params.Spawn = Spawn;
		params.Name = Name;
		params.Head = Head;
		params.Body = Body;
		params.Hat = Hat;
		params.Shirt = Shirt;
		params.Pants = Pants;
		params.Shoes = Shoes;
		params.Gloves = Gloves;
		params.Gear = Gear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceExtractionMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceExtractionMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TaskForceExtractionMode.TaskForceExtractionMode_C");
		return ptr;
	}

}


