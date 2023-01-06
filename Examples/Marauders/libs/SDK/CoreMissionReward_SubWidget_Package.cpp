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
	 * 		Name   -> Function CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C.OnLoaded_1938CEAD444057A2A50E18BDF8A8E370
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoreMissionReward_SubWidget_C::OnLoaded_1938CEAD444057A2A50E18BDF8A8E370(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C.OnLoaded_1938CEAD444057A2A50E18BDF8A8E370");
		
		UCoreMissionReward_SubWidget_C_OnLoaded_1938CEAD444057A2A50E18BDF8A8E370_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UCoreMissionReward_SubWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C.Construct");
		
		UCoreMissionReward_SubWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C.ExecuteUbergraph_CoreMissionReward_SubWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCoreMissionReward_SubWidget_C::ExecuteUbergraph_CoreMissionReward_SubWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C.ExecuteUbergraph_CoreMissionReward_SubWidget");
		
		UCoreMissionReward_SubWidget_C_ExecuteUbergraph_CoreMissionReward_SubWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoreMissionReward_SubWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoreMissionReward_SubWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CoreMissionReward_SubWidget.CoreMissionReward_SubWidget_C");
		return ptr;
	}

}


