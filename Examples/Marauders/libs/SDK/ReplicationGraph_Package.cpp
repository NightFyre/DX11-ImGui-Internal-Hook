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
	 * 		Name   -> PredefinedFunction UReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasicReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.BasicReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_ActorList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_ActorList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_ActorListFrequencyBuckets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_DynamicSpatialFrequency.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_DynamicSpatialFrequency::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_ConnectionDormancyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_ConnectionDormancyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_DormancyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_DormancyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DormancyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_GridCell.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_GridCell::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridCell");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_GridSpatialization2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_GridSpatialization2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_AlwaysRelevant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_AlwaysRelevant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_AlwaysRelevant_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_TearOff_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_TearOff_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetReplicationGraphConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetReplicationGraphConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.NetReplicationGraphConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	 * 		Flags  -> ()
	 */
	void AReplicationGraphDebugActor::ServerStopDebugging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");
		
		AReplicationGraphDebugActor_ServerStopDebugging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	 * 		Flags  -> ()
	 */
	void AReplicationGraphDebugActor::ServerStartDebugging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");
		
		AReplicationGraphDebugActor_ServerStartDebugging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PeriodFrame                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass");
		
		AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params params {};
		params.Class = Class;
		params.PeriodFrame = PeriodFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CullDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");
		
		AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params params {};
		params.Class = Class;
		params.CullDistance = CullDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint");
		
		AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
	 * 		Flags  -> ()
	 */
	void AReplicationGraphDebugActor::ServerPrintCullDistances()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances");
		
		AReplicationGraphDebugActor_ServerPrintCullDistances_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& Str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");
		
		AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params params {};
		params.Str = Str;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	 * 		Flags  -> ()
	 */
	void AReplicationGraphDebugActor::ServerCellInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");
		
		AReplicationGraphDebugActor_ServerCellInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     CellLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CellExtent                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");
		
		AReplicationGraphDebugActor_ClientCellInfo_Params params {};
		params.CellLocation = CellLocation;
		params.CellExtent = CellExtent;
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReplicationGraphDebugActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReplicationGraphDebugActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphDebugActor");
		return ptr;
	}

}


