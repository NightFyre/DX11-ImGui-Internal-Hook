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
	 * 		Name   -> Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerReplicationRPCParameter              ProxyParameter                                             (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UNetworkPredictionComponent::ServerReceiveClientInput(const struct FServerReplicationRPCParameter& ProxyParameter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput");
		
		UNetworkPredictionComponent_ServerReceiveClientInput_Params params {};
		params.ProxyParameter = ProxyParameter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkPredictionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkPredictionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPrediction.NetworkPredictionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkPredictionPhysicsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkPredictionPhysicsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPrediction.NetworkPredictionPhysicsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANetworkPredictionReplicatedManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANetworkPredictionReplicatedManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPrediction.NetworkPredictionReplicatedManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkPredictionSettingsObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkPredictionSettingsObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPrediction.NetworkPredictionSettingsObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetworkPredictionWorldManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetworkPredictionWorldManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NetworkPrediction.NetworkPredictionWorldManager");
		return ptr;
	}

}


