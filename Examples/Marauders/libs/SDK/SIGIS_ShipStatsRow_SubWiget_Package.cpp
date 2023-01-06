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
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.Show Hide Ship Attachment Stat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::Show_Hide_Ship_Attachment_Stat_Change(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.Show Hide Ship Attachment Stat Change");
		
		USIGIS_ShipStatsRow_SubWiget_C_Show_Hide_Ship_Attachment_Stat_Change_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.RefreshWpnShip_AttachmentStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FFrigateStats                               BaseShipStats                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFrigateStats                               Ship_AllAttachedStats                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FFrigateStats                               Ship_SelectedAttachment                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::RefreshWpnShip_AttachmentStat(const struct FFrigateStats& BaseShipStats, const struct FFrigateStats& Ship_AllAttachedStats, const struct FFrigateStats& Ship_SelectedAttachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.RefreshWpnShip_AttachmentStat");
		
		USIGIS_ShipStatsRow_SubWiget_C_RefreshWpnShip_AttachmentStat_Params params {};
		params.BaseShipStats = BaseShipStats;
		params.Ship_AllAttachedStats = Ship_AllAttachedStats;
		params.Ship_SelectedAttachment = Ship_SelectedAttachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.RefreshWpnWB_BaseStat NotInUseAnymore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AllEquippedAttachmentValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::RefreshWpnWB_BaseStat_NotInUseAnymore(float BaseValue, float AllEquippedAttachmentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.RefreshWpnWB_BaseStat NotInUseAnymore");
		
		USIGIS_ShipStatsRow_SubWiget_C_RefreshWpnWB_BaseStat_NotInUseAnymore_Params params {};
		params.BaseValue = BaseValue;
		params.AllEquippedAttachmentValue = AllEquippedAttachmentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.PreSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::PreSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.PreSetup");
		
		USIGIS_ShipStatsRow_SubWiget_C_PreSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.PreConstruct");
		
		USIGIS_ShipStatsRow_SubWiget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.Construct");
		
		USIGIS_ShipStatsRow_SubWiget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.ExecuteUbergraph_SIGIS_ShipStatsRow_SubWiget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_ShipStatsRow_SubWiget_C::ExecuteUbergraph_SIGIS_ShipStatsRow_SubWiget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C.ExecuteUbergraph_SIGIS_ShipStatsRow_SubWiget");
		
		USIGIS_ShipStatsRow_SubWiget_C_ExecuteUbergraph_SIGIS_ShipStatsRow_SubWiget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_ShipStatsRow_SubWiget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_ShipStatsRow_SubWiget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_ShipStatsRow_SubWiget.SIGIS_ShipStatsRow_SubWiget_C");
		return ptr;
	}

}


