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
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.Bind_GetPlayersCurrentLevel
	 * 		Flags  -> ()
	 */
	class FText USIGIS_MyRank_C::Bind_GetPlayersCurrentLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.Bind_GetPlayersCurrentLevel");
		
		USIGIS_MyRank_C_Bind_GetPlayersCurrentLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.OnFail_82ED5564492C36B069FB4990D4DEE82E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MyRank_C::OnFail_82ED5564492C36B069FB4990D4DEE82E(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.OnFail_82ED5564492C36B069FB4990D4DEE82E");
		
		USIGIS_MyRank_C_OnFail_82ED5564492C36B069FB4990D4DEE82E_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.OnSuccess_82ED5564492C36B069FB4990D4DEE82E
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MyRank_C::OnSuccess_82ED5564492C36B069FB4990D4DEE82E(class UTexture2DDynamic* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.OnSuccess_82ED5564492C36B069FB4990D4DEE82E");
		
		USIGIS_MyRank_C_OnSuccess_82ED5564492C36B069FB4990D4DEE82E_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.Construct
	 * 		Flags  -> ()
	 */
	void USIGIS_MyRank_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.Construct");
		
		USIGIS_MyRank_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.UpdateRank
	 * 		Flags  -> ()
	 */
	void USIGIS_MyRank_C::UpdateRank()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.UpdateRank");
		
		USIGIS_MyRank_C_UpdateRank_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.BndEvt__MM_SecondaryOptionsBtn_Twitter_1_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_MM_SecondaryOptions                              WhichButtonPressed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MyRank_C::BndEvt__MM_SecondaryOptionsBtn_Twitter_1_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature(E_MM_SecondaryOptions WhichButtonPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.BndEvt__MM_SecondaryOptionsBtn_Twitter_1_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature");
		
		USIGIS_MyRank_C_BndEvt__MM_SecondaryOptionsBtn_Twitter_1_K2Node_ComponentBoundEvent_0_SecondaryButtonHasBeenPressed__DelegateSignature_Params params {};
		params.WhichButtonPressed = WhichButtonPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.GotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GamerTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ProfilePicUrl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USIGIS_MyRank_C::GotInfo(const class FString& GamerTag, const class FString& ProfilePicUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.GotInfo");
		
		USIGIS_MyRank_C_GotInfo_Params params {};
		params.GamerTag = GamerTag;
		params.ProfilePicUrl = ProfilePicUrl;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.Full_RankInfoRefresh
	 * 		Flags  -> ()
	 */
	void USIGIS_MyRank_C::Full_RankInfoRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.Full_RankInfoRefresh");
		
		USIGIS_MyRank_C_Full_RankInfoRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.ExecuteUbergraph_SIGIS_MyRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USIGIS_MyRank_C::ExecuteUbergraph_SIGIS_MyRank(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.ExecuteUbergraph_SIGIS_MyRank");
		
		USIGIS_MyRank_C_ExecuteUbergraph_SIGIS_MyRank_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGIS_MyRank.SIGIS_MyRank_C.ED_MyPlayerProfilePressed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USIGIS_MyRank_C::ED_MyPlayerProfilePressed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGIS_MyRank.SIGIS_MyRank_C.ED_MyPlayerProfilePressed__DelegateSignature");
		
		USIGIS_MyRank_C_ED_MyPlayerProfilePressed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGIS_MyRank_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGIS_MyRank_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SIGIS_MyRank.SIGIS_MyRank_C");
		return ptr;
	}

}


