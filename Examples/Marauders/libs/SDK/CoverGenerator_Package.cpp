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
	 * 		Name   -> PredefinedFunction ACoverActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoverActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.CoverActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.ReleaseCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoverPoint*                                 CoverPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoverGenerator::ReleaseCover(class UCoverPoint* CoverPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.ReleaseCover");
		
		ACoverGenerator_ReleaseCover_Params params {};
		params.CoverPoint = CoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.OnNavigationGenerationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACoverGenerator::OnNavigationGenerationFinished(class ANavigationData* NavData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.OnNavigationGenerationFinished");
		
		ACoverGenerator_OnNavigationGenerationFinished_Params params {};
		params.NavData = NavData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.OccupyCover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoverPoint*                                 CoverPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACoverGenerator::OccupyCover(class UCoverPoint* CoverPoint, class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.OccupyCover");
		
		ACoverGenerator_OccupyCover_Params params {};
		params.CoverPoint = CoverPoint;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.IsFreeCoverPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCoverPoint*                                 CoverPoint                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACoverGenerator::IsFreeCoverPoint(class UCoverPoint* CoverPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.IsFreeCoverPoint");
		
		ACoverGenerator_IsFreeCoverPoint_Params params {};
		params.CoverPoint = CoverPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.GetCoverWithinBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        BoxIn                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	TArray<class UCoverPoint*> ACoverGenerator::GetCoverWithinBox(const struct FBox& BoxIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.GetCoverWithinBox");
		
		ACoverGenerator_GetCoverWithinBox_Params params {};
		params.BoxIn = BoxIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.GetCoverGenerator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ACoverGenerator* ACoverGenerator::GetCoverGenerator(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.GetCoverGenerator");
		
		ACoverGenerator_GetCoverGenerator_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.CoverGenerator.CoverExistWithinBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBox                                        BoxIn                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool ACoverGenerator::CoverExistWithinBox(const struct FBox& BoxIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.CoverGenerator.CoverExistWithinBox");
		
		ACoverGenerator_CoverExistWithinBox_Params params {};
		params.BoxIn = BoxIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACoverGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACoverGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.CoverGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoverPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoverPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.CoverPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_CoverFMemory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_CoverFMemory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryGenerator_CoverFMemory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoverGenerator.EnvQueryInstanceRaidWrapper.GetResultsAsCoverPoints
	 * 		Flags  -> ()
	 */
	TArray<class UCoverPoint*> UEnvQueryInstanceRaidWrapper::GetResultsAsCoverPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoverGenerator.EnvQueryInstanceRaidWrapper.GetResultsAsCoverPoints");
		
		UEnvQueryInstanceRaidWrapper_GetResultsAsCoverPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryInstanceRaidWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryInstanceRaidWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryInstanceRaidWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Cover.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Cover::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryItemType_Cover");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_CoverPointFree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_CoverPointFree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_CoverPointFree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsContextShootableFromCoverPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsContextShootableFromCoverPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_IsContextShootableFromCoverPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_IsCoverPosition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_IsCoverPosition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_IsCoverPosition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_ParallelToCoverDirection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_ParallelToCoverDirection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_ParallelToCoverDirection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_TraceDistance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_TraceDistance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CoverGenerator.EnvQueryTest_TraceDistance");
		return ptr;
	}

}


