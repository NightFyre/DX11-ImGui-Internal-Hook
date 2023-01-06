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
	 * 		Name   -> Function WeapTool.WeapTool_C.GetToolSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkelMesh                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapTool_C::GetToolSkeletalMesh(class USkeletalMeshComponent** SkelMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTool.WeapTool_C.GetToolSkeletalMesh");
		
		AWeapTool_C_GetToolSkeletalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkelMesh != nullptr)
			*SkelMesh = params.SkelMesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeapTool.WeapTool_C.BrokenWeaponEvent
	 * 		Flags  -> ()
	 */
	void AWeapTool_C::BrokenWeaponEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTool.WeapTool_C.BrokenWeaponEvent");
		
		AWeapTool_C_BrokenWeaponEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeapTool.WeapTool_C.ExecuteUbergraph_WeapTool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeapTool_C::ExecuteUbergraph_WeapTool(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeapTool.WeapTool_C.ExecuteUbergraph_WeapTool");
		
		AWeapTool_C_ExecuteUbergraph_WeapTool_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeapTool_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapTool_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapTool.WeapTool_C");
		return ptr;
	}

}


