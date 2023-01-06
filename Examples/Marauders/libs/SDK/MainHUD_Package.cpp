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
	 * 		Name   -> Function MainHUD.MainHUD_C.HideTheInventoryExtras
	 * 		Flags  -> ()
	 */
	void AMainHUD_C::HideTheInventoryExtras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.HideTheInventoryExtras");
		
		AMainHUD_C_HideTheInventoryExtras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.Get_MyDiscordNameAndImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        MyDiscordName                                              (Parm, OutParm)
	 * 		class UTexture2DDynamic*                           DiscordIconTexDynamic                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainHUD_C::Get_MyDiscordNameAndImage(class FText* MyDiscordName, class UTexture2DDynamic** DiscordIconTexDynamic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.Get_MyDiscordNameAndImage");
		
		AMainHUD_C_Get_MyDiscordNameAndImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyDiscordName != nullptr)
			*MyDiscordName = params.MyDiscordName;
		if (DiscordIconTexDynamic != nullptr)
			*DiscordIconTexDynamic = params.DiscordIconTexDynamic;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.MenuStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainHUD_C::MenuStateChanged(EMenuState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.MenuStateChanged");
		
		AMainHUD_C_MenuStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.BP_NoSpaceForItem
	 * 		Flags  -> ()
	 */
	void AMainHUD_C::BP_NoSpaceForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.BP_NoSpaceForItem");
		
		AMainHUD_C_BP_NoSpaceForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.ReceiveDrawHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SizeX                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SizeY                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainHUD_C::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.ReceiveDrawHUD");
		
		AMainHUD_C_ReceiveDrawHUD_Params params {};
		params.SizeX = SizeX;
		params.SizeY = SizeY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.PostLoginLoad
	 * 		Flags  -> ()
	 */
	void AMainHUD_C::PostLoginLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.PostLoginLoad");
		
		AMainHUD_C_PostLoginLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMainHUD_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.ReceiveBeginPlay");
		
		AMainHUD_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.BP_CantScrapItemsInside
	 * 		Flags  -> ()
	 */
	void AMainHUD_C::BP_CantScrapItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.BP_CantScrapItemsInside");
		
		AMainHUD_C_BP_CantScrapItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.BP_CantSellItemsInside
	 * 		Flags  -> ()
	 */
	void AMainHUD_C::BP_CantSellItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.BP_CantSellItemsInside");
		
		AMainHUD_C_BP_CantSellItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MainHUD.MainHUD_C.ExecuteUbergraph_MainHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMainHUD_C::ExecuteUbergraph_MainHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MainHUD.MainHUD_C.ExecuteUbergraph_MainHUD");
		
		AMainHUD_C_ExecuteUbergraph_MainHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMainHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMainHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MainHUD.MainHUD_C");
		return ptr;
	}

}


