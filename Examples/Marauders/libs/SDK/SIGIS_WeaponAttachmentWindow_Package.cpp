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
	 * 		Name   -> Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.ShowAmmoType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EBulletType                                        BulletType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WeaponAttachmentWindow_C::ShowAmmoType(bool Show, EBulletType BulletType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.ShowAmmoType");
		
		USIGIS_WeaponAttachmentWindow_C_ShowAmmoType_Params params {};
		params.Show = Show;
		params.BulletType = BulletType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_WeaponAttachmentWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.Construct");
		
		USIGIS_WeaponAttachmentWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.ExecuteUbergraph_SIGIS_WeaponAttachmentWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_WeaponAttachmentWindow_C::ExecuteUbergraph_SIGIS_WeaponAttachmentWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C.ExecuteUbergraph_SIGIS_WeaponAttachmentWindow");
		
		USIGIS_WeaponAttachmentWindow_C_ExecuteUbergraph_SIGIS_WeaponAttachmentWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_WeaponAttachmentWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_WeaponAttachmentWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_WeaponAttachmentWindow.SIGIS_WeaponAttachmentWindow_C");
		return ptr;
	}

}


