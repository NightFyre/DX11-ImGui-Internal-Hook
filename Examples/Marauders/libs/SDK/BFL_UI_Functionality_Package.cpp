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
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.SteamAPItoLangCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamApiLang                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LangAsCode                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::SteamAPItoLangCode(const class FString& SteamApiLang, class UObject* __WorldContext, class FString* LangAsCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.SteamAPItoLangCode");
		
		UBFL_UI_Functionality_C_SteamAPItoLangCode_Params params {};
		params.SteamApiLang = SteamApiLang;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LangAsCode != nullptr)
			*LangAsCode = params.LangAsCode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.FireModeToPrettyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFireMode                                          WhichFireMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FireModePrettyName                                         (Parm, OutParm)
	 */
	void UBFL_UI_Functionality_C::FireModeToPrettyName(EFireMode WhichFireMode, class UObject* __WorldContext, class FText* FireModePrettyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.FireModeToPrettyName");
		
		UBFL_UI_Functionality_C_FireModeToPrettyName_Params params {};
		params.WhichFireMode = WhichFireMode;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FireModePrettyName != nullptr)
			*FireModePrettyName = params.FireModePrettyName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.RemoveQuestMarksFromSting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringIn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      EditedString                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::RemoveQuestMarksFromSting(const class FString& StringIn, class UObject* __WorldContext, class FString* EditedString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.RemoveQuestMarksFromSting");
		
		UBFL_UI_Functionality_C_RemoveQuestMarksFromSting_Params params {};
		params.StringIn = StringIn;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EditedString != nullptr)
			*EditedString = params.EditedString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.CrewNameSuffix_Remove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewNameWithSuffix                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CleanCrewName                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::CrewNameSuffix_Remove(const class FString& CrewNameWithSuffix, class UObject* __WorldContext, class FString* CleanCrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.CrewNameSuffix_Remove");
		
		UBFL_UI_Functionality_C_CrewNameSuffix_Remove_Params params {};
		params.CrewNameWithSuffix = CrewNameWithSuffix;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CleanCrewName != nullptr)
			*CleanCrewName = params.CleanCrewName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.CrewNameSuffix_Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OriginalCrewName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      username                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CrewWithRandSuffix                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::CrewNameSuffix_Add(const class FString& OriginalCrewName, const class FString& username, class UObject* __WorldContext, class FString* CrewWithRandSuffix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.CrewNameSuffix_Add");
		
		UBFL_UI_Functionality_C_CrewNameSuffix_Add_Params params {};
		params.OriginalCrewName = OriginalCrewName;
		params.username = username;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrewWithRandSuffix != nullptr)
			*CrewWithRandSuffix = params.CrewWithRandSuffix;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.ShipDTRowToNiceName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NiceShipName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::ShipDTRowToNiceName(const class FName& RowName, class UObject* __WorldContext, class FString* NiceShipName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.ShipDTRowToNiceName");
		
		UBFL_UI_Functionality_C_ShipDTRowToNiceName_Params params {};
		params.RowName = RowName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NiceShipName != nullptr)
			*NiceShipName = params.NiceShipName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.RunSimplePopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        PopupTitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        PopupDesc                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               CheckIfAlreadyPlaying                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::RunSimplePopup(const class FText& PopupTitle, const class FText& PopupDesc, class USoundCue* SoundToPlay, class APlayerController* OwningPlayer, bool CheckIfAlreadyPlaying, float PlaybackSpeed, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.RunSimplePopup");
		
		UBFL_UI_Functionality_C_RunSimplePopup_Params params {};
		params.PopupTitle = PopupTitle;
		params.PopupDesc = PopupDesc;
		params.SoundToPlay = SoundToPlay;
		params.OwningPlayer = OwningPlayer;
		params.CheckIfAlreadyPlaying = CheckIfAlreadyPlaying;
		params.PlaybackSpeed = PlaybackSpeed;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.RegionToNiceName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RegionString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NameNicer                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::RegionToNiceName(const class FString& RegionString, class UObject* __WorldContext, class FString* NameNicer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.RegionToNiceName");
		
		UBFL_UI_Functionality_C_RegionToNiceName_Params params {};
		params.RegionString = RegionString;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NameNicer != nullptr)
			*NameNicer = params.NameNicer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.LocalisationisAllowed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      WhatLanguage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_Languages                                        WhichLanguage                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsAllowedToBeUsedAtm                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      LanguageAsString                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      JustFirstPart                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      JustSecondPart                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::LocalisationisAllowed(const class FString& WhatLanguage, class UObject* __WorldContext, E_Languages* WhichLanguage, bool* IsAllowedToBeUsedAtm, class FString* LanguageAsString, class FString* JustFirstPart, class FString* JustSecondPart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.LocalisationisAllowed");
		
		UBFL_UI_Functionality_C_LocalisationisAllowed_Params params {};
		params.WhatLanguage = WhatLanguage;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WhichLanguage != nullptr)
			*WhichLanguage = params.WhichLanguage;
		if (IsAllowedToBeUsedAtm != nullptr)
			*IsAllowedToBeUsedAtm = params.IsAllowedToBeUsedAtm;
		if (LanguageAsString != nullptr)
			*LanguageAsString = params.LanguageAsString;
		if (JustFirstPart != nullptr)
			*JustFirstPart = params.JustFirstPart;
		if (JustSecondPart != nullptr)
			*JustSecondPart = params.JustSecondPart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.MissionTypeIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EContractType                                      WhichContractType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::MissionTypeIcon(EContractType WhichContractType, class UObject* __WorldContext, class UTexture2D** Icon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.MissionTypeIcon");
		
		UBFL_UI_Functionality_C_MissionTypeIcon_Params params {};
		params.WhichContractType = WhichContractType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Icon != nullptr)
			*Icon = params.Icon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.BG_ItemColourForItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemType                                          WhatItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BG_ColourToUse                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::BG_ItemColourForItemType(EItemType WhatItemType, class UObject* __WorldContext, struct FLinearColor* BG_ColourToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.BG_ItemColourForItemType");
		
		UBFL_UI_Functionality_C_BG_ItemColourForItemType_Params params {};
		params.WhatItemType = WhatItemType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BG_ColourToUse != nullptr)
			*BG_ColourToUse = params.BG_ColourToUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.DebugPassword
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Password                                                   (Parm, OutParm)
	 */
	void UBFL_UI_Functionality_C::DebugPassword(class UObject* __WorldContext, class FText* Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.DebugPassword");
		
		UBFL_UI_Functionality_C_DebugPassword_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Password != nullptr)
			*Password = params.Password;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.Get Health Bar Colour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HealthValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HealthBarColour                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::Get_Health_Bar_Colour(float HealthValue, class UObject* __WorldContext, struct FLinearColor* HealthBarColour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.Get Health Bar Colour");
		
		UBFL_UI_Functionality_C_Get_Health_Bar_Colour_Params params {};
		params.HealthValue = HealthValue;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthBarColour != nullptr)
			*HealthBarColour = params.HealthBarColour;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.PrettyUpTimerHourMinSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time_In_Seconds                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PrettyTimeOut                                              (Parm, OutParm)
	 */
	void UBFL_UI_Functionality_C::PrettyUpTimerHourMinSeconds(int32_t Time_In_Seconds, class UObject* __WorldContext, class FText* PrettyTimeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.PrettyUpTimerHourMinSeconds");
		
		UBFL_UI_Functionality_C_PrettyUpTimerHourMinSeconds_Params params {};
		params.Time_In_Seconds = Time_In_Seconds;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrettyTimeOut != nullptr)
			*PrettyTimeOut = params.PrettyTimeOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.PrettyUpTimerMinSeconds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Time_In_Seconds                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PrettyTimeOut                                              (Parm, OutParm)
	 */
	void UBFL_UI_Functionality_C::PrettyUpTimerMinSeconds(int32_t Time_In_Seconds, class UObject* __WorldContext, class FText* PrettyTimeOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.PrettyUpTimerMinSeconds");
		
		UBFL_UI_Functionality_C_PrettyUpTimerMinSeconds_Params params {};
		params.Time_In_Seconds = Time_In_Seconds;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PrettyTimeOut != nullptr)
			*PrettyTimeOut = params.PrettyTimeOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.GetFactionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFactionType                                       FactionType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        FactionNiceName                                            (Parm, OutParm)
	 * 		class UTexture2D*                                  FactionIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::GetFactionInfo(EFactionType FactionType, class UObject* __WorldContext, class FText* FactionNiceName, class UTexture2D** FactionIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.GetFactionInfo");
		
		UBFL_UI_Functionality_C_GetFactionInfo_Params params {};
		params.FactionType = FactionType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactionNiceName != nullptr)
			*FactionNiceName = params.FactionNiceName;
		if (FactionIcon != nullptr)
			*FactionIcon = params.FactionIcon;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.AmmoEnumToNiceText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBulletType                                        AmmoTypeEnum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NiceString                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::AmmoEnumToNiceText(EBulletType AmmoTypeEnum, class UObject* __WorldContext, class FString* NiceString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.AmmoEnumToNiceText");
		
		UBFL_UI_Functionality_C_AmmoEnumToNiceText_Params params {};
		params.AmmoTypeEnum = AmmoTypeEnum;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NiceString != nullptr)
			*NiceString = params.NiceString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.TranslateShopKeepIDToinfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShopkeepID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FS_ShopkeeperUI_Info                        ShopInfo                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::TranslateShopKeepIDToinfo(int32_t ShopkeepID, class UObject* __WorldContext, bool* valid, struct FS_ShopkeeperUI_Info* ShopInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.TranslateShopKeepIDToinfo");
		
		UBFL_UI_Functionality_C_TranslateShopKeepIDToinfo_Params params {};
		params.ShopkeepID = ShopkeepID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (valid != nullptr)
			*valid = params.valid;
		if (ShopInfo != nullptr)
			*ShopInfo = params.ShopInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.IfTextEmptyReturnNone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        StringCheck                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AdaptedString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBFL_UI_Functionality_C::IfTextEmptyReturnNone(const class FName& StringCheck, class UObject* __WorldContext, class FString* AdaptedString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.IfTextEmptyReturnNone");
		
		UBFL_UI_Functionality_C_IfTextEmptyReturnNone_Params params {};
		params.StringCheck = StringCheck;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AdaptedString != nullptr)
			*AdaptedString = params.AdaptedString;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.Translate_K_ForKillList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Stat_KillName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NiceKillName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               isPlayerKill                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBFL_UI_Functionality_C::Translate_K_ForKillList(const class FString& Stat_KillName, class UObject* __WorldContext, class FString* NiceKillName, bool* isPlayerKill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.Translate_K_ForKillList");
		
		UBFL_UI_Functionality_C_Translate_K_ForKillList_Params params {};
		params.Stat_KillName = Stat_KillName;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NiceKillName != nullptr)
			*NiceKillName = params.NiceKillName;
		if (isPlayerKill != nullptr)
			*isPlayerKill = params.isPlayerKill;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.TranslateCosmeticUnlockReqToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UnlockReqStatName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Nice_Message                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               NoStatNeeded                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBFL_UI_Functionality_C::TranslateCosmeticUnlockReqToString(const class FString& UnlockReqStatName, int32_t amount, class UObject* __WorldContext, class FString* Nice_Message, bool* NoStatNeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.TranslateCosmeticUnlockReqToString");
		
		UBFL_UI_Functionality_C_TranslateCosmeticUnlockReqToString_Params params {};
		params.UnlockReqStatName = UnlockReqStatName;
		params.amount = amount;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Nice_Message != nullptr)
			*Nice_Message = params.Nice_Message;
		if (NoStatNeeded != nullptr)
			*NoStatNeeded = params.NoStatNeeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.CalculateWhichRegionFromInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WhichRegionInt                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAmazonRegions                                     isWhichRegion                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Nice_Name                                                  (Parm, OutParm)
	 */
	void UBFL_UI_Functionality_C::CalculateWhichRegionFromInt(int32_t WhichRegionInt, class UObject* __WorldContext, EAmazonRegions* isWhichRegion, class FText* Nice_Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.CalculateWhichRegionFromInt");
		
		UBFL_UI_Functionality_C_CalculateWhichRegionFromInt_Params params {};
		params.WhichRegionInt = WhichRegionInt;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isWhichRegion != nullptr)
			*isWhichRegion = params.isWhichRegion;
		if (Nice_Name != nullptr)
			*Nice_Name = params.Nice_Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BFL_UI_Functionality.BFL_UI_Functionality_C.GetCurrentBuild_ID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        CurrentBuild                                               (Parm, OutParm)
	 */
	void UBFL_UI_Functionality_C::GetCurrentBuild_ID(class UObject* __WorldContext, class FText* CurrentBuild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BFL_UI_Functionality.BFL_UI_Functionality_C.GetCurrentBuild_ID");
		
		UBFL_UI_Functionality_C_GetCurrentBuild_ID_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentBuild != nullptr)
			*CurrentBuild = params.CurrentBuild;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBFL_UI_Functionality_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBFL_UI_Functionality_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BFL_UI_Functionality.BFL_UI_Functionality_C");
		return ptr;
	}

}


