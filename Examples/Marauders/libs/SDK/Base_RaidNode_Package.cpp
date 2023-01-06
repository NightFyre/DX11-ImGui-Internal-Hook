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
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.Analytics_Used
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPod                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_RaidNode_C::Analytics_Used(bool IsPod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.Analytics_Used");
		
		ABase_RaidNode_C_Analytics_Used_Params params {};
		params.IsPod = IsPod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.ReturnAreaEntranceMoveToLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ShipActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class URaidDockingComponent*                       DockingCompInteractWith                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  MoveToTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  CameraOffset                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 * 		float                                              BoomLength                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_RaidNode_C::ReturnAreaEntranceMoveToLocation(class AActor* ShipActor, class URaidDockingComponent* DockingCompInteractWith, struct FTransform* MoveToTransform, struct FTransform* CameraOffset, float* BoomLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.ReturnAreaEntranceMoveToLocation");
		
		ABase_RaidNode_C_ReturnAreaEntranceMoveToLocation_Params params {};
		params.ShipActor = ShipActor;
		params.DockingCompInteractWith = DockingCompInteractWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveToTransform != nullptr)
			*MoveToTransform = params.MoveToTransform;
		if (CameraOffset != nullptr)
			*CameraOffset = params.CameraOffset;
		if (BoomLength != nullptr)
			*BoomLength = params.BoomLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.GetEntranceAreaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AreaName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_RaidNode_C::GetEntranceAreaName(class FName* AreaName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.GetEntranceAreaName");
		
		ABase_RaidNode_C_GetEntranceAreaName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AreaName != nullptr)
			*AreaName = params.AreaName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABase_RaidNode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.ReceiveBeginPlay");
		
		ABase_RaidNode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.Analytics_DockingHappened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasAPod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_RaidNode_C::Analytics_DockingHappened(bool WasAPod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.Analytics_DockingHappened");
		
		ABase_RaidNode_C_Analytics_DockingHappened_Params params {};
		params.WasAPod = WasAPod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.PlayerIsInPodVisuals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isInPod                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABase_RaidNode_C::PlayerIsInPodVisuals(bool isInPod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.PlayerIsInPodVisuals");
		
		ABase_RaidNode_C_PlayerIsInPodVisuals_Params params {};
		params.isInPod = isInPod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Base_RaidNode.Base_RaidNode_C.ExecuteUbergraph_Base_RaidNode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABase_RaidNode_C::ExecuteUbergraph_Base_RaidNode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Base_RaidNode.Base_RaidNode_C.ExecuteUbergraph_Base_RaidNode");
		
		ABase_RaidNode_C_ExecuteUbergraph_Base_RaidNode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABase_RaidNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABase_RaidNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Base_RaidNode.Base_RaidNode_C");
		return ptr;
	}

}


