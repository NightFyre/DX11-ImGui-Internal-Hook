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
	 * 		Name   -> Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetDemolitionMessages
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<int32_t, class FString>                       BombPickup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       BombDropped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       BombPlanted                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       BombExploded                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<int32_t, class FString>                       BombDefused                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 */
	void UTaskForceDemolitionMode_C::SetDemolitionMessages(TMap<int32_t, class FString> BombPickup, TMap<int32_t, class FString> BombDropped, TMap<int32_t, class FString> BombPlanted, TMap<int32_t, class FString> BombExploded, TMap<int32_t, class FString> BombDefused)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetDemolitionMessages");
		
		UTaskForceDemolitionMode_C_SetDemolitionMessages_Params params {};
		params.BombPickup = BombPickup;
		params.BombDropped = BombDropped;
		params.BombPlanted = BombPlanted;
		params.BombExploded = BombExploded;
		params.BombDefused = BombDefused;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetDemolitionSounds
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USoundCue*>                           BombPickupMusic                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombPlantedVoice                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombPlantedMusic                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombExplodedVoice                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class USoundCue*>                           BombDefusedVoice                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UTaskForceDemolitionMode_C::SetDemolitionSounds(TArray<class USoundCue*> BombPickupMusic, TArray<class USoundCue*> BombPlantedVoice, TArray<class USoundCue*> BombPlantedMusic, TArray<class USoundCue*> BombExplodedVoice, TArray<class USoundCue*> BombDefusedVoice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetDemolitionSounds");
		
		UTaskForceDemolitionMode_C_SetDemolitionSounds_Params params {};
		params.BombPickupMusic = BombPickupMusic;
		params.BombPlantedVoice = BombPlantedVoice;
		params.BombPlantedMusic = BombPlantedMusic;
		params.BombExplodedVoice = BombExplodedVoice;
		params.BombDefusedVoice = BombDefusedVoice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.RemoveBombZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBoxComponent*                               Zone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceDemolitionMode_C::RemoveBombZone(class UBoxComponent* Zone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.RemoveBombZone");
		
		UTaskForceDemolitionMode_C_RemoveBombZone_Params params {};
		params.Zone = Zone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.ClearBombZones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UTaskForceDemolitionMode_C::ClearBombZones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.ClearBombZones");
		
		UTaskForceDemolitionMode_C_ClearBombZones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.AddBombZone
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBoxComponent*                               Zone                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTaskForceIcon                              AttackIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTaskForceIcon                              DefendIcon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceDemolitionMode_C::AddBombZone(class UBoxComponent* Zone, int32_t TeamID, const struct FTaskForceIcon& AttackIcon, const struct FTaskForceIcon& DefendIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.AddBombZone");
		
		UTaskForceDemolitionMode_C_AddBombZone_Params params {};
		params.Zone = Zone;
		params.TeamID = TeamID;
		params.AttackIcon = AttackIcon;
		params.DefendIcon = DefendIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetBomb
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AttachCustom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETaskForceBone                                     AttachBone                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  AttachTransform                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTaskForceIcon                              Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTaskForceDemolitionMode_C::SetBomb(const struct FTransform& Transform, class UStaticMesh* Mesh, bool AttachCustom, ETaskForceBone AttachBone, const struct FTransform& AttachTransform, const struct FTaskForceIcon& Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForceDemolitionMode.TaskForceDemolitionMode_C.SetBomb");
		
		UTaskForceDemolitionMode_C_SetBomb_Params params {};
		params.Transform = Transform;
		params.Mesh = Mesh;
		params.AttachCustom = AttachCustom;
		params.AttachBone = AttachBone;
		params.AttachTransform = AttachTransform;
		params.Icon = Icon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceDemolitionMode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceDemolitionMode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TaskForceDemolitionMode.TaskForceDemolitionMode_C");
		return ptr;
	}

}


