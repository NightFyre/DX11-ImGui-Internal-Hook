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
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.Show Hide Attachment Stat Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::Show_Hide_Attachment_Stat_Change(bool Show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.Show Hide Attachment Stat Change");
		
		USIGIS_WpnStatsRow_SubWiget_C_Show_Hide_Attachment_Stat_Change_Params params {};
		params.Show = Show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.RefreshWpnWB_AttachmentStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FWeaponStats                                WeaponStats_Base                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FWeaponStats                                AllModule_AttachStats                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FWeaponStats                                CurrentSelect_Attachment                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::RefreshWpnWB_AttachmentStat(const struct FWeaponStats& WeaponStats_Base, const struct FWeaponStats& AllModule_AttachStats, const struct FWeaponStats& CurrentSelect_Attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.RefreshWpnWB_AttachmentStat");
		
		USIGIS_WpnStatsRow_SubWiget_C_RefreshWpnWB_AttachmentStat_Params params {};
		params.WeaponStats_Base = WeaponStats_Base;
		params.AllModule_AttachStats = AllModule_AttachStats;
		params.CurrentSelect_Attachment = CurrentSelect_Attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.RefreshWpnWB_BaseStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BaseValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AllEquippedAttachmentValue                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::RefreshWpnWB_BaseStat(float BaseValue, float AllEquippedAttachmentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.RefreshWpnWB_BaseStat");
		
		USIGIS_WpnStatsRow_SubWiget_C_RefreshWpnWB_BaseStat_Params params {};
		params.BaseValue = BaseValue;
		params.AllEquippedAttachmentValue = AllEquippedAttachmentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.PreSetup
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::PreSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.PreSetup");
		
		USIGIS_WpnStatsRow_SubWiget_C_PreSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.Construct");
		
		USIGIS_WpnStatsRow_SubWiget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.PreConstruct");
		
		USIGIS_WpnStatsRow_SubWiget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.ExecuteUbergraph_SIGIS_WpnStatsRow_SubWiget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WpnStatsRow_SubWiget_C::ExecuteUbergraph_SIGIS_WpnStatsRow_SubWiget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C.ExecuteUbergraph_SIGIS_WpnStatsRow_SubWiget");
		
		USIGIS_WpnStatsRow_SubWiget_C_ExecuteUbergraph_SIGIS_WpnStatsRow_SubWiget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_WpnStatsRow_SubWiget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_WpnStatsRow_SubWiget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_WpnStatsRow_SubWiget.SIGIS_WpnStatsRow_SubWiget_C");
		return ptr;
	}

}


