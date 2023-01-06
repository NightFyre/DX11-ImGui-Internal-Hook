#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BFL_UI_Functionality.BFL_UI_Functionality_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_UI_Functionality_C : public UBlueprintFunctionLibrary
	{
	public:
		void SteamAPItoLangCode(const class FString& SteamApiLang, class UObject* __WorldContext, class FString* LangAsCode);
		void FireModeToPrettyName(EFireMode WhichFireMode, class UObject* __WorldContext, class FText* FireModePrettyName);
		void RemoveQuestMarksFromSting(const class FString& StringIn, class UObject* __WorldContext, class FString* EditedString);
		void CrewNameSuffix_Remove(const class FString& CrewNameWithSuffix, class UObject* __WorldContext, class FString* CleanCrewName);
		void CrewNameSuffix_Add(const class FString& OriginalCrewName, const class FString& username, class UObject* __WorldContext, class FString* CrewWithRandSuffix);
		void ShipDTRowToNiceName(const class FName& RowName, class UObject* __WorldContext, class FString* NiceShipName);
		void RunSimplePopup(const class FText& PopupTitle, const class FText& PopupDesc, class USoundCue* SoundToPlay, class APlayerController* OwningPlayer, bool CheckIfAlreadyPlaying, float PlaybackSpeed, class UObject* __WorldContext);
		void RegionToNiceName(const class FString& RegionString, class UObject* __WorldContext, class FString* NameNicer);
		void LocalisationisAllowed(const class FString& WhatLanguage, class UObject* __WorldContext, E_Languages* WhichLanguage, bool* IsAllowedToBeUsedAtm, class FString* LanguageAsString, class FString* JustFirstPart, class FString* JustSecondPart);
		void MissionTypeIcon(EContractType WhichContractType, class UObject* __WorldContext, class UTexture2D** Icon);
		void BG_ItemColourForItemType(EItemType WhatItemType, class UObject* __WorldContext, struct FLinearColor* BG_ColourToUse);
		void DebugPassword(class UObject* __WorldContext, class FText* Password);
		void Get_Health_Bar_Colour(float HealthValue, class UObject* __WorldContext, struct FLinearColor* HealthBarColour);
		void PrettyUpTimerHourMinSeconds(int32_t Time_In_Seconds, class UObject* __WorldContext, class FText* PrettyTimeOut);
		void PrettyUpTimerMinSeconds(int32_t Time_In_Seconds, class UObject* __WorldContext, class FText* PrettyTimeOut);
		void GetFactionInfo(EFactionType FactionType, class UObject* __WorldContext, class FText* FactionNiceName, class UTexture2D** FactionIcon);
		void AmmoEnumToNiceText(EBulletType AmmoTypeEnum, class UObject* __WorldContext, class FString* NiceString);
		void TranslateShopKeepIDToinfo(int32_t ShopkeepID, class UObject* __WorldContext, bool* valid, struct FS_ShopkeeperUI_Info* ShopInfo);
		void IfTextEmptyReturnNone(const class FName& StringCheck, class UObject* __WorldContext, class FString* AdaptedString);
		void Translate_K_ForKillList(const class FString& Stat_KillName, class UObject* __WorldContext, class FString* NiceKillName, bool* isPlayerKill);
		void TranslateCosmeticUnlockReqToString(const class FString& UnlockReqStatName, int32_t amount, class UObject* __WorldContext, class FString* Nice_Message, bool* NoStatNeeded);
		void CalculateWhichRegionFromInt(int32_t WhichRegionInt, class UObject* __WorldContext, EAmazonRegions* isWhichRegion, class FText* Nice_Name);
		void GetCurrentBuild_ID(class UObject* __WorldContext, class FText* CurrentBuild);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
