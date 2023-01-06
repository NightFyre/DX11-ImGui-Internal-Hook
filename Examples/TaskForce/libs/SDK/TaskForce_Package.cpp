/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00622370
	 * 		Name   -> Function TaskForce.TaskForceBeaconClient.ServerPong
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            BuildID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceBeaconClient::ServerPong(int32_t BuildID, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBeaconClient.ServerPong");
		
		ATaskForceBeaconClient_ServerPong_Params params {};
		params.BuildID = BuildID;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620C10
	 * 		Name   -> Function TaskForce.TaskForceBeaconClient.ClientPing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		bool                                               bNeedsPassword                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceBeaconClient::ClientPing(bool bNeedsPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBeaconClient.ClientPing");
		
		ATaskForceBeaconClient_ClientPing_Params params {};
		params.bNeedsPassword = bNeedsPassword;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620A90
	 * 		Name   -> Function TaskForce.TaskForceBeaconClient.ClientJoin
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		bool                                               bCanJoin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoinSteamP2P                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JoinHostAddress                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FailedMessage                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceBeaconClient::ClientJoin(bool bCanJoin, const class FString& JoinSteamP2P, const class FString& JoinHostAddress, const class FString& FailedMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBeaconClient.ClientJoin");
		
		ATaskForceBeaconClient_ClientJoin_Params params {};
		params.bCanJoin = bCanJoin;
		params.JoinSteamP2P = JoinSteamP2P;
		params.JoinHostAddress = JoinHostAddress;
		params.FailedMessage = FailedMessage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623890
	 * 		Name   -> Function TaskForce.TaskForceBomb.SetCustomMesh
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Socket                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATaskForceBomb::SetCustomMesh(class UStaticMesh* Mesh, const class FString& Socket, const struct FTransform& Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.SetCustomMesh");
		
		ATaskForceBomb_SetCustomMesh_Params params {};
		params.Mesh = Mesh;
		params.Socket = Socket;
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622130
	 * 		Name   -> Function TaskForce.TaskForceBomb.ResetBomb
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ATaskForceBomb::ResetBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.ResetBomb");
		
		ATaskForceBomb_ResetBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622060
	 * 		Name   -> Function TaskForce.TaskForceBomb.PlantBombResetPhysics
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ATaskForceBomb::PlantBombResetPhysics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.PlantBombResetPhysics");
		
		ATaskForceBomb_PlantBombResetPhysics_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D790
	 * 		Name   -> Function TaskForce.TaskForceBomb.PlantBomb
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ATaskForceBomb::PlantBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.PlantBomb");
		
		ATaskForceBomb_PlantBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621FB0
	 * 		Name   -> Function TaskForce.TaskForceBomb.PickupBomb
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ATaskForceCharacter*                         NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceBomb::PickupBomb(class ATaskForceCharacter* NewOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.PickupBomb");
		
		ATaskForceBomb_PickupBomb_Params params {};
		params.NewOwner = NewOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621F30
	 * 		Name   -> Function TaskForce.TaskForceBomb.OnRep_Exploded
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceBomb::OnRep_Exploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.OnRep_Exploded");
		
		ATaskForceBomb_OnRep_Exploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621E70
	 * 		Name   -> Function TaskForce.TaskForceBomb.OnRep_CustomMesh
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceBomb::OnRep_CustomMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.OnRep_CustomMesh");
		
		ATaskForceBomb_OnRep_CustomMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621E70
	 * 		Name   -> Function TaskForce.TaskForceBomb.OnRep_AttachTransform
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceBomb::OnRep_AttachTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.OnRep_AttachTransform");
		
		ATaskForceBomb_OnRep_AttachTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621E70
	 * 		Name   -> Function TaskForce.TaskForceBomb.OnRep_AttachSocket
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceBomb::OnRep_AttachSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.OnRep_AttachSocket");
		
		ATaskForceBomb_OnRep_AttachSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620D70
	 * 		Name   -> Function TaskForce.TaskForceBomb.ExplodeBomb
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ATaskForceBomb::ExplodeBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.ExplodeBomb");
		
		ATaskForceBomb_ExplodeBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620CC0
	 * 		Name   -> Function TaskForce.TaskForceBomb.DropBomb
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ATaskForceBomb::DropBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.DropBomb");
		
		ATaskForceBomb_DropBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620CA0
	 * 		Name   -> Function TaskForce.TaskForceBomb.DefuseBomb
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ATaskForceBomb::DefuseBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBomb.DefuseBomb");
		
		ATaskForceBomb_DefuseBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBomb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBomb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBomb");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBombZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBombZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBombZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceBot_FindPointNearEnemy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceBot_FindPointNearEnemy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBot_FindPointNearEnemy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceBot_FindPointNearTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceBot_FindPointNearTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBot_FindPointNearTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceBot_HasLoSTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceBot_HasLoSTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBot_HasLoSTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623A00
	 * 		Name   -> Function TaskForce.TaskForceBotController.ShootEnemy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceBotController::ShootEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBotController.ShootEnemy");
		
		ATaskForceBotController_ShootEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006219F0
	 * 		Name   -> Function TaskForce.TaskForceBotController.IsHostage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ATaskForceBotController::IsHostage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBotController.IsHostage");
		
		ATaskForceBotController_IsHostage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620E40
	 * 		Name   -> Function TaskForce.TaskForceBotController.FindClosestTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceBotController::FindClosestTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBotController.FindClosestTarget");
		
		ATaskForceBotController_FindClosestTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620DB0
	 * 		Name   -> Function TaskForce.TaskForceBotController.FindClosestEnemyWithLOS
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ATaskForceCharacter*                         ExcludeEnemy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATaskForceBotController::FindClosestEnemyWithLOS(class ATaskForceCharacter* ExcludeEnemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBotController.FindClosestEnemyWithLOS");
		
		ATaskForceBotController_FindClosestEnemyWithLOS_Params params {};
		params.ExcludeEnemy = ExcludeEnemy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620D90
	 * 		Name   -> Function TaskForce.TaskForceBotController.FindClosestEnemy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceBotController::FindClosestEnemy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBotController.FindClosestEnemy");
		
		ATaskForceBotController_FindClosestEnemy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBotController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBotController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBotController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceBreach.TriggerBreach
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATaskForceBreach::TriggerBreach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBreach.TriggerBreach");
		
		ATaskForceBreach_TriggerBreach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceBreach.ResetState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATaskForceBreach::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBreach.ResetState");
		
		ATaskForceBreach_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceBreach.IsBreachExploded
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATaskForceBreach::IsBreachExploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBreach.IsBreachExploded");
		
		ATaskForceBreach_IsBreachExploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceBreach.IsBreachActive
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATaskForceBreach::IsBreachActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBreach.IsBreachActive");
		
		ATaskForceBreach_IsBreachActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620CE0
	 * 		Name   -> Function TaskForce.TaskForceBreach.Explode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceBreach::Explode(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceBreach.Explode");
		
		ATaskForceBreach_Explode_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceBreach.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceBreach::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceBreach");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceButton.ToggleButton
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bReleased                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceButton::ToggleButton(bool bReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceButton.ToggleButton");
		
		ATaskForceButton_ToggleButton_Params params {};
		params.bReleased = bReleased;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceButton.ResetState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATaskForceButton::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceButton.ResetState");
		
		ATaskForceButton_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceButton.IsButtonPressable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATaskForceButton::IsButtonPressable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceButton.IsButtonPressable");
		
		ATaskForceButton_IsButtonPressable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceButton.GetButtonText
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class FString ATaskForceButton::GetButtonText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceButton.GetButtonText");
		
		ATaskForceButton_GetButtonText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceButton");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623EE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.UnProne
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::UnProne(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.UnProne");
		
		ATaskForceCharacter_UnProne_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623EC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ThrowProjectile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::ThrowProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ThrowProjectile");
		
		ATaskForceCharacter_ThrowProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623EA0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.TauntReset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::TauntReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.TauntReset");
		
		ATaskForceCharacter_TauntReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623E80
	 * 		Name   -> Function TaskForce.TaskForceCharacter.StopProjectile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::StopProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.StopProjectile");
		
		ATaskForceCharacter_StopProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623E60
	 * 		Name   -> Function TaskForce.TaskForceCharacter.StartLadderPull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::StartLadderPull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.StartLadderPull");
		
		ATaskForceCharacter_StartLadderPull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623E40
	 * 		Name   -> Function TaskForce.TaskForceCharacter.StartLadderHang
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::StartLadderHang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.StartLadderHang");
		
		ATaskForceCharacter_StartLadderHang_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623E20
	 * 		Name   -> Function TaskForce.TaskForceCharacter.StartLadderDrop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::StartLadderDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.StartLadderDrop");
		
		ATaskForceCharacter_StartLadderDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623E00
	 * 		Name   -> Function TaskForce.TaskForceCharacter.StartClimbJump
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::StartClimbJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.StartClimbJump");
		
		ATaskForceCharacter_StartClimbJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623DE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.StartClimbHang
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::StartClimbHang()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.StartClimbHang");
		
		ATaskForceCharacter_StartClimbHang_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623D20
	 * 		Name   -> Function TaskForce.TaskForceCharacter.SpawnLadderFootstepEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundCue*                                   FootstepSound                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::SpawnLadderFootstepEffects(class USoundCue* FootstepSound, const class FName& Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.SpawnLadderFootstepEffects");
		
		ATaskForceCharacter_SpawnLadderFootstepEffects_Params params {};
		params.FootstepSound = FootstepSound;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623C10
	 * 		Name   -> Function TaskForce.TaskForceCharacter.SpawnFootstepEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DirectionSocket                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsLeftFoot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::SpawnFootstepEffects(const class FName& Socket, const class FName& DirectionSocket, bool IsLeftFoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.SpawnFootstepEffects");
		
		ATaskForceCharacter_SpawnFootstepEffects_Params params {};
		params.Socket = Socket;
		params.DirectionSocket = DirectionSocket;
		params.IsLeftFoot = IsLeftFoot;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623B10
	 * 		Name   -> Function TaskForce.TaskForceCharacter.SpawnCalloutEffects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundCue*                                   CalloutSound                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           AttenuationSettings                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::SpawnCalloutEffects(class USoundCue* CalloutSound, const class FName& Socket, class USoundAttenuation* AttenuationSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.SpawnCalloutEffects");
		
		ATaskForceCharacter_SpawnCalloutEffects_Params params {};
		params.CalloutSound = CalloutSound;
		params.Socket = Socket;
		params.AttenuationSettings = AttenuationSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623AE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ShouldPersistRagdoll
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::ShouldPersistRagdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ShouldPersistRagdoll");
		
		ATaskForceCharacter_ShouldPersistRagdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623AB0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ShouldClimbRun
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool ATaskForceCharacter::ShouldClimbRun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ShouldClimbRun");
		
		ATaskForceCharacter_ShouldClimbRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623A80
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ShouldClimbLow
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool ATaskForceCharacter::ShouldClimbLow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ShouldClimbLow");
		
		ATaskForceCharacter_ShouldClimbLow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623A50
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ShouldClimbJump
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool ATaskForceCharacter::ShouldClimbJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ShouldClimbJump");
		
		ATaskForceCharacter_ShouldClimbJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623A20
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ShouldClimbHigh
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool ATaskForceCharacter::ShouldClimbHigh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ShouldClimbHigh");
		
		ATaskForceCharacter_ShouldClimbHigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623840
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerTriggerVoiceTaunt
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ATaskForceCharacter::ServerTriggerVoiceTaunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerTriggerVoiceTaunt");
		
		ATaskForceCharacter_ServerTriggerVoiceTaunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623780
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerTriggerTaunt
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceCharacter*                         Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerTriggerTaunt(class ATaskForceCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerTriggerTaunt");
		
		ATaskForceCharacter_ServerTriggerTaunt_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006236C0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerTriggerDoor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceDoor*                              Door                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerTriggerDoor(class ATaskForceDoor* Door)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerTriggerDoor");
		
		ATaskForceCharacter_ServerTriggerDoor_Params params {};
		params.Door = Door;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006235C0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerTriggerButton
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceButton*                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bReleased                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerTriggerButton(class ATaskForceButton* Button, bool bReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerTriggerButton");
		
		ATaskForceCharacter_ServerTriggerButton_Params params {};
		params.Button = Button;
		params.bReleased = bReleased;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623500
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerTriggerBreach
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceBreach*                            Breach                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerTriggerBreach(class ATaskForceBreach* Breach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerTriggerBreach");
		
		ATaskForceCharacter_ServerTriggerBreach_Params params {};
		params.Breach = Breach;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623450
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetZooming
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              fNewZooming                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetZooming(float fNewZooming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetZooming");
		
		ATaskForceCharacter_ServerSetZooming_Params params {};
		params.fNewZooming = fNewZooming;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623350
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetWalking
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewWalking                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetWalking(bool bNewWalking, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetWalking");
		
		ATaskForceCharacter_ServerSetWalking_Params params {};
		params.bNewWalking = bNewWalking;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623290
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetThrowing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewThrow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetThrowing(bool bNewThrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetThrowing");
		
		ATaskForceCharacter_ServerSetThrowing_Params params {};
		params.bNewThrow = bNewThrow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006231E0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetTargeting
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              fNewTargeting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetTargeting(float fNewTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetTargeting");
		
		ATaskForceCharacter_ServerSetTargeting_Params params {};
		params.fNewTargeting = fNewTargeting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006230E0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetRunning
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewRunning                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetRunning(bool bNewRunning, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetRunning");
		
		ATaskForceCharacter_ServerSetRunning_Params params {};
		params.bNewRunning = bNewRunning;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00623030
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetPower
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		float                                              fNewPower                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetPower(float fNewPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetPower");
		
		ATaskForceCharacter_ServerSetPower_Params params {};
		params.fNewPower = fNewPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622F70
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetPlanting
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewPlanting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetPlanting(bool bNewPlanting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetPlanting");
		
		ATaskForceCharacter_ServerSetPlanting_Params params {};
		params.bNewPlanting = bNewPlanting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622E70
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetLeaningRight
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewLeaning                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetLeaningRight(bool bNewLeaning, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetLeaningRight");
		
		ATaskForceCharacter_ServerSetLeaningRight_Params params {};
		params.bNewLeaning = bNewLeaning;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622D70
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetLeaningLeft
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewLeaning                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetLeaningLeft(bool bNewLeaning, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetLeaningLeft");
		
		ATaskForceCharacter_ServerSetLeaningLeft_Params params {};
		params.bNewLeaning = bNewLeaning;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622CB0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetJumping
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewJumping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetJumping(bool bNewJumping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetJumping");
		
		ATaskForceCharacter_ServerSetJumping_Params params {};
		params.bNewJumping = bNewJumping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622BB0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetFollow
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceCharacter*                         Follower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATaskForceCharacter*                         Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetFollow(class ATaskForceCharacter* Follower, class ATaskForceCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetFollow");
		
		ATaskForceCharacter_ServerSetFollow_Params params {};
		params.Follower = Follower;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622AF0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetFirstPerson
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewFirstPerson                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetFirstPerson(bool bNewFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetFirstPerson");
		
		ATaskForceCharacter_ServerSetFirstPerson_Params params {};
		params.bNewFirstPerson = bNewFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006229F0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetFiring
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewRunning                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bToggle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetFiring(bool bNewRunning, bool bToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetFiring");
		
		ATaskForceCharacter_ServerSetFiring_Params params {};
		params.bNewRunning = bNewRunning;
		params.bToggle = bToggle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622930
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetDiving
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewDiving                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetDiving(bool bNewDiving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetDiving");
		
		ATaskForceCharacter_ServerSetDiving_Params params {};
		params.bNewDiving = bNewDiving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622870
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetDefusing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceBomb*                              Bomb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetDefusing(class ATaskForceBomb* Bomb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetDefusing");
		
		ATaskForceCharacter_ServerSetDefusing_Params params {};
		params.Bomb = Bomb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622640
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetClimbingLadder
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewClimbing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDropping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewPulling                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewSliding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLadderData                                 Data                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetClimbingLadder(bool bNewClimbing, bool bNewDropping, bool bNewPulling, bool bNewSliding, const struct FLadderData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetClimbingLadder");
		
		ATaskForceCharacter_ServerSetClimbingLadder_Params params {};
		params.bNewClimbing = bNewClimbing;
		params.bNewDropping = bNewDropping;
		params.bNewPulling = bNewPulling;
		params.bNewSliding = bNewSliding;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622470
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerSetClimbing
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bNewClimbing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewDropping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewPulling                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FClimbData                                  Data                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerSetClimbing(bool bNewClimbing, bool bNewDropping, bool bNewPulling, const struct FClimbData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerSetClimbing");
		
		ATaskForceCharacter_ServerSetClimbing_Params params {};
		params.bNewClimbing = bNewClimbing;
		params.bNewDropping = bNewDropping;
		params.bNewPulling = bNewPulling;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006222B0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerPickupWeapon
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceWeapon*                            NewWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerPickupWeapon(class ATaskForceWeapon* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerPickupWeapon");
		
		ATaskForceCharacter_ServerPickupWeapon_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006221F0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.ServerEquipWeapon
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForceWeapon*                            NewWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::ServerEquipWeapon(class ATaskForceWeapon* NewWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.ServerEquipWeapon");
		
		ATaskForceCharacter_ServerEquipWeapon_Params params {};
		params.NewWeapon = NewWeapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622150
	 * 		Name   -> Function TaskForce.TaskForceCharacter.SendTauntMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::SendTauntMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.SendTauntMessage");
		
		ATaskForceCharacter_SendTauntMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006220A0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.Prone
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bClientSimulation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::Prone(bool bClientSimulation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.Prone");
		
		ATaskForceCharacter_Prone_Params params {};
		params.bClientSimulation = bClientSimulation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622080
	 * 		Name   -> Function TaskForce.TaskForceCharacter.PlantReset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::PlantReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.PlantReset");
		
		ATaskForceCharacter_PlantReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00622040
	 * 		Name   -> Function TaskForce.TaskForceCharacter.PlantBomb
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::PlantBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.PlantBomb");
		
		ATaskForceCharacter_PlantBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621F90
	 * 		Name   -> Function TaskForce.TaskForceCharacter.OnRep_LastTakeHitInfo
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceCharacter::OnRep_LastTakeHitInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.OnRep_LastTakeHitInfo");
		
		ATaskForceCharacter_OnRep_LastTakeHitInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621F70
	 * 		Name   -> Function TaskForce.TaskForceCharacter.OnRep_LadderData
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceCharacter::OnRep_LadderData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.OnRep_LadderData");
		
		ATaskForceCharacter_OnRep_LadderData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621F50
	 * 		Name   -> Function TaskForce.TaskForceCharacter.OnRep_IsProne
	 * 		Flags  -> (Native, Public)
	 */
	void ATaskForceCharacter::OnRep_IsProne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.OnRep_IsProne");
		
		ATaskForceCharacter_OnRep_IsProne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621EB0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.OnRep_CurrentWeapon
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ATaskForceWeapon*                            LastWeapon                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::OnRep_CurrentWeapon(class ATaskForceWeapon* LastWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.OnRep_CurrentWeapon");
		
		ATaskForceCharacter_OnRep_CurrentWeapon_Params params {};
		params.LastWeapon = LastWeapon;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621E90
	 * 		Name   -> Function TaskForce.TaskForceCharacter.OnRep_ClimbData
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceCharacter::OnRep_ClimbData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.OnRep_ClimbData");
		
		ATaskForceCharacter_OnRep_ClimbData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621E40
	 * 		Name   -> Function TaskForce.TaskForceCharacter.LeanFraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ATaskForceCharacter::LeanFraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.LeanFraction");
		
		ATaskForceCharacter_LeanFraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnTauntMessage
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnTauntMessage(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnTauntMessage");
		
		ATaskForceCharacter_K2_OnTauntMessage_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnTaunt3D
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnTaunt3D(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnTaunt3D");
		
		ATaskForceCharacter_K2_OnTaunt3D_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnTaunt2D
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnTaunt2D(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnTaunt2D");
		
		ATaskForceCharacter_K2_OnTaunt2D_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnTaunt
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATaskForceCharacter::K2_OnTaunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnTaunt");
		
		ATaskForceCharacter_K2_OnTaunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnStartProne
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaledHalfHeightAdjust                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnStartProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnStartProne");
		
		ATaskForceCharacter_K2_OnStartProne_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnEndProne
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ScaledHalfHeightAdjust                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnEndProne(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnEndProne");
		
		ATaskForceCharacter_K2_OnEndProne_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnDeath(float KillingDamage, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnDeath");
		
		ATaskForceCharacter_K2_OnDeath_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.K2_OnCallout
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::K2_OnCallout(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.K2_OnCallout");
		
		ATaskForceCharacter_K2_OnCallout_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621E10
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsZooming
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsZooming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsZooming");
		
		ATaskForceCharacter_IsZooming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621DE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsWalking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsWalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsWalking");
		
		ATaskForceCharacter_IsWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621DB0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsThrowing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsThrowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsThrowing");
		
		ATaskForceCharacter_IsThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621D80
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsTargeting
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsTargeting");
		
		ATaskForceCharacter_IsTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621D50
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsSpectateTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsSpectateTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsSpectateTarget");
		
		ATaskForceCharacter_IsSpectateTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621D20
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsRunning");
		
		ATaskForceCharacter_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621CF0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsReloading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsReloading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsReloading");
		
		ATaskForceCharacter_IsReloading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621CC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsMoving
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsMoving");
		
		ATaskForceCharacter_IsMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621C90
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLocalOrSpectateTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLocalOrSpectateTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLocalOrSpectateTarget");
		
		ATaskForceCharacter_IsLocalOrSpectateTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621C60
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLeaning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLeaning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLeaning");
		
		ATaskForceCharacter_IsLeaning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621C30
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLadderStepping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLadderStepping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLadderStepping");
		
		ATaskForceCharacter_IsLadderStepping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621C00
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLadderSpinning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLadderSpinning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLadderSpinning");
		
		ATaskForceCharacter_IsLadderSpinning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621BD0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLadderSliding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLadderSliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLadderSliding");
		
		ATaskForceCharacter_IsLadderSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621BA0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLadderPulling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLadderPulling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLadderPulling");
		
		ATaskForceCharacter_IsLadderPulling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621B70
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLadderHanging
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLadderHanging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLadderHanging");
		
		ATaskForceCharacter_IsLadderHanging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621B40
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsLadderDropping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsLadderDropping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsLadderDropping");
		
		ATaskForceCharacter_IsLadderDropping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621B10
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsJumping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsJumping");
		
		ATaskForceCharacter_IsJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621AE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsInTaunt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsInTaunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsInTaunt");
		
		ATaskForceCharacter_IsInTaunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621AB0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsInStanceTransition
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsInStanceTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsInStanceTransition");
		
		ATaskForceCharacter_IsInStanceTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621A80
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsInProneTransition
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsInProneTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsInProneTransition");
		
		ATaskForceCharacter_IsInProneTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621A50
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsInCrouchTransition
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsInCrouchTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsInCrouchTransition");
		
		ATaskForceCharacter_IsInCrouchTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621A20
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsHostage
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsHostage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsHostage");
		
		ATaskForceCharacter_IsHostage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006219C0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsFirstPerson
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsFirstPerson");
		
		ATaskForceCharacter_IsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621990
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsFiring
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsFiring");
		
		ATaskForceCharacter_IsFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621960
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsFalling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsFalling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsFalling");
		
		ATaskForceCharacter_IsFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621930
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsDiving
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsDiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsDiving");
		
		ATaskForceCharacter_IsDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006218A0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsClimbPulling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsClimbPulling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsClimbPulling");
		
		ATaskForceCharacter_IsClimbPulling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621870
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsClimbJumping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsClimbJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsClimbJumping");
		
		ATaskForceCharacter_IsClimbJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621900
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsClimbingLadder
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsClimbingLadder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsClimbingLadder");
		
		ATaskForceCharacter_IsClimbingLadder_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006218D0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsClimbing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsClimbing");
		
		ATaskForceCharacter_IsClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621840
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsClimbHanging
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsClimbHanging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsClimbHanging");
		
		ATaskForceCharacter_IsClimbHanging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621810
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsClimbDropping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsClimbDropping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsClimbDropping");
		
		ATaskForceCharacter_IsClimbDropping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006217E0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsBot
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsBot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsBot");
		
		ATaskForceCharacter_IsBot_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006217B0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsArming
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsArming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsArming");
		
		ATaskForceCharacter_IsArming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621780
	 * 		Name   -> Function TaskForce.TaskForceCharacter.IsAlive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::IsAlive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.IsAlive");
		
		ATaskForceCharacter_IsAlive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621750
	 * 		Name   -> Function TaskForce.TaskForceCharacter.HasShotgunEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::HasShotgunEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.HasShotgunEquipped");
		
		ATaskForceCharacter_HasShotgunEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621720
	 * 		Name   -> Function TaskForce.TaskForceCharacter.HasProjectileEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::HasProjectileEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.HasProjectileEquipped");
		
		ATaskForceCharacter_HasProjectileEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006216F0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.HasProjectile
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::HasProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.HasProjectile");
		
		ATaskForceCharacter_HasProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006216C0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.HasPistolEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::HasPistolEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.HasPistolEquipped");
		
		ATaskForceCharacter_HasPistolEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621690
	 * 		Name   -> Function TaskForce.TaskForceCharacter.HasKnifeEquipped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceCharacter::HasKnifeEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.HasKnifeEquipped");
		
		ATaskForceCharacter_HasKnifeEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621650
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetWeaponAttachPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ATaskForceCharacter::GetWeaponAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetWeaponAttachPoint");
		
		ATaskForceCharacter_GetWeaponAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621620
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetWeapon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATaskForceWeapon* ATaskForceCharacter::GetWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetWeapon");
		
		ATaskForceCharacter_GetWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006215F0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetTauntID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForceCharacter::GetTauntID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetTauntID");
		
		ATaskForceCharacter_GetTauntID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006215C0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetSpeedModifier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ATaskForceCharacter::GetSpeedModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetSpeedModifier");
		
		ATaskForceCharacter_GetSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621580
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetScopeUpVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceCharacter::GetScopeUpVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetScopeUpVector");
		
		ATaskForceCharacter_GetScopeUpVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621540
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetScopeRightVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceCharacter::GetScopeRightVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetScopeRightVector");
		
		ATaskForceCharacter_GetScopeRightVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621420
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetScopeRightHandLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              CameraYaw                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CameraPitch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ATaskForceCharacter::GetScopeRightHandLocation(float CameraYaw, float CameraPitch, bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetScopeRightHandLocation");
		
		ATaskForceCharacter_GetScopeRightHandLocation_Params params {};
		params.CameraYaw = CameraYaw;
		params.CameraPitch = CameraPitch;
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621300
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetScopeLeftHandLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              CameraYaw                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CameraPitch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector ATaskForceCharacter::GetScopeLeftHandLocation(float CameraYaw, float CameraPitch, bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetScopeLeftHandLocation");
		
		ATaskForceCharacter_GetScopeLeftHandLocation_Params params {};
		params.CameraYaw = CameraYaw;
		params.CameraPitch = CameraPitch;
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006212C0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetScopeForwardVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceCharacter::GetScopeForwardVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetScopeForwardVector");
		
		ATaskForceCharacter_GetScopeForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621280
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetScopeAttachPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ATaskForceCharacter::GetScopeAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetScopeAttachPoint");
		
		ATaskForceCharacter_GetScopeAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006211E0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetProjectilePower
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Power                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::GetProjectilePower(float* Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetProjectilePower");
		
		ATaskForceCharacter_GetProjectilePower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Power != nullptr)
			*Power = params.Power;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621040
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetProjectileData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::GetProjectileData(struct FVector* Origin, struct FVector* Direction, float* Radius, float* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetProjectileData");
		
		ATaskForceCharacter_GetProjectileData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Origin != nullptr)
			*Origin = params.Origin;
		if (Direction != nullptr)
			*Direction = params.Direction;
		if (Radius != nullptr)
			*Radius = params.Radius;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00621010
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetMaxAnimationSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ATaskForceCharacter::GetMaxAnimationSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetMaxAnimationSpeed");
		
		ATaskForceCharacter_GetMaxAnimationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620FE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetLadderFraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ATaskForceCharacter::GetLadderFraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetLadderFraction");
		
		ATaskForceCharacter_GetLadderFraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620FA0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetHeadAttachPoint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ATaskForceCharacter::GetHeadAttachPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetHeadAttachPoint");
		
		ATaskForceCharacter_GetHeadAttachPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620F60
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetEyesLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceCharacter::GetEyesLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetEyesLocation");
		
		ATaskForceCharacter_GetEyesLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620F20
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetEarsLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceCharacter::GetEarsLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetEarsLocation");
		
		ATaskForceCharacter_GetEarsLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620EE0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.GetAimOffsets
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator ATaskForceCharacter::GetAimOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.GetAimOffsets");
		
		ATaskForceCharacter_GetAimOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620EC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.FinishLadderSlide
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::FinishLadderSlide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.FinishLadderSlide");
		
		ATaskForceCharacter_FinishLadderSlide_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620EA0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.FinishLadderPull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::FinishLadderPull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.FinishLadderPull");
		
		ATaskForceCharacter_FinishLadderPull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620EA0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.FinishLadderDrop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::FinishLadderDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.FinishLadderDrop");
		
		ATaskForceCharacter_FinishLadderDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620E80
	 * 		Name   -> Function TaskForce.TaskForceCharacter.FinishDive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::FinishDive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.FinishDive");
		
		ATaskForceCharacter_FinishDive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620E60
	 * 		Name   -> Function TaskForce.TaskForceCharacter.FinishClimbPull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::FinishClimbPull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.FinishClimbPull");
		
		ATaskForceCharacter_FinishClimbPull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620E60
	 * 		Name   -> Function TaskForce.TaskForceCharacter.FinishClimbDrop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceCharacter::FinishClimbDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.FinishClimbDrop");
		
		ATaskForceCharacter_FinishClimbDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceCharacter.CustomizeCharacter
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMesh*                               Head                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               Hat                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::CustomizeCharacter(class USkeletalMesh* Head, class USkeletalMesh* Hat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.CustomizeCharacter");
		
		ATaskForceCharacter_CustomizeCharacter_Params params {};
		params.Head = Head;
		params.Hat = Hat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620A00
	 * 		Name   -> Function TaskForce.TaskForceCharacter.BroadcastTaunt
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::BroadcastTaunt(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.BroadcastTaunt");
		
		ATaskForceCharacter_BroadcastTaunt_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00620970
	 * 		Name   -> Function TaskForce.TaskForceCharacter.BroadcastCallout
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            Seed                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceCharacter::BroadcastCallout(int32_t Seed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceCharacter.BroadcastCallout");
		
		ATaskForceCharacter_BroadcastCallout_Params params {};
		params.Seed = Seed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceCharacterMovement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceCharacterMovement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceCharacterMovement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FC00
	 * 		Name   -> Function TaskForce.TFGameMode.StartMatch
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATFGameMode::StartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.StartMatch");
		
		ATFGameMode_StartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F5F0
	 * 		Name   -> Function TaskForce.TFGameMode.SetBandwidthLimit
	 * 		Flags  -> (Exec, Native, Public)
	 * Parameters:
	 * 		float                                              AsyncIOBandwidthLimit                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATFGameMode::SetBandwidthLimit(float AsyncIOBandwidthLimit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.SetBandwidthLimit");
		
		ATFGameMode_SetBandwidthLimit_Params params {};
		params.AsyncIOBandwidthLimit = AsyncIOBandwidthLimit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F4C0
	 * 		Name   -> Function TaskForce.TFGameMode.Say
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATFGameMode::Say(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.Say");
		
		ATFGameMode_Say_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F470
	 * 		Name   -> Function TaskForce.TFGameMode.RestartGame
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATFGameMode::RestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.RestartGame");
		
		ATFGameMode_RestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F1A0
	 * 		Name   -> Function TaskForce.TFGameMode.ReadyToStartMatch
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool ATFGameMode::ReadyToStartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.ReadyToStartMatch");
		
		ATFGameMode_ReadyToStartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F170
	 * 		Name   -> Function TaskForce.TFGameMode.ReadyToEndMatch
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	bool ATFGameMode::ReadyToEndMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.ReadyToEndMatch");
		
		ATFGameMode_ReadyToEndMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameMode.K2_OnSetMatchState
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATFGameMode::K2_OnSetMatchState(const class FName& NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.K2_OnSetMatchState");
		
		ATFGameMode_K2_OnSetMatchState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EB20
	 * 		Name   -> Function TaskForce.TFGameMode.IsMatchInProgress
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATFGameMode::IsMatchInProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.IsMatchInProgress");
		
		ATFGameMode_IsMatchInProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E6C0
	 * 		Name   -> Function TaskForce.TFGameMode.HasMatchEnded
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATFGameMode::HasMatchEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.HasMatchEnded");
		
		ATFGameMode_HasMatchEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E270
	 * 		Name   -> Function TaskForce.TFGameMode.GetMatchState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName ATFGameMode::GetMatchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.GetMatchState");
		
		ATFGameMode_GetMatchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E0A0
	 * 		Name   -> Function TaskForce.TFGameMode.EndMatch
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATFGameMode::EndMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.EndMatch");
		
		ATFGameMode_EndMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063C860
	 * 		Name   -> Function TaskForce.TFGameMode.AbortMatch
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void ATFGameMode::AbortMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameMode.AbortMatch");
		
		ATFGameMode_AbortMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATFGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATFGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627BC0
	 * 		Name   -> Function TaskForce.TaskForceGameMode.WasMatchWon
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForceGameMode::WasMatchWon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameMode.WasMatchWon");
		
		ATaskForceGameMode_WasMatchWon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceGameMode.SpawnWeapons
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATaskForceGameMode::SpawnWeapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameMode.SpawnWeapons");
		
		ATaskForceGameMode_SpawnWeapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006279D0
	 * 		Name   -> Function TaskForce.TaskForceGameMode.SetReplicatedTeamName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TeamID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TeamName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceGameMode::SetReplicatedTeamName(int32_t TeamID, const class FString& TeamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameMode.SetReplicatedTeamName");
		
		ATaskForceGameMode_SetReplicatedTeamName_Params params {};
		params.TeamID = TeamID;
		params.TeamName = TeamName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627680
	 * 		Name   -> Function TaskForce.TaskForceGameMode.SayObject
	 * 		Flags  -> (Final, Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceGameMode::SayObject(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameMode.SayObject");
		
		ATaskForceGameMode_SayObject_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626E10
	 * 		Name   -> Function TaskForce.TaskForceGameMode.FinishMatch
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void ATaskForceGameMode::FinishMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameMode.FinishMatch");
		
		ATaskForceGameMode_FinishMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceDemolitionMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceDemolitionMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceDemolitionMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceDoor.ToggleDoor
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATaskForceDoor::ToggleDoor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceDoor.ToggleDoor");
		
		ATaskForceDoor_ToggleDoor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceDoor.ResetState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATaskForceDoor::ResetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceDoor.ResetState");
		
		ATaskForceDoor_ResetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceDoor.IsDoorOpen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATaskForceDoor::IsDoorOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceDoor.IsDoorOpen");
		
		ATaskForceDoor_IsDoorOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceDoor.IsDoorMoving
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ATaskForceDoor::IsDoorMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceDoor.IsDoorMoving");
		
		ATaskForceDoor_IsDoorMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceDoor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceDoor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceDoor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceEliminationMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceEliminationMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceEliminationMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceExplosionEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceExplosionEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceExplosionEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceExtractionMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceExtractionMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceExtractionMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceExtractionZone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceExtractionZone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceExtractionZone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceFootstepEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceFootstepEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceFootstepEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceGameInstance.UpdatePresence
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      details                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      State                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      largeImageKey                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      largeImageText                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      smallImageKey                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      smallImageText                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      partyId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      matchSecret                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      joinSecret                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      spectateSecret                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceGameInstance::UpdatePresence(const class FString& details, const class FString& State, const class FString& largeImageKey, const class FString& largeImageText, const class FString& smallImageKey, const class FString& smallImageText, const class FString& partyId, const class FString& matchSecret, const class FString& joinSecret, const class FString& spectateSecret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameInstance.UpdatePresence");
		
		UTaskForceGameInstance_UpdatePresence_Params params {};
		params.details = details;
		params.State = State;
		params.largeImageKey = largeImageKey;
		params.largeImageText = largeImageText;
		params.smallImageKey = smallImageKey;
		params.smallImageText = smallImageText;
		params.partyId = partyId;
		params.matchSecret = matchSecret;
		params.joinSecret = joinSecret;
		params.spectateSecret = spectateSecret;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceGameInstance.TickBlueprint
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceGameInstance::TickBlueprint(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceGameInstance.TickBlueprint");
		
		UTaskForceGameInstance_TickBlueprint_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATFMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATFMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceGameMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceGameMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceGameModeActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceGameModeActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameModeActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EE00
	 * 		Name   -> Function TaskForce.TFGameState.OnRep_MatchState
	 * 		Flags  -> (Native, Public)
	 */
	void ATFGameState::OnRep_MatchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameState.OnRep_MatchState");
		
		ATFGameState_OnRep_MatchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EDE0
	 * 		Name   -> Function TaskForce.TFGameState.OnRep_ElapsedTime
	 * 		Flags  -> (Native, Public)
	 */
	void ATFGameState::OnRep_ElapsedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameState.OnRep_ElapsedTime");
		
		ATFGameState_OnRep_ElapsedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATFGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATFGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627AB0
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.SetStringValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceJsonObject::SetStringValue(const class FString& Value, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.SetStringValue");
		
		UTaskForceJsonObject_SetStringValue_Params params {};
		params.Value = Value;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006278F0
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.SetNumberValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceJsonObject::SetNumberValue(float Value, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.SetNumberValue");
		
		UTaskForceJsonObject_SetNumberValue_Params params {};
		params.Value = Value;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627810
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.SetNestedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTaskForceJsonObject*                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceJsonObject::SetNestedObject(class UTaskForceJsonObject* Value, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.SetNestedObject");
		
		UTaskForceJsonObject_SetNestedObject_Params params {};
		params.Value = Value;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627720
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.SetBooleanValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceJsonObject::SetBooleanValue(bool Value, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.SetBooleanValue");
		
		UTaskForceJsonObject_SetBooleanValue_Params params {};
		params.Value = Value;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627390
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetStringValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTaskForceJsonObject::GetStringValue(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetStringValue");
		
		UTaskForceJsonObject_GetStringValue_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627250
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetStringArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UTaskForceJsonObject::GetStringArray(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetStringArray");
		
		UTaskForceJsonObject_GetStringArray_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006271A0
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetNumberValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTaskForceJsonObject::GetNumberValue(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetNumberValue");
		
		UTaskForceJsonObject_GetNumberValue_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006270B0
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetNumberArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UTaskForceJsonObject::GetNumberArray(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetNumberArray");
		
		UTaskForceJsonObject_GetNumberArray_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627000
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetNestedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTaskForceJsonObject* UTaskForceJsonObject::GetNestedObject(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetNestedObject");
		
		UTaskForceJsonObject_GetNestedObject_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626F20
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetBooleanValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceJsonObject::GetBooleanValue(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetBooleanValue");
		
		UTaskForceJsonObject_GetBooleanValue_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626E30
	 * 		Name   -> Function TaskForce.TaskForceJsonObject.GetBooleanArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<bool> UTaskForceJsonObject::GetBooleanArray(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceJsonObject.GetBooleanArray");
		
		UTaskForceJsonObject_GetBooleanArray_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceJsonObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceJsonObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceJsonObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627BA0
	 * 		Name   -> Function TaskForce.TaskForceHelpers.TriggerLaunch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTaskForceHelpers::STATIC_TriggerLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.TriggerLaunch");
		
		UTaskForceHelpers_TriggerLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006275E0
	 * 		Name   -> Function TaskForce.TaskForceHelpers.ParseJSON
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Data                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTaskForceJsonObject* UTaskForceHelpers::STATIC_ParseJSON(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.ParseJSON");
		
		UTaskForceHelpers_ParseJSON_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627510
	 * 		Name   -> Function TaskForce.TaskForceHelpers.JSONToString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTaskForceJsonObject*                        JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTaskForceHelpers::STATIC_JSONToString(class UTaskForceJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.JSONToString");
		
		UTaskForceHelpers_JSONToString_Params params {};
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006274E0
	 * 		Name   -> Function TaskForce.TaskForceHelpers.IsInEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTaskForceHelpers::STATIC_IsInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.IsInEditor");
		
		UTaskForceHelpers_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006274B0
	 * 		Name   -> Function TaskForce.TaskForceHelpers.IsFirstLaunch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTaskForceHelpers::STATIC_IsFirstLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.IsFirstLaunch");
		
		UTaskForceHelpers_IsFirstLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00627480
	 * 		Name   -> Function TaskForce.TaskForceHelpers.HasRemote
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTaskForceHelpers::STATIC_HasRemote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.HasRemote");
		
		UTaskForceHelpers_HasRemote_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626FD0
	 * 		Name   -> Function TaskForce.TaskForceHelpers.GetBuildID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UTaskForceHelpers::STATIC_GetBuildID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.GetBuildID");
		
		UTaskForceHelpers_GetBuildID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626C90
	 * 		Name   -> Function TaskForce.TaskForceHelpers.Encrypt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTaskForceHelpers::STATIC_Encrypt(const class FString& Key, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.Encrypt");
		
		UTaskForceHelpers_Encrypt_Params params {};
		params.Key = Key;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626C20
	 * 		Name   -> Function TaskForce.TaskForceHelpers.DestroyNetActor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceHelpers::STATIC_DestroyNetActor(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.DestroyNetActor");
		
		UTaskForceHelpers_DestroyNetActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626AA0
	 * 		Name   -> Function TaskForce.TaskForceHelpers.Decrypt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UTaskForceHelpers::STATIC_Decrypt(const class FString& Key, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.Decrypt");
		
		UTaskForceHelpers_Decrypt_Params params {};
		params.Key = Key;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00626A20
	 * 		Name   -> Function TaskForce.TaskForceHelpers.CreateJSON
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTaskForceJsonObject* UTaskForceHelpers::STATIC_CreateJSON(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHelpers.CreateJSON");
		
		UTaskForceHelpers_CreateJSON_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00629C60
	 * 		Name   -> Function TaskForce.TaskForceHitboxes.LookupBone
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitboxBones                                BoneData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EHitbox UTaskForceHitboxes::STATIC_LookupBone(const class FName& BoneName, const struct FHitboxBones& BoneData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHitboxes.LookupBone");
		
		UTaskForceHitboxes_LookupBone_Params params {};
		params.BoneName = BoneName;
		params.BoneData = BoneData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00629AE0
	 * 		Name   -> Function TaskForce.TaskForceHitboxes.ListBones
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHitboxBones                                BoneData                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<class FName> UTaskForceHitboxes::STATIC_ListBones(const struct FHitboxBones& BoneData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHitboxes.ListBones");
		
		UTaskForceHitboxes_ListBones_Params params {};
		params.BoneData = BoneData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006299A0
	 * 		Name   -> Function TaskForce.TaskForceHitboxes.FindDamage
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms)
	 * Parameters:
	 * 		EHitbox                                            HitBox                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitboxDamage                               HitboxData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DefaultDamage                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UTaskForceHitboxes::STATIC_FindDamage(EHitbox HitBox, const struct FHitboxDamage& HitboxData, float DefaultDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHitboxes.FindDamage");
		
		UTaskForceHitboxes_FindDamage_Params params {};
		params.HitBox = HitBox;
		params.HitboxData = HitboxData;
		params.DefaultDamage = DefaultDamage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceHitboxes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceHitboxes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceHitboxes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639430
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ServerStopReload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ATaskForceWeapon::ServerStopReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ServerStopReload");
		
		ATaskForceWeapon_ServerStopReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006393E0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ServerStopFire
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ATaskForceWeapon::ServerStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ServerStopFire");
		
		ATaskForceWeapon_ServerStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639390
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ServerStartReload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ATaskForceWeapon::ServerStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ServerStartReload");
		
		ATaskForceWeapon_ServerStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639340
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ServerStartFire
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ATaskForceWeapon::ServerStartFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ServerStartFire");
		
		ATaskForceWeapon_ServerStartFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006392F0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ServerHandleFiring
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void ATaskForceWeapon::ServerHandleFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ServerHandleFiring");
		
		ATaskForceWeapon_ServerHandleFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638DA0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.OnRep_Reload
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceWeapon::OnRep_Reload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.OnRep_Reload");
		
		ATaskForceWeapon_OnRep_Reload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638D80
	 * 		Name   -> Function TaskForce.TaskForceWeapon.OnRep_MyPawn
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceWeapon::OnRep_MyPawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.OnRep_MyPawn");
		
		ATaskForceWeapon_OnRep_MyPawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638D60
	 * 		Name   -> Function TaskForce.TaskForceWeapon.OnRep_BurstCounter
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceWeapon::OnRep_BurstCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.OnRep_BurstCounter");
		
		ATaskForceWeapon_OnRep_BurstCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006383F0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.GetScopeOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceWeapon::GetScopeOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.GetScopeOffset");
		
		ATaskForceWeapon_GetScopeOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006383B0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.GetScopeHandOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceWeapon::GetScopeHandOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.GetScopeHandOffset");
		
		ATaskForceWeapon_GetScopeHandOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638370
	 * 		Name   -> Function TaskForce.TaskForceWeapon.GetScopeCameraOffset
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ATaskForceWeapon::GetScopeCameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.GetScopeCameraOffset");
		
		ATaskForceWeapon_GetScopeCameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638310
	 * 		Name   -> Function TaskForce.TaskForceWeapon.GetPawnOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATaskForceCharacter* ATaskForceWeapon::GetPawnOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.GetPawnOwner");
		
		ATaskForceWeapon_GetPawnOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0034D8F0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ClientStartReload
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATaskForceWeapon::ClientStartReload()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ClientStartReload");
		
		ATaskForceWeapon_ClientStartReload_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00637FC0
	 * 		Name   -> Function TaskForce.TaskForceWeapon.ClientBurstCounter
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceWeapon::ClientBurstCounter(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceWeapon.ClientBurstCounter");
		
		ATaskForceWeapon_ClientBurstCounter_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00629E70
	 * 		Name   -> Function TaskForce.TaskForceHitscanWeapon.ServerProcessBullet
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FVector_NetQuantize100                      StartTrace                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      EndTrace                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsTracer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsDebug                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBulletHitData>                      Hits                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		float                                              PredictionTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceHitscanWeapon::ServerProcessBullet(const struct FVector_NetQuantize100& StartTrace, const struct FVector_NetQuantize100& EndTrace, bool IsTracer, bool IsDebug, TArray<struct FBulletHitData> Hits, float PredictionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHitscanWeapon.ServerProcessBullet");
		
		ATaskForceHitscanWeapon_ServerProcessBullet_Params params {};
		params.StartTrace = StartTrace;
		params.EndTrace = EndTrace;
		params.IsTracer = IsTracer;
		params.IsDebug = IsDebug;
		params.Hits = Hits;
		params.PredictionTime = PredictionTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00629740
	 * 		Name   -> Function TaskForce.TaskForceHitscanWeapon.ClientProcessBullet
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		struct FVector_NetQuantize100                      StartTrace                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantize100                      EndTrace                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsTracer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FBulletImpactData>                   Impacts                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		float                                              PredictionTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceHitscanWeapon::ClientProcessBullet(const struct FVector_NetQuantize100& StartTrace, const struct FVector_NetQuantize100& EndTrace, bool IsTracer, TArray<struct FBulletImpactData> Impacts, float PredictionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHitscanWeapon.ClientProcessBullet");
		
		ATaskForceHitscanWeapon_ClientProcessBullet_Params params {};
		params.StartTrace = StartTrace;
		params.EndTrace = EndTrace;
		params.IsTracer = IsTracer;
		params.Impacts = Impacts;
		params.PredictionTime = PredictionTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceHitscanWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceHitscanWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceHitscanWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceHostageStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceHostageStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceHostageStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062A190
	 * 		Name   -> Function TaskForce.TaskForceHUD.SetFade
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceHUD::SetFade(float Alpha, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHUD.SetFade");
		
		ATaskForceHUD_SetFade_Params params {};
		params.Alpha = Alpha;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062A0E0
	 * 		Name   -> Function TaskForce.TaskForceHUD.SetClanOfficerList
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int64_t>                                    SteamIDs                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ATaskForceHUD::SetClanOfficerList(TArray<int64_t> SteamIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHUD.SetClanOfficerList");
		
		ATaskForceHUD_SetClanOfficerList_Params params {};
		params.SteamIDs = SteamIDs;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00629DF0
	 * 		Name   -> Function TaskForce.TaskForceHUD.ResetFade
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceHUD::ResetFade(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHUD.ResetFade");
		
		ATaskForceHUD_ResetFade_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceHUD.OnVoiceStop
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATaskForceHUD::OnVoiceStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHUD.OnVoiceStop");
		
		ATaskForceHUD_OnVoiceStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceHUD.OnVoiceStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATaskForceHUD::OnVoiceStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHUD.OnVoiceStart");
		
		ATaskForceHUD_OnVoiceStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00629900
	 * 		Name   -> Function TaskForce.TaskForceHUD.ExecuteJavaScript
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceHUD::ExecuteJavaScript(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceHUD.ExecuteJavaScript");
		
		ATaskForceHUD_ExecuteJavaScript_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceImpactEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceImpactEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceImpactEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062FD20
	 * 		Name   -> Function TaskForce.TaskForceMenuController.UploadWorkshopData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ProjectFile                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapFile                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameModes                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IconFile                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::UploadWorkshopData(const class FString& ItemID, const class FString& ProjectFile, const class FString& MapFile, const class FString& MapName, const class FString& GameModes, const class FString& IconFile, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.UploadWorkshopData");
		
		ATaskForceMenuController_UploadWorkshopData_Params params {};
		params.ItemID = ItemID;
		params.ProjectFile = ProjectFile;
		params.MapFile = MapFile;
		params.MapName = MapName;
		params.GameModes = GameModes;
		params.IconFile = IconFile;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062FC80
	 * 		Name   -> Function TaskForce.TaskForceMenuController.TryJoinServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::TryJoinServer(const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.TryJoinServer");
		
		ATaskForceMenuController_TryJoinServer_Params params {};
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F8E0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.SetWorkshopStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::SetWorkshopStatus(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.SetWorkshopStatus");
		
		ATaskForceMenuController_SetWorkshopStatus_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F840
	 * 		Name   -> Function TaskForce.TaskForceMenuController.SetWorkshopRunningStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::SetWorkshopRunningStatus(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.SetWorkshopRunningStatus");
		
		ATaskForceMenuController_SetWorkshopRunningStatus_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F7A0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.SetWorkshopCompleteStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::SetWorkshopCompleteStatus(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.SetWorkshopCompleteStatus");
		
		ATaskForceMenuController_SetWorkshopCompleteStatus_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E6E0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.SaveWorkshopData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ItemID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameModes                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IconFile                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::SaveWorkshopData(const class FString& ItemID, const class FString& MapName, const class FString& GameModes, const class FString& IconFile, const class FString& Description)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.SaveWorkshopData");
		
		ATaskForceMenuController_SaveWorkshopData_Params params {};
		params.ItemID = ItemID;
		params.MapName = MapName;
		params.GameModes = GameModes;
		params.IconFile = IconFile;
		params.Description = Description;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E3A0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.OpenURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATaskForceMenuController::OpenURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.OpenURL");
		
		ATaskForceMenuController_OpenURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E1F0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.OpenFileDialog
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filter                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Extension                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATaskForceMenuController::OpenFileDialog(const class FString& Title, const class FString& Filter, const class FString& Extension, class FString* File)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.OpenFileDialog");
		
		ATaskForceMenuController_OpenFileDialog_Params params {};
		params.Title = Title;
		params.Filter = Filter;
		params.Extension = Extension;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (File != nullptr)
			*File = params.File;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E1D0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.OpenChatWindow
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceMenuController::OpenChatWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.OpenChatWindow");
		
		ATaskForceMenuController_OpenChatWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E150
	 * 		Name   -> Function TaskForce.TaskForceMenuController.LoadWorkshopData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceMenuController::LoadWorkshopData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.LoadWorkshopData");
		
		ATaskForceMenuController_LoadWorkshopData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E040
	 * 		Name   -> Function TaskForce.TaskForceMenuController.JoinServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SteamP2P                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HostAddress                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::JoinServer(const class FString& SteamP2P, const class FString& HostAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.JoinServer");
		
		ATaskForceMenuController_JoinServer_Params params {};
		params.SteamP2P = SteamP2P;
		params.HostAddress = HostAddress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DEE0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.InitBeaconClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ServerURL                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::InitBeaconClient(const class FString& ServerURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.InitBeaconClient");
		
		ATaskForceMenuController_InitBeaconClient_Params params {};
		params.ServerURL = ServerURL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DE90
	 * 		Name   -> Function TaskForce.TaskForceMenuController.HasInvalidLogin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ATaskForceMenuController::HasInvalidLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.HasInvalidLogin");
		
		ATaskForceMenuController_HasInvalidLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DE60
	 * 		Name   -> Function TaskForce.TaskForceMenuController.HasEngineInstalled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ATaskForceMenuController::HasEngineInstalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.HasEngineInstalled");
		
		ATaskForceMenuController_HasEngineInstalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DCA0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.GoToClientURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::GoToClientURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.GoToClientURL");
		
		ATaskForceMenuController_GoToClientURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DAC0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.GetSteamNetTicket
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int32_t>                                    Types                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Descriptions                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ATaskForceMenuController::GetSteamNetTicket(TArray<int32_t>* Types, TArray<class FString>* Descriptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.GetSteamNetTicket");
		
		ATaskForceMenuController_GetSteamNetTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Types != nullptr)
			*Types = params.Types;
		if (Descriptions != nullptr)
			*Descriptions = params.Descriptions;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DA40
	 * 		Name   -> Function TaskForce.TaskForceMenuController.GetSteamLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ATaskForceMenuController::GetSteamLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.GetSteamLanguage");
		
		ATaskForceMenuController_GetSteamLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D9C0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.GetSteamBranch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ATaskForceMenuController::GetSteamBranch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.GetSteamBranch");
		
		ATaskForceMenuController_GetSteamBranch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D940
	 * 		Name   -> Function TaskForce.TaskForceMenuController.GetSteamAuthTicket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString ATaskForceMenuController::GetSteamAuthTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.GetSteamAuthTicket");
		
		ATaskForceMenuController_GetSteamAuthTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D730
	 * 		Name   -> Function TaskForce.TaskForceMenuController.GenerateURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ATaskForceMenuController::GenerateURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.GenerateURL");
		
		ATaskForceMenuController_GenerateURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D560
	 * 		Name   -> Function TaskForce.TaskForceMenuController.FailServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::FailServer(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.FailServer");
		
		ATaskForceMenuController_FailServer_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.ExecuteJavaScript
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceMenuController::ExecuteJavaScript(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.ExecuteJavaScript");
		
		ATaskForceMenuController_ExecuteJavaScript_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D4A0
	 * 		Name   -> Function TaskForce.TaskForceMenuController.DoSteam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceMenuController::DoSteam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.DoSteam");
		
		ATaskForceMenuController_DoSteam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D480
	 * 		Name   -> Function TaskForce.TaskForceMenuController.DoSession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceMenuController::DoSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.DoSession");
		
		ATaskForceMenuController_DoSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D450
	 * 		Name   -> Function TaskForce.TaskForceMenuController.DestroySession
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool ATaskForceMenuController::DestroySession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.DestroySession");
		
		ATaskForceMenuController_DestroySession_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D430
	 * 		Name   -> Function TaskForce.TaskForceMenuController.DestroyBeaconClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForceMenuController::DestroyBeaconClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceMenuController.DestroyBeaconClient");
		
		ATaskForceMenuController_DestroyBeaconClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceMenuController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceMenuController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceMenuController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceOnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForcePersistentUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForcePersistentUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForcePersistentUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00641360
	 * 		Name   -> Function TaskForce.TFPlayerController.ExecuteServerCommand
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATFPlayerController::ExecuteServerCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFPlayerController.ExecuteServerCommand");
		
		ATFPlayerController_ExecuteServerCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006412C0
	 * 		Name   -> Function TaskForce.TFPlayerController.ExecuteClientCommand
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATFPlayerController::ExecuteClientCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFPlayerController.ExecuteClientCommand");
		
		ATFPlayerController_ExecuteClientCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006411D0
	 * 		Name   -> Function TaskForce.TFPlayerController.ClientWorkshopRPC
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<struct FTFWorkshopServerData>               Added                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTFWorkshopServerData>               Existing                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ATFPlayerController::ClientWorkshopRPC(TArray<struct FTFWorkshopServerData> Added, TArray<struct FTFWorkshopServerData> Existing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFPlayerController.ClientWorkshopRPC");
		
		ATFPlayerController_ClientWorkshopRPC_Params params {};
		params.Added = Added;
		params.Existing = Existing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATFPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATFPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062FC60
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.TriggerRemote
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ATaskForcePlayerController::TriggerRemote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.TriggerRemote");
		
		ATaskForcePlayerController_TriggerRemote_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062FC40
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SwitchTeams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForcePlayerController::SwitchTeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SwitchTeams");
		
		ATaskForcePlayerController_SwitchTeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062FB20
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SimulateInputKey
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPressed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SimulateInputKey(const struct FKey& Key, bool bPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SimulateInputKey");
		
		ATaskForcePlayerController_SimulateInputKey_Params params {};
		params.Key = Key;
		params.bPressed = bPressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F980
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ShowSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsController                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              WorkshopSkins1                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              WorkshopSkins2                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ShowSettings(bool IsController, TArray<class FString> WorkshopSkins1, TArray<class FString> WorkshopSkins2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ShowSettings");
		
		ATaskForcePlayerController_ShowSettings_Params params {};
		params.IsController = IsController;
		params.WorkshopSkins1 = WorkshopSkins1;
		params.WorkshopSkins2 = WorkshopSkins2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F690
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetMouseSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VerticalSensitivity                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HorizontalSensitivity                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Invert                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetMouseSensitivity(float VerticalSensitivity, float HorizontalSensitivity, bool Invert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetMouseSensitivity");
		
		ATaskForcePlayerController_SetMouseSensitivity_Params params {};
		params.VerticalSensitivity = VerticalSensitivity;
		params.HorizontalSensitivity = HorizontalSensitivity;
		params.Invert = Invert;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F5F0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetDefaultWorkshopSkin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Skin                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetDefaultWorkshopSkin(const class FString& Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetDefaultWorkshopSkin");
		
		ATaskForcePlayerController_SetDefaultWorkshopSkin_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F510
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetDefaultSecondaryReticle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Reticle                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetDefaultSecondaryReticle(const class FString& Reticle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetDefaultSecondaryReticle");
		
		ATaskForcePlayerController_SetDefaultSecondaryReticle_Params params {};
		params.Reticle = Reticle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F490
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetDefaultSecondary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetDefaultSecondary(int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetDefaultSecondary");
		
		ATaskForcePlayerController_SetDefaultSecondary_Params params {};
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F3B0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetDefaultPrimaryReticle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Reticle                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetDefaultPrimaryReticle(const class FString& Reticle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetDefaultPrimaryReticle");
		
		ATaskForcePlayerController_SetDefaultPrimaryReticle_Params params {};
		params.Reticle = Reticle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F330
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetDefaultPrimary
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetDefaultPrimary(int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetDefaultPrimary");
		
		ATaskForcePlayerController_SetDefaultPrimary_Params params {};
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F0D0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SetControllerSensitivity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VerticalSensitivity                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HorizontalSensitivity                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Invert                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Acceleration                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VerticalDeadZone                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HorizontalDeadZone                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ForwardDeadZone                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RightDeadZone                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SetControllerSensitivity(float VerticalSensitivity, float HorizontalSensitivity, bool Invert, float Acceleration, float VerticalDeadZone, float HorizontalDeadZone, float ForwardDeadZone, float RightDeadZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SetControllerSensitivity");
		
		ATaskForcePlayerController_SetControllerSensitivity_Params params {};
		params.VerticalSensitivity = VerticalSensitivity;
		params.HorizontalSensitivity = HorizontalSensitivity;
		params.Invert = Invert;
		params.Acceleration = Acceleration;
		params.VerticalDeadZone = VerticalDeadZone;
		params.HorizontalDeadZone = HorizontalDeadZone;
		params.ForwardDeadZone = ForwardDeadZone;
		params.RightDeadZone = RightDeadZone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062F010
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSwitchTeams
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            NewTeam                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSwitchTeams(int32_t NewTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSwitchTeams");
		
		ATaskForcePlayerController_ServerSwitchTeams_Params params {};
		params.NewTeam = NewTeam;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062EF10
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSetSpectate
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class ATaskForcePlayerState*                       NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ShouldFollow                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSetSpectate(class ATaskForcePlayerState* NewTarget, bool ShouldFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSetSpectate");
		
		ATaskForcePlayerController_ServerSetSpectate_Params params {};
		params.NewTarget = NewTarget;
		params.ShouldFollow = ShouldFollow;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062EE50
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSetIsTalking
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               IsTalking                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSetIsTalking(bool IsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSetIsTalking");
		
		ATaskForcePlayerController_ServerSetIsTalking_Params params {};
		params.IsTalking = IsTalking;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062ED90
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSetDefaultWorkshopSkin
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      Skin                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSetDefaultWorkshopSkin(const class FString& Skin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSetDefaultWorkshopSkin");
		
		ATaskForcePlayerController_ServerSetDefaultWorkshopSkin_Params params {};
		params.Skin = Skin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062ECD0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSetDefaultSecondary
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSetDefaultSecondary(int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSetDefaultSecondary");
		
		ATaskForcePlayerController_ServerSetDefaultSecondary_Params params {};
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062EC10
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSetDefaultPrimary
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            WeaponID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSetDefaultPrimary(int32_t WeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSetDefaultPrimary");
		
		ATaskForcePlayerController_ServerSetDefaultPrimary_Params params {};
		params.WeaponID = WeaponID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062EB00
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerSay
	 * 		Flags  -> (Net, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TeamOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerSay(const class FString& Msg, bool TeamOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerSay");
		
		ATaskForcePlayerController_ServerSay_Params params {};
		params.Msg = Msg;
		params.TeamOnly = TeamOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062EA40
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ServerRemote
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      Guid                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ServerRemote(const class FString& Guid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ServerRemote");
		
		ATaskForcePlayerController_ServerRemote_Params params {};
		params.Guid = Guid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E9A0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SayTaunt
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::SayTaunt(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SayTaunt");
		
		ATaskForcePlayerController_SayTaunt_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E8C0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.Say
	 * 		Flags  -> (Exec, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TeamOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::Say(const class FString& Msg, bool TeamOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.Say");
		
		ATaskForcePlayerController_Say_Params params {};
		params.Msg = Msg;
		params.TeamOnly = TeamOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E6C0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.SaveInputSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForcePlayerController::SaveInputSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.SaveInputSettings");
		
		ATaskForcePlayerController_SaveInputSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.RoundWin
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::RoundWin(int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.RoundWin");
		
		ATaskForcePlayerController_RoundWin_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.RoundStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATaskForcePlayerController::RoundStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.RoundStart");
		
		ATaskForcePlayerController_RoundStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E640
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.RemoveBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::RemoveBinding(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.RemoveBinding");
		
		ATaskForcePlayerController_RemoveBinding_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E5B0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.RebuildInputSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               RestoreDefaults                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::RebuildInputSettings(bool RestoreDefaults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.RebuildInputSettings");
		
		ATaskForcePlayerController_RebuildInputSettings_Params params {};
		params.RestoreDefaults = RestoreDefaults;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E580
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.PingBrowserWindow
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool ATaskForcePlayerController::PingBrowserWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.PingBrowserWindow");
		
		ATaskForcePlayerController_PingBrowserWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E490
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OpenURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATaskForcePlayerController::OpenURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OpenURL");
		
		ATaskForcePlayerController_OpenURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E1B0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnTeamMessage
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ATaskForcePlayerController::OnTeamMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnTeamMessage");
		
		ATaskForcePlayerController_OnTeamMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnRoundWin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnRoundWin(const class FString& GameMode, int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnRoundWin");
		
		ATaskForcePlayerController_OnRoundWin_Params params {};
		params.GameMode = GameMode;
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnRoundStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnRoundStart(const class FString& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnRoundStart");
		
		ATaskForcePlayerController_OnRoundStart_Params params {};
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnRoundEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      GameMode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnRoundEnd(const class FString& GameMode, int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnRoundEnd");
		
		ATaskForcePlayerController_OnRoundEnd_Params params {};
		params.GameMode = GameMode;
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00438CC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnRep_SpectatorTarget
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ATaskForceCharacter*                         Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnRep_SpectatorTarget(class ATaskForceCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnRep_SpectatorTarget");
		
		ATaskForcePlayerController_OnRep_SpectatorTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnHostageKilled
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackerTeam                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnHostageKilled(int32_t AttackerTeam, int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnHostageKilled");
		
		ATaskForcePlayerController_OnHostageKilled_Params params {};
		params.AttackerTeam = AttackerTeam;
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnHostageExtracted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WinnerTeam                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnHostageExtracted(int32_t WinnerTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnHostageExtracted");
		
		ATaskForcePlayerController_OnHostageExtracted_Params params {};
		params.WinnerTeam = WinnerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E190
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnChatMessage
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 */
	void ATaskForcePlayerController::OnChatMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnChatMessage");
		
		ATaskForcePlayerController_OnChatMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnBombPlanted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlantTeam                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnBombPlanted(int32_t PlantTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnBombPlanted");
		
		ATaskForcePlayerController_OnBombPlanted_Params params {};
		params.PlantTeam = PlantTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnBombPickup
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PickupTeam                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnBombPickup(int32_t PickupTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnBombPickup");
		
		ATaskForcePlayerController_OnBombPickup_Params params {};
		params.PickupTeam = PickupTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnBombExploded
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlantTeam                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnBombExploded(int32_t PlantTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnBombExploded");
		
		ATaskForcePlayerController_OnBombExploded_Params params {};
		params.PlantTeam = PlantTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.OnBombDefused
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DefuseTeam                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::OnBombDefused(int32_t DefuseTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.OnBombDefused");
		
		ATaskForcePlayerController_OnBombDefused_Params params {};
		params.DefuseTeam = DefuseTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E130
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.LoadInputSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForcePlayerController::LoadInputSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.LoadInputSettings");
		
		ATaskForcePlayerController_LoadInputSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062E170
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.LoadingComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForcePlayerController::LoadingComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.LoadingComplete");
		
		ATaskForcePlayerController_LoadingComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.KickAway
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATaskForcePlayerController::KickAway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.KickAway");
		
		ATaskForcePlayerController_KickAway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DFB0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.IsTalking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ATaskForcePlayerController*                  LocalController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATaskForcePlayerController::IsTalking(class ATaskForcePlayerController* LocalController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.IsTalking");
		
		ATaskForcePlayerController_IsTalking_Params params {};
		params.LocalController = LocalController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DF80
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.IsInCinematicMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForcePlayerController::IsInCinematicMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.IsInCinematicMode");
		
		ATaskForcePlayerController_IsInCinematicMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DEC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.HideSettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ATaskForcePlayerController::HideSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.HideSettings");
		
		ATaskForcePlayerController_HideSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DD80
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.GoToClientURL
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::GoToClientURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.GoToClientURL");
		
		ATaskForcePlayerController_GoToClientURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062DA40
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.GetSteamLanguage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ATaskForcePlayerController::GetSteamLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.GetSteamLanguage");
		
		ATaskForcePlayerController_GetSteamLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D9C0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.GetSteamBranch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ATaskForcePlayerController::GetSteamBranch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.GetSteamBranch");
		
		ATaskForcePlayerController_GetSteamBranch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D910
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.GetCurrentTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerController::GetCurrentTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.GetCurrentTeam");
		
		ATaskForcePlayerController_GetCurrentTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D820
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.GenerateURL
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString ATaskForcePlayerController::GenerateURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.GenerateURL");
		
		ATaskForcePlayerController_GenerateURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D6B0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.GenerateGUID
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	class FString ATaskForcePlayerController::GenerateGUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.GenerateGUID");
		
		ATaskForcePlayerController_GenerateGUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D680
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.FocusBrowserWindow
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool ATaskForcePlayerController::FocusBrowserWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.FocusBrowserWindow");
		
		ATaskForcePlayerController_FocusBrowserWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D600
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.FindAllCharacters
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class ATaskForceCharacter*> ATaskForcePlayerController::FindAllCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.FindAllCharacters");
		
		ATaskForcePlayerController_FindAllCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D4C0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ExecuteJavaScript
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ExecuteJavaScript(const class FString& Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ExecuteJavaScript");
		
		ATaskForcePlayerController_ExecuteJavaScript_Params params {};
		params.Code = Code;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D3B0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.DefaultWorkshopSkin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ATaskForcePlayerController::DefaultWorkshopSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.DefaultWorkshopSkin");
		
		ATaskForcePlayerController_DefaultWorkshopSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.DebugJavaScript
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bAdvanced                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExperimental                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::DebugJavaScript(bool bAdvanced, bool bExperimental)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.DebugJavaScript");
		
		ATaskForcePlayerController_DebugJavaScript_Params params {};
		params.bAdvanced = bAdvanced;
		params.bExperimental = bExperimental;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D390
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientStartOnlineGame
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATaskForcePlayerController::ClientStartOnlineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientStartOnlineGame");
		
		ATaskForcePlayerController_ClientStartOnlineGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D2B0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSetSpectatorCamera
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSetSpectatorCamera");
		
		ATaskForcePlayerController_ClientSetSpectatorCamera_Params params {};
		params.CameraLocation = CameraLocation;
		params.CameraRotation = CameraRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D1D0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSendRoundWinEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		int32_t                                            WinnerTeam                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientSendRoundWinEvent(int32_t WinnerTeam, const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSendRoundWinEvent");
		
		ATaskForcePlayerController_ClientSendRoundWinEvent_Params params {};
		params.WinnerTeam = WinnerTeam;
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D130
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSendRoundStartEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientSendRoundStartEvent(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSendRoundStartEvent");
		
		ATaskForcePlayerController_ClientSendRoundStartEvent_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D110
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSendRoundResetEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATaskForcePlayerController::ClientSendRoundResetEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSendRoundResetEvent");
		
		ATaskForcePlayerController_ClientSendRoundResetEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D040
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSendRoundEndEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		TArray<struct FTaskForcePlayerStats>               Stats                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientSendRoundEndEvent(TArray<struct FTaskForcePlayerStats> Stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSendRoundEndEvent");
		
		ATaskForcePlayerController_ClientSendRoundEndEvent_Params params {};
		params.Stats = Stats;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062D020
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSendResetActorsEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATaskForcePlayerController::ClientSendResetActorsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSendResetActorsEvent");
		
		ATaskForcePlayerController_ClientSendResetActorsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CF80
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientSendMessageEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientSendMessageEvent(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientSendMessageEvent");
		
		ATaskForcePlayerController_ClientSendMessageEvent_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CEB0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientRemote
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		bool                                               bAdvanced                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bExperimental                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientRemote(bool bAdvanced, bool bExperimental)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientRemote");
		
		ATaskForcePlayerController_ClientRemote_Params params {};
		params.bAdvanced = bAdvanced;
		params.bExperimental = bExperimental;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CE90
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientGameStarted
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATaskForcePlayerController::ClientGameStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientGameStarted");
		
		ATaskForcePlayerController_ClientGameStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CE70
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientEndOnlineGame
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 */
	void ATaskForcePlayerController::ClientEndOnlineGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientEndOnlineGame");
		
		ATaskForcePlayerController_ClientEndOnlineGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CD90
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientDebugWorkshop
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Storage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientDebugWorkshop(const class FString& Key, bool Storage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientDebugWorkshop");
		
		ATaskForcePlayerController_ClientDebugWorkshop_Params params {};
		params.Key = Key;
		params.Storage = Storage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CCB0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientDebugViewport
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Interface                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientDebugViewport(const class FString& Key, bool Interface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientDebugViewport");
		
		ATaskForcePlayerController_ClientDebugViewport_Params params {};
		params.Key = Key;
		params.Interface = Interface;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CC10
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ClientDebugGame
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ClientDebugGame(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ClientDebugGame");
		
		ATaskForcePlayerController_ClientDebugGame_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CAF0
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.AddBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::AddBinding(const class FName& Action, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.AddBinding");
		
		ATaskForcePlayerController_AddBinding_Params params {};
		params.Action = Action;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0062CA10
	 * 		Name   -> Function TaskForce.TaskForcePlayerController.ActivateGameOverlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Dialog                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerController::ActivateGameOverlay(const class FString& Dialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerController.ActivateGameOverlay");
		
		ATaskForcePlayerController_ActivateGameOverlay_Params params {};
		params.Dialog = Dialog;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForcePlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForcePlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForcePlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATFPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATFPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006331D0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.OnRep_TeamNumber
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATaskForcePlayerState::OnRep_TeamNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.OnRep_TeamNumber");
		
		ATaskForcePlayerState_OnRep_TeamNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006331D0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.OnRep_CurrentSkin
	 * 		Flags  -> (Final, Native, Public)
	 */
	void ATaskForcePlayerState::OnRep_CurrentSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.OnRep_CurrentSkin");
		
		ATaskForcePlayerState_OnRep_CurrentSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632F00
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.IsServerAdmin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForcePlayerState::IsServerAdmin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.IsServerAdmin");
		
		ATaskForcePlayerState_IsServerAdmin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632ED0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.IsPriorityBacker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForcePlayerState::IsPriorityBacker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.IsPriorityBacker");
		
		ATaskForcePlayerState_IsPriorityBacker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632E70
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.IsBacker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATaskForcePlayerState::IsBacker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.IsBacker");
		
		ATaskForcePlayerState_IsBacker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632D70
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.InformAboutKill
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class ATaskForcePlayerState*                       KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 KillerDamageType                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATaskForcePlayerState*                       KilledPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerState::InformAboutKill(class ATaskForcePlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ATaskForcePlayerState* KilledPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.InformAboutKill");
		
		ATaskForcePlayerState_InformAboutKill_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.KillerDamageType = KillerDamageType;
		params.KilledPlayerState = KilledPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632CA0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.InformAboutDeath
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class ATaskForcePlayerState*                       KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTaskForceDeathStats                        Data                                                       (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerState::InformAboutDeath(class ATaskForcePlayerState* KillerPlayerState, const struct FTaskForceDeathStats& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.InformAboutDeath");
		
		ATaskForcePlayerState_InformAboutDeath_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006328E0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetTeamNum
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetTeamNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetTeamNum");
		
		ATaskForcePlayerState_GetTeamNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632860
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetSteamID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString ATaskForcePlayerState::GetSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetSteamID");
		
		ATaskForcePlayerState_GetSteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632750
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetScore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetScore");
		
		ATaskForcePlayerState_GetScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632690
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetKills
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetKills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetKills");
		
		ATaskForcePlayerState_GetKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632630
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetDeaths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetDeaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetDeaths");
		
		ATaskForcePlayerState_GetDeaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632600
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetCurrentSkin
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetCurrentSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetCurrentSkin");
		
		ATaskForcePlayerState_GetCurrentSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006325D0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetClientID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetClientID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetClientID");
		
		ATaskForcePlayerState_GetClientID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632570
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetBackerLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ETaskForceBackerLevel ATaskForcePlayerState::GetBackerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetBackerLevel");
		
		ATaskForcePlayerState_GetBackerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632320
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.GetAssists
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ATaskForcePlayerState::GetAssists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.GetAssists");
		
		ATaskForcePlayerState_GetAssists_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00631ED0
	 * 		Name   -> Function TaskForce.TaskForcePlayerState.BroadcastDeath
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ATaskForcePlayerState*                       KillerPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 KillerDamageType                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATaskForcePlayerState*                       KilledPlayerState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATaskForcePlayerState*                       AssisterPlayerState                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForcePlayerState::BroadcastDeath(class ATaskForcePlayerState* KillerPlayerState, class UDamageType* KillerDamageType, class ATaskForcePlayerState* KilledPlayerState, class ATaskForcePlayerState* AssisterPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForcePlayerState.BroadcastDeath");
		
		ATaskForcePlayerState_BroadcastDeath_Params params {};
		params.KillerPlayerState = KillerPlayerState;
		params.KillerDamageType = KillerDamageType;
		params.KilledPlayerState = KilledPlayerState;
		params.AssisterPlayerState = AssisterPlayerState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForcePlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForcePlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForcePlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006331F0
	 * 		Name   -> Function TaskForce.TaskForceProjectile.OnRep_Exploded
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void ATaskForceProjectile::OnRep_Exploded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceProjectile.OnRep_Exploded");
		
		ATaskForceProjectile_OnRep_Exploded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633110
	 * 		Name   -> Function TaskForce.TaskForceProjectile.OnImpact
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ATaskForceProjectile::OnImpact(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceProjectile.OnImpact");
		
		ATaskForceProjectile_OnImpact_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632F60
	 * 		Name   -> Function TaskForce.TaskForceProjectile.OnHit
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ATaskForceProjectile::OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceProjectile.OnHit");
		
		ATaskForceProjectile_OnHit_Params params {};
		params.HitComp = HitComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006336F0
	 * 		Name   -> Function TaskForce.TaskForceProjectileWeapon.ServerFireProjectile
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceProjectileWeapon::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceProjectileWeapon.ServerFireProjectile");
		
		ATaskForceProjectileWeapon_ServerFireProjectile_Params params {};
		params.Origin = Origin;
		params.ShootDir = ShootDir;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceProjectileWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceProjectileWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceProjectileWeapon");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceRespawnMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceRespawnMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceRespawnMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceReticle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceReticle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceReticle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00634420
	 * 		Name   -> Function TaskForce.TaskForceSettings.SupportsHDRDisplayOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTaskForceSettings::STATIC_SupportsHDRDisplayOutput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SupportsHDRDisplayOutput");
		
		UTaskForceSettings_SupportsHDRDisplayOutput_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00634030
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetVSyncEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               VSync                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_SetVSyncEnabled(bool VSync)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetVSyncEnabled");
		
		UTaskForceSettings_SetVSyncEnabled_Params params {};
		params.VSync = VSync;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00634360
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetVoiceVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VoiceVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 VoiceClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetVoiceVolume(float VoiceVolume, class USoundClass* VoiceClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetVoiceVolume");
		
		UTaskForceSettings_SetVoiceVolume_Params params {};
		params.VoiceVolume = VoiceVolume;
		params.VoiceClass = VoiceClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006342E0
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetVideoSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Gamma                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_SetVideoSettings(float Gamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetVideoSettings");
		
		UTaskForceSettings_SetVideoSettings_Params params {};
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006340B0
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetVideoQualitySettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            AntiAliasing                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Shadows                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PostProcess                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Textures                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Effects                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Foliage                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Resolution                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ViewDistance                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_SetVideoQualitySettings(int32_t AntiAliasing, int32_t Shadows, int32_t PostProcess, int32_t Textures, int32_t Effects, int32_t Foliage, float Resolution, int32_t ViewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetVideoQualitySettings");
		
		UTaskForceSettings_SetVideoQualitySettings_Params params {};
		params.AntiAliasing = AntiAliasing;
		params.Shadows = Shadows;
		params.PostProcess = PostProcess;
		params.Textures = Textures;
		params.Effects = Effects;
		params.Foliage = Foliage;
		params.Resolution = Resolution;
		params.ViewDistance = ViewDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633F40
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetScreenResolution
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WindowMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_SetScreenResolution(int32_t Width, int32_t Height, int32_t WindowMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetScreenResolution");
		
		UTaskForceSettings_SetScreenResolution_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.WindowMode = WindowMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633E80
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetMusicVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MusicVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 MusicClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetMusicVolume(float MusicVolume, class USoundClass* MusicClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetMusicVolume");
		
		UTaskForceSettings_SetMusicVolume_Params params {};
		params.MusicVolume = MusicVolume;
		params.MusicClass = MusicClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633E10
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetMenuVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MenuVolume                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetMenuVolume(float MenuVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetMenuVolume");
		
		UTaskForceSettings_SetMenuVolume_Params params {};
		params.MenuVolume = MenuVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633D50
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetMasterVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MasterVolume                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 MasterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetMasterVolume(float MasterVolume, class USoundClass* MasterClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetMasterVolume");
		
		UTaskForceSettings_SetMasterVolume_Params params {};
		params.MasterVolume = MasterVolume;
		params.MasterClass = MasterClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633CD0
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetHDRDisplayOutput
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_SetHDRDisplayOutput(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetHDRDisplayOutput");
		
		UTaskForceSettings_SetHDRDisplayOutput_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633C60
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetGamma
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Gamma                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetGamma(float Gamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetGamma");
		
		UTaskForceSettings_SetGamma_Params params {};
		params.Gamma = Gamma;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633BA0
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetEffectsVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              EffectsVolume                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 EffectsClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetEffectsVolume(float EffectsVolume, class USoundClass* EffectsClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetEffectsVolume");
		
		UTaskForceSettings_SetEffectsVolume_Params params {};
		params.EffectsVolume = EffectsVolume;
		params.EffectsClass = EffectsClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633B30
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetBackgroundVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              UnfocusedVolume                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SetBackgroundVolume(float UnfocusedVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetBackgroundVolume");
		
		UTaskForceSettings_SetBackgroundVolume_Params params {};
		params.UnfocusedVolume = UnfocusedVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633870
	 * 		Name   -> Function TaskForce.TaskForceSettings.SetAudioVolumeSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundClass*                                 MasterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MasterVolume                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MenuVolume                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UnfocusedVolume                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 EffectsClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectsVolume                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 MusicClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MusicVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 VoiceClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VoiceVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_SetAudioVolumeSettings(class USoundClass* MasterClass, float MasterVolume, float MenuVolume, float UnfocusedVolume, class USoundClass* EffectsClass, float EffectsVolume, class USoundClass* MusicClass, float MusicVolume, class USoundClass* VoiceClass, float VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SetAudioVolumeSettings");
		
		UTaskForceSettings_SetAudioVolumeSettings_Params params {};
		params.MasterClass = MasterClass;
		params.MasterVolume = MasterVolume;
		params.MenuVolume = MenuVolume;
		params.UnfocusedVolume = UnfocusedVolume;
		params.EffectsClass = EffectsClass;
		params.EffectsVolume = EffectsVolume;
		params.MusicClass = MusicClass;
		params.MusicVolume = MusicVolume;
		params.VoiceClass = VoiceClass;
		params.VoiceVolume = VoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633680
	 * 		Name   -> Function TaskForce.TaskForceSettings.SaveVoiceVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              VoiceVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SaveVoiceVolume(float VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SaveVoiceVolume");
		
		UTaskForceSettings_SaveVoiceVolume_Params params {};
		params.VoiceVolume = VoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633650
	 * 		Name   -> Function TaskForce.TaskForceSettings.SaveVideoModeAndQuality
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTaskForceSettings::STATIC_SaveVideoModeAndQuality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SaveVideoModeAndQuality");
		
		UTaskForceSettings_SaveVideoModeAndQuality_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006335E0
	 * 		Name   -> Function TaskForce.TaskForceSettings.SaveMusicVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MusicVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SaveMusicVolume(float MusicVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SaveMusicVolume");
		
		UTaskForceSettings_SaveMusicVolume_Params params {};
		params.MusicVolume = MusicVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633570
	 * 		Name   -> Function TaskForce.TaskForceSettings.SaveMenuVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MenuVolume                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SaveMenuVolume(float MenuVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SaveMenuVolume");
		
		UTaskForceSettings_SaveMenuVolume_Params params {};
		params.MenuVolume = MenuVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633500
	 * 		Name   -> Function TaskForce.TaskForceSettings.SaveEffectsVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              EffectsVolume                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SaveEffectsVolume(float EffectsVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SaveEffectsVolume");
		
		UTaskForceSettings_SaveEffectsVolume_Params params {};
		params.EffectsVolume = EffectsVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633240
	 * 		Name   -> Function TaskForce.TaskForceSettings.SaveAudioVolumeSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USoundClass*                                 MasterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MasterVolume                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MenuVolume                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UnfocusedVolume                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 EffectsClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectsVolume                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 MusicClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MusicVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundClass*                                 VoiceClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VoiceVolume                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_SaveAudioVolumeSettings(class USoundClass* MasterClass, float MasterVolume, float MenuVolume, float UnfocusedVolume, class USoundClass* EffectsClass, float EffectsVolume, class USoundClass* MusicClass, float MusicVolume, class USoundClass* VoiceClass, float VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.SaveAudioVolumeSettings");
		
		UTaskForceSettings_SaveAudioVolumeSettings_Params params {};
		params.MasterClass = MasterClass;
		params.MasterVolume = MasterVolume;
		params.MenuVolume = MenuVolume;
		params.UnfocusedVolume = UnfocusedVolume;
		params.EffectsClass = EffectsClass;
		params.EffectsVolume = EffectsVolume;
		params.MusicClass = MusicClass;
		params.MusicVolume = MusicVolume;
		params.VoiceClass = VoiceClass;
		params.VoiceVolume = VoiceVolume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00633210
	 * 		Name   -> Function TaskForce.TaskForceSettings.RevertVideoMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTaskForceSettings::STATIC_RevertVideoMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.RevertVideoMode");
		
		UTaskForceSettings_RevertVideoMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632F30
	 * 		Name   -> Function TaskForce.TaskForceSettings.IsVSyncEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTaskForceSettings::STATIC_IsVSyncEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.IsVSyncEnabled");
		
		UTaskForceSettings_IsVSyncEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632EA0
	 * 		Name   -> Function TaskForce.TaskForceSettings.IsInFullscreen
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTaskForceSettings::STATIC_IsInFullscreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.IsInFullscreen");
		
		UTaskForceSettings_IsInFullscreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632C70
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetVoiceVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTaskForceSettings::STATIC_GetVoiceVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetVoiceVolume");
		
		UTaskForceSettings_GetVoiceVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632BE0
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetVideoSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Gamma                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_GetVideoSettings(float* Gamma)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetVideoSettings");
		
		UTaskForceSettings_GetVideoSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Gamma != nullptr)
			*Gamma = params.Gamma;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632910
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetVideoQualitySettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            AntiAliasing                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Shadows                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            PostProcess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Textures                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Effects                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Foliage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Resolution                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ViewDistance                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_GetVideoQualitySettings(int32_t* AntiAliasing, int32_t* Shadows, int32_t* PostProcess, int32_t* Textures, int32_t* Effects, int32_t* Foliage, float* Resolution, int32_t* ViewDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetVideoQualitySettings");
		
		UTaskForceSettings_GetVideoQualitySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AntiAliasing != nullptr)
			*AntiAliasing = params.AntiAliasing;
		if (Shadows != nullptr)
			*Shadows = params.Shadows;
		if (PostProcess != nullptr)
			*PostProcess = params.PostProcess;
		if (Textures != nullptr)
			*Textures = params.Textures;
		if (Effects != nullptr)
			*Effects = params.Effects;
		if (Foliage != nullptr)
			*Foliage = params.Foliage;
		if (Resolution != nullptr)
			*Resolution = params.Resolution;
		if (ViewDistance != nullptr)
			*ViewDistance = params.ViewDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632780
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetScreenResolution
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_GetScreenResolution(int32_t* Width, int32_t* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetScreenResolution");
		
		UTaskForceSettings_GetScreenResolution_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Width != nullptr)
			*Width = params.Width;
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632720
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetMusicVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTaskForceSettings::STATIC_GetMusicVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetMusicVolume");
		
		UTaskForceSettings_GetMusicVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006326F0
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetMenuVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTaskForceSettings::STATIC_GetMenuVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetMenuVolume");
		
		UTaskForceSettings_GetMenuVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006326C0
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetMasterVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTaskForceSettings::STATIC_GetMasterVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetMasterVolume");
		
		UTaskForceSettings_GetMasterVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632660
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetEffectsVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTaskForceSettings::STATIC_GetEffectsVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetEffectsVolume");
		
		UTaskForceSettings_GetEffectsVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006325A0
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetBackgroundVolume
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTaskForceSettings::STATIC_GetBackgroundVolume()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetBackgroundVolume");
		
		UTaskForceSettings_GetBackgroundVolume_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632350
	 * 		Name   -> Function TaskForce.TaskForceSettings.GetAudioVolumeSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              MasterVolume                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MenuVolume                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UnfocusedVolume                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectsVolume                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MusicVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VoiceVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_GetAudioVolumeSettings(float* MasterVolume, float* MenuVolume, float* UnfocusedVolume, float* EffectsVolume, float* MusicVolume, float* VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.GetAudioVolumeSettings");
		
		UTaskForceSettings_GetAudioVolumeSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MasterVolume != nullptr)
			*MasterVolume = params.MasterVolume;
		if (MenuVolume != nullptr)
			*MenuVolume = params.MenuVolume;
		if (UnfocusedVolume != nullptr)
			*UnfocusedVolume = params.UnfocusedVolume;
		if (EffectsVolume != nullptr)
			*EffectsVolume = params.EffectsVolume;
		if (MusicVolume != nullptr)
			*MusicVolume = params.MusicVolume;
		if (VoiceVolume != nullptr)
			*VoiceVolume = params.VoiceVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632100
	 * 		Name   -> Function TaskForce.TaskForceSettings.FindSavedAudioVolumeSettings
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              MasterVolume                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MenuVolume                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              UnfocusedVolume                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectsVolume                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MusicVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              VoiceVolume                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTaskForceSettings::STATIC_FindSavedAudioVolumeSettings(float* MasterVolume, float* MenuVolume, float* UnfocusedVolume, float* EffectsVolume, float* MusicVolume, float* VoiceVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.FindSavedAudioVolumeSettings");
		
		UTaskForceSettings_FindSavedAudioVolumeSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MasterVolume != nullptr)
			*MasterVolume = params.MasterVolume;
		if (MenuVolume != nullptr)
			*MenuVolume = params.MenuVolume;
		if (UnfocusedVolume != nullptr)
			*UnfocusedVolume = params.UnfocusedVolume;
		if (EffectsVolume != nullptr)
			*EffectsVolume = params.EffectsVolume;
		if (MusicVolume != nullptr)
			*MusicVolume = params.MusicVolume;
		if (VoiceVolume != nullptr)
			*VoiceVolume = params.VoiceVolume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00632010
	 * 		Name   -> Function TaskForce.TaskForceSettings.ChangeScreenResolution
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            WindowMode                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTaskForceSettings::STATIC_ChangeScreenResolution(int32_t Width, int32_t Height, int32_t WindowMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceSettings.ChangeScreenResolution");
		
		UTaskForceSettings_ChangeScreenResolution_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.WindowMode = WindowMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTaskForceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTaskForceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceSmokeEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceSmokeEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceSmokeEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceSpectator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceSpectator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceSpectator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639480
	 * 		Name   -> Function TaskForce.TaskForceTeamStart.SetTeam
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TeamID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATaskForceTeamStart::SetTeam(int32_t TeamID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TaskForceTeamStart.SetTeam");
		
		ATaskForceTeamStart_SetTeam_Params params {};
		params.TeamID = TeamID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceTeamStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceTeamStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceTeamStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceTracerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceTracerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceTracerEffect");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATaskForceTrainingMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATaskForceTrainingMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TaskForceTrainingMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFGameEngine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFGameEngine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameEngine");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006395B0
	 * 		Name   -> Function TaskForce.TFGameInstance.UnsubscribeFromItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      WorkshopID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::UnsubscribeFromItem(const class FString& WorkshopID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.UnsubscribeFromItem");
		
		UTFGameInstance_UnsubscribeFromItem_Params params {};
		params.WorkshopID = WorkshopID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639500
	 * 		Name   -> Function TaskForce.TFGameInstance.SubscribeToItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      WorkshopID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::SubscribeToItem(const class FString& WorkshopID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.SubscribeToItem");
		
		UTFGameInstance_SubscribeToItem_Params params {};
		params.WorkshopID = WorkshopID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639260
	 * 		Name   -> Function TaskForce.TFGameInstance.RefreshSteamLobbies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ETFSteamLobbyDistance                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::RefreshSteamLobbies(ETFSteamLobbyDistance Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.RefreshSteamLobbies");
		
		UTFGameInstance_RefreshSteamLobbies_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639230
	 * 		Name   -> Function TaskForce.TFGameInstance.RefreshDedicatedServers
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameInstance::RefreshDedicatedServers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.RefreshDedicatedServers");
		
		UTFGameInstance_RefreshDedicatedServers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639200
	 * 		Name   -> Function TaskForce.TFGameInstance.ReconnectGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameInstance::ReconnectGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.ReconnectGame");
		
		UTFGameInstance_ReconnectGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.ReceiveOnStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFGameInstance::ReceiveOnStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.ReceiveOnStart");
		
		UTFGameInstance_ReceiveOnStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.ReceiveOnBackgroundMusic
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFGameInstance::ReceiveOnBackgroundMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.ReceiveOnBackgroundMusic");
		
		UTFGameInstance_ReceiveOnBackgroundMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006391E0
	 * 		Name   -> Function TaskForce.TFGameInstance.QuitGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameInstance::QuitGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.QuitGame");
		
		UTFGameInstance_QuitGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00639080
	 * 		Name   -> Function TaskForce.TFGameInstance.QuerySubscribedItems
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FJsonLibraryList UTFGameInstance::QuerySubscribedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.QuerySubscribedItems");
		
		UTFGameInstance_QuerySubscribedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638FE0
	 * 		Name   -> Function TaskForce.TFGameInstance.QueryPlayerData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FJsonLibraryObject UTFGameInstance::QueryPlayerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.QueryPlayerData");
		
		UTFGameInstance_QueryPlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638F40
	 * 		Name   -> Function TaskForce.TFGameInstance.QueryMapMetadata
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FJsonLibraryObject UTFGameInstance::QueryMapMetadata()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.QueryMapMetadata");
		
		UTFGameInstance_QueryMapMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638EA0
	 * 		Name   -> Function TaskForce.TFGameInstance.QueryInstalledMaps
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	struct FJsonLibraryObject UTFGameInstance::QueryInstalledMaps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.QueryInstalledMaps");
		
		UTFGameInstance_QueryInstalledMaps_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638DF0
	 * 		Name   -> Function TaskForce.TFGameInstance.ProcessJoinSecret
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Secret                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::ProcessJoinSecret(const class FString& Secret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.ProcessJoinSecret");
		
		UTFGameInstance_ProcessJoinSecret_Params params {};
		params.Secret = Secret;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.ProcessCommandLine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameInstance::ProcessCommandLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.ProcessCommandLine");
		
		UTFGameInstance_ProcessCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.OnDiscordShutdown
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFGameInstance::OnDiscordShutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.OnDiscordShutdown");
		
		UTFGameInstance_OnDiscordShutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.OnDiscordRespond
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DiscordUserID                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAccept                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameInstance::OnDiscordRespond(const class FString& DiscordUserID, bool bAccept)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.OnDiscordRespond");
		
		UTFGameInstance_OnDiscordRespond_Params params {};
		params.DiscordUserID = DiscordUserID;
		params.bAccept = bAccept;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.OnDiscordPresence
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDiscordRichPresence                        Presence                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTFGameInstance::OnDiscordPresence(const struct FDiscordRichPresence& Presence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.OnDiscordPresence");
		
		UTFGameInstance_OnDiscordPresence_Params params {};
		params.Presence = Presence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.OnDiscordInit
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DiscordAppID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SteamAppID                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameInstance::OnDiscordInit(const class FString& DiscordAppID, const class FString& SteamAppID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.OnDiscordInit");
		
		UTFGameInstance_OnDiscordInit_Params params {};
		params.DiscordAppID = DiscordAppID;
		params.SteamAppID = SteamAppID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFGameInstance.OnDiscordCallbacks
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFGameInstance::OnDiscordCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.OnDiscordCallbacks");
		
		UTFGameInstance_OnDiscordCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638D30
	 * 		Name   -> Function TaskForce.TFGameInstance.MainMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameInstance::MainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.MainMenu");
		
		UTFGameInstance_MainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638C30
	 * 		Name   -> Function TaskForce.TFGameInstance.LoadMap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameMode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::LoadMap(const class FString& MapName, const class FString& GameMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.LoadMap");
		
		UTFGameInstance_LoadMap_Params params {};
		params.MapName = MapName;
		params.GameMode = GameMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638B30
	 * 		Name   -> Function TaskForce.TFGameInstance.JoinServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ServerAddress                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerPassword                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::JoinServer(const class FString& ServerAddress, const class FString& ServerPassword)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.JoinServer");
		
		UTFGameInstance_JoinServer_Params params {};
		params.ServerAddress = ServerAddress;
		params.ServerPassword = ServerPassword;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638B00
	 * 		Name   -> Function TaskForce.TFGameInstance.IsServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsServer");
		
		UTFGameInstance_IsServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638AD0
	 * 		Name   -> Function TaskForce.TFGameInstance.IsOffline
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsOffline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsOffline");
		
		UTFGameInstance_IsOffline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638AA0
	 * 		Name   -> Function TaskForce.TFGameInstance.IsInMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsInMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsInMenu");
		
		UTFGameInstance_IsInMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638A70
	 * 		Name   -> Function TaskForce.TFGameInstance.IsInGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsInGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsInGame");
		
		UTFGameInstance_IsInGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638A40
	 * 		Name   -> Function TaskForce.TFGameInstance.IsInEditor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsInEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsInEditor");
		
		UTFGameInstance_IsInEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638A10
	 * 		Name   -> Function TaskForce.TFGameInstance.IsInControllerMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsInControllerMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsInControllerMode");
		
		UTFGameInstance_IsInControllerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006389E0
	 * 		Name   -> Function TaskForce.TFGameInstance.IsInConsole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsInConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsInConsole");
		
		UTFGameInstance_IsInConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006389B0
	 * 		Name   -> Function TaskForce.TFGameInstance.IsInChat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsInChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsInChat");
		
		UTFGameInstance_IsInChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638980
	 * 		Name   -> Function TaskForce.TFGameInstance.IsDedicatedServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsDedicatedServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsDedicatedServer");
		
		UTFGameInstance_IsDedicatedServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638950
	 * 		Name   -> Function TaskForce.TFGameInstance.IsClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::IsClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.IsClient");
		
		UTFGameInstance_IsClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638640
	 * 		Name   -> Function TaskForce.TFGameInstance.HostServerWithMapList
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              MapList                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              WorkshopIDs                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrivate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Slots                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bControllersOnly                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFriendlyFire                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::HostServerWithMapList(TArray<class FString> MapList, TArray<class FString> WorkshopIDs, bool bPrivate, const class FString& Name, const class FString& Password, int32_t Slots, bool bControllersOnly, bool bFriendlyFire)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.HostServerWithMapList");
		
		UTFGameInstance_HostServerWithMapList_Params params {};
		params.MapList = MapList;
		params.WorkshopIDs = WorkshopIDs;
		params.bPrivate = bPrivate;
		params.Name = Name;
		params.Password = Password;
		params.Slots = Slots;
		params.bControllersOnly = bControllersOnly;
		params.bFriendlyFire = bFriendlyFire;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638460
	 * 		Name   -> Function TaskForce.TFGameInstance.HostServer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GameMode                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPrivate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::HostServer(const class FString& MapName, const class FString& GameMode, bool bPrivate, const class FString& Name, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.HostServer");
		
		UTFGameInstance_HostServer_Params params {};
		params.MapName = MapName;
		params.GameMode = GameMode;
		params.bPrivate = bPrivate;
		params.Name = Name;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638430
	 * 		Name   -> Function TaskForce.TFGameInstance.HasProcessedCommandLine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::HasProcessedCommandLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.HasProcessedCommandLine");
		
		UTFGameInstance_HasProcessedCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638340
	 * 		Name   -> Function TaskForce.TFGameInstance.GetPrimaryController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class APlayerController* UTFGameInstance::GetPrimaryController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetPrimaryController");
		
		UTFGameInstance_GetPrimaryController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006382E0
	 * 		Name   -> Function TaskForce.TFGameInstance.GetGameViewport
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UTFGameViewportClient* UTFGameInstance::GetGameViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetGameViewport");
		
		UTFGameInstance_GetGameViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006382A0
	 * 		Name   -> Function TaskForce.TFGameInstance.GetGameTimeFromAPI
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDateTime UTFGameInstance::GetGameTimeFromAPI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetGameTimeFromAPI");
		
		UTFGameInstance_GetGameTimeFromAPI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638270
	 * 		Name   -> Function TaskForce.TFGameInstance.GetGameState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATFGameState* UTFGameInstance::GetGameState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetGameState");
		
		UTFGameInstance_GetGameState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638230
	 * 		Name   -> Function TaskForce.TFGameInstance.GetGameSessionID
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FGuid UTFGameInstance::GetGameSessionID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetGameSessionID");
		
		UTFGameInstance_GetGameSessionID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638200
	 * 		Name   -> Function TaskForce.TFGameInstance.GetGameNeedsUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameInstance::GetGameNeedsUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetGameNeedsUpdate");
		
		UTFGameInstance_GetGameNeedsUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006381D0
	 * 		Name   -> Function TaskForce.TFGameInstance.GetGameMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATFGameMode* UTFGameInstance::GetGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.GetGameMode");
		
		UTFGameInstance_GetGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006381A0
	 * 		Name   -> Function TaskForce.TFGameInstance.FindPlayerState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ATFPlayerState* UTFGameInstance::FindPlayerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.FindPlayerState");
		
		UTFGameInstance_FindPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638170
	 * 		Name   -> Function TaskForce.TFGameInstance.FindPlayerController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class ATFPlayerController* UTFGameInstance::FindPlayerController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.FindPlayerController");
		
		UTFGameInstance_FindPlayerController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638080
	 * 		Name   -> Function TaskForce.TFGameInstance.ExecuteCommand
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ATFPlayerController*                         Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameInstance::ExecuteCommand(const class FString& Command, class ATFPlayerController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.ExecuteCommand");
		
		UTFGameInstance_ExecuteCommand_Params params {};
		params.Command = Command;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00638050
	 * 		Name   -> Function TaskForce.TFGameInstance.DisconnectGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameInstance::DisconnectGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameInstance.DisconnectGame");
		
		UTFGameInstance_DisconnectGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.GameInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATFGameSession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATFGameSession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameSession");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFGameUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFGameUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FC40
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ToggleMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::ToggleMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ToggleMenu");
		
		UTFGameViewportClient_ToggleMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FC20
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ToggleConsole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::ToggleConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ToggleConsole");
		
		UTFGameViewportClient_ToggleConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FB80
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ShowRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::ShowRenderTarget(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ShowRenderTarget");
		
		UTFGameViewportClient_ShowRenderTarget_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FB50
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ShowMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::ShowMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ShowMenu");
		
		UTFGameViewportClient_ShowMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FAA0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ShowLoadingScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::ShowLoadingScreen(const class FString& MapName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ShowLoadingScreen");
		
		UTFGameViewportClient_ShowLoadingScreen_Params params {};
		params.MapName = MapName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FA70
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ShowInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::ShowInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ShowInterface");
		
		UTFGameViewportClient_ShowInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063FA40
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ShowConsole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::ShowConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ShowConsole");
		
		UTFGameViewportClient_ShowConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F980
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SetUnderlayOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::SetUnderlayOpacity(float Opacity, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SetUnderlayOpacity");
		
		UTFGameViewportClient_SetUnderlayOpacity_Params params {};
		params.Opacity = Opacity;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F8C0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SetOverlayOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::SetOverlayOpacity(float Opacity, float Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SetOverlayOpacity");
		
		UTFGameViewportClient_SetOverlayOpacity_Params params {};
		params.Opacity = Opacity;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F840
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SetMenuVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::SetMenuVolume(float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SetMenuVolume");
		
		UTFGameViewportClient_SetMenuVolume_Params params {};
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F720
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SetFocusToInterface
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bHUD                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResetMousePosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseLockMode                                     MouseLockMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::SetFocusToInterface(bool bHUD, bool bResetMousePosition, EMouseLockMode MouseLockMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SetFocusToInterface");
		
		UTFGameViewportClient_SetFocusToInterface_Params params {};
		params.bHUD = bHUD;
		params.bResetMousePosition = bResetMousePosition;
		params.MouseLockMode = MouseLockMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F700
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SetFocusToGame
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::SetFocusToGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SetFocusToGame");
		
		UTFGameViewportClient_SetFocusToGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F670
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SetControllerInput
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bController                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::SetControllerInput(bool bController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SetControllerInput");
		
		UTFGameViewportClient_SetControllerInput_Params params {};
		params.bController = bController;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F490
	 * 		Name   -> Function TaskForce.TFGameViewportClient.SaveBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::SaveBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.SaveBindings");
		
		UTFGameViewportClient_SaveBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F3F0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ResetUnderlayOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::ResetUnderlayOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ResetUnderlayOpacity");
		
		UTFGameViewportClient_ResetUnderlayOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F370
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ResetOverlayOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::ResetOverlayOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ResetOverlayOpacity");
		
		UTFGameViewportClient_ResetOverlayOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F260
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ResetInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      MapName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoadingScreen                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::ResetInterface(const class FString& MapName, bool bLoadingScreen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ResetInterface");
		
		UTFGameViewportClient_ResetInterface_Params params {};
		params.MapName = MapName;
		params.bLoadingScreen = bLoadingScreen;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F1D0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.RemoveBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Key                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::RemoveBinding(const class FName& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.RemoveBinding");
		
		UTFGameViewportClient_RemoveBinding_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F120
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ProcessCommandLine
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::ProcessCommandLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ProcessCommandLine");
		
		UTFGameViewportClient_ProcessCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EEB0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.OpenLegacySettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class ATaskForcePlayerController*                  Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              WorkshopSkins1                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              WorkshopSkins2                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::OpenLegacySettings(class ATaskForcePlayerController* Controller, TArray<class FString> WorkshopSkins1, TArray<class FString> WorkshopSkins2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.OpenLegacySettings");
		
		UTFGameViewportClient_OpenLegacySettings_Params params {};
		params.Controller = Controller;
		params.WorkshopSkins1 = WorkshopSkins1;
		params.WorkshopSkins2 = WorkshopSkins2;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EE20
	 * 		Name   -> Function TaskForce.TFGameViewportClient.OpenChat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bTeamOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::OpenChat(bool bTeamOnly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.OpenChat");
		
		UTFGameViewportClient_OpenChat_Params params {};
		params.bTeamOnly = bTeamOnly;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063ED60
	 * 		Name   -> Function TaskForce.TFGameViewportClient.NewBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::NewBinding(const class FName& Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.NewBinding");
		
		UTFGameViewportClient_NewBinding_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EC80
	 * 		Name   -> Function TaskForce.TFGameViewportClient.LoadScript
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHUD                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::LoadScript(const class FString& File, bool bHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.LoadScript");
		
		UTFGameViewportClient_LoadScript_Params params {};
		params.File = File;
		params.bHUD = bHUD;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EBE0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.LoadInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTFWebUI*                                    Interface                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::LoadInterface(class UTFWebUI* Interface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.LoadInterface");
		
		UTFGameViewportClient_LoadInterface_Params params {};
		params.Interface = Interface;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EB50
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsReady");
		
		UTFGameViewportClient_IsReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EAF0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsLoading
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsLoading()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsLoading");
		
		UTFGameViewportClient_IsLoading_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EA30
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsInMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsInMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsInMenu");
		
		UTFGameViewportClient_IsInMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E8D0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsInControllerMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsInControllerMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsInControllerMode");
		
		UTFGameViewportClient_IsInControllerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E8A0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsInConsole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsInConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsInConsole");
		
		UTFGameViewportClient_IsInConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E870
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsInChat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsInChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsInChat");
		
		UTFGameViewportClient_IsInChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E840
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsGameInputIgnored
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsGameInputIgnored()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsGameInputIgnored");
		
		UTFGameViewportClient_IsGameInputIgnored_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E810
	 * 		Name   -> Function TaskForce.TFGameViewportClient.IsAnimating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UTFGameViewportClient::IsAnimating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.IsAnimating");
		
		UTFGameViewportClient_IsAnimating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E7F0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.HideRenderTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::HideRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.HideRenderTarget");
		
		UTFGameViewportClient_HideRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E7C0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.HideMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::HideMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.HideMenu");
		
		UTFGameViewportClient_HideMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E7A0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.HideLoadingScreen
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::HideLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.HideLoadingScreen");
		
		UTFGameViewportClient_HideLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E780
	 * 		Name   -> Function TaskForce.TFGameViewportClient.HideInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::HideInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.HideInterface");
		
		UTFGameViewportClient_HideInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E750
	 * 		Name   -> Function TaskForce.TFGameViewportClient.HideConsole
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::HideConsole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.HideConsole");
		
		UTFGameViewportClient_HideConsole_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E4D0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.GetUnderlayOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTFGameViewportClient::GetUnderlayOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.GetUnderlayOpacity");
		
		UTFGameViewportClient_GetUnderlayOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E290
	 * 		Name   -> Function TaskForce.TFGameViewportClient.GetOverlayOpacity
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTFGameViewportClient::GetOverlayOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.GetOverlayOpacity");
		
		UTFGameViewportClient_GetOverlayOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E110
	 * 		Name   -> Function TaskForce.TFGameViewportClient.GetDelay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTFGameViewportClient::GetDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.GetDelay");
		
		UTFGameViewportClient_GetDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E0E0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.GetCrashDelay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTFGameViewportClient::GetCrashDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.GetCrashDelay");
		
		UTFGameViewportClient_GetCrashDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CCC0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ConsolePrint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::ConsolePrint(const class FString& Text, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ConsolePrint");
		
		UTFGameViewportClient_ConsolePrint_Params params {};
		params.Text = Text;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CC20
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ConsoleDebug
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFGameViewportClient::ConsoleDebug(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ConsoleDebug");
		
		UTFGameViewportClient_ConsoleDebug_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CC00
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ConsoleClear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::ConsoleClear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ConsoleClear");
		
		UTFGameViewportClient_ConsoleClear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CAD0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.CloseLegacySettings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::CloseLegacySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.CloseLegacySettings");
		
		UTFGameViewportClient_CloseLegacySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CAA0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.CloseChat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::CloseChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.CloseChat");
		
		UTFGameViewportClient_CloseChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CA80
	 * 		Name   -> Function TaskForce.TFGameViewportClient.CloseAlert
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::CloseAlert()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.CloseAlert");
		
		UTFGameViewportClient_CloseAlert_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CA50
	 * 		Name   -> Function TaskForce.TFGameViewportClient.CheckInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::CheckInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.CheckInterface");
		
		UTFGameViewportClient_CheckInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CA20
	 * 		Name   -> Function TaskForce.TFGameViewportClient.CancelBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::CancelBinding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.CancelBinding");
		
		UTFGameViewportClient_CancelBinding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063C8F0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.AddBinding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFGameViewportClient::AddBinding(const class FName& Action, const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.AddBinding");
		
		UTFGameViewportClient_AddBinding_Params params {};
		params.Action = Action;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063C8D0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ActivateMenu
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::ActivateMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ActivateMenu");
		
		UTFGameViewportClient_ActivateMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063C8B0
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ActivateLogo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UTFGameViewportClient::ActivateLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ActivateLogo");
		
		UTFGameViewportClient_ActivateLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063C880
	 * 		Name   -> Function TaskForce.TFGameViewportClient.ActivateInterface
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	bool UTFGameViewportClient::ActivateInterface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFGameViewportClient.ActivateInterface");
		
		UTFGameViewportClient_ActivateInterface_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F560
	 * 		Name   -> Function TaskForce.TFHelpers.ServerConsole
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_ServerConsole(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.ServerConsole");
		
		UTFHelpers_ServerConsole_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F350
	 * 		Name   -> Function TaskForce.TFHelpers.ResetLoaded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTFHelpers::STATIC_ResetLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.ResetLoaded");
		
		UTFHelpers_ResetLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F150
	 * 		Name   -> Function TaskForce.TFHelpers.ProcessLoaded
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTFHelpers::STATIC_ProcessLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.ProcessLoaded");
		
		UTFHelpers_ProcessLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F0F0
	 * 		Name   -> Function TaskForce.TFHelpers.OpenSteamChat
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	bool UTFHelpers::STATIC_OpenSteamChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.OpenSteamChat");
		
		UTFHelpers_OpenSteamChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063F050
	 * 		Name   -> Function TaskForce.TFHelpers.OpenSteamBrowser
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFHelpers::STATIC_OpenSteamBrowser(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.OpenSteamBrowser");
		
		UTFHelpers_OpenSteamBrowser_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006274E0
	 * 		Name   -> Function TaskForce.TFHelpers.IsTestingBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsTestingBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsTestingBuild");
		
		UTFHelpers_IsTestingBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EBB0
	 * 		Name   -> Function TaskForce.TFHelpers.IsSteamSubscribed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsSteamSubscribed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsSteamSubscribed");
		
		UTFHelpers_IsSteamSubscribed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EB80
	 * 		Name   -> Function TaskForce.TFHelpers.IsSteamRunning
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsSteamRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsSteamRunning");
		
		UTFHelpers_IsSteamRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0050AB60
	 * 		Name   -> Function TaskForce.TFHelpers.IsShippingBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsShippingBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsShippingBuild");
		
		UTFHelpers_IsShippingBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EAC0
	 * 		Name   -> Function TaskForce.TFHelpers.IsInWorkshop
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsInWorkshop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInWorkshop");
		
		UTFHelpers_IsInWorkshop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EA90
	 * 		Name   -> Function TaskForce.TFHelpers.IsInTV
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsInTV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInTV");
		
		UTFHelpers_IsInTV_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006274E0
	 * 		Name   -> Function TaskForce.TFHelpers.IsInternalBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsInternalBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInternalBuild");
		
		UTFHelpers_IsInternalBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063EA60
	 * 		Name   -> Function TaskForce.TFHelpers.IsInSteamOverlay
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsInSteamOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInSteamOverlay");
		
		UTFHelpers_IsInSteamOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E9B0
	 * 		Name   -> Function TaskForce.TFHelpers.IsInGame
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFHelpers::STATIC_IsInGame(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInGame");
		
		UTFHelpers_IsInGame_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E980
	 * 		Name   -> Function TaskForce.TFHelpers.IsInFocus
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsInFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInFocus");
		
		UTFHelpers_IsInFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E900
	 * 		Name   -> Function TaskForce.TFHelpers.IsInEditor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFHelpers::STATIC_IsInEditor(class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsInEditor");
		
		UTFHelpers_IsInEditor_Params params {};
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006274E0
	 * 		Name   -> Function TaskForce.TFHelpers.IsDevelopmentBuild
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_IsDevelopmentBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.IsDevelopmentBuild");
		
		UTFHelpers_IsDevelopmentBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E720
	 * 		Name   -> Function TaskForce.TFHelpers.HasWorkshopLoadData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_HasWorkshopLoadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.HasWorkshopLoadData");
		
		UTFHelpers_HasWorkshopLoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E6F0
	 * 		Name   -> Function TaskForce.TFHelpers.HasWorkshopDownloadData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_HasWorkshopDownloadData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.HasWorkshopDownloadData");
		
		UTFHelpers_HasWorkshopDownloadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E690
	 * 		Name   -> Function TaskForce.TFHelpers.HasMapLoadProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UTFHelpers::STATIC_HasMapLoadProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.HasMapLoadProgress");
		
		UTFHelpers_HasMapLoadProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E5B0
	 * 		Name   -> Function TaskForce.TFHelpers.GetWorkshopLoadData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Installed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Total                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTFHelpers::STATIC_GetWorkshopLoadData(int32_t* Installed, int32_t* Total)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetWorkshopLoadData");
		
		UTFHelpers_GetWorkshopLoadData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Installed != nullptr)
			*Installed = params.Installed;
		if (Total != nullptr)
			*Total = params.Total;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E530
	 * 		Name   -> Function TaskForce.TFHelpers.GetWorkshopDownloadTotal
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UTFHelpers::STATIC_GetWorkshopDownloadTotal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetWorkshopDownloadTotal");
		
		UTFHelpers_GetWorkshopDownloadTotal_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E500
	 * 		Name   -> Function TaskForce.TFHelpers.GetWorkshopDownloadProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTFHelpers::STATIC_GetWorkshopDownloadProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetWorkshopDownloadProgress");
		
		UTFHelpers_GetWorkshopDownloadProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E450
	 * 		Name   -> Function TaskForce.TFHelpers.GetSteamName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UTFHelpers::STATIC_GetSteamName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetSteamName");
		
		UTFHelpers_GetSteamName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E3D0
	 * 		Name   -> Function TaskForce.TFHelpers.GetSteamLanguage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UTFHelpers::STATIC_GetSteamLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetSteamLanguage");
		
		UTFHelpers_GetSteamLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E3A0
	 * 		Name   -> Function TaskForce.TFHelpers.GetSteamID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int64_t UTFHelpers::STATIC_GetSteamID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetSteamID");
		
		UTFHelpers_GetSteamID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E370
	 * 		Name   -> Function TaskForce.TFHelpers.GetSteamGroupID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int64_t UTFHelpers::STATIC_GetSteamGroupID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetSteamGroupID");
		
		UTFHelpers_GetSteamGroupID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E2F0
	 * 		Name   -> Function TaskForce.TFHelpers.GetSteamBranch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UTFHelpers::STATIC_GetSteamBranch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetSteamBranch");
		
		UTFHelpers_GetSteamBranch_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E2C0
	 * 		Name   -> Function TaskForce.TFHelpers.GetSteamAppID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	int32_t UTFHelpers::STATIC_GetSteamAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetSteamAppID");
		
		UTFHelpers_GetSteamAppID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E240
	 * 		Name   -> Function TaskForce.TFHelpers.GetMapLoadProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UTFHelpers::STATIC_GetMapLoadProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetMapLoadProgress");
		
		UTFHelpers_GetMapLoadProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E1C0
	 * 		Name   -> Function TaskForce.TFHelpers.GetLastLoadedPackage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UTFHelpers::STATIC_GetLastLoadedPackage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetLastLoadedPackage");
		
		UTFHelpers_GetLastLoadedPackage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E140
	 * 		Name   -> Function TaskForce.TFHelpers.GetLastLoadedObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	class FString UTFHelpers::STATIC_GetLastLoadedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.GetLastLoadedObject");
		
		UTFHelpers_GetLastLoadedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063E0C0
	 * 		Name   -> Function TaskForce.TFHelpers.ExitApplication
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UTFHelpers::STATIC_ExitApplication()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.ExitApplication");
		
		UTFHelpers_ExitApplication_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063DE10
	 * 		Name   -> Function TaskForce.TFHelpers.DrawSphere
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawSphere(class UWorld* World, const struct FVector& Center, float Radius, const struct FRotator& Rotation, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawSphere");
		
		UTFHelpers_DrawSphere_Params params {};
		params.World = World;
		params.Center = Center;
		params.Radius = Radius;
		params.Rotation = Rotation;
		params.Color = Color;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063DBC0
	 * 		Name   -> Function TaskForce.TFHelpers.DrawLine
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawLine(class UWorld* World, const struct FVector& Start, const struct FVector& End, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawLine");
		
		UTFHelpers_DrawLine_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Color = Color;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063D890
	 * 		Name   -> Function TaskForce.TFHelpers.DrawHistoryGraph
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Min                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Max                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawHistoryGraph(class UWorld* World, float Min, float Max, TArray<float> Data, const struct FVector& Location, float Width, float Height, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawHistoryGraph");
		
		UTFHelpers_DrawHistoryGraph_Params params {};
		params.World = World;
		params.Min = Min;
		params.Max = Max;
		params.Data = Data;
		params.Location = Location;
		params.Width = Width;
		params.Height = Height;
		params.Color = Color;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063D640
	 * 		Name   -> Function TaskForce.TFHelpers.DrawCoordinateSystem
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawCoordinateSystem(class UWorld* World, const struct FVector& Location, const struct FRotator& Rotation, float Scale, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawCoordinateSystem");
		
		UTFHelpers_DrawCoordinateSystem_Params params {};
		params.World = World;
		params.Location = Location;
		params.Rotation = Rotation;
		params.Scale = Scale;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063D370
	 * 		Name   -> Function TaskForce.TFHelpers.DrawCapsule
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawCapsule(class UWorld* World, const struct FVector& Center, float HalfHeight, float Radius, const struct FRotator& Rotation, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawCapsule");
		
		UTFHelpers_DrawCapsule_Params params {};
		params.World = World;
		params.Center = Center;
		params.HalfHeight = HalfHeight;
		params.Radius = Radius;
		params.Rotation = Rotation;
		params.Color = Color;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063D0E0
	 * 		Name   -> Function TaskForce.TFHelpers.DrawBox
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Center                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Extents                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawBox(class UWorld* World, const struct FVector& Center, const struct FVector& Extents, const struct FRotator& Rotation, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawBox");
		
		UTFHelpers_DrawBox_Params params {};
		params.World = World;
		params.Center = Center;
		params.Extents = Extents;
		params.Rotation = Rotation;
		params.Color = Color;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CD90
	 * 		Name   -> Function TaskForce.TFHelpers.DrawBodyInstance
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UWorld*                                      World                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBodyInstance                               BodyInstance                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bPersistent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              LifeTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DepthPriority                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_DrawBodyInstance(class UWorld* World, const struct FBodyInstance& BodyInstance, const struct FTransform& Transform, const struct FColor& Color, bool bPersistent, float LifeTime, unsigned char DepthPriority, float Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.DrawBodyInstance");
		
		UTFHelpers_DrawBodyInstance_Params params {};
		params.World = World;
		params.BodyInstance = BodyInstance;
		params.Transform = Transform;
		params.Color = Color;
		params.bPersistent = bPersistent;
		params.LifeTime = LifeTime;
		params.DepthPriority = DepthPriority;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0063CB00
	 * 		Name   -> Function TaskForce.TFHelpers.Console
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Text                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFHelpers::STATIC_Console(class UObject* WorldContextObject, const class FString& Text, const struct FColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFHelpers.Console");
		
		UTFHelpers_Console_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Text = Text;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFLocalPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFLocalPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFLocalPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00641490
	 * 		Name   -> Function TaskForce.TFSettings.WorkshopSettings
	 * 		Flags  -> (Final, Native, Static, Protected, BlueprintCallable)
	 */
	struct FJsonLibraryValue UTFSettings::STATIC_WorkshopSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFSettings.WorkshopSettings");
		
		UTFSettings_WorkshopSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00641420
	 * 		Name   -> Function TaskForce.TFSettings.ServerSettings
	 * 		Flags  -> (Final, Native, Static, Protected, BlueprintCallable)
	 */
	struct FJsonLibraryValue UTFSettings::STATIC_ServerSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFSettings.ServerSettings");
		
		UTFSettings_ServerSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.UnfocusBrowser
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::UnfocusBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.UnfocusBrowser");
		
		UTFWebUI_UnfocusBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.TickDebug
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Status                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Ping                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClientTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ServerTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GameTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Tick                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Step                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::TickDebug(const class FString& Status, float Ping, float ClientTime, float ServerTime, float GameTime, int32_t Tick, int32_t Step, float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.TickDebug");
		
		UTFWebUI_TickDebug_Params params {};
		params.Status = Status;
		params.Ping = Ping;
		params.ClientTime = ClientTime;
		params.ServerTime = ServerTime;
		params.GameTime = GameTime;
		params.Tick = Tick;
		params.Step = Step;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.ShowRenderTarget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::ShowRenderTarget(const class FName& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.ShowRenderTarget");
		
		UTFWebUI_ShowRenderTarget_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.ShowLoadingScreen
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Map                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSlateBrush                                 Image                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::ShowLoadingScreen(const class FString& Map, const struct FSlateBrush& Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.ShowLoadingScreen");
		
		UTFWebUI_ShowLoadingScreen_Params params {};
		params.Map = Map;
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.ShowBrowser
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHUD                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::ShowBrowser(bool bHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.ShowBrowser");
		
		UTFWebUI_ShowBrowser_Params params {};
		params.bHUD = bHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.SetOverlayOpacity
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::SetOverlayOpacity(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.SetOverlayOpacity");
		
		UTFWebUI_SetOverlayOpacity_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.RefreshBrowser
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::RefreshBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.RefreshBrowser");
		
		UTFWebUI_RefreshBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.LoadScript
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHUD                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::LoadScript(const class FString& File, bool bHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.LoadScript");
		
		UTFWebUI_LoadScript_Params params {};
		params.File = File;
		params.bHUD = bHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.IsInLoadingScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool UTFWebUI::IsInLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.IsInLoadingScreen");
		
		UTFWebUI_IsInLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.IsBrowserVisible
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	bool UTFWebUI::IsBrowserVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.IsBrowserVisible");
		
		UTFWebUI_IsBrowserVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.HideRenderTarget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::HideRenderTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.HideRenderTarget");
		
		UTFWebUI_HideRenderTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.HideLoadingScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::HideLoadingScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.HideLoadingScreen");
		
		UTFWebUI_HideLoadingScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.HideDebug
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::HideDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.HideDebug");
		
		UTFWebUI_HideDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.HideBrowser
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::HideBrowser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.HideBrowser");
		
		UTFWebUI_HideBrowser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.FocusBrowser
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHUD                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bResetMousePosition                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::FocusBrowser(bool bHUD, bool bResetMousePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.FocusBrowser");
		
		UTFWebUI_FocusBrowser_Params params {};
		params.bHUD = bHUD;
		params.bResetMousePosition = bResetMousePosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.FadeLoadingScreen
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Opacity                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::FadeLoadingScreen(float Opacity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.FadeLoadingScreen");
		
		UTFWebUI_FadeLoadingScreen_Params params {};
		params.Opacity = Opacity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.ExecuteScript
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Script                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHUD                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTFWebUI::ExecuteScript(const class FString& Script, bool bHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.ExecuteScript");
		
		UTFWebUI_ExecuteScript_Params params {};
		params.Script = Script;
		params.bHUD = bHUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.ActivateMenu
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::ActivateMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.ActivateMenu");
		
		UTFWebUI_ActivateMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008E6DC0
	 * 		Name   -> Function TaskForce.TFWebUI.ActivateLogo
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTFWebUI::ActivateLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TaskForce.TFWebUI.ActivateLogo");
		
		UTFWebUI_ActivateLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTFWebUI.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTFWebUI::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TaskForce.TFWebUI");
		return ptr;
	}

}


