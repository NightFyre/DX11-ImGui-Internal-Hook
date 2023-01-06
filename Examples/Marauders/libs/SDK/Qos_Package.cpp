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
	 * 		Name   -> Function Qos.QosBeaconClient.ServerQosRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InSessionId                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AQosBeaconClient::ServerQosRequest(const class FString& InSessionId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ServerQosRequest");
		
		AQosBeaconClient_ServerQosRequest_Params params {};
		params.InSessionId = InSessionId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Qos.QosBeaconClient.ClientQosResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQosResponseType                                   Response                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AQosBeaconClient::ClientQosResponse(EQosResponseType Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Qos.QosBeaconClient.ClientQosResponse");
		
		AQosBeaconClient_ClientQosResponse_Params params {};
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AQosBeaconClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AQosBeaconClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Qos.QosBeaconClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AQosBeaconHost.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AQosBeaconHost::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Qos.QosBeaconHost");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQosEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQosEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Qos.QosEvaluator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQosRegionManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQosRegionManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Qos.QosRegionManager");
		return ptr;
	}

}


