#pragma once

/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Has_ModSkinDLC
	 */
	struct USIGIS_InventoryWidget_C_Has_ModSkinDLC_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Has_PreOderDLC
	 */
	struct USIGIS_InventoryWidget_C_Has_PreOderDLC_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Return_ActiveShip
	 */
	struct USIGIS_InventoryWidget_C_Return_ActiveShip_Params
	{
	public:
		class FName                                                ActiveShip;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PlayScrappingSound
	 */
	struct USIGIS_InventoryWidget_C_PlayScrappingSound_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CoreMissionCompleted
	 */
	struct USIGIS_InventoryWidget_C_Analytics_CoreMissionCompleted_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ItemScrapped
	 */
	struct USIGIS_InventoryWidget_C_Analytics_ItemScrapped_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShowHideCoreMission_ShipRewardActor
	 */
	struct USIGIS_InventoryWidget_C_ShowHideCoreMission_ShipRewardActor_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMission_GetCurrentMissionID
	 */
	struct USIGIS_InventoryWidget_C_CoreMission_GetCurrentMissionID_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AllowInputThroughForRotations
	 */
	struct USIGIS_InventoryWidget_C_AllowInputThroughForRotations_Params
	{
	public:
		bool                                                       AllowInputThrough;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.DailyMission_ActiveMissionsSetup
	 */
	struct USIGIS_InventoryWidget_C_DailyMission_ActiveMissionsSetup_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMission_UpdateInLevelActor
	 */
	struct USIGIS_InventoryWidget_C_CoreMission_UpdateInLevelActor_Params
	{
	public:
		struct FChapterMissionUI                                   NewParam;                                                // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FMenuPlayerLook                                     PlayersActualLook;                                       // 0x0138(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissions_CurrentMissionState
	 */
	struct USIGIS_InventoryWidget_C_CoreMissions_CurrentMissionState_Params
	{
	public:
		E_CoreMissionStates                                        SelectedCurrentState;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TO6G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissions_MissionsSelectedLook
	 */
	struct USIGIS_InventoryWidget_C_CoreMissions_MissionsSelectedLook_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapItem_CanPlaceHere
	 */
	struct USIGIS_InventoryWidget_C_ScrapItem_CanPlaceHere_Params
	{
	public:
		bool                                                       isAbleToScrapItem;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapItem_ResultVisuals
	 */
	struct USIGIS_InventoryWidget_C_ScrapItem_ResultVisuals_Params
	{
	public:
		E_ScrapOutcomes                                            Scrapoutcomes;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Repair_RefreshInfo
	 */
	struct USIGIS_InventoryWidget_C_Repair_RefreshInfo_Params
	{
	public:
		bool                                                       ClearInfo;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShipMod_DETACH_JUICE
	 */
	struct USIGIS_InventoryWidget_C_ShipMod_DETACH_JUICE_Params
	{
	public:
		EShipAttachmentSlot                                        ShipModType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79MN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ShipItemDataName;                                        // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetActiveShipSelectSound
	 */
	struct USIGIS_InventoryWidget_C_SetActiveShipSelectSound_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Prestige_CloseUnlocksWidget
	 */
	struct USIGIS_InventoryWidget_C_Prestige_CloseUnlocksWidget_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Prestige_ShowPossibleUnlocksWidget
	 */
	struct USIGIS_InventoryWidget_C_Prestige_ShowPossibleUnlocksWidget_Params
	{
	public:
		EPrestiagueUnlockType                                      WhichPrestigeUnlocks;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOY9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PrestigePopup
	 */
	struct USIGIS_InventoryWidget_C_PrestigePopup_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Missions_UpdateActiveMissions
	 */
	struct USIGIS_InventoryWidget_C_Missions_UpdateActiveMissions_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Mission_UpdateFactionInfo
	 */
	struct USIGIS_InventoryWidget_C_Mission_UpdateFactionInfo_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetEquippedVoiceBtnSelectedLook
	 */
	struct USIGIS_InventoryWidget_C_SetEquippedVoiceBtnSelectedLook_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ShipScraped
	 */
	struct USIGIS_InventoryWidget_C_Analytics_ShipScraped_Params
	{
	public:
		class FName                                                WhichShip;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FillEquipShipStashInfo
	 */
	struct USIGIS_InventoryWidget_C_FillEquipShipStashInfo_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BlockShipStashElements
	 */
	struct USIGIS_InventoryWidget_C_BlockShipStashElements_Params
	{
	public:
		bool                                                       ShouldBlock;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CheckSpecificStat_Amount
	 */
	struct USIGIS_InventoryWidget_C_CheckSpecificStat_Amount_Params
	{
	public:
		class FString                                              WhichStat;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    StatAmount;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CalculateSoloPlayerActiveShipForAnalytics
	 */
	struct USIGIS_InventoryWidget_C_CalculateSoloPlayerActiveShipForAnalytics_Params
	{
	public:
		class FName                                                NiceShipName;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CosmeticUnlocked
	 */
	struct USIGIS_InventoryWidget_C_Analytics_CosmeticUnlocked_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_CraftItemUnlocked
	 */
	struct USIGIS_InventoryWidget_C_Analytics_CraftItemUnlocked_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Analytics_ItemCrafted
	 */
	struct USIGIS_InventoryWidget_C_Analytics_ItemCrafted_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SetCosmeticBtn_SelectedLook
	 */
	struct USIGIS_InventoryWidget_C_SetCosmeticBtn_SelectedLook_Params
	{
	public:
		bool                                                       ResetToCharActual;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPM5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.TurnPlayerLookIntoStringAndAddToMemberAttributes
	 */
	struct USIGIS_InventoryWidget_C_TurnPlayerLookIntoStringAndAddToMemberAttributes_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CosmeticWorkOutCantUnlockReason
	 */
	struct USIGIS_InventoryWidget_C_CosmeticWorkOutCantUnlockReason_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CheckOnly;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.isThisCosmeticUnlocked
	 */
	struct USIGIS_InventoryWidget_C_isThisCosmeticUnlocked_Params
	{
	public:
		class FName                                                ThisCosmeticItem;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isCosmeticUnlocked;                                      // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceInfo_LockedFillIn
	 */
	struct USIGIS_InventoryWidget_C_AppearanceInfo_LockedFillIn_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06XC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                DT_SelectedAppearanceItem;                               // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ClothingType;                                            // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FUAL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearances_CheckUnlocks
	 */
	struct USIGIS_InventoryWidget_C_Appearances_CheckUnlocks_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GetAndSetup_AppearanceRows
	 */
	struct USIGIS_InventoryWidget_C_GetAndSetup_AppearanceRows_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_AppearancePartFilers_TabsVisuals
	 */
	struct USIGIS_InventoryWidget_C_Set_AppearancePartFilers_TabsVisuals_Params
	{
	public:
		ECosmeticSlot                                              Current_ApperBodyPart;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YIQK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Setup_AppearancePartFilters
	 */
	struct USIGIS_InventoryWidget_C_Setup_AppearancePartFilters_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_EquipmentState
	 */
	struct USIGIS_InventoryWidget_C_Switch_EquipmentState_Params
	{
	public:
		E_InvEquipmentStates                                       Current_InvEquipmentState;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_GearCustomise_TabsVisuals
	 */
	struct USIGIS_InventoryWidget_C_Set_GearCustomise_TabsVisuals_Params
	{
	public:
		E_InvEquipmentStates                                       WhichMenu;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QAKS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_RecipeTabsVisuals
	 */
	struct USIGIS_InventoryWidget_C_Set_RecipeTabsVisuals_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Setup_RecipeTabs
	 */
	struct USIGIS_InventoryWidget_C_Setup_RecipeTabs_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FillRecipeListByType
	 */
	struct USIGIS_InventoryWidget_C_FillRecipeListByType_Params
	{
	public:
		class FString                                              TypeAsString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       GoToSpecificRecipe;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z6YA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RecipeID;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DoNotPlayAnimation;                                      // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ForceRefresh;                                            // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OQZP[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_SetShopkeeperInfo
	 */
	struct USIGIS_InventoryWidget_C_Shop_SetShopkeeperInfo_Params
	{
	public:
		int32_t                                                    WhichShopKeep;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SBZG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.IsMatchmakingLockGear
	 */
	struct USIGIS_InventoryWidget_C_IsMatchmakingLockGear_Params
	{
	public:
		bool                                                       LockGearScreen;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R4CX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShipMod_AttachJuice
	 */
	struct USIGIS_InventoryWidget_C_ShipMod_AttachJuice_Params
	{
	public:
		EShipAttachmentSlot                                        WhichAttachment;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZ29[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                AttachmentItemDataName;                                  // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XPTM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_IslookingAtAttachment
	 */
	struct USIGIS_InventoryWidget_C_Ship_IslookingAtAttachment_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CW39[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemName;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshAllStats
	 */
	struct USIGIS_InventoryWidget_C_Ship_RefreshAllStats_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_EnterHangarMenuRefresh
	 */
	struct USIGIS_InventoryWidget_C_Ship_EnterHangarMenuRefresh_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshAttachmentDetails
	 */
	struct USIGIS_InventoryWidget_C_Ship_RefreshAttachmentDetails_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TLBN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                EquippedShipAttachmentName;                              // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q9ST[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_FillAttachmentListForCurrentShip
	 */
	struct USIGIS_InventoryWidget_C_Ship_FillAttachmentListForCurrentShip_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_WhichMenusToShow
	 */
	struct USIGIS_InventoryWidget_C_Ship_WhichMenusToShow_Params
	{
	public:
		E_Ship_MenuState                                           WhichMenuState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshSlotSubWidgetInfo
	 */
	struct USIGIS_InventoryWidget_C_Ship_RefreshSlotSubWidgetInfo_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SetupShipAttachmentSlots
	 */
	struct USIGIS_InventoryWidget_C_Ship_SetupShipAttachmentSlots_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SetWhichModulesCanUse
	 */
	struct USIGIS_InventoryWidget_C_Ship_SetWhichModulesCanUse_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshCurrentShipDetails
	 */
	struct USIGIS_InventoryWidget_C_Ship_RefreshCurrentShipDetails_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_FirstOpenShipMenu
	 */
	struct USIGIS_InventoryWidget_C_Ship_FirstOpenShipMenu_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshAllStats
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_RefreshAllStats_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_ShowHideTheExtraStatsbars
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_ShowHideTheExtraStatsbars_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L101[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_CheckAttachSlotsifThingEquipped
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_CheckAttachSlotsifThingEquipped_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_DETACH_JUICE
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_DETACH_JUICE_Params
	{
	public:
		EAttachmentSlot                                            WhichAttachment;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2H1N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                AttachmentItemDataName;                                  // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachJuice
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_AttachJuice_Params
	{
	public:
		EAttachmentSlot                                            WhichAttachment;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9MX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                AttachmentItemDataName;                                  // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SwitchMenuState
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_SwitchMenuState_Params
	{
	public:
		E_WpnWB_MenuState                                          ToWhichState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshSelectedAttachmentInfo
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_RefreshSelectedAttachmentInfo_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Show;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1ZD2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Wpn WB Fill Attachment List
	 */
	struct USIGIS_InventoryWidget_C_Wpn_WB_Fill_Attachment_List_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetSelectedAttachment
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_SetSelectedAttachment_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SwitchToAttachmentCamera
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_SwitchToAttachmentCamera_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetupAttachmentSlots
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_SetupAttachmentSlots_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetWhichModulesCanEffect
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_SetWhichModulesCanEffect_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Set_WeaponIntialTransform
	 */
	struct USIGIS_InventoryWidget_C_Set_WeaponIntialTransform_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RefreshSelectedWpnStats
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_RefreshSelectedWpnStats_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_SetSelectedWpnButtonLook
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_SetSelectedWpnButtonLook_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWorkbench_FillWpnList
	 */
	struct USIGIS_InventoryWidget_C_WpnWorkbench_FillWpnList_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Warning_ShopNotEnoughSpace
	 */
	struct USIGIS_InventoryWidget_C_Warning_ShopNotEnoughSpace_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShopRestockTimePrettyUp
	 */
	struct USIGIS_InventoryWidget_C_ShopRestockTimePrettyUp_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WhichWidgetisActive
	 */
	struct USIGIS_InventoryWidget_C_WhichWidgetisActive_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RefreshShipSubwigetInfo
	 */
	struct USIGIS_InventoryWidget_C_Ship_RefreshShipSubwigetInfo_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SwitchToShip
	 */
	struct USIGIS_InventoryWidget_C_SwitchToShip_Params
	{
	public:
		class FName                                                ShipDTname;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FrigID;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ShipsName;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsStarterShip;                                           // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_Refresh_ShipList
	 */
	struct USIGIS_InventoryWidget_C_Ship_Refresh_ShipList_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_ShipTabLook
	 */
	struct USIGIS_InventoryWidget_C_Switch_ShipTabLook_Params
	{
	public:
		E_ShipStates                                               ShipStates;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1MZ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_SwitchShipState
	 */
	struct USIGIS_InventoryWidget_C_Ship_SwitchShipState_Params
	{
	public:
		E_ShipStates                                               Current_ShipState;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_PlayerSellAreaHighlight
	 */
	struct USIGIS_InventoryWidget_C_Shop_PlayerSellAreaHighlight_Params
	{
	public:
		bool                                                       Turn_on;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_ShopkeepSellAreaHighlight
	 */
	struct USIGIS_InventoryWidget_C_Shop_ShopkeepSellAreaHighlight_Params
	{
	public:
		bool                                                       Turn_on;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShowMoneyOnItems
	 */
	struct USIGIS_InventoryWidget_C_ShowMoneyOnItems_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TWNC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipeSwitched
	 */
	struct USIGIS_InventoryWidget_C_CraftRecipeSwitched_Params
	{
	public:
		bool                                                       isUnlocked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ODN5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                RecipeName;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FName                                                DataTableName;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Recipe_DT_Name;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            ReqSkills;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_TabLook
	 */
	struct USIGIS_InventoryWidget_C_Switch_TabLook_Params
	{
	public:
		EInventoryState                                            SwitchToInvent;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DoNotPlaySound;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PYIB[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Switch_InventoryState
	 */
	struct USIGIS_InventoryWidget_C_Switch_InventoryState_Params
	{
	public:
		EInventoryState                                            Current_InventMenu;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoNotPlaySound;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Get_TraderGoldAmount_Text_1
	 */
	struct USIGIS_InventoryWidget_C_Get_TraderGoldAmount_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Get_MyGoldAmount_Text_1
	 */
	struct USIGIS_InventoryWidget_C_Get_MyGoldAmount_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnLoaded_D3DFC0B44A0E49307B48988B08E6BDA1
	 */
	struct USIGIS_InventoryWidget_C_OnLoaded_D3DFC0B44A0E49307B48988B08E6BDA1_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnLoaded_2A5A2332495D93AE3BF9BA9C8C93975A
	 */
	struct USIGIS_InventoryWidget_C_OnLoaded_2A5A2332495D93AE3BF9BA9C8C93975A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Construct
	 */
	struct USIGIS_InventoryWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__EQUIPBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__EQUIPBTN_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SHOPBTN_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SHOPBTN_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CRAFTBTN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__CRAFTBTN_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__HANGERBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__HANGERBTN_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SKILLTREEBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SKILLTREEBTN_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.InventoryOpened
	 */
	struct USIGIS_InventoryWidget_C_InventoryOpened_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftMenuOpened
	 */
	struct USIGIS_InventoryWidget_C_CraftMenuOpened_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_Ship_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_Ship_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipCustomise_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_ShipCustomise_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__BACKBTN_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__BACKBTN_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartMainMenuEvent
	 */
	struct USIGIS_InventoryWidget_C_StartMainMenuEvent_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Button_170_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Button_170_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Tick
	 */
	struct USIGIS_InventoryWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FadeHudBackIn
	 */
	struct USIGIS_InventoryWidget_C_FadeHudBackIn_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshCraftingQue
	 */
	struct USIGIS_InventoryWidget_C_RefreshCraftingQue_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CantCraftEvent
	 */
	struct USIGIS_InventoryWidget_C_CantCraftEvent_Params
	{
	public:
		ERecipeFail                                                Reason;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipLeft_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_ShipLeft_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_ShipRight_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_ShipRight_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__WeaponWorkbenchBTN_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__WeaponWorkbenchBTN_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Wpn_Workbench_Opened
	 */
	struct USIGIS_InventoryWidget_C_Wpn_Workbench_Opened_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshWeaponActor
	 */
	struct USIGIS_InventoryWidget_C_RefreshWeaponActor_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshWeaponModuleActor
	 */
	struct USIGIS_InventoryWidget_C_RefreshWeaponModuleActor_Params
	{
	public:
		EAttachmentSlot                                            SlotIn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachmentSlotPressed
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_AttachmentSlotPressed_Params
	{
	public:
		EAttachmentSlot                                            AttachmentPressed;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_AttachmentItemPressed
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_AttachmentItemPressed_Params
	{
	public:
		class ASIGISInventoryItem*                                 WpnObjectRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                WeaponDTName;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EAttachmentSlot                                            WhichAttachSlotFor;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WorkbenchWeaponHasBeenSwitched
	 */
	struct USIGIS_InventoryWidget_C_WorkbenchWeaponHasBeenSwitched_Params
	{
	public:
		class ASIGISInventoryItem*                                 WpnObjectRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                WeaponDTName;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SelectedInt;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RemoveAttachmentItem
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_RemoveAttachmentItem_Params
	{
	public:
		EAttachmentSlot                                            WhichAttachment;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_AttachmentsGoBack_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_AttachmentsGoBack_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Hangar_Menu_Opened
	 */
	struct USIGIS_InventoryWidget_C_Hangar_Menu_Opened_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Hangar_ShipHasBeenSwitched
	 */
	struct USIGIS_InventoryWidget_C_Hangar_ShipHasBeenSwitched_Params
	{
	public:
		class ASIGISInventoryItem*                                 ShipObjectRef;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ShipDTname;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FrigID;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ShipName;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsStarterShip;                                           // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_AttachmentSlotPressed
	 */
	struct USIGIS_InventoryWidget_C_Ship_AttachmentSlotPressed_Params
	{
	public:
		EShipAttachmentSlot                                        WhichShipSlot;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_AttachmentItemPressed
	 */
	struct USIGIS_InventoryWidget_C_Ship_AttachmentItemPressed_Params
	{
	public:
		class ASIGISInventoryItem*                                 FromWhichSlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ItemDTrowName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EShipAttachmentSlot                                        WhichAttachSlotFor;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Ship_RemoveAttachmentItemPressed
	 */
	struct USIGIS_InventoryWidget_C_Ship_RemoveAttachmentItemPressed_Params
	{
	public:
		EShipAttachmentSlot                                        FromWhichSlot;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshFrigateActor
	 */
	struct USIGIS_InventoryWidget_C_RefreshFrigateActor_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshFrigateModuleActor
	 */
	struct USIGIS_InventoryWidget_C_RefreshFrigateModuleActor_Params
	{
	public:
		EShipAttachmentSlot                                        SlotIn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SoldItem
	 */
	struct USIGIS_InventoryWidget_C_SoldItem_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.SuccessfulBoughtItem
	 */
	struct USIGIS_InventoryWidget_C_SuccessfulBoughtItem_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.NotEnoughMoney
	 */
	struct USIGIS_InventoryWidget_C_NotEnoughMoney_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WeaponWorkBenchRightClickPressed
	 */
	struct USIGIS_InventoryWidget_C_WeaponWorkBenchRightClickPressed_Params
	{
	public:
		class FString                                              ItemUUID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_WpnAttachRemove
	 */
	struct USIGIS_InventoryWidget_C_Force_WpnAttachRemove_Params
	{
	public:
		EAttachmentSlot                                            RemoveWhichAttach;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_5_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_GoBack_Shipattachments_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericSmallBtn01_GoBack_Shipattachments_K2Node_ComponentBoundEvent_17_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericSmallBtn01_2_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericSmallBtn01_2_K2Node_ComponentBoundEvent_18_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Shop_Menu_Opened
	 */
	struct USIGIS_InventoryWidget_C_Shop_Menu_Opened_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Craft_TabFilterPressed
	 */
	struct USIGIS_InventoryWidget_C_Craft_TabFilterPressed_Params
	{
	public:
		class FString                                              FilterWhichType;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_20_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_20_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipeUnlockRequirment_SoftLoad
	 */
	struct USIGIS_InventoryWidget_C_CraftRecipeUnlockRequirment_SoftLoad_Params
	{
	public:
		class USkillGenericIcon_Widget_C*                          WidgetToFillIn;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftRecipe_GoToReqSkill
	 */
	struct USIGIS_InventoryWidget_C_CraftRecipe_GoToReqSkill_Params
	{
	public:
		class FString                                              CraftType;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Recipe_ID;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__CreateRecipe_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftingWidgetpressed
	 */
	struct USIGIS_InventoryWidget_C_CraftingWidgetpressed_Params
	{
	public:
		class UCraftingWidget*                                     ActiveWid;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RecipeUnlocked_Popup
	 */
	struct USIGIS_InventoryWidget_C_RecipeUnlocked_Popup_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericTabBtn01_K2Node_ComponentBoundEvent_25_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericTabBtn01_K2Node_ComponentBoundEvent_25_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericTabBtn01_56_K2Node_ComponentBoundEvent_26_ButtonHasBeenPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericTabBtn01_56_K2Node_ComponentBoundEvent_26_ButtonHasBeenPressed__DelegateSignature_Params
	{
	public:
		class FString                                              WhatPressed;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceSetEquip_AppreaanceChange
	 */
	struct USIGIS_InventoryWidget_C_ForceSetEquip_AppreaanceChange_Params
	{
	public:
		E_InvEquipmentStates                                       Current_InvEquipmentState;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearance_FilterHasChanged
	 */
	struct USIGIS_InventoryWidget_C_Appearance_FilterHasChanged_Params
	{
	public:
		ECosmeticSlot                                              WhichBodyPart;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OpenTheGiftMenu
	 */
	struct USIGIS_InventoryWidget_C_OpenTheGiftMenu_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshMenuPlayerActor
	 */
	struct USIGIS_InventoryWidget_C_RefreshMenuPlayerActor_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_RefreshPlayerLook
	 */
	struct USIGIS_InventoryWidget_C_Force_RefreshPlayerLook_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_TempGiftGive_K2Node_ComponentBoundEvent_23_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OnItemBPLoaded
	 */
	struct USIGIS_InventoryWidget_C_OnItemBPLoaded_Params
	{
	public:
		class AActor*                                              ActorLoaded;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_TempGiftGive_1_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceBtnPressed
	 */
	struct USIGIS_InventoryWidget_C_AppearanceBtnPressed_Params
	{
	public:
		class FName                                                Part_DataTableName;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                DT_ClothingSetUIName;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_TempGiftGive_2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_TempGiftGive_2_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__MM_GenericLargeBtn01_1_K2Node_ComponentBoundEvent_31_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__MM_GenericLargeBtn01_1_K2Node_ComponentBoundEvent_31_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.LobbyHasBeenCreatedOrJoined_SendPlayersCharLook
	 */
	struct USIGIS_InventoryWidget_C_LobbyHasBeenCreatedOrJoined_SendPlayersCharLook_Params
	{
	public:
		bool                                                       CrewUpdate;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.AppearanceMenu_OPENED
	 */
	struct USIGIS_InventoryWidget_C_AppearanceMenu_OPENED_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FORCE_AppearanceMeunuRefresh
	 */
	struct USIGIS_InventoryWidget_C_FORCE_AppearanceMeunuRefresh_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GetStatInfoReturn
	 */
	struct USIGIS_InventoryWidget_C_GetStatInfoReturn_Params
	{
	public:
		bool                                                       validstats;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceStatsToUpdate
	 */
	struct USIGIS_InventoryWidget_C_ForceStatsToUpdate_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__Btn_DevChangeShopKeep_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__Btn_DevChangeShopKeep_K2Node_ComponentBoundEvent_32_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ShopkeeperHasBeenRefreshed
	 */
	struct USIGIS_InventoryWidget_C_ShopkeeperHasBeenRefreshed_Params
	{
	public:
		int32_t                                                    ToWhichShopkeepID;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_115_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_115_K2Node_ComponentBoundEvent_33_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OverFrigateCapacity
	 */
	struct USIGIS_InventoryWidget_C_OverFrigateCapacity_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.DeleteAShip
	 */
	struct USIGIS_InventoryWidget_C_DeleteAShip_Params
	{
	public:
		class FName                                                ShipDataTableName;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ToDelete_FrigID;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    MoneyToGive;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ClosedShipManagementMenu
	 */
	struct USIGIS_InventoryWidget_C_ClosedShipManagementMenu_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Check_IFHaveTooManyShips
	 */
	struct USIGIS_InventoryWidget_C_Check_IFHaveTooManyShips_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.JoinedCrewHideShipStash
	 */
	struct USIGIS_InventoryWidget_C_JoinedCrewHideShipStash_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.LeftCrewShowShipStash
	 */
	struct USIGIS_InventoryWidget_C_LeftCrewShowShipStash_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Appearance_VoiceBtnPressed
	 */
	struct USIGIS_InventoryWidget_C_Appearance_VoiceBtnPressed_Params
	{
	public:
		class FName                                                VoiceDTname;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.FORCE_WorkbenchRefresh
	 */
	struct USIGIS_InventoryWidget_C_FORCE_WorkbenchRefresh_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Missions_OPENED
	 */
	struct USIGIS_InventoryWidget_C_Missions_OPENED_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartedAContract
	 */
	struct USIGIS_InventoryWidget_C_StartedAContract_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CollectedAContract
	 */
	struct USIGIS_InventoryWidget_C_CollectedAContract_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.UpDateFactionsAndContracts
	 */
	struct USIGIS_InventoryWidget_C_UpDateFactionsAndContracts_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugIncrementMission_K2Node_ComponentBoundEvent_34_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugClearMissions_K2Node_ComponentBoundEvent_35_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.RefreshAllMissionMenu
	 */
	struct USIGIS_InventoryWidget_C_RefreshAllMissionMenu_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugStartMission_2_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ContractResetTimer
	 */
	struct USIGIS_InventoryWidget_C_ContractResetTimer_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_StashIncrease_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_StashIncrease_K2Node_ComponentBoundEvent_37_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_ShipsPrestigeUnlocks_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericSmallBtn01_ShipsPrestigeUnlocks_K2Node_ComponentBoundEvent_40_GenericSmallBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_PayToGetNewContracts_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_PayToGetNewContracts_K2Node_ComponentBoundEvent_38_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.GoingBackToPlayMenu
	 */
	struct USIGIS_InventoryWidget_C_GoingBackToPlayMenu_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ScrapBtn_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_RepairBtn_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_ColourBtn_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ScrapAttemptResult
	 */
	struct USIGIS_InventoryWidget_C_ScrapAttemptResult_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SuccessFull;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.Force_HidePotentialScrapInfo
	 */
	struct USIGIS_InventoryWidget_C_Force_HidePotentialScrapInfo_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ItemDragBegin
	 */
	struct USIGIS_InventoryWidget_C_ItemDragBegin_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ItemDragEnd
	 */
	struct USIGIS_InventoryWidget_C_ItemDragEnd_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionsOpened
	 */
	struct USIGIS_InventoryWidget_C_CoreMissionsOpened_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.UpdateChapterAndContracts
	 */
	struct USIGIS_InventoryWidget_C_UpdateChapterAndContracts_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.StartedAChapterContract
	 */
	struct USIGIS_InventoryWidget_C_StartedAChapterContract_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CollectedChapterContract
	 */
	struct USIGIS_InventoryWidget_C_CollectedChapterContract_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionButtonPressed
	 */
	struct USIGIS_InventoryWidget_C_CoreMissionButtonPressed_Params
	{
	public:
		struct FChapterMissionUI                                   PressedMissionInfo;                                      // 0x0000(0x0138)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShouldPlaySound;                                         // 0x0138(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_K2Node_ComponentBoundEvent_41_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_1_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_CoreMissionComplete_1_K2Node_ComponentBoundEvent_42_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_ForceNextMission_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_ForceNextMission_K2Node_ComponentBoundEvent_43_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_AddProgress_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Btn_DebugCoreMission_AddProgress_K2Node_ComponentBoundEvent_44_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CoreMissionRefresh
	 */
	struct USIGIS_InventoryWidget_C_CoreMissionRefresh_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_Button_640_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_Button_640_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.OpenFullDailyMissions
	 */
	struct USIGIS_InventoryWidget_C_OpenFullDailyMissions_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.BndEvt__SIGIS_InventoryWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_46_GenericLargeBtn_Pressed__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_BndEvt__SIGIS_InventoryWidget_MM_GenericLargeBtn01_K2Node_ComponentBoundEvent_46_GenericLargeBtn_Pressed__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.PlaySoftRef_2DSound
	 */
	struct USIGIS_InventoryWidget_C_PlaySoftRef_2DSound_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CheckIfHaveDLC
	 */
	struct USIGIS_InventoryWidget_C_CheckIfHaveDLC_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.WpnWB_RightClickMenuOpened
	 */
	struct USIGIS_InventoryWidget_C_WpnWB_RightClickMenuOpened_Params
	{
	public:
		class FString                                              WpnUIID;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ExecuteUbergraph_SIGIS_InventoryWidget
	 */
	struct USIGIS_InventoryWidget_C_ExecuteUbergraph_SIGIS_InventoryWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_32E2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_StartedAContract__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_ED_StartedAContract__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_CollectedAContract__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_ED_CollectedAContract__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ED_UpdateFactionsAndContracts__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_ED_UpdateFactionsAndContracts__DelegateSignature_Params
	{	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.ForceAMM_TabsChange__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_ForceAMM_TabsChange__DelegateSignature_Params
	{
	public:
		EMenuState                                                 ForceToWhichMenu;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.CraftQue_IsSomethingReadyToCollect__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_CraftQue_IsSomethingReadyToCollect__DelegateSignature_Params
	{
	public:
		bool                                                       ReadyToCollect;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_InventoryWidget.SIGIS_InventoryWidget_C.MoneyHasChanged__DelegateSignature
	 */
	struct USIGIS_InventoryWidget_C_MoneyHasChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
