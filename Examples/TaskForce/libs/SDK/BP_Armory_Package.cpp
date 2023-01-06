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
	 * 		Name   -> Function BP_Armory.BP_Armory_C.ResetSkin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Armory_C::ResetSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.ResetSkin");
		
		ABP_Armory_C_ResetSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.UpdateWorkshopMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               SkinMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class UMaterialInterface*>     SkinMaterials                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABP_Armory_C::UpdateWorkshopMesh(class USkeletalMeshComponent* Mesh, class USkeletalMesh* SkinMesh, TMap<class FString, class UMaterialInterface*> SkinMaterials)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.UpdateWorkshopMesh");
		
		ABP_Armory_C_UpdateWorkshopMesh_Params params {};
		params.Mesh = Mesh;
		params.SkinMesh = SkinMesh;
		params.SkinMaterials = SkinMaterials;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.UpdateWorkshopArmory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, struct FTaskForceSkin>         CommandoLookup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<class FString, struct FTaskForceSkin>         TerroristLookup                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<class FString, struct FTaskForceSkin>         BotLookup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::UpdateWorkshopArmory(TMap<class FString, struct FTaskForceSkin> CommandoLookup, TMap<class FString, struct FTaskForceSkin> TerroristLookup, TMap<class FString, struct FTaskForceSkin> BotLookup, int32_t TeamID, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.UpdateWorkshopArmory");
		
		ABP_Armory_C_UpdateWorkshopArmory_Params params {};
		params.CommandoLookup = CommandoLookup;
		params.TerroristLookup = TerroristLookup;
		params.BotLookup = BotLookup;
		params.TeamID = TeamID;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.UpdateWorkshopSkin
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, struct FTaskForceSkin>         Skins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::UpdateWorkshopSkin(TMap<class FString, struct FTaskForceSkin> Skins, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.UpdateWorkshopSkin");
		
		ABP_Armory_C_UpdateWorkshopSkin_Params params {};
		params.Skins = Skins;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.UpdateArmoryMesh
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBP_ArmoryItem                              Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::UpdateArmoryMesh(class USkeletalMeshComponent* Mesh, const struct FBP_ArmoryItem& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.UpdateArmoryMesh");
		
		ABP_Armory_C_UpdateArmoryMesh_Params params {};
		params.Mesh = Mesh;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.UpdateArmoryComponent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, struct FBP_ArmoryItem>         CommandoLookup                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		TMap<class FString, struct FBP_ArmoryItem>         TerroristLookup                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::UpdateArmoryComponent(TMap<class FString, struct FBP_ArmoryItem> CommandoLookup, TMap<class FString, struct FBP_ArmoryItem> TerroristLookup, int32_t TeamID, const class FString& Key, class USkeletalMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.UpdateArmoryComponent");
		
		ABP_Armory_C_UpdateArmoryComponent_Params params {};
		params.CommandoLookup = CommandoLookup;
		params.TerroristLookup = TerroristLookup;
		params.TeamID = TeamID;
		params.Key = Key;
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.updateArmory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TeamID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATaskForceSettings_C*                        Workshop                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Head                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Bottom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Hat                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Gloves                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Shoes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Gear                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::updateArmory(int32_t TeamID, class ATaskForceSettings_C* Workshop, const class FString& Body, const class FString& Head, const class FString& Top, const class FString& Bottom, const class FString& Hat, const class FString& Gloves, const class FString& Shoes, const class FString& Gear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.updateArmory");
		
		ABP_Armory_C_updateArmory_Params params {};
		params.TeamID = TeamID;
		params.Workshop = Workshop;
		params.Body = Body;
		params.Head = Head;
		params.Top = Top;
		params.Bottom = Bottom;
		params.Hat = Hat;
		params.Gloves = Gloves;
		params.Shoes = Shoes;
		params.Gear = Gear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.sleepArmory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Armory_C::sleepArmory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.sleepArmory");
		
		ABP_Armory_C_sleepArmory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.renderArmory
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::renderArmory(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.renderArmory");
		
		ABP_Armory_C_renderArmory_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_Armory_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.ReceiveBeginPlay");
		
		ABP_Armory_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function BP_Armory.BP_Armory_C.ExecuteUbergraph_BP_Armory
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Armory_C::ExecuteUbergraph_BP_Armory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Armory.BP_Armory_C.ExecuteUbergraph_BP_Armory");
		
		ABP_Armory_C_ExecuteUbergraph_BP_Armory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Armory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Armory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Armory.BP_Armory_C");
		return ptr;
	}

}


