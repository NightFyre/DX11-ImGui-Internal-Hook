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
	 * Function SIGISPlugin.AdminWidget.UserListReturned
	 */
	struct UAdminWidget_UserListReturned_Params
	{	};

	/**
	 * Function SIGISPlugin.AdminWidget.UserInfoReturned
	 */
	struct UAdminWidget_UserInfoReturned_Params
	{
	public:
		struct FUserInfo                                           UserInfoFetched;                                         // 0x0000(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.OnLogIn
	 */
	struct UAdminWidget_OnLogIn_Params
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.LoginSucces
	 */
	struct UAdminWidget_LoginSucces_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.LoginReturned
	 */
	struct UAdminWidget_LoginReturned_Params
	{
	public:
		bool                                                       SuccessLogin;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.GiveSkillsToPlayer
	 */
	struct UAdminWidget_GiveSkillsToPlayer_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Skills;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.GiveGiftsToPlayer
	 */
	struct UAdminWidget_GiveGiftsToPlayer_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      GiftNames;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.GiveCosmeticsToPlayer
	 */
	struct UAdminWidget_GiveCosmeticsToPlayer_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      Cosmetics;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.GetUsersFetched
	 */
	struct UAdminWidget_GetUsersFetched_Params
	{
	public:
		TArray<struct FUserList>                                   ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_WipeUser
	 */
	struct UAdminWidget_Admin_WipeUser_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_WipeAllUsers
	 */
	struct UAdminWidget_Admin_WipeAllUsers_Params
	{	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_SetUserXP
	 */
	struct UAdminWidget_Admin_SetUserXP_Params
	{
	public:
		int32_t                                                    AmountXP;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QF4Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              userId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_SetUserPrestege
	 */
	struct UAdminWidget_Admin_SetUserPrestege_Params
	{
	public:
		int32_t                                                    AmountPres;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VF2R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              userId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_SetUserPoints
	 */
	struct UAdminWidget_Admin_SetUserPoints_Params
	{
	public:
		int32_t                                                    AmountPoints;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C8KK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              userId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_SetUserCash
	 */
	struct UAdminWidget_Admin_SetUserCash_Params
	{
	public:
		int32_t                                                    AmountCash;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A4KN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              userId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_GetUsersInfo
	 */
	struct UAdminWidget_Admin_GetUsersInfo_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_GetAllUsers
	 */
	struct UAdminWidget_Admin_GetAllUsers_Params
	{	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_EditItemToPlayer
	 */
	struct UAdminWidget_Admin_EditItemToPlayer_Params
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Properties;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Equipped;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_DeleteItemToPlayer
	 */
	struct UAdminWidget_Admin_DeleteItemToPlayer_Params
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AdminWidget.Admin_AddItemToPlayer
	 */
	struct UAdminWidget_Admin_AddItemToPlayer_Params
	{
	public:
		class FString                                              username;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Properties;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Equipped;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AttachmentSlotWidget.OnEndItemDrag
	 */
	struct UAttachmentSlotWidget_OnEndItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.AttachmentSlotWidget.OnBeginItemDrag
	 */
	struct UAttachmentSlotWidget_OnBeginItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingSlotWidget.OnEndItemDrag
	 */
	struct UCraftingSlotWidget_OnEndItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingSlotWidget.OnBeginItemDrag
	 */
	struct UCraftingSlotWidget_OnBeginItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingSlotWidget.ItemRemovedFromSlot
	 */
	struct UCraftingSlotWidget_ItemRemovedFromSlot_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingSlotWidget.ItemAddedToSlot
	 */
	struct UCraftingSlotWidget_ItemAddedToSlot_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingSlotWidget.IsSlotAbleToCraft
	 */
	struct UCraftingSlotWidget_IsSlotAbleToCraft_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingSlotWidget.ChangeBg
	 */
	struct UCraftingSlotWidget_ChangeBg_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.UnlockSkill
	 */
	struct UCraftingWidget_UnlockSkill_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.UnlockedRecipe
	 */
	struct UCraftingWidget_UnlockedRecipe_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.OnActiveBtnPressed
	 */
	struct UCraftingWidget_OnActiveBtnPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.IsRecipeUnlocked
	 */
	struct UCraftingWidget_IsRecipeUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingWidget.GetRoeHandle
	 */
	struct UCraftingWidget_GetRoeHandle_Params
	{
	public:
		struct FDataTableRowHandle                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingWidget.GetRecipeIcon
	 */
	struct UCraftingWidget_GetRecipeIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingWidget.FinishedAssetLoad
	 */
	struct UCraftingWidget_FinishedAssetLoad_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.FakePress
	 */
	struct UCraftingWidget_FakePress_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.DeActiveRecipe
	 */
	struct UCraftingWidget_DeActiveRecipe_Params
	{	};

	/**
	 * Function SIGISPlugin.CraftingWidget.CanUnlock
	 */
	struct UCraftingWidget_CanUnlock_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.CraftingWidget.ActiveRecipe
	 */
	struct UCraftingWidget_ActiveRecipe_Params
	{	};

	/**
	 * Function SIGISPlugin.DragAndDropItemWidget.WidgetsNewSize
	 */
	struct UDragAndDropItemWidget_WidgetsNewSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DragAndDropItemWidget.StaticImageLoaded
	 */
	struct UDragAndDropItemWidget_StaticImageLoaded_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.WidgetsNewSize
	 */
	struct UDraggableItemWidget_WidgetsNewSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.UnlockWidget
	 */
	struct UDraggableItemWidget_UnlockWidget_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.UnHighLightWidget
	 */
	struct UDraggableItemWidget_UnHighLightWidget_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.StaticImageLoaded
	 */
	struct UDraggableItemWidget_StaticImageLoaded_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.StartWidgetBeingUnLocked
	 */
	struct UDraggableItemWidget_StartWidgetBeingUnLocked_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.StartDraggingEvent
	 */
	struct UDraggableItemWidget_StartDraggingEvent_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.OnItemIconChange
	 */
	struct UDraggableItemWidget_OnItemIconChange_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsShopOpen
	 */
	struct UDraggableItemWidget_IsShopOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsItemAKeyCard
	 */
	struct UDraggableItemWidget_IsItemAKeyCard_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsItemAbleToColour
	 */
	struct UDraggableItemWidget_IsItemAbleToColour_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsAWeapon
	 */
	struct UDraggableItemWidget_IsAWeapon_Params
	{
	public:
		EBulletType                                                AmmoType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsArmour
	 */
	struct UDraggableItemWidget_IsArmour_Params
	{
	public:
		int32_t                                                    DamageMitagtionAmount;                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsALootWidgetandNeedsLocked
	 */
	struct UDraggableItemWidget_IsALootWidgetandNeedsLocked_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsALootWidget
	 */
	struct UDraggableItemWidget_IsALootWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.IsAContainerRig
	 */
	struct UDraggableItemWidget_IsAContainerRig_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.HighLightWidget
	 */
	struct UDraggableItemWidget_HighLightWidget_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.HasDuribility
	 */
	struct UDraggableItemWidget_HasDuribility_Params
	{
	public:
		float                                                      Duribility;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxDuribility;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.GetStorageName
	 */
	struct UDraggableItemWidget_GetStorageName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.GetStackText
	 */
	struct UDraggableItemWidget_GetStackText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.GetKeyCardInfo
	 */
	struct UDraggableItemWidget_GetKeyCardInfo_Params
	{
	public:
		class FString                                              CaptainsName;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShipName;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShipType;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.GetItemType
	 */
	struct UDraggableItemWidget_GetItemType_Params
	{
	public:
		EItemType                                                  ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.EquipmentNewSize
	 */
	struct UDraggableItemWidget_EquipmentNewSize_Params
	{
	public:
		struct FVector2D                                           NewSize;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.EndDraggingEvent
	 */
	struct UDraggableItemWidget_EndDraggingEvent_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.EnableWidget
	 */
	struct UDraggableItemWidget_EnableWidget_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.DuribilityChanged
	 */
	struct UDraggableItemWidget_DuribilityChanged_Params
	{	};

	/**
	 * Function SIGISPlugin.DraggableItemWidget.DisableWidget
	 */
	struct UDraggableItemWidget_DisableWidget_Params
	{	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.SetOverDragArea
	 */
	struct UDragWindowWidget_SetOverDragArea_Params
	{
	public:
		bool                                                       OverArea;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.SetClickStarted
	 */
	struct UDragWindowWidget_SetClickStarted_Params
	{
	public:
		struct FVector2D                                           TouchedLoc;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ClickStarted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.OnDragBorderMouseDown
	 */
	struct UDragWindowWidget_OnDragBorderMouseDown_Params
	{	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.OnCloseButtonPressed
	 */
	struct UDragWindowWidget_OnCloseButtonPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.IsAScrapingWindow
	 */
	struct UDragWindowWidget_IsAScrapingWindow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.IsALootBoxWindow
	 */
	struct UDragWindowWidget_IsALootBoxWindow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.HasItemsLeftInScrap
	 */
	struct UDragWindowWidget_HasItemsLeftInScrap_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.DragWindowWidget.CloseScrapWindow
	 */
	struct UDragWindowWidget_CloseScrapWindow_Params
	{	};

	/**
	 * Function SIGISPlugin.EquipmentSlotWidget.OnEndItemDrag
	 */
	struct UEquipmentSlotWidget_OnEndItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.EquipmentSlotWidget.OnBeginItemDrag
	 */
	struct UEquipmentSlotWidget_OnBeginItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.UnblurBackground
	 */
	struct UInGameOverlayWidget_UnblurBackground_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.StopDragAndDropOperation
	 */
	struct UInGameOverlayWidget_StopDragAndDropOperation_Params
	{
	public:
		bool                                                       WasCanceled;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.StartDragAndDropOperation
	 */
	struct UInGameOverlayWidget_StartDragAndDropOperation_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.ShowTooltipAtLocation
	 */
	struct UInGameOverlayWidget_ShowTooltipAtLocation_Params
	{
	public:
		struct FVector2D                                           ScreenLocation;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSplitMenu;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0011(0x0002)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U6M2[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ToCon;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.ShowInventoryMenu
	 */
	struct UInGameOverlayWidget_ShowInventoryMenu_Params
	{
	public:
		ELootWindowState                                           LootWinState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonUnhovered
	 */
	struct UInGameOverlayWidget_OnDropItemScreenButtonUnhovered_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonPressed
	 */
	struct UInGameOverlayWidget_OnDropItemScreenButtonPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonHovered
	 */
	struct UInGameOverlayWidget_OnDropItemScreenButtonHovered_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.HideTooltip
	 */
	struct UInGameOverlayWidget_HideTooltip_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.HideInventoryMenu
	 */
	struct UInGameOverlayWidget_HideInventoryMenu_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.GetInventoryMenu
	 */
	struct UInGameOverlayWidget_GetInventoryMenu_Params
	{
	public:
		class UInventoryMenuWidget*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.DragItemStopped
	 */
	struct UInGameOverlayWidget_DragItemStopped_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.DragItemStarted
	 */
	struct UInGameOverlayWidget_DragItemStarted_Params
	{
	public:
		ESlotType                                                  DraggedFrom;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.CheckForItemDrop
	 */
	struct UInGameOverlayWidget_CheckForItemDrop_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.BlurBackground
	 */
	struct UInGameOverlayWidget_BlurBackground_Params
	{	};

	/**
	 * Function SIGISPlugin.InGameOverlayWidget.AreMenusOpen
	 */
	struct UInGameOverlayWidget_AreMenusOpen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryContainerWidget.RemoveItem
	 */
	struct UInventoryContainerWidget_RemoveItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  OriginGridSlot;                                          // 0x0008(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryContainerWidget.InitializeGrid
	 */
	struct UInventoryContainerWidget_InitializeGrid_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryContainerWidget.AddItem
	 */
	struct UInventoryContainerWidget_AddItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  OriginGridSlot;                                          // 0x0008(0x0002)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryGridSlotWidget.SetItem
	 */
	struct UInventoryGridSlotWidget_SetItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryGridSlotWidget.GetItem
	 */
	struct UInventoryGridSlotWidget_GetItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryGridSlotWidget.EndItemOverlap
	 */
	struct UInventoryGridSlotWidget_EndItemOverlap_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryGridSlotWidget.BeginItemOverlap
	 */
	struct UInventoryGridSlotWidget_BeginItemOverlap_Params
	{
	public:
		bool                                                       IsOverlapValid;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.WeaponWorkBenchRightClickPressed
	 */
	struct UInventoryMenuWidget_WeaponWorkBenchRightClickPressed_Params
	{
	public:
		class FString                                              ItemUUID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.UpDatePaperDoll
	 */
	struct UInventoryMenuWidget_UpDatePaperDoll_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.UpDateFactionsAndContracts
	 */
	struct UInventoryMenuWidget_UpDateFactionsAndContracts_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.UpdateChapterAndContracts
	 */
	struct UInventoryMenuWidget_UpdateChapterAndContracts_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.UnlockCosmetic
	 */
	struct UInventoryMenuWidget_UnlockCosmetic_Params
	{
	public:
		class FName                                                CosmeticToCheck;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.UnlockActiveRecipe
	 */
	struct UInventoryMenuWidget_UnlockActiveRecipe_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.SuccessfulBoughtItem
	 */
	struct UInventoryMenuWidget_SuccessfulBoughtItem_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.StringToAttachmentArray
	 */
	struct UInventoryMenuWidget_StringToAttachmentArray_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutArray;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.StartedAContract
	 */
	struct UInventoryMenuWidget_StartedAContract_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.StartedAChapterContract
	 */
	struct UInventoryMenuWidget_StartedAChapterContract_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.SoldItem
	 */
	struct UInventoryMenuWidget_SoldItem_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.SetRustbucketActive
	 */
	struct UInventoryMenuWidget_SetRustbucketActive_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.SetActiveWeapon
	 */
	struct UInventoryMenuWidget_SetActiveWeapon_Params
	{
	public:
		class ASIGISInventoryItem*                                 NewActiveWeapon;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.SetActiveFrigate
	 */
	struct UInventoryMenuWidget_SetActiveFrigate_Params
	{
	public:
		class ASIGISInventoryItem*                                 NewActiveFrigate;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.SelectShip
	 */
	struct UInventoryMenuWidget_SelectShip_Params
	{
	public:
		class FString                                              UFrigID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ReturnModToInventory
	 */
	struct UInventoryMenuWidget_ReturnModToInventory_Params
	{
	public:
		EAttachmentSlot                                            ModSlotOnWepaon;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ReturnFrigateModToInventory
	 */
	struct UInventoryMenuWidget_ReturnFrigateModToInventory_Params
	{
	public:
		EShipAttachmentSlot                                        ModSlotOnWepaon;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RemoveShip
	 */
	struct UInventoryMenuWidget_RemoveShip_Params
	{
	public:
		class FString                                              UFrigID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RefreshWeaponModuleActor
	 */
	struct UInventoryMenuWidget_RefreshWeaponModuleActor_Params
	{
	public:
		EAttachmentSlot                                            SlotIn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RefreshWeaponActor
	 */
	struct UInventoryMenuWidget_RefreshWeaponActor_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RefreshMenuPlayerActor
	 */
	struct UInventoryMenuWidget_RefreshMenuPlayerActor_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RefreshFrigateModuleActor
	 */
	struct UInventoryMenuWidget_RefreshFrigateModuleActor_Params
	{
	public:
		EShipAttachmentSlot                                        SlotIn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RefreshFrigateActor
	 */
	struct UInventoryMenuWidget_RefreshFrigateActor_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.RecipeChagedEvent
	 */
	struct UInventoryMenuWidget_RecipeChagedEvent_Params
	{
	public:
		struct FCraftingRecipeList                                 RecipeDetails;                                           // 0x0000(0x0100)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.PrePrefreshMenuPlayerActor
	 */
	struct UInventoryMenuWidget_PrePrefreshMenuPlayerActor_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.PlayerHealBodyHover
	 */
	struct UInventoryMenuWidget_PlayerHealBodyHover_Params
	{
	public:
		bool                                                       HoveredOver;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OverFrigateCapacity
	 */
	struct UInventoryMenuWidget_OverFrigateCapacity_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnWorkBenchBTNPressed
	 */
	struct UInventoryMenuWidget_OnWorkBenchBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnSKILLTREEBTNPressed
	 */
	struct UInventoryMenuWidget_OnSKILLTREEBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnSHOPBTNPressed
	 */
	struct UInventoryMenuWidget_OnSHOPBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnItemBPLoaded
	 */
	struct UInventoryMenuWidget_OnItemBPLoaded_Params
	{
	public:
		class AActor*                                              ActorLoaded;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnHANGERBTNPressed
	 */
	struct UInventoryMenuWidget_OnHANGERBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnGIFTBTNPressed
	 */
	struct UInventoryMenuWidget_OnGIFTBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnEQUIPBTNPressed
	 */
	struct UInventoryMenuWidget_OnEQUIPBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnDealBtnPressed
	 */
	struct UInventoryMenuWidget_OnDealBtnPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnCreateRecipePressed
	 */
	struct UInventoryMenuWidget_OnCreateRecipePressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnCRAFTBTNPressed
	 */
	struct UInventoryMenuWidget_OnCRAFTBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.OnBACKBTNPressed
	 */
	struct UInventoryMenuWidget_OnBACKBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.NotEnoughMoney
	 */
	struct UInventoryMenuWidget_NotEnoughMoney_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.MenuOpenStateChange
	 */
	struct UInventoryMenuWidget_MenuOpenStateChange_Params
	{
	public:
		ELootWindowState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.LeftCrewShowShipStash
	 */
	struct UInventoryMenuWidget_LeftCrewShowShipStash_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.JoinedCrewHideShipStash
	 */
	struct UInventoryMenuWidget_JoinedCrewHideShipStash_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ItemBPLoaded
	 */
	struct UInventoryMenuWidget_ItemBPLoaded_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.IsCurrentlyCrafting
	 */
	struct UInventoryMenuWidget_IsCurrentlyCrafting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.InventoryStateChange
	 */
	struct UInventoryMenuWidget_InventoryStateChange_Params
	{
	public:
		EInventoryState                                            NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.HasPendingGifts
	 */
	struct UInventoryMenuWidget_HasPendingGifts_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GiveTestStat
	 */
	struct UInventoryMenuWidget_GiveTestStat_Params
	{
	public:
		TArray<struct FPlayerStat>                                 ToGive;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GiveDebugGift
	 */
	struct UInventoryMenuWidget_GiveDebugGift_Params
	{
	public:
		TArray<class FString>                                      ItemRowNames;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GiftsMenuClosed
	 */
	struct UInventoryMenuWidget_GiftsMenuClosed_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetWeaponStats
	 */
	struct UInventoryMenuWidget_GetWeaponStats_Params
	{
	public:
		struct FWeaponStats                                        ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetUnlockedCosmetics
	 */
	struct UInventoryMenuWidget_GetUnlockedCosmetics_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetTraderMoney
	 */
	struct UInventoryMenuWidget_GetTraderMoney_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetTimeInSecondsTillCrafted
	 */
	struct UInventoryMenuWidget_GetTimeInSecondsTillCrafted_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetShips
	 */
	struct UInventoryMenuWidget_GetShips_Params
	{
	public:
		TArray<struct FHangerShipInfo>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetSecondsTillShopRefresh
	 */
	struct UInventoryMenuWidget_GetSecondsTillShopRefresh_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetPlayersStats
	 */
	struct UInventoryMenuWidget_GetPlayersStats_Params
	{
	public:
		TArray<struct FPlayerStat>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetModuleModifiers
	 */
	struct UInventoryMenuWidget_GetModuleModifiers_Params
	{
	public:
		struct FWeaponStats                                        ReturnValue;                                             // 0x0000(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetMenuPlayerEquippedItems
	 */
	struct UInventoryMenuWidget_GetMenuPlayerEquippedItems_Params
	{
	public:
		struct FMenuPlayerLook                                     PlayerInfo;                                              // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetItemBPForItem
	 */
	struct UInventoryMenuWidget_GetItemBPForItem_Params
	{
	public:
		class FName                                                ItemRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetFrigateStats
	 */
	struct UInventoryMenuWidget_GetFrigateStats_Params
	{
	public:
		struct FFrigateStats                                       ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetFrigateModifiers
	 */
	struct UInventoryMenuWidget_GetFrigateModifiers_Params
	{
	public:
		struct FFrigateStats                                       ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetCurrentRecipeCrafting
	 */
	struct UInventoryMenuWidget_GetCurrentRecipeCrafting_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetCraftingQueInfo
	 */
	struct UInventoryMenuWidget_GetCraftingQueInfo_Params
	{
	public:
		int32_t                                                    SlotFrom;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCraftingQueInfo                                    ReturnValue;                                             // 0x0004(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAviableModsForSlot
	 */
	struct UInventoryMenuWidget_GetAviableModsForSlot_Params
	{
	public:
		EAttachmentSlot                                            SlotIn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TW3I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASIGISInventoryItem*>                         ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAviableFrigateModsForSlot
	 */
	struct UInventoryMenuWidget_GetAviableFrigateModsForSlot_Params
	{
	public:
		EShipAttachmentSlot                                        SlotIn;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y568[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class ASIGISInventoryItem*>                         ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAttachmentsSlotsAvialbleforCurrentWeapon
	 */
	struct UInventoryMenuWidget_GetAttachmentsSlotsAvialbleforCurrentWeapon_Params
	{
	public:
		TArray<EAttachmentSlot>                                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAttachmentsSlotsAvialbleforCurrentFrigate
	 */
	struct UInventoryMenuWidget_GetAttachmentsSlotsAvialbleforCurrentFrigate_Params
	{
	public:
		TArray<EShipAttachmentSlot>                                ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForWeapon
	 */
	struct UInventoryMenuWidget_GetAttachmentItemDataForWeapon_Params
	{
	public:
		class ASIGISInventoryItem*                                 WeaponIn;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FAttachmentItemData>                         ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForShip
	 */
	struct UInventoryMenuWidget_GetAttachmentItemDataForShip_Params
	{
	public:
		class ASIGISInventoryItem*                                 FrigIn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FFrigModItemData>                            ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForCurrentWeapon
	 */
	struct UInventoryMenuWidget_GetAttachmentItemDataForCurrentWeapon_Params
	{
	public:
		TArray<struct FAttachmentItemData>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForCurrentFrigate
	 */
	struct UInventoryMenuWidget_GetAttachmentItemDataForCurrentFrigate_Params
	{
	public:
		TArray<struct FFrigModItemData>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAllWeaponsInInventory
	 */
	struct UInventoryMenuWidget_GetAllWeaponsInInventory_Params
	{
	public:
		TArray<class ASIGISInventoryItem*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetAllFrigateInInventory
	 */
	struct UInventoryMenuWidget_GetAllFrigateInInventory_Params
	{
	public:
		TArray<class ASIGISInventoryItem*>                         ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetActiveWorkbenchRenderActor
	 */
	struct UInventoryMenuWidget_GetActiveWorkbenchRenderActor_Params
	{
	public:
		class ASIGISWorkbenchRenderActor*                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetActiveWeaponItem
	 */
	struct UInventoryMenuWidget_GetActiveWeaponItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetActiveShipID
	 */
	struct UInventoryMenuWidget_GetActiveShipID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetActiveShip
	 */
	struct UInventoryMenuWidget_GetActiveShip_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetActiveFrigateRenderActor
	 */
	struct UInventoryMenuWidget_GetActiveFrigateRenderActor_Params
	{
	public:
		class ASIGISFrigateRenderActor*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.GetActiveFrigateItem
	 */
	struct UInventoryMenuWidget_GetActiveFrigateItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.FilterByRecipeType
	 */
	struct UInventoryMenuWidget_FilterByRecipeType_Params
	{
	public:
		class FString                                              Craftingtype;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AllRecipes;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.EquipCosmetic
	 */
	struct UInventoryMenuWidget_EquipCosmetic_Params
	{
	public:
		class FName                                                CosmeticToEquip;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECosmeticSlot                                              ToSlot;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.DoesShipHaveItemsinCargo
	 */
	struct UInventoryMenuWidget_DoesShipHaveItemsinCargo_Params
	{
	public:
		class FString                                              UFrigID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CraftingWidgetpressed
	 */
	struct UInventoryMenuWidget_CraftingWidgetpressed_Params
	{
	public:
		class UCraftingWidget*                                     ActiveWid;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CollectedChapterContract
	 */
	struct UInventoryMenuWidget_CollectedChapterContract_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CollectedAContract
	 */
	struct UInventoryMenuWidget_CollectedAContract_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CollectCraftedItem
	 */
	struct UInventoryMenuWidget_CollectCraftedItem_Params
	{
	public:
		int32_t                                                    SlotFrom;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CloseInventory
	 */
	struct UInventoryMenuWidget_CloseInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ChangeMenuState
	 */
	struct UInventoryMenuWidget_ChangeMenuState_Params
	{
	public:
		EInventoryState                                            StateTo;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CanUnLockCosmetic
	 */
	struct UInventoryMenuWidget_CanUnLockCosmetic_Params
	{
	public:
		class FName                                                CosmeticToCheck;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WasAStatFail;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CantCraftEvent
	 */
	struct UInventoryMenuWidget_CantCraftEvent_Params
	{
	public:
		ERecipeFail                                                Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.CanCraftMore
	 */
	struct UInventoryMenuWidget_CanCraftMore_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.BP_UpDateCraftingInfo
	 */
	struct UInventoryMenuWidget_BP_UpDateCraftingInfo_Params
	{	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.AssignWeaponModToSlot
	 */
	struct UInventoryMenuWidget_AssignWeaponModToSlot_Params
	{
	public:
		class ASIGISInventoryItem*                                 NewMod;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttachmentSlot                                            SlotIn;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.AssignFrigateModToSlot
	 */
	struct UInventoryMenuWidget_AssignFrigateModToSlot_Params
	{
	public:
		class ASIGISInventoryItem*                                 NewMod;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EShipAttachmentSlot                                        SlotIn;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToWeaponSocket
	 */
	struct UInventoryMenuWidget_ApplyTransformToWeaponSocket_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EAttachmentSlot                                            SlotIn;                                                  // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToWeaponMesh
	 */
	struct UInventoryMenuWidget_ApplyTransformToWeaponMesh_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToFrigateMod
	 */
	struct UInventoryMenuWidget_ApplyTransformToFrigateMod_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EShipAttachmentSlot                                        SlotIn;                                                  // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToFrigate
	 */
	struct UInventoryMenuWidget_ApplyTransformToFrigate_Params
	{
	public:
		struct FTransform                                          NewTransform;                                            // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.InventoryMenuWidget.AddShip
	 */
	struct UInventoryMenuWidget_AddShip_Params
	{
	public:
		class FName                                                ShipTableRow;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.WaitingForLogIn
	 */
	struct ULoginWidget_WaitingForLogIn_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.ReturnedFromMatch
	 */
	struct ULoginWidget_ReturnedFromMatch_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.OnSubmitBTNPressed
	 */
	struct ULoginWidget_OnSubmitBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.OnRegisterBTNPressed
	 */
	struct ULoginWidget_OnRegisterBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.LogInValid
	 */
	struct ULoginWidget_LogInValid_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.LoginSucces
	 */
	struct ULoginWidget_LoginSucces_Params
	{
	public:
		bool                                                       failed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.LoginReturned
	 */
	struct ULoginWidget_LoginReturned_Params
	{
	public:
		bool                                                       SuccessLogin;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.LoginDiscordNotValid
	 */
	struct ULoginWidget_LoginDiscordNotValid_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.LoadAndTransitionToMainMenu
	 */
	struct ULoginWidget_LoadAndTransitionToMainMenu_Params
	{	};

	/**
	 * Function SIGISPlugin.LoginWidget.IsXBoxAppRunning
	 */
	struct ULoginWidget_IsXBoxAppRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.IsSteamRunning
	 */
	struct ULoginWidget_IsSteamRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.IsGameAlreadyRunning
	 */
	struct ULoginWidget_IsGameAlreadyRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.HasAuthToken
	 */
	struct ULoginWidget_HasAuthToken_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.CheckVoidVersion
	 */
	struct ULoginWidget_CheckVoidVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.CheckOutDatedVersion
	 */
	struct ULoginWidget_CheckOutDatedVersion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.CheckDataConnection
	 */
	struct ULoginWidget_CheckDataConnection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.LoginWidget.BackEndConnected
	 */
	struct ULoginWidget_BackEndConnected_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.UnblurBackground
	 */
	struct UMasterMenuWidget_UnblurBackground_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.StartUpIssue
	 */
	struct UMasterMenuWidget_StartUpIssue_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.ShowMatchMake
	 */
	struct UMasterMenuWidget_ShowMatchMake_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.ShowMainMenuOptions
	 */
	struct UMasterMenuWidget_ShowMainMenuOptions_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.ShowLogInMenu
	 */
	struct UMasterMenuWidget_ShowLogInMenu_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.HideAllMenus
	 */
	struct UMasterMenuWidget_HideAllMenus_Params
	{	};

	/**
	 * Function SIGISPlugin.MasterMenuWidget.BlurBackground
	 */
	struct UMasterMenuWidget_BlurBackground_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.WaitingForMatch
	 */
	struct UMatchMakingMenu_WaitingForMatch_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.SetRegion
	 */
	struct UMatchMakingMenu_SetRegion_Params
	{
	public:
		ERegionSig                                                 NewRegion;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.SetCrewLobbyInformation
	 */
	struct UMatchMakingMenu_SetCrewLobbyInformation_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HJTG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ZeuzIDIn;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DiscordIDIn;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CrewNameIn;                                              // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2DDynamic*                                   ProfilePicIn;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.RefreshCrew
	 */
	struct UMatchMakingMenu_RefreshCrew_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.PurgeCrew
	 */
	struct UMatchMakingMenu_PurgeCrew_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.PingPlayFabDataCenter
	 */
	struct UMatchMakingMenu_PingPlayFabDataCenter_Params
	{
	public:
		class FString                                              Addrss;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.OnBACKBTNPressed
	 */
	struct UMatchMakingMenu_OnBACKBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.MatchMake
	 */
	struct UMatchMakingMenu_MatchMake_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.MatchFound
	 */
	struct UMatchMakingMenu_MatchFound_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.KickMemberfromCrew
	 */
	struct UMatchMakingMenu_KickMemberfromCrew_Params
	{
	public:
		int32_t                                                    numSlot;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.KickCrewMember
	 */
	struct UMatchMakingMenu_KickCrewMember_Params
	{
	public:
		class FString                                              ToKickPlayerID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MessageIn;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.JoinCrew
	 */
	struct UMatchMakingMenu_JoinCrew_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.ImIInACrew
	 */
	struct UMatchMakingMenu_ImIInACrew_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.ImIACaptian
	 */
	struct UMatchMakingMenu_ImIACaptian_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.GetSlotCrewInfo
	 */
	struct UMatchMakingMenu_GetSlotCrewInfo_Params
	{
	public:
		int32_t                                                    SlotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N3E0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCrewLobbyInfo                                      ReturnValue;                                             // 0x0008(0x0038)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.GetRegionAsString
	 */
	struct UMatchMakingMenu_GetRegionAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.GetExtraOptions
	 */
	struct UMatchMakingMenu_GetExtraOptions_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.GetActiveShipRow
	 */
	struct UMatchMakingMenu_GetActiveShipRow_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.FindServers
	 */
	struct UMatchMakingMenu_FindServers_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.CreateCrew
	 */
	struct UMatchMakingMenu_CreateCrew_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PasswwordIn;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CrewNumber;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.CheckLobby
	 */
	struct UMatchMakingMenu_CheckLobby_Params
	{	};

	/**
	 * Function SIGISPlugin.MatchMakingMenu.ChangeCrewSettings
	 */
	struct UMatchMakingMenu_ChangeCrewSettings_Params
	{
	public:
		class FString                                              PasswwordIn;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    CrewNumber;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GE2B[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              CurrentCrewName;                                         // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.MenuOptions.TestStartMatchMake
	 */
	struct UMenuOptions_TestStartMatchMake_Params
	{	};

	/**
	 * Function SIGISPlugin.MenuOptions.TestQueryTicket
	 */
	struct UMenuOptions_TestQueryTicket_Params
	{	};

	/**
	 * Function SIGISPlugin.MenuOptions.TestCancelTicket
	 */
	struct UMenuOptions_TestCancelTicket_Params
	{	};

	/**
	 * Function SIGISPlugin.MenuOptions.OnOptionsBTNPressed
	 */
	struct UMenuOptions_OnOptionsBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.MenuOptions.OnMatchMakeBTNPressed
	 */
	struct UMenuOptions_OnMatchMakeBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.MenuOptions.OnCharacterBTNPressed
	 */
	struct UMenuOptions_OnCharacterBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.QuickSlotWidget.OnEndItemDrag
	 */
	struct UQuickSlotWidget_OnEndItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.QuickSlotWidget.OnBeginItemDrag
	 */
	struct UQuickSlotWidget_OnBeginItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.RenderTargetUMG.UpDateRenderActor
	 */
	struct URenderTargetUMG_UpDateRenderActor_Params
	{	};

	/**
	 * Function SIGISPlugin.RenderTargetUMG.GetRenderMat
	 */
	struct URenderTargetUMG_GetRenderMat_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.RenderTargetUMG.GetRenderActor
	 */
	struct URenderTargetUMG_GetRenderActor_Params
	{
	public:
		class ASIGISRenderActor*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.RenderTargetUMG.DestoryRenderActor
	 */
	struct URenderTargetUMG_DestoryRenderActor_Params
	{	};

	/**
	 * Function SIGISPlugin.RenderTargetUMG.CreateRenderActor
	 */
	struct URenderTargetUMG_CreateRenderActor_Params
	{	};

	/**
	 * Function SIGISPlugin.RigWidget.SetOverDragArea
	 */
	struct URigWidget_SetOverDragArea_Params
	{
	public:
		bool                                                       OverArea;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.RigWidget.SetClickStarted
	 */
	struct URigWidget_SetClickStarted_Params
	{
	public:
		struct FVector2D                                           TouchedLoc;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ClickStarted;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.RigWidget.OnDragBorderMouseDown
	 */
	struct URigWidget_OnDragBorderMouseDown_Params
	{	};

	/**
	 * Function SIGISPlugin.RigWidget.OnCloseButtonPressed
	 */
	struct URigWidget_OnCloseButtonPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.ShipSlotWidget.OnEndItemDrag
	 */
	struct UShipSlotWidget_OnEndItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ShipSlotWidget.OnBeginItemDrag
	 */
	struct UShipSlotWidget_OnBeginItemDrag_Params
	{
	public:
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.OnRep_Mesh
	 */
	struct ASIGISBaseActor_OnRep_Mesh_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.OnRep_IsActive
	 */
	struct ASIGISBaseActor_OnRep_IsActive_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.Interact
	 */
	struct ASIGISBaseActor_Interact_Params
	{
	public:
		class AActor*                                              InteractingOwner;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.GetInteractionInfo
	 */
	struct ASIGISBaseActor_GetInteractionInfo_Params
	{
	public:
		struct FInteractionInfo                                    ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.FinishedInteract
	 */
	struct ASIGISBaseActor_FinishedInteract_Params
	{
	public:
		class AActor*                                              InteractingOwner;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.DeActiveCalled
	 */
	struct ASIGISBaseActor_DeActiveCalled_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISBaseActor.ActiveCalled
	 */
	struct ASIGISBaseActor_ActiveCalled_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISBaseComponent.Interact
	 */
	struct USIGISBaseComponent_Interact_Params
	{
	public:
		class AActor*                                              InteractingOwner;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISBaseComponent.GetInteractionInfo
	 */
	struct USIGISBaseComponent_GetInteractionInfo_Params
	{
	public:
		struct FInteractionInfo                                    ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISBaseComponent.FinishedInteract
	 */
	struct USIGISBaseComponent_FinishedInteract_Params
	{
	public:
		class AActor*                                              InteractingOwner;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.UseItem
	 */
	struct ASIGISCharacter_UseItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ItemToEquip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FromLoot;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.UnEquipAttachmentItem
	 */
	struct ASIGISCharacter_UnEquipAttachmentItem_Params
	{
	public:
		class FString                                              ItemToEquip;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASIGISInventoryItem*                                 ItemToEquipFrom;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.UnEquipActorItem
	 */
	struct ASIGISCharacter_UnEquipActorItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ItemToEquip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             EqualSlot;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.StopInteraction
	 */
	struct ASIGISCharacter_StopInteraction_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.StartInteraction
	 */
	struct ASIGISCharacter_StartInteraction_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.StartAbilityInteraction
	 */
	struct ASIGISCharacter_StartAbilityInteraction_Params
	{
	public:
		EInteractionAbilityTypes                                   AblityToUse;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.SIGIS_InteractionResultComp
	 */
	struct ASIGISCharacter_SIGIS_InteractionResultComp_Params
	{
	public:
		class UPrimitiveComponent*                                 ActorToInteractWith;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.SIGIS_InteractionResult
	 */
	struct ASIGISCharacter_SIGIS_InteractionResult_Params
	{
	public:
		class AActor*                                              ActorToInteractWith;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.SetIsMovementInputEnabled
	 */
	struct ASIGISCharacter_SetIsMovementInputEnabled_Params
	{
	public:
		bool                                                       IsMovementInputEnabled;                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.ServerInteractComp
	 */
	struct ASIGISCharacter_ServerInteractComp_Params
	{
	public:
		class UPrimitiveComponent*                                 CompToInteractWith;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.ServerInteract
	 */
	struct ASIGISCharacter_ServerInteract_Params
	{
	public:
		class AActor*                                              ActorToInteractWith;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.ProcessInteraction
	 */
	struct ASIGISCharacter_ProcessInteraction_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.PlaySoundOnAllClients
	 */
	struct ASIGISCharacter_PlaySoundOnAllClients_Params
	{
	public:
		class USoundCue*                                           Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.PlayReachOutAnim
	 */
	struct ASIGISCharacter_PlayReachOutAnim_Params
	{
	public:
		class FName                                                AnimToUse;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.OnPlayReachOutAnim
	 */
	struct ASIGISCharacter_OnPlayReachOutAnim_Params
	{
	public:
		class FName                                                AnimToUse;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.InteractionDetection
	 */
	struct ASIGISCharacter_InteractionDetection_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionCompInRange
	 */
	struct ASIGISCharacter_GetUsedLastInteractionCompInRange_Params
	{
	public:
		class UClass*                                              CompClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionComp
	 */
	struct ASIGISCharacter_GetUsedLastInteractionComp_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionActor
	 */
	struct ASIGISCharacter_GetUsedLastInteractionActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetLastInteractionComp
	 */
	struct ASIGISCharacter_GetLastInteractionComp_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetLastInteractionActor
	 */
	struct ASIGISCharacter_GetLastInteractionActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetIsMovementInputEnabled
	 */
	struct ASIGISCharacter_GetIsMovementInputEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.GetHUD
	 */
	struct ASIGISCharacter_GetHUD_Params
	{
	public:
		class ASIGISHUD*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.EquipAttachmentItem
	 */
	struct ASIGISCharacter_EquipAttachmentItem_Params
	{
	public:
		class FString                                              ItemToEquip;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ASIGISInventoryItem*                                 ItemToEquipTo;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.EquipActorItem
	 */
	struct ASIGISCharacter_EquipActorItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ItemToEquip;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             EqualSlot;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.CheckLoadInventory
	 */
	struct ASIGISCharacter_CheckLoadInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISCharacter.BagUsed
	 */
	struct ASIGISCharacter_BagUsed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISContractActor.CharacterOverlapped
	 */
	struct ASIGISContractActor_CharacterOverlapped_Params
	{
	public:
		class ASIGISCharacter*                                     InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISContractActor.CharacterEndOverlapped
	 */
	struct ASIGISContractActor_CharacterEndOverlapped_Params
	{
	public:
		class ASIGISCharacter*                                     InteractingActor;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISDeathActor.OnRep_SetEquipment
	 */
	struct ASIGISDeathActor_OnRep_SetEquipment_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISDeathActor.OnRep_SetBoth
	 */
	struct ASIGISDeathActor_OnRep_SetBoth_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.ServerUnequipItem
	 */
	struct USIGISEquipmentComponent_ServerUnequipItem_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             SlotChecked;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.ServerUnequipAttachment
	 */
	struct USIGISEquipmentComponent_ServerUnequipAttachment_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemIDTo;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.ServerEquipItemToSlot
	 */
	struct USIGISEquipmentComponent_ServerEquipItemToSlot_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             EquipmentSlote;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.ServerEquipAttachment
	 */
	struct USIGISEquipmentComponent_ServerEquipAttachment_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemIDTo;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.Server_UsedDuribility
	 */
	struct USIGISEquipmentComponent_Server_UsedDuribility_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.Client_UsedDuribility
	 */
	struct USIGISEquipmentComponent_Client_UsedDuribility_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.Client_UnequipItem
	 */
	struct USIGISEquipmentComponent_Client_UnequipItem_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             EquipmentSlote;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.Client_UnequipAttachment
	 */
	struct USIGISEquipmentComponent_Client_UnequipAttachment_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemIDTo;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.Client_EquipItemToSlot
	 */
	struct USIGISEquipmentComponent_Client_EquipItemToSlot_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             EquipmentSlote;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISEquipmentComponent.Client_EquipAttachment
	 */
	struct USIGISEquipmentComponent_Client_EquipAttachment_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ItemIDTo;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.Twitch_HasAppLink
	 */
	struct USIGISGameInstanceNakama_Twitch_HasAppLink_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.IsBackendHealthy
	 */
	struct USIGISGameInstanceNakama_IsBackendHealthy_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.IsADevBuild
	 */
	struct USIGISGameInstanceNakama_IsADevBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.GetMyNakamaID
	 */
	struct USIGISGameInstanceNakama_GetMyNakamaID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.GetCrrentNakMatchmakingTicket
	 */
	struct USIGISGameInstanceNakama_GetCrrentNakMatchmakingTicket_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.GenerateQrCode
	 */
	struct USIGISGameInstanceNakama_GenerateQrCode_Params
	{
	public:
		class UObject*                                             Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.ClearNakMatchmakingTicket
	 */
	struct USIGISGameInstanceNakama_ClearNakMatchmakingTicket_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_WriteLeaderBoard
	 */
	struct USIGISGameInstanceNakama_AwsN_WriteLeaderBoard_Params
	{
	public:
		class FString                                              LeaderboardId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numScore;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMetaArrayTravelToMatch
	 */
	struct USIGISGameInstanceNakama_AwsN_UpdateCrewMetaArrayTravelToMatch_Params
	{
	public:
		class FString                                              CrewIDKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPlayerStatString>                           StatArray;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ServeripToJoin;                                          // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMetaArray
	 */
	struct USIGISGameInstanceNakama_AwsN_UpdateCrewMetaArray_Params
	{
	public:
		class FString                                              CrewIDKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FPlayerStatString>                           StatArray;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMeta
	 */
	struct USIGISGameInstanceNakama_AwsN_UpdateCrewMeta_Params
	{
	public:
		class FString                                              CrewIDKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MetaKey;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MetaValue;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrew
	 */
	struct USIGISGameInstanceNakama_AwsN_UpdateCrew_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PrivateCrew;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G9U4[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              avatarUrl;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              langTag;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetStatus
	 */
	struct USIGISGameInstanceNakama_AwsN_SetStatus_Params
	{
	public:
		class FString                                              myStatus;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetMetaStatString
	 */
	struct USIGISGameInstanceNakama_AwsN_SetMetaStatString_Params
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatAddion;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetMetaStat
	 */
	struct USIGISGameInstanceNakama_AwsN_SetMetaStat_Params
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StatAddion;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetJsonPropMakeString
	 */
	struct USIGISGameInstanceNakama_AwsN_SetJsonPropMakeString_Params
	{
	public:
		class FString                                              KeyIn;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ValueIn;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetJsonPropArrayMakeString
	 */
	struct USIGISGameInstanceNakama_AwsN_SetJsonPropArrayMakeString_Params
	{
	public:
		TArray<struct FLobbyInfo>                                  ArrayIn;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetCrewMyLook
	 */
	struct USIGISGameInstanceNakama_AwsN_SetCrewMyLook_Params
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StatAddion;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SendCrewChat
	 */
	struct USIGISGameInstanceNakama_AwsN_SendCrewChat_Params
	{
	public:
		class FString                                              CrewChatMessage;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_NakStartSoloMM
	 */
	struct USIGISGameInstanceNakama_AwsN_NakStartSoloMM_Params
	{
	public:
		class FString                                              RegionCode;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FleetAlias;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_NakStartMM
	 */
	struct USIGISGameInstanceNakama_AwsN_NakStartMM_Params
	{
	public:
		class FString                                              RegionCode;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FleetAlias;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minplayers;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxPlayers;                                              // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListLeaderBoardAroundUser
	 */
	struct USIGISGameInstanceNakama_AwsN_ListLeaderBoardAroundUser_Params
	{
	public:
		class FString                                              LeaderboardId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    numAround;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListLeaderBoard
	 */
	struct USIGISGameInstanceNakama_AwsN_ListLeaderBoard_Params
	{
	public:
		class FString                                              LeaderboardId;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              pageNum;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AmountReturn;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WQDO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      SpecificUserInAddition;                                  // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListFriends
	 */
	struct USIGISGameInstanceNakama_AwsN_ListFriends_Params
	{
	public:
		class FString                                              PageIn;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveParty
	 */
	struct USIGISGameInstanceNakama_AwsN_LeaveParty_Params
	{
	public:
		class FString                                              PartyIDIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveCrewChat
	 */
	struct USIGISGameInstanceNakama_AwsN_LeaveCrewChat_Params
	{
	public:
		class FString                                              CrewID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveCrew
	 */
	struct USIGISGameInstanceNakama_AwsN_LeaveCrew_Params
	{
	public:
		class FString                                              NCrewID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_KickCrewMember
	 */
	struct USIGISGameInstanceNakama_AwsN_KickCrewMember_Params
	{
	public:
		class FString                                              NCrewID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_JoingCrewChat
	 */
	struct USIGISGameInstanceNakama_AwsN_JoingCrewChat_Params
	{
	public:
		class FString                                              CrewID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_JoinCrew
	 */
	struct USIGISGameInstanceNakama_AwsN_JoinCrew_Params
	{
	public:
		class FString                                              NCrewID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_IncrementMetaStatArray
	 */
	struct USIGISGameInstanceNakama_AwsN_IncrementMetaStatArray_Params
	{
	public:
		TArray<struct FPlayerStat>                                 StatArray;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_IncrementMetaStat
	 */
	struct USIGISGameInstanceNakama_AwsN_IncrementMetaStat_Params
	{
	public:
		class FString                                              StatName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StatAddion;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetVersion
	 */
	struct USIGISGameInstanceNakama_AwsN_GetVersion_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerNotice
	 */
	struct USIGISGameInstanceNakama_AwsN_GetplayerNotice_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerGifts
	 */
	struct USIGISGameInstanceNakama_AwsN_GetplayerGifts_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerCampaign
	 */
	struct USIGISGameInstanceNakama_AwsN_GetplayerCampaign_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetNotifications
	 */
	struct USIGISGameInstanceNakama_AwsN_GetNotifications_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetMetaStats
	 */
	struct USIGISGameInstanceNakama_AwsN_GetMetaStats_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetJsonPropFromString
	 */
	struct USIGISGameInstanceNakama_AwsN_GetJsonPropFromString_Params
	{
	public:
		class FString                                              KeyIn;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              JsonStringIn;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetGroupInfo
	 */
	struct USIGISGameInstanceNakama_AwsN_GetGroupInfo_Params
	{
	public:
		class FString                                              GroupIdIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetCrewMetaReturn
	 */
	struct USIGISGameInstanceNakama_AwsN_GetCrewMetaReturn_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetCrewMeta
	 */
	struct USIGISGameInstanceNakama_AwsN_GetCrewMeta_Params
	{
	public:
		class FString                                              CrewIDKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetAllFriendsGroups
	 */
	struct USIGISGameInstanceNakama_AwsN_GetAllFriendsGroups_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetAccount
	 */
	struct USIGISGameInstanceNakama_AwsN_GetAccount_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_DestroyCrew
	 */
	struct USIGISGameInstanceNakama_AwsN_DestroyCrew_Params
	{
	public:
		class FString                                              NCrewID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_DeleteNofifications
	 */
	struct USIGISGameInstanceNakama_AwsN_DeleteNofifications_Params
	{
	public:
		TArray<class FString>                                      IDsToRemove;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchMyGroups
	 */
	struct USIGISGameInstanceNakama_AwsN_CrewSearchMyGroups_Params
	{
	public:
		class FString                                              pageNum;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchFriendHasCrew
	 */
	struct USIGISGameInstanceNakama_AwsN_CrewSearchFriendHasCrew_Params
	{
	public:
		class FString                                              pageNum;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserUUID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchFriend
	 */
	struct USIGISGameInstanceNakama_AwsN_CrewSearchFriend_Params
	{
	public:
		class FString                                              pageNum;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserUUID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbyUser
	 */
	struct USIGISGameInstanceNakama_AwsN_CrewSearchbyUser_Params
	{
	public:
		class FString                                              pageNum;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UserUUID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbySteamID
	 */
	struct USIGISGameInstanceNakama_AwsN_CrewSearchbySteamID_Params
	{
	public:
		class FString                                              pageNum;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              steamId;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbyName
	 */
	struct USIGISGameInstanceNakama_AwsN_CrewSearchbyName_Params
	{
	public:
		class FString                                              pageNum;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CrewName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateParty
	 */
	struct USIGISGameInstanceNakama_AwsN_CreateParty_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrewRpcReceaved
	 */
	struct USIGISGameInstanceNakama_AwsN_CreateCrewRpcReceaved_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrewRpc
	 */
	struct USIGISGameInstanceNakama_AwsN_CreateCrewRpc_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PrivateCrew;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EKXC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              avatarUrl;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CptName;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              steamId;                                                 // 0x0048(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       locked;                                                  // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZDYS[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ship;                                                    // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrew
	 */
	struct USIGISGameInstanceNakama_AwsN_CreateCrew_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PrivateCrew;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QMAN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              avatarUrl;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              langTag;                                                 // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CancelMM
	 */
	struct USIGISGameInstanceNakama_AwsN_CancelMM_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_BeenKicked
	 */
	struct USIGISGameInstanceNakama_AwsN_BeenKicked_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_AddFriendToGroup
	 */
	struct USIGISGameInstanceNakama_AwsN_AddFriendToGroup_Params
	{
	public:
		class FString                                              NCrewID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              FriendID;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.SetPlatformLobbyData
	 */
	struct USIGISGameInstanceGraphQL_SetPlatformLobbyData_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.SendDynamoScoreRequest
	 */
	struct USIGISGameInstanceGraphQL_SendDynamoScoreRequest_Params
	{
	public:
		struct FUpdateItemRequest                                  RequstOut;                                               // 0x0000(0x0128)  (Parm, NativeAccessSpecifierPublic)
		EDynamoLeaderBoardEvent                                    RequestType;                                             // 0x0128(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.SendDynamoRequest
	 */
	struct USIGISGameInstanceGraphQL_SendDynamoRequest_Params
	{
	public:
		struct FQueryRequest                                       RequstOut;                                               // 0x0000(0x0158)  (Parm, NativeAccessSpecifierPublic)
		EDynamoLeaderBoardEvent                                    RequestType;                                             // 0x0158(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.ReturnQuery
	 */
	struct USIGISGameInstanceGraphQL_ReturnQuery_Params
	{
	public:
		bool                                                       DynoFailed;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZF1R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      QueryBack;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EDynamoLeaderBoardEvent                                    RequestType;                                             // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.Ping_OnFail
	 */
	struct USIGISGameInstanceGraphQL_Ping_OnFail_Params
	{
	public:
		class UPingIP*                                             PingOperation;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Hostname;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.Ping_OnComplete
	 */
	struct USIGISGameInstanceGraphQL_Ping_OnComplete_Params
	{
	public:
		class UPingIP*                                             PingOperation;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Hostname;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TimeMS;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.IsOnNaughtyList
	 */
	struct USIGISGameInstanceGraphQL_IsOnNaughtyList_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.IsASIGBuild
	 */
	struct USIGISGameInstanceGraphQL_IsASIGBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.IsAnAlphaBuild
	 */
	struct USIGISGameInstanceGraphQL_IsAnAlphaBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.ISAMarauderAPP
	 */
	struct USIGISGameInstanceGraphQL_ISAMarauderAPP_Params
	{
	public:
		class FString                                              AppIDIn;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.IsAEXPOBuild
	 */
	struct USIGISGameInstanceGraphQL_IsAEXPOBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriendToCrew
	 */
	struct USIGISGameInstanceGraphQL_InviteFriendToCrew_Params
	{
	public:
		class FString                                              FriendID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriendbyCrew
	 */
	struct USIGISGameInstanceGraphQL_InviteFriendbyCrew_Params
	{
	public:
		class FString                                              CrewUniqieUserID;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriend
	 */
	struct USIGISGameInstanceGraphQL_InviteFriend_Params
	{
	public:
		class FString                                              FriendCode;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetTitleInfo
	 */
	struct USIGISGameInstanceGraphQL_GetTitleInfo_Params
	{
	public:
		class FString                                              TitleTypeOut;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TitleNewsOut;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              titleNewsImageURLOut;                                    // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetSteamFriendsForLobbySearch
	 */
	struct USIGISGameInstanceGraphQL_GetSteamFriendsForLobbySearch_Params
	{
	public:
		TArray<struct FPlatformFriendInformationSteam>             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetSteamAvatarURLandNick
	 */
	struct USIGISGameInstanceGraphQL_GetSteamAvatarURLandNick_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPingsToString
	 */
	struct USIGISGameInstanceGraphQL_GetPlayerRegionPingsToString_Params
	{
	public:
		TArray<struct FDynamicRegions>                             ArrayIn;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPingsFromString
	 */
	struct USIGISGameInstanceGraphQL_GetPlayerRegionPingsFromString_Params
	{
	public:
		class FString                                              ArrayIn;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDynamicRegions>                             ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPings
	 */
	struct USIGISGameInstanceGraphQL_GetPlayerRegionPings_Params
	{
	public:
		TArray<struct FDynamicRegions>                             ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlatformLobbyData
	 */
	struct USIGISGameInstanceGraphQL_GetPlatformLobbyData_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetMyLeaderBoardPos
	 */
	struct USIGISGameInstanceGraphQL_GetMyLeaderBoardPos_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetMyFriendCode
	 */
	struct USIGISGameInstanceGraphQL_GetMyFriendCode_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetLambdaObject
	 */
	struct USIGISGameInstanceGraphQL_GetLambdaObject_Params
	{
	public:
		class ULambdaClientObject*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetKillsLeaderBoard
	 */
	struct USIGISGameInstanceGraphQL_GetKillsLeaderBoard_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetDBObject
	 */
	struct USIGISGameInstanceGraphQL_GetDBObject_Params
	{
	public:
		class UDynamoDBClientObject*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.GetAllFriendsInfo
	 */
	struct USIGISGameInstanceGraphQL_GetAllFriendsInfo_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoLeaderBoardSetScore
	 */
	struct USIGISGameInstanceGraphQL_DynoLeaderBoardSetScore_Params
	{
	public:
		int32_t                                                    ScoreIn;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8ON9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoHasUser
	 */
	struct USIGISGameInstanceGraphQL_DynoHasUser_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoGetMyScore
	 */
	struct USIGISGameInstanceGraphQL_DynoGetMyScore_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoGetAllLeaderBoard
	 */
	struct USIGISGameInstanceGraphQL_DynoGetAllLeaderBoard_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.DynamoCreatePlayer
	 */
	struct USIGISGameInstanceGraphQL_DynamoCreatePlayer_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              VersionString;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_StartMatchMaking
	 */
	struct USIGISGameInstanceGraphQL_AwsWs_StartMatchMaking_Params
	{
	public:
		TArray<struct FSIGGameLiftPlayer>                          players;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              configurationName;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_QueryMMTicket
	 */
	struct USIGISGameInstanceGraphQL_AwsWs_QueryMMTicket_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_CancelMatchMaking
	 */
	struct USIGISGameInstanceGraphQL_AwsWs_CancelMatchMaking_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceGraphQL.AddKillToLeaderBoard
	 */
	struct USIGISGameInstanceGraphQL_AddKillToLeaderBoard_Params
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.StringToAttachmentArray
	 */
	struct USIGISGameInstance_StringToAttachmentArray_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      OutArray;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.StateFromString
	 */
	struct USIGISGameInstance_StateFromString_Params
	{
	public:
		class FString                                              StateIn;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECrewState                                                 ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.StartPlayFabLogin
	 */
	struct USIGISGameInstance_StartPlayFabLogin_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.StartAndRefreshMatchmaking
	 */
	struct USIGISGameInstance_StartAndRefreshMatchmaking_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ShipChanged
	 */
	struct USIGISGameInstance_ShipChanged_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetVoiceRoomID
	 */
	struct USIGISGameInstance_SetVoiceRoomID_Params
	{
	public:
		class FString                                              RoomIDOut;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetProfileInBP
	 */
	struct USIGISGameInstance_SetProfileInBP_Params
	{
	public:
		class FString                                              IDOut;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetPlayerSessionIDsAndSetTravelToMapIP
	 */
	struct USIGISGameInstance_SetPlayerSessionIDsAndSetTravelToMapIP_Params
	{
	public:
		TArray<struct FGameliftSessionPlayerID>                    PlaySessions;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              ConnectIP;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetPlatfromNickNameandAvatar
	 */
	struct USIGISGameInstance_SetPlatfromNickNameandAvatar_Params
	{
	public:
		class FString                                              PlayerNick;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ImageURL;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetMatchMakeDrone
	 */
	struct USIGISGameInstance_SetMatchMakeDrone_Params
	{
	public:
		class FString                                              IDdrone;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              QueMode;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetEndMatchXP
	 */
	struct USIGISGameInstance_SetEndMatchXP_Params
	{
	public:
		int32_t                                                    AmountXP;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SetActiveShipConSize
	 */
	struct USIGISGameInstance_SetActiveShipConSize_Params
	{
	public:
		class FString                                              ShipDataIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ServerRefreshBackEnd
	 */
	struct USIGISGameInstance_ServerRefreshBackEnd_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SendTicket
	 */
	struct USIGISGameInstance_SendTicket_Params
	{
	public:
		struct FTicketInfo                                         TicketInfo;                                              // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SendEndMatchInfo
	 */
	struct USIGISGameInstance_SendEndMatchInfo_Params
	{
	public:
		TArray<class FName>                                        ItemsHave;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    XPIn;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    KillsIn;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       DeathIn;                                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SearchingForMatch
	 */
	struct USIGISGameInstance_SearchingForMatch_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.SearchForCrew
	 */
	struct USIGISGameInstance_SearchForCrew_Params
	{
	public:
		int32_t                                                    pageNum;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.RefreshLobbyItems
	 */
	struct USIGISGameInstance_RefreshLobbyItems_Params
	{
	public:
		class FString                                              StringIn;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ProfileGetPlayerReturnFromMatch
	 */
	struct USIGISGameInstance_ProfileGetPlayerReturnFromMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.PlayerChangedDisplayStringToInfo
	 */
	struct USIGISGameInstance_PlayerChangedDisplayStringToInfo_Params
	{
	public:
		class FString                                              StringIn;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMenuPlayerLook                                     ReturnValue;                                             // 0x0010(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.OverrideKilledByName
	 */
	struct USIGISGameInstance_OverrideKilledByName_Params
	{
	public:
		class FString                                              NewOverride;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.LoadMainMenu
	 */
	struct USIGISGameInstance_LoadMainMenu_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.LeaveCrew
	 */
	struct USIGISGameInstance_LeaveCrew_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.JoinACrew
	 */
	struct USIGISGameInstance_JoinACrew_Params
	{
	public:
		struct FEOSHLobbyDetails                                   LobbyToJoin;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.IsSteamRunning
	 */
	struct USIGISGameInstance_IsSteamRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.IsInCrew
	 */
	struct USIGISGameInstance_IsInCrew_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.IsGDKRunning
	 */
	struct USIGISGameInstance_IsGDKRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.IsDisCordRunning
	 */
	struct USIGISGameInstance_IsDisCordRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.IsATestBuild
	 */
	struct USIGISGameInstance_IsATestBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ImIACaptian
	 */
	struct USIGISGameInstance_ImIACaptian_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetServerPort
	 */
	struct USIGISGameInstance_GetServerPort_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetRownameForFaction
	 */
	struct USIGISGameInstance_GetRownameForFaction_Params
	{
	public:
		EFactionType                                               FactionIn;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZCJG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetRemoteDiscordUserInfo
	 */
	struct USIGISGameInstance_GetRemoteDiscordUserInfo_Params
	{
	public:
		class FString                                              DiscordIDIn;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetRegionNumberAsString
	 */
	struct USIGISGameInstance_GetRegionNumberAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetPlatformNickAndAvater
	 */
	struct USIGISGameInstance_GetPlatformNickAndAvater_Params
	{
	public:
		class FString                                              PlayerNick;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ImageURL;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetPlatformBuildType
	 */
	struct USIGISGameInstance_GetPlatformBuildType_Params
	{
	public:
		EPlatformBuild                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetOSSPlayerInfo
	 */
	struct USIGISGameInstance_GetOSSPlayerInfo_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetNumberOfPlayersInMatch
	 */
	struct USIGISGameInstance_GetNumberOfPlayersInMatch_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetMyPlatformID
	 */
	struct USIGISGameInstance_GetMyPlatformID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetMyLocalZeuzID
	 */
	struct USIGISGameInstance_GetMyLocalZeuzID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetMemberLobbyInformation
	 */
	struct USIGISGameInstance_GetMemberLobbyInformation_Params
	{
	public:
		struct FEOSProductUserId                                   userId;                                                  // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ALR6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FLobbyInfo>                                  ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetLobbySeachInfo
	 */
	struct USIGISGameInstance_GetLobbySeachInfo_Params
	{
	public:
		TArray<struct FLobbySearchInfo>                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetLobbyInformation
	 */
	struct USIGISGameInstance_GetLobbyInformation_Params
	{
	public:
		TArray<struct FLobbyInfo>                                  ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetLobbyIDAsString
	 */
	struct USIGISGameInstance_GetLobbyIDAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetLastRoundTime
	 */
	struct USIGISGameInstance_GetLastRoundTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetLastKilledBy
	 */
	struct USIGISGameInstance_GetLastKilledBy_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetInventoryGridSlotSize
	 */
	struct USIGISGameInstance_GetInventoryGridSlotSize_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetFactionForShopInt
	 */
	struct USIGISGameInstance_GetFactionForShopInt_Params
	{
	public:
		int32_t                                                    ShopInt;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EFactionType                                               ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetExtraConnectionInfo
	 */
	struct USIGISGameInstance_GetExtraConnectionInfo_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetEndMatchXP
	 */
	struct USIGISGameInstance_GetEndMatchXP_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetEndMatchStats
	 */
	struct USIGISGameInstance_GetEndMatchStats_Params
	{
	public:
		TArray<struct FPlayerStat>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetDragAndDropItemWidgetClass
	 */
	struct USIGISGameInstance_GetDragAndDropItemWidgetClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetDiscordUserInfo
	 */
	struct USIGISGameInstance_GetDiscordUserInfo_Params
	{
	public:
		class FString                                              userId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetDisCordAvatarURLandNick
	 */
	struct USIGISGameInstance_GetDisCordAvatarURLandNick_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetDefaultContainerWidgetClass
	 */
	struct USIGISGameInstance_GetDefaultContainerWidgetClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetCurrentShopKeeperFaction
	 */
	struct USIGISGameInstance_GetCurrentShopKeeperFaction_Params
	{
	public:
		EFactionType                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetCurrentShopKeeper
	 */
	struct USIGISGameInstance_GetCurrentShopKeeper_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetCurrentLobbyMembers
	 */
	struct USIGISGameInstance_GetCurrentLobbyMembers_Params
	{
	public:
		TArray<struct FEOSProductUserId>                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetBuildNameType
	 */
	struct USIGISGameInstance_GetBuildNameType_Params
	{
	public:
		bool                                                       isDev;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AWTP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetBuildIDTime
	 */
	struct USIGISGameInstance_GetBuildIDTime_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetBuildIDDate
	 */
	struct USIGISGameInstance_GetBuildIDDate_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetBuildID
	 */
	struct USIGISGameInstance_GetBuildID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetBpForSoftClass
	 */
	struct USIGISGameInstance_GetBpForSoftClass_Params
	{
	public:
		unsigned char                                              UnknownData_FWZ8[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.GetAllCrewReady
	 */
	struct USIGISGameInstance_GetAllCrewReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.FoundMatch
	 */
	struct USIGISGameInstance_FoundMatch_Params
	{
	public:
		class FString                                              ConnectionString;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_SetLobbyMyMemberAttributte
	 */
	struct USIGISGameInstance_EOS_SetLobbyMyMemberAttributte_Params
	{
	public:
		TArray<struct FLobbyInfo>                                  InfoForLobby;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_SetLobbyAttributte
	 */
	struct USIGISGameInstance_EOS_SetLobbyAttributte_Params
	{
	public:
		TArray<struct FLobbyInfo>                                  InfoForLobby;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_ReportLastKilledBy
	 */
	struct USIGISGameInstance_EOS_ReportLastKilledBy_Params
	{
	public:
		EEOSEPlayerReportsCategory                                 TypeOf;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R1F7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              MessageIn;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_QueryCachedStats
	 */
	struct USIGISGameInstance_EOS_QueryCachedStats_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnSaveStats
	 */
	struct USIGISGameInstance_EOS_OnSaveStats_Params
	{
	public:
		struct FEOSStatsIngestStatCompleteCallbackInfo             Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_Onreported
	 */
	struct USIGISGameInstance_EOS_Onreported_Params
	{
	public:
		struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyUpdate
	 */
	struct USIGISGameInstance_EOS_OnLobbyUpdate_Params
	{
	public:
		struct FEOSLobbyUpdateLobbyCallbackInfo                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbySearch
	 */
	struct USIGISGameInstance_EOS_OnLobbySearch_Params
	{
	public:
		struct FEOSLobbySearchFindCallbackInfo                     Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyLeave
	 */
	struct USIGISGameInstance_EOS_OnLobbyLeave_Params
	{
	public:
		struct FEOSLobbyLeaveLobbyCallbackInfo                     Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyKickMember
	 */
	struct USIGISGameInstance_EOS_OnLobbyKickMember_Params
	{
	public:
		struct FEOSLobbyKickMemberCallbackInfo                     Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyJoin
	 */
	struct USIGISGameInstance_EOS_OnLobbyJoin_Params
	{
	public:
		struct FEOSLobbyJoinLobbyCallbackInfo                      Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyFirstUpdate
	 */
	struct USIGISGameInstance_EOS_OnLobbyFirstUpdate_Params
	{
	public:
		struct FEOSLobbyUpdateLobbyCallbackInfo                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyDestroy
	 */
	struct USIGISGameInstance_EOS_OnLobbyDestroy_Params
	{
	public:
		struct FEOSLobbyDestroyLobbyCallbackInfo                   Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyCrewNameSearch
	 */
	struct USIGISGameInstance_EOS_OnLobbyCrewNameSearch_Params
	{
	public:
		struct FEOSLobbySearchFindCallbackInfo                     Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnLoadStats
	 */
	struct USIGISGameInstance_EOS_OnLoadStats_Params
	{
	public:
		struct FEOSStatsOnQueryStatsCompleteCallbackInfo           Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnGetDeviceID
	 */
	struct USIGISGameInstance_EOS_OnGetDeviceID_Params
	{
	public:
		struct FEOSConnectCreateDeviceIdCallbackInfo               Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnFriendLobbySearch
	 */
	struct USIGISGameInstance_EOS_OnFriendLobbySearch_Params
	{
	public:
		struct FEOSLobbySearchFindCallbackInfo                     Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnEOSGDK_LoginReturn
	 */
	struct USIGISGameInstance_EOS_OnEOSGDK_LoginReturn_Params
	{
	public:
		struct FEOSConnectLoginCallbackInfo                        Data;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_LoginReturn
	 */
	struct USIGISGameInstance_EOS_OnEOS_LoginReturn_Params
	{
	public:
		struct FEOSConnectLoginCallbackInfo                        Data;                                                    // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_GDKLoginReturn
	 */
	struct USIGISGameInstance_EOS_OnEOS_GDKLoginReturn_Params
	{
	public:
		struct FEOSConnectCreateDeviceIdCallbackInfo               Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_GDKLogin
	 */
	struct USIGISGameInstance_EOS_OnEOS_GDKLogin_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QV7E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorStr;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_CreateUser
	 */
	struct USIGISGameInstance_EOS_OnEOS_CreateUser_Params
	{
	public:
		struct FEOSConnectCreateUserCallbackInfo                   Data;                                                    // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnCreateLobbyreturn
	 */
	struct USIGISGameInstance_EOS_OnCreateLobbyreturn_Params
	{
	public:
		struct FEOSLobbyCreateLobbyCallbackInfo                    Data;                                                    // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_OnCheckSanctions
	 */
	struct USIGISGameInstance_EOS_OnCheckSanctions_Params
	{
	public:
		struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo Data;                                                    // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_Login
	 */
	struct USIGISGameInstance_EOS_Login_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearchByCrewName
	 */
	struct USIGISGameInstance_EOS_LobbySearchByCrewName_Params
	{
	public:
		class FString                                              CrewNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearchByCrewID
	 */
	struct USIGISGameInstance_EOS_LobbySearchByCrewID_Params
	{
	public:
		class FString                                              CrewIDIn;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearch
	 */
	struct USIGISGameInstance_EOS_LobbySearch_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbyLeave
	 */
	struct USIGISGameInstance_EOS_LobbyLeave_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbyKickMember
	 */
	struct USIGISGameInstance_EOS_LobbyKickMember_Params
	{
	public:
		struct FEOSProductUserId                                   TargetUserId;                                            // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbyJoin
	 */
	struct USIGISGameInstance_EOS_LobbyJoin_Params
	{
	public:
		struct FEOSHLobbyDetails                                   LobbyToJoin;                                             // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_LobbyDestroy
	 */
	struct USIGISGameInstance_EOS_LobbyDestroy_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_JoinFriendLobbySearch
	 */
	struct USIGISGameInstance_EOS_JoinFriendLobbySearch_Params
	{
	public:
		struct FEOSLobbySearchFindCallbackInfo                     Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_GetStatsFromBackEnd
	 */
	struct USIGISGameInstance_EOS_GetStatsFromBackEnd_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_GetPlayerSanctions
	 */
	struct USIGISGameInstance_EOS_GetPlayerSanctions_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_GetCachedStats
	 */
	struct USIGISGameInstance_EOS_GetCachedStats_Params
	{
	public:
		TArray<struct FPlayerStat>                                 ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_GetAllFriendLobbySearch
	 */
	struct USIGISGameInstance_EOS_GetAllFriendLobbySearch_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_DeviceIDReturn
	 */
	struct USIGISGameInstance_EOS_DeviceIDReturn_Params
	{
	public:
		struct FEOSConnectCreateDeviceIdCallbackInfo               Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_CreateLobby
	 */
	struct USIGISGameInstance_EOS_CreateLobby_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_CreateFriendLobby
	 */
	struct USIGISGameInstance_EOS_CreateFriendLobby_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_AuthExpiCallaback
	 */
	struct USIGISGameInstance_EOS_AuthExpiCallaback_Params
	{
	public:
		struct FEOSConnectAuthExpirationCallbackInfo               Data;                                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EOS_AlterLeaderBoardStat
	 */
	struct USIGISGameInstance_EOS_AlterLeaderBoardStat_Params
	{
	public:
		class FString                                              LeaderboardStat;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FEOSProductUserId                                   TargetProductID;                                         // 0x0010(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SH4J[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AmountTO;                                                // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.EndServerhMatchmaking
	 */
	struct USIGISGameInstance_EndServerhMatchmaking_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.DisbandCrew
	 */
	struct USIGISGameInstance_DisbandCrew_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.DestroyServerMatchmaking
	 */
	struct USIGISGameInstance_DestroyServerMatchmaking_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CrewUnLocked
	 */
	struct USIGISGameInstance_CrewUnLocked_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CrewMemberUnready
	 */
	struct USIGISGameInstance_CrewMemberUnready_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CrewMemberReady
	 */
	struct USIGISGameInstance_CrewMemberReady_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CrewLocked
	 */
	struct USIGISGameInstance_CrewLocked_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CrewGetSessionIDAndServerIP
	 */
	struct USIGISGameInstance_CrewGetSessionIDAndServerIP_Params
	{
	public:
		class FString                                              MyGameLiftSessionID;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ServerConnectIP;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CptKickCrewMember
	 */
	struct USIGISGameInstance_CptKickCrewMember_Params
	{
	public:
		class FString                                              ToKickPlayerID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MessageIn;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ContainsRudeWord
	 */
	struct USIGISGameInstance_ContainsRudeWord_Params
	{
	public:
		class FString                                              Word;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ClientHasnotGotOnlinePrivalige
	 */
	struct USIGISGameInstance_ClientHasnotGotOnlinePrivalige_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ClientHasBeenDisconectedEvent
	 */
	struct USIGISGameInstance_ClientHasBeenDisconectedEvent_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ClearKilledByName
	 */
	struct USIGISGameInstance_ClearKilledByName_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.ChangeLobbyState
	 */
	struct USIGISGameInstance_ChangeLobbyState_Params
	{
	public:
		ECrewState                                                 NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CaptainCrewCreation
	 */
	struct USIGISGameInstance_CaptainCrewCreation_Params
	{
	public:
		class FString                                              CrewName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Password;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.CancelSearch
	 */
	struct USIGISGameInstance_CancelSearch_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.BeenKickedFromLobby
	 */
	struct USIGISGameInstance_BeenKickedFromLobby_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.BatchEvent
	 */
	struct USIGISGameInstance_BatchEvent_Params
	{
	public:
		struct FAnalyticEvent                                      NewEventIn;                                              // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       Urgent;                                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.AuthDiscord
	 */
	struct USIGISGameInstance_AuthDiscord_Params
	{
	public:
		class FString                                              AutBackIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstance.AskForIP
	 */
	struct USIGISGameInstance_AskForIP_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_StartMatchMaking
	 */
	struct USIGISGameInstanceSocket_AwsWs_StartMatchMaking_Params
	{
	public:
		TArray<struct FGameLiftPlayer>                             players;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              configurationName;                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_QueryMMTicket
	 */
	struct USIGISGameInstanceSocket_AwsWs_QueryMMTicket_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_CancelMatchMaking
	 */
	struct USIGISGameInstanceSocket_AwsWs_CancelMatchMaking_Params
	{
	public:
		class FString                                              TicketID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISGameSettings.GetDBuildType
	 */
	struct USIGISGameSettings_GetDBuildType_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.StartedHold
	 */
	struct ASIGISHUD_StartedHold_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.ShowReticle
	 */
	struct ASIGISHUD_ShowReticle_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HasHold;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.ShowInventoryMenu
	 */
	struct ASIGISHUD_ShowInventoryMenu_Params
	{
	public:
		ELootWindowState                                           LootWinState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.SetRegionToPing
	 */
	struct ASIGISHUD_SetRegionToPing_Params
	{
	public:
		EAmazonRegions                                             RegionToSet;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.ResetMatchResult
	 */
	struct ASIGISHUD_ResetMatchResult_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.PostLoginLoad
	 */
	struct ASIGISHUD_PostLoginLoad_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.PlayerReadyToDeploy
	 */
	struct ASIGISHUD_PlayerReadyToDeploy_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.OnKilledEvent
	 */
	struct ASIGISHUD_OnKilledEvent_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.MenuStateChanged
	 */
	struct ASIGISHUD_MenuStateChanged_Params
	{
	public:
		EMenuState                                                 NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.InventoryOpen
	 */
	struct ASIGISHUD_InventoryOpen_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.InventoryClosed
	 */
	struct ASIGISHUD_InventoryClosed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.HideReticle
	 */
	struct ASIGISHUD_HideReticle_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.HideInventoryMenu
	 */
	struct ASIGISHUD_HideInventoryMenu_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetRecommendendRegion
	 */
	struct ASIGISHUD_GetRecommendendRegion_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetMasterMenu
	 */
	struct ASIGISHUD_GetMasterMenu_Params
	{
	public:
		class UMasterMenuWidget*                                   ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetLastMatchXP
	 */
	struct ASIGISHUD_GetLastMatchXP_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetLastMatchResult
	 */
	struct ASIGISHUD_GetLastMatchResult_Params
	{
	public:
		ERaidResult                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetInGameOverlay
	 */
	struct ASIGISHUD_GetInGameOverlay_Params
	{
	public:
		class UInGameOverlayWidget*                                ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetBuildID
	 */
	struct ASIGISHUD_GetBuildID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.GetAveragePlayerLatency
	 */
	struct ASIGISHUD_GetAveragePlayerLatency_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.EndedHold
	 */
	struct ASIGISHUD_EndedHold_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.ChangeMainMenu
	 */
	struct ASIGISHUD_ChangeMainMenu_Params
	{
	public:
		EMenuState                                                 NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.BP_ShowInfoEvent
	 */
	struct ASIGISHUD_BP_ShowInfoEvent_Params
	{
	public:
		class FString                                              KeyAndItemType;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HasHold;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISHUD.BP_NoSpaceForItem
	 */
	struct ASIGISHUD_BP_NoSpaceForItem_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.BP_HideInfoEvent
	 */
	struct ASIGISHUD_BP_HideInfoEvent_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.BP_CantSellItemsInside
	 */
	struct ASIGISHUD_BP_CantSellItemsInside_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.BP_CantScrapItemsInside
	 */
	struct ASIGISHUD_BP_CantScrapItemsInside_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISHUD.AreMenusVisible
	 */
	struct ASIGISHUD_AreMenusVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInteractionInterface.Interact
	 */
	struct USIGISInteractionInterface_Interact_Params
	{
	public:
		class AActor*                                              InteractingOwner;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInteractionInterface.GetInteractionInfo
	 */
	struct USIGISInteractionInterface_GetInteractionInfo_Params
	{
	public:
		struct FInteractionInfo                                    ReturnValue;                                             // 0x0000(0x0048)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateStashInventory
	 */
	struct USIGISInventoryComponent_Server_ValidateStashInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateInvCon
	 */
	struct USIGISInventoryComponent_Server_ValidateInvCon_Params
	{
	public:
		class FString                                              ToCon;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateEquippedInventory
	 */
	struct USIGISInventoryComponent_Server_ValidateEquippedInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_UseItem
	 */
	struct USIGISInventoryComponent_Server_UseItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FromLoot;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_UnEquipItem
	 */
	struct USIGISInventoryComponent_Server_UnEquipItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             SlotTo;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_UnEquipAttachment
	 */
	struct USIGISInventoryComponent_Server_UnEquipAttachment_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UniqueItemGUIDAttachedTo;                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_SwapItem
	 */
	struct USIGISInventoryComponent_Server_SwapItem_Params
	{
	public:
		class FString                                              UniqueItemGUIDFrom;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UniqueItemGUIDTo;                                        // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       RequiresMove;                                            // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_StartLooting
	 */
	struct USIGISInventoryComponent_Server_StartLooting_Params
	{
	public:
		class ASIGISBaseActor*                                     LootItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_SplitStack
	 */
	struct USIGISInventoryComponent_Server_SplitStack_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0010(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J5NJ[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ToCon;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AmountToSplit;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              FromLoot;                                                // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ToLoot;                                                  // 0x002D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_SetItemRotated
	 */
	struct USIGISInventoryComponent_Server_SetItemRotated_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_SellItem
	 */
	struct USIGISInventoryComponent_Server_SellItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_RemoveItem
	 */
	struct USIGISInventoryComponent_Server_RemoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_ProcessRightClickOption
	 */
	struct USIGISInventoryComponent_Server_ProcessRightClickOption_Params
	{
	public:
		EItemOptions                                               OptionToUse;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SCMP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              UniqueItemGUID;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0028(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_PredictUseAmmo
	 */
	struct USIGISInventoryComponent_Server_PredictUseAmmo_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AmountNew;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_MoveLobbyItem
	 */
	struct USIGISInventoryComponent_Server_MoveLobbyItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0020(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0023(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_MoveItem
	 */
	struct USIGISInventoryComponent_Server_MoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0020(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0023(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_MergeStack
	 */
	struct USIGISInventoryComponent_Server_MergeStack_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UniqueItemGUIDMerge;                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              FromLoot;                                                // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ToLoot;                                                  // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_MenuMoveLobbyItem
	 */
	struct USIGISInventoryComponent_Server_MenuMoveLobbyItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0020(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0023(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_FoldBag
	 */
	struct USIGISInventoryComponent_Server_FoldBag_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_EquipItem
	 */
	struct USIGISInventoryComponent_Server_EquipItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEquipmentSlot                                             SlotTo;                                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_EquipAttachment
	 */
	struct USIGISInventoryComponent_Server_EquipAttachment_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UniqueItemGUIDAttachedTo;                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_DropItem
	 */
	struct USIGISInventoryComponent_Server_DropItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 IteToDrop;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_DropInHud
	 */
	struct USIGISInventoryComponent_Server_DropInHud_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_DestoryEquippedItem
	 */
	struct USIGISInventoryComponent_Server_DestoryEquippedItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_CtrlClickItem
	 */
	struct USIGISInventoryComponent_Server_CtrlClickItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_ColourItem
	 */
	struct USIGISInventoryComponent_Server_ColourItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewItem;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_CloseInventory
	 */
	struct USIGISInventoryComponent_Server_CloseInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_ChangeItemAmount
	 */
	struct USIGISInventoryComponent_Server_ChangeItemAmount_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AmountNew;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Inloot;                                                  // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_BuyItem
	 */
	struct USIGISInventoryComponent_Server_BuyItem_Params
	{
	public:
		class FName                                                ItemData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StackAmount;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Condition;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  OriginSlot;                                              // 0x0020(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_18RP[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ShouldRotate;                                            // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_BatchAddItems
	 */
	struct USIGISInventoryComponent_Server_BatchAddItems_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsIn;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_AssignToQuickSlot
	 */
	struct USIGISInventoryComponent_Server_AssignToQuickSlot_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotNumber;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ClearSlot;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_AdjustShopInventory
	 */
	struct USIGISInventoryComponent_Server_AdjustShopInventory_Params
	{
	public:
		class FName                                                ItemToRemove;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_AdjustMoney
	 */
	struct USIGISInventoryComponent_Server_AdjustMoney_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Server_AddItem
	 */
	struct USIGISInventoryComponent_Server_AddItem_Params
	{
	public:
		class FName                                                ItemData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StackAmount;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Condition;                                               // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  OriginSlot;                                              // 0x0020(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       IsALoad;                                                 // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3RFW[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SpecificUUID;                                            // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AU36[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AttachmentsOn;                                           // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxDuribilityIn;                                         // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootRemoveItem
	 */
	struct USIGISInventoryComponent_LootRemoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootRemoveBatchItems
	 */
	struct USIGISInventoryComponent_LootRemoveBatchItems_Params
	{
	public:
		TArray<class FString>                                      UniqueItemGUIDs;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootMoveItem
	 */
	struct USIGISInventoryComponent_LootMoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0020(0x0002)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5J7R[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bRotate;                                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootCompRemoveItem
	 */
	struct USIGISInventoryComponent_LootCompRemoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootCompMoveItem
	 */
	struct USIGISInventoryComponent_LootCompMoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0020(0x0002)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T2ZM[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bRotate;                                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootCompAmountItem
	 */
	struct USIGISInventoryComponent_LootCompAmountItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewAmount;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootCompAddItem
	 */
	struct USIGISInventoryComponent_LootCompAddItem_Params
	{
	public:
		struct FInventoryItemStruct                                ItemAdded;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootAmountItem
	 */
	struct USIGISInventoryComponent_LootAmountItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewAmount;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootAddItemStruct
	 */
	struct USIGISInventoryComponent_LootAddItemStruct_Params
	{
	public:
		struct FInventoryItemStruct                                ItemIn;                                                  // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootAddItem
	 */
	struct USIGISInventoryComponent_LootAddItem_Params
	{
	public:
		struct FInventoryItemStruct                                ItemAdded;                                               // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootAddBatchItemStruct
	 */
	struct USIGISInventoryComponent_LootAddBatchItemStruct_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemIn;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.LootActorPickedup
	 */
	struct USIGISInventoryComponent_LootActorPickedup_Params
	{
	public:
		class ASIGISBaseActor*                                     Actorpicked;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateStashInventory
	 */
	struct USIGISInventoryComponent_Client_ValidateStashInventory_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsToAdd;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateInvCon
	 */
	struct USIGISInventoryComponent_Client_ValidateInvCon_Params
	{
	public:
		class FString                                              ToCon;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInventoryItemStruct>                        ItemsToAdd;                                              // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateEquippedInventory
	 */
	struct USIGISInventoryComponent_Client_ValidateEquippedInventory_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsToAdd;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_UnlockLootItem
	 */
	struct USIGISInventoryComponent_Client_UnlockLootItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_SwapItem
	 */
	struct USIGISInventoryComponent_Client_SwapItem_Params
	{
	public:
		class FString                                              UniqueItemGUIDFrom;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              UniqueItemGUIDTo;                                        // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  MovedToSlot;                                             // 0x0022(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_StoreDisconnectItems
	 */
	struct USIGISInventoryComponent_Client_StoreDisconnectItems_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsIn;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_StartShoppingMenu
	 */
	struct USIGISInventoryComponent_Client_StartShoppingMenu_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_SetItemRotated
	 */
	struct USIGISInventoryComponent_Client_SetItemRotated_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveShopItem
	 */
	struct USIGISInventoryComponent_Client_RemoveShopItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLootItem
	 */
	struct USIGISInventoryComponent_Client_RemoveLootItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLootBatchItems
	 */
	struct USIGISInventoryComponent_Client_RemoveLootBatchItems_Params
	{
	public:
		TArray<class FString>                                      UniqueItemGUIDs;                                         // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLobbyItem
	 */
	struct USIGISInventoryComponent_Client_RemoveLobbyItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveItem
	 */
	struct USIGISInventoryComponent_Client_RemoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveGiftItem
	 */
	struct USIGISInventoryComponent_Client_RemoveGiftItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_OpenInventory
	 */
	struct USIGISInventoryComponent_Client_OpenInventory_Params
	{
	public:
		ELootWindowState                                           LootWinState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6R7V[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ConActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_NoSpaceInInventory
	 */
	struct USIGISInventoryComponent_Client_NoSpaceInInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_MoveItem
	 */
	struct USIGISInventoryComponent_Client_MoveItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0020(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0023(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    bRotate;                                                 // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_LootActorPickedup
	 */
	struct USIGISInventoryComponent_Client_LootActorPickedup_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_Loaded
	 */
	struct USIGISInventoryComponent_Client_Loaded_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_GetOutWithLootAndShip
	 */
	struct USIGISInventoryComponent_Client_GetOutWithLootAndShip_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ShipsItem;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInventoryItemStruct                                ship;                                                    // 0x0010(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_GetOutWithLoot
	 */
	struct USIGISInventoryComponent_Client_GetOutWithLoot_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_FoldBag
	 */
	struct USIGISInventoryComponent_Client_FoldBag_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_EndLooting
	 */
	struct USIGISInventoryComponent_Client_EndLooting_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_ColourItem
	 */
	struct USIGISInventoryComponent_Client_ColourItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NewItem;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_ChangeItemAmount
	 */
	struct USIGISInventoryComponent_Client_ChangeItemAmount_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AmountNew;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_BatchAddLootItems
	 */
	struct USIGISInventoryComponent_Client_BatchAddLootItems_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsIn;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_BatchAddItems
	 */
	struct USIGISInventoryComponent_Client_BatchAddItems_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsIn;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AssignToQuickSlot
	 */
	struct USIGISInventoryComponent_Client_AssignToQuickSlot_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotNumber;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ClearSlot;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddShopItem
	 */
	struct USIGISInventoryComponent_Client_AddShopItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ItemData;                                                // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StackAmount;                                             // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Condition;                                               // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0030(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItemStruct
	 */
	struct USIGISInventoryComponent_Client_AddLootItemStruct_Params
	{
	public:
		struct FInventoryItemStruct                                ItemIn;                                                  // 0x0000(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItemsStruct
	 */
	struct USIGISInventoryComponent_Client_AddLootItemsStruct_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        ItemsIn;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItem
	 */
	struct USIGISInventoryComponent_Client_AddLootItem_Params
	{
	public:
		struct FInventoryItemStruct                                ItemIn;                                                  // 0x0000(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddLobbyItem
	 */
	struct USIGISInventoryComponent_Client_AddLobbyItem_Params
	{
	public:
		struct FInventoryItemStruct                                ItemIn;                                                  // 0x0000(0x0050)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddItem
	 */
	struct USIGISInventoryComponent_Client_AddItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ItemData;                                                // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StackAmount;                                             // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Condition;                                               // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0030(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O8GB[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    bRotate;                                                 // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              AttachmentsOn;                                           // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryComponent.Client_AddGiftItem
	 */
	struct USIGISInventoryComponent_Client_AddGiftItem_Params
	{
	public:
		class FString                                              UniqueItemGUID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ItemData;                                                // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    StackAmount;                                             // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Condition;                                               // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ToCon;                                                   // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0030(0x0002)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.IsALootBox
	 */
	struct ASIGISInventoryItem_IsALootBox_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetSquareIcon
	 */
	struct ASIGISInventoryItem_GetSquareIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetQualityTierTextColor
	 */
	struct ASIGISInventoryItem_GetQualityTierTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetQualityTierColor
	 */
	struct ASIGISInventoryItem_GetQualityTierColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetItemName
	 */
	struct ASIGISInventoryItem_GetItemName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetInventoryUseTooltipText
	 */
	struct ASIGISInventoryItem_GetInventoryUseTooltipText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetInteractionSound
	 */
	struct ASIGISInventoryItem_GetInteractionSound_Params
	{
	public:
		class USoundCue*                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetIcon
	 */
	struct ASIGISInventoryItem_GetIcon_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetGridSizeVector
	 */
	struct ASIGISInventoryItem_GetGridSizeVector_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISInventoryItem.GetFlavorText
	 */
	struct ASIGISInventoryItem_GetFlavorText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISLootSingleSpawner.TriggerSpawn
	 */
	struct ASIGISLootSingleSpawner_TriggerSpawn_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISNak_GetAccount.GetUserAccount
	 */
	struct USIGISNak_GetAccount_GetUserAccount_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              userId;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SuccessDelegate;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ErrorDelegate;                                           // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class USIGISNak_GetAccount*                                ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISNak_GetGroupInfo.GetGroupMembers
	 */
	struct USIGISNak_GetGroupInfo_GetGroupMembers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              GroupIdIn;                                               // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SuccessDelegate;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ErrorDelegate;                                           // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class USIGISNak_GetGroupInfo*                              ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISNak_GetMyCrews.GetMyGroups
	 */
	struct USIGISNak_GetMyCrews_GetMyGroups_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SuccessDelegate;                                         // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ErrorDelegate;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class USIGISNak_GetMyCrews*                                ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISNak_Rpc.SigNak_RPC
	 */
	struct USIGISNak_Rpc_SigNak_RPC_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              RpcFunctionName;                                         // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              JsonMsgBody;                                             // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      SuccessDelegate;                                         // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      ErrorDelegate;                                           // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class USIGISNak_Rpc*                                       ReturnValue;                                             // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.SetTypeShape
	 */
	struct USIGISPlatformLibrary_SetTypeShape_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.IsPendingInfoOnUser
	 */
	struct USIGISPlatformLibrary_IsPendingInfoOnUser_Params
	{
	public:
		class FString                                              SteamIDIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.InvitePlatformFriends
	 */
	struct USIGISPlatformLibrary_InvitePlatformFriends_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.HasSteamDLC
	 */
	struct USIGISPlatformLibrary_HasSteamDLC_Params
	{
	public:
		class FString                                              AppIDIn;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetSteamIsRunning
	 */
	struct USIGISPlatformLibrary_GetSteamIsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetSteamFriendAvatar
	 */
	struct USIGISPlatformLibrary_GetSteamFriendAvatar_Params
	{
	public:
		class FString                                              SteamIDIn;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintAsyncResultSwitch                                Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESteamAvatarSize                                           AvatarSize;                                              // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_585V[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetSteamActivatedLanguage
	 */
	struct USIGISPlatformLibrary_GetSteamActivatedLanguage_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerNameFromSteamID
	 */
	struct USIGISPlatformLibrary_GetPlatformPlayerNameFromSteamID_Params
	{
	public:
		class FString                                              SteamIDIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerName
	 */
	struct USIGISPlatformLibrary_GetPlatformPlayerName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerID
	 */
	struct USIGISPlatformLibrary_GetPlatformPlayerID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformFriendAvatar
	 */
	struct USIGISPlatformLibrary_GetPlatformFriendAvatar_Params
	{
	public:
		class FString                                              SteamIDIn;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformBuildType
	 */
	struct USIGISPlatformLibrary_GetPlatformBuildType_Params
	{
	public:
		EPlatformBuild                                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformAvatar
	 */
	struct USIGISPlatformLibrary_GetPlatformAvatar_Params
	{
	public:
		class UTexture2D*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformAppID
	 */
	struct USIGISPlatformLibrary_GetPlatformAppID_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlatformLibrary.GetIsBuildDebugBuild
	 */
	struct USIGISPlatformLibrary_GetIsBuildDebugBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.World_PickedUpItem
	 */
	struct ASIGISPlayerController_World_PickedUpItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.World_DroppedItem
	 */
	struct ASIGISPlayerController_World_DroppedItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.WipePlayerShips
	 */
	struct ASIGISPlayerController_WipePlayerShips_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.UnlockPrestigeUnlock
	 */
	struct ASIGISPlayerController_UnlockPrestigeUnlock_Params
	{
	public:
		class FString                                              PresTOUnlock;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.UnlockedSkill
	 */
	struct ASIGISPlayerController_UnlockedSkill_Params
	{
	public:
		int32_t                                                    SKillNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.UILeveledUP
	 */
	struct ASIGISPlayerController_UILeveledUP_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.UI_StartedDrag
	 */
	struct ASIGISPlayerController_UI_StartedDrag_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.UI_EndedDrag
	 */
	struct ASIGISPlayerController_UI_EndedDrag_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TravelToMap
	 */
	struct ASIGISPlayerController_TravelToMap_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.testUserIn
	 */
	struct ASIGISPlayerController_testUserIn_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestSocketMessage
	 */
	struct ASIGISPlayerController_TestSocketMessage_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestSocket
	 */
	struct ASIGISPlayerController_TestSocket_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestNewMMCancel
	 */
	struct ASIGISPlayerController_TestNewMMCancel_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestNewMM
	 */
	struct ASIGISPlayerController_TestNewMM_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestNaughtyList
	 */
	struct ASIGISPlayerController_TestNaughtyList_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestNakama
	 */
	struct ASIGISPlayerController_TestNakama_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestJoinServerMitchell
	 */
	struct ASIGISPlayerController_TestJoinServerMitchell_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestJoinServerLocal
	 */
	struct ASIGISPlayerController_TestJoinServerLocal_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestGetMyLB
	 */
	struct ASIGISPlayerController_TestGetMyLB_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestGetAllLB
	 */
	struct ASIGISPlayerController_TestGetAllLB_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.TestAddKillLB
	 */
	struct ASIGISPlayerController_TestAddKillLB_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StopQuickUse
	 */
	struct ASIGISPlayerController_StopQuickUse_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StopQuickInput
	 */
	struct ASIGISPlayerController_StopQuickInput_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StopDiscardInputDown
	 */
	struct ASIGISPlayerController_StopDiscardInputDown_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StartQuickUse
	 */
	struct ASIGISPlayerController_StartQuickUse_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StartQuickInput
	 */
	struct ASIGISPlayerController_StartQuickInput_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StartMission
	 */
	struct ASIGISPlayerController_StartMission_Params
	{
	public:
		class FName                                                MissionRow;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StartDiscardInputDown
	 */
	struct ASIGISPlayerController_StartDiscardInputDown_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.StartColouringOptions
	 */
	struct ASIGISPlayerController_StartColouringOptions_Params
	{
	public:
		struct FColouringInfo                                      COptions;                                                // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGWipePlayerInventory
	 */
	struct ASIGISPlayerController_SIGWipePlayerInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGWipePlayerData
	 */
	struct ASIGISPlayerController_SIGWipePlayerData_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGUnlockRecipe
	 */
	struct ASIGISPlayerController_SIGUnlockRecipe_Params
	{
	public:
		unsigned char                                              recipenum;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGTestSteamFriends
	 */
	struct ASIGISPlayerController_SIGTestSteamFriends_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGTestDynamoDB
	 */
	struct ASIGISPlayerController_SIGTestDynamoDB_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGTestClose
	 */
	struct ASIGISPlayerController_SIGTestClose_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGGiveStartingItems
	 */
	struct ASIGISPlayerController_SIGGiveStartingItems_Params
	{
	public:
		bool                                                       VIP;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGClearOldLobbyItems
	 */
	struct ASIGISPlayerController_SIGClearOldLobbyItems_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGAddXp
	 */
	struct ASIGISPlayerController_SIGAddXp_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGAddTestItem
	 */
	struct ASIGISPlayerController_SIGAddTestItem_Params
	{
	public:
		class FString                                              ItemToAdd;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGAddShip
	 */
	struct ASIGISPlayerController_SIGAddShip_Params
	{
	public:
		class FName                                                ShipToAdd;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGAddPoints
	 */
	struct ASIGISPlayerController_SIGAddPoints_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIGAddCash
	 */
	struct ASIGISPlayerController_SIGAddCash_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_ToggleSnap
	 */
	struct ASIGISPlayerController_SIG_ToggleSnap_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TetstCall
	 */
	struct ASIGISPlayerController_SIG_TetstCall_Params
	{
	public:
		int32_t                                                    callID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TesttOS
	 */
	struct ASIGISPlayerController_SIG_TesttOS_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionStart
	 */
	struct ASIGISPlayerController_SIG_TestGDKSessionStart_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionInfo
	 */
	struct ASIGISPlayerController_SIG_TestGDKSessionInfo_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionEnd
	 */
	struct ASIGISPlayerController_SIG_TestGDKSessionEnd_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKFriends
	 */
	struct ASIGISPlayerController_SIG_TestGDKFriends_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKExternalInvite
	 */
	struct ASIGISPlayerController_SIG_TestGDKExternalInvite_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_StartLag
	 */
	struct ASIGISPlayerController_SIG_StartLag_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_StartEOS
	 */
	struct ASIGISPlayerController_SIG_StartEOS_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_StartCreateLobby
	 */
	struct ASIGISPlayerController_SIG_StartCreateLobby_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_SetDebugReport
	 */
	struct ASIGISPlayerController_SIG_SetDebugReport_Params
	{
	public:
		class FString                                              EOSIdToReport;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_Relog
	 */
	struct ASIGISPlayerController_SIG_Relog_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_PushIntCommandToServer
	 */
	struct ASIGISPlayerController_SIG_PushIntCommandToServer_Params
	{
	public:
		int32_t                                                    CommandInt;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_PushCommandToServer
	 */
	struct ASIGISPlayerController_SIG_PushCommandToServer_Params
	{
	public:
		class FString                                              CommandString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_GetEOSAUTH
	 */
	struct ASIGISPlayerController_SIG_GetEOSAUTH_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_FindServer
	 */
	struct ASIGISPlayerController_SIG_FindServer_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_CreateFakePLayers
	 */
	struct ASIGISPlayerController_SIG_CreateFakePLayers_Params
	{
	public:
		int32_t                                                    NumPlayers;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_ClearDeviceID
	 */
	struct ASIGISPlayerController_SIG_ClearDeviceID_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SIG_CancelFind
	 */
	struct ASIGISPlayerController_SIG_CancelFind_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetUnlockingHovered
	 */
	struct ASIGISPlayerController_SetUnlockingHovered_Params
	{
	public:
		bool                                                       OverScrapping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetToggleCrouch
	 */
	struct ASIGISPlayerController_SetToggleCrouch_Params
	{
	public:
		bool                                                       ShouldToggle;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetToggleADS
	 */
	struct ASIGISPlayerController_SetToggleADS_Params
	{
	public:
		bool                                                       ShouldToggle;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetScrappingHovered
	 */
	struct ASIGISPlayerController_SetScrappingHovered_Params
	{
	public:
		bool                                                       OverScrapping;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetRepairHovered
	 */
	struct ASIGISPlayerController_SetRepairHovered_Params
	{
	public:
		bool                                                       OverRepairing;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetPlayerUnlockCos
	 */
	struct ASIGISPlayerController_SetPlayerUnlockCos_Params
	{
	public:
		class FName                                                Cosmetic;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetPlayerCosHead
	 */
	struct ASIGISPlayerController_SetPlayerCosHead_Params
	{
	public:
		class FName                                                head;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetPlayerCosBody
	 */
	struct ASIGISPlayerController_SetPlayerCosBody_Params
	{
	public:
		class FName                                                Body;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SetColouringHovered
	 */
	struct ASIGISPlayerController_SetColouringHovered_Params
	{
	public:
		bool                                                       OverColouring;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_StartLag
	 */
	struct ASIGISPlayerController_Server_StartLag_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_SIGPushCommandToServer
	 */
	struct ASIGISPlayerController_Server_SIGPushCommandToServer_Params
	{
	public:
		class FString                                              CommandString;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_SIGCreateFakePLayers
	 */
	struct ASIGISPlayerController_Server_SIGCreateFakePLayers_Params
	{
	public:
		int32_t                                                    NumPlayers;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_SIG_PushIntCommandToServer
	 */
	struct ASIGISPlayerController_Server_SIG_PushIntCommandToServer_Params
	{
	public:
		int32_t                                                    CommandString;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_SendShipItems
	 */
	struct ASIGISPlayerController_Server_SendShipItems_Params
	{
	public:
		TArray<struct FInventoryItemStruct>                        LobbyItemsIn;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_CashChange
	 */
	struct ASIGISPlayerController_Server_CashChange_Params
	{
	public:
		int32_t                                                    ChangeAmount;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_AwsN_EquippedplayerCosmeticsReturned
	 */
	struct ASIGISPlayerController_Server_AwsN_EquippedplayerCosmeticsReturned_Params
	{
	public:
		class FString                                              returnedItems;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Server_AwsN_EquippedItemsReturned
	 */
	struct ASIGISPlayerController_Server_AwsN_EquippedItemsReturned_Params
	{
	public:
		class FString                                              returnedItems;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SeclickPressed
	 */
	struct ASIGISPlayerController_SeclickPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.SecClickUnPressed
	 */
	struct ASIGISPlayerController_SecClickUnPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.RemovePrestigeUnlock
	 */
	struct ASIGISPlayerController_RemovePrestigeUnlock_Params
	{
	public:
		class FString                                              RemovedPres;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.RemoveGiftItem
	 */
	struct ASIGISPlayerController_RemoveGiftItem_Params
	{
	public:
		class FString                                              ItemToRemove;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.RefreshActiveRecipeInfo
	 */
	struct ASIGISPlayerController_RefreshActiveRecipeInfo_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.PrimClickUnPressed
	 */
	struct ASIGISPlayerController_PrimClickUnPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.PrimClickPressed
	 */
	struct ASIGISPlayerController_PrimClickPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.PrestigeWipeItems
	 */
	struct ASIGISPlayerController_PrestigeWipeItems_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.PresteigeZeroOutPlayerCashCraftingSkills
	 */
	struct ASIGISPlayerController_PresteigeZeroOutPlayerCashCraftingSkills_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.PlayerHasNoWeaponEquipped
	 */
	struct ASIGISPlayerController_PlayerHasNoWeaponEquipped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnUsedItemEvent
	 */
	struct ASIGISPlayerController_OnUsedItemEvent_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnUpDateMission
	 */
	struct ASIGISPlayerController_OnUpDateMission_Params
	{
	public:
		class FName                                                MissionRowUpdated;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnUpDateChapterMission
	 */
	struct ASIGISPlayerController_OnUpDateChapterMission_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XB2A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                RowName;                                                 // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnShowUIDestroyPrompt
	 */
	struct ASIGISPlayerController_OnShowUIDestroyPrompt_Params
	{
	public:
		class FString                                              ItemUID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ItemData;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnMutatedItem
	 */
	struct ASIGISPlayerController_OnMutatedItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnItemRepaired
	 */
	struct ASIGISPlayerController_OnItemRepaired_Params
	{
	public:
		class FName                                                ItemData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnInventoryKeyPressed
	 */
	struct ASIGISPlayerController_OnInventoryKeyPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnHealingAnimStopped
	 */
	struct ASIGISPlayerController_OnHealingAnimStopped_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnHealingAnimStarted
	 */
	struct ASIGISPlayerController_OnHealingAnimStarted_Params
	{
	public:
		class FName                                                ItemRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealingTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnEscapeKeyPressed
	 */
	struct ASIGISPlayerController_OnEscapeKeyPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OnAntiCheatCheck
	 */
	struct ASIGISPlayerController_OnAntiCheatCheck_Params
	{
	public:
		bool                                                       HasAntiCheat;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEOSEAntiCheatClientViolationType                          ViolationOut;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DIYK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ViolationDetails;                                        // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.OfficeTravelToMap
	 */
	struct ASIGISPlayerController_OfficeTravelToMap_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.MenuOpenMouseInput
	 */
	struct ASIGISPlayerController_MenuOpenMouseInput_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.LoadTextureReference
	 */
	struct ASIGISPlayerController_LoadTextureReference_Params
	{
	public:
		class FString                                              TexturePath;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ItemAttemptedToScrap
	 */
	struct ASIGISPlayerController_ItemAttemptedToScrap_Params
	{
	public:
		class FName                                                ItemData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ScrapSuccesful;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IsMissionReadyToCollect
	 */
	struct ASIGISPlayerController_IsMissionReadyToCollect_Params
	{
	public:
		class FName                                                MissionRow;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IsEditorInstance
	 */
	struct ASIGISPlayerController_IsEditorInstance_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IsChapterMissionReadyToCollect
	 */
	struct ASIGISPlayerController_IsChapterMissionReadyToCollect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ISaVIPPlayer
	 */
	struct ASIGISPlayerController_ISaVIPPlayer_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IsATestBuild
	 */
	struct ASIGISPlayerController_IsATestBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IsADevBuild
	 */
	struct ASIGISPlayerController_IsADevBuild_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IncrementMission
	 */
	struct ASIGISPlayerController_IncrementMission_Params
	{
	public:
		class FName                                                MissionRow;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IncrementChapterMission
	 */
	struct ASIGISPlayerController_IncrementChapterMission_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.IncreaseShipSize
	 */
	struct ASIGISPlayerController_IncreaseShipSize_Params
	{
	public:
		int32_t                                                    Shipslots;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.HealingEvent
	 */
	struct ASIGISPlayerController_HealingEvent_Params
	{
	public:
		EHealingOptions                                            HealEvent;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.HasRecipeUnlocked
	 */
	struct ASIGISPlayerController_HasRecipeUnlocked_Params
	{
	public:
		int32_t                                                    skillrecipnum;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.HasPlayerLoaded
	 */
	struct ASIGISPlayerController_HasPlayerLoaded_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetXPTillNextLevel
	 */
	struct ASIGISPlayerController_GetXPTillNextLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetXPForLevel
	 */
	struct ASIGISPlayerController_GetXPForLevel_Params
	{
	public:
		int32_t                                                    LvlToCheck;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetXP
	 */
	struct ASIGISPlayerController_GetXP_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetTotalInventoryIncrease
	 */
	struct ASIGISPlayerController_GetTotalInventoryIncrease_Params
	{
	public:
		struct FInventoryGridPair                                  ReturnValue;                                             // 0x0000(0x0002)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetRepairInfo
	 */
	struct ASIGISPlayerController_GetRepairInfo_Params
	{
	public:
		struct FRepairInfo                                         ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetPrestigeCusomitations
	 */
	struct ASIGISPlayerController_GetPrestigeCusomitations_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetPrestige
	 */
	struct ASIGISPlayerController_GetPrestige_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetPresigeShipSizeIncrease
	 */
	struct ASIGISPlayerController_GetPresigeShipSizeIncrease_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetPresigeRecipes
	 */
	struct ASIGISPlayerController_GetPresigeRecipes_Params
	{
	public:
		TArray<int32_t>                                            ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetPlayersLevel
	 */
	struct ASIGISPlayerController_GetPlayersLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetPlayerPoints
	 */
	struct ASIGISPlayerController_GetPlayerPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetMissionProgression
	 */
	struct ASIGISPlayerController_GetMissionProgression_Params
	{
	public:
		class FName                                                MissionToCheck;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetMissionInfo
	 */
	struct ASIGISPlayerController_GetMissionInfo_Params
	{
	public:
		TArray<class FName>                                        AvailableMissions;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        MissionsInProgress;                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                                        MissionsCollected;                                       // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetMeshForModule
	 */
	struct ASIGISPlayerController_GetMeshForModule_Params
	{
	public:
		class FName                                                ModuleItemData;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMesh*                                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetKeyForAction
	 */
	struct ASIGISPlayerController_GetKeyForAction_Params
	{
	public:
		class FName                                                ActionName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FInputActionKeyMapping>                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetItemArmourValue
	 */
	struct ASIGISPlayerController_GetItemArmourValue_Params
	{
	public:
		class ASIGISInventoryItem*                                 ItemFrom;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetFactionXPtoLevel
	 */
	struct ASIGISPlayerController_GetFactionXPtoLevel_Params
	{
	public:
		int32_t                                                    XPIn;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetFactionXPTillNextLevel
	 */
	struct ASIGISPlayerController_GetFactionXPTillNextLevel_Params
	{
	public:
		EFactionType                                               FactionIn;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A6ZG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetFactionXPForLevel
	 */
	struct ASIGISPlayerController_GetFactionXPForLevel_Params
	{
	public:
		int32_t                                                    LvlToCheck;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetFactionLevel
	 */
	struct ASIGISPlayerController_GetFactionLevel_Params
	{
	public:
		EFactionType                                               FactionIn;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ABPP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetDeliverMissionAmount
	 */
	struct ASIGISPlayerController_GetDeliverMissionAmount_Params
	{
	public:
		class FName                                                MissionRow;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetCurrentShopNumber
	 */
	struct ASIGISPlayerController_GetCurrentShopNumber_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetCurrentFactionShopDiscount
	 */
	struct ASIGISPlayerController_GetCurrentFactionShopDiscount_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetCurrentChapterMission
	 */
	struct ASIGISPlayerController_GetCurrentChapterMission_Params
	{
	public:
		int32_t                                                    Progress;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QO60[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FChapterMissionUI                                   ReturnValue;                                             // 0x0008(0x0138)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetConnectionExtraOptions
	 */
	struct ASIGISPlayerController_GetConnectionExtraOptions_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetColouringInfo
	 */
	struct ASIGISPlayerController_GetColouringInfo_Params
	{
	public:
		struct FColouringInfo                                      ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetChapterMissionAmount
	 */
	struct ASIGISPlayerController_GetChapterMissionAmount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetCash
	 */
	struct ASIGISPlayerController_GetCash_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetAllPrestigeUnlocks
	 */
	struct ASIGISPlayerController_GetAllPrestigeUnlocks_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetAllMissionsForChapters
	 */
	struct ASIGISPlayerController_GetAllMissionsForChapters_Params
	{
	public:
		class FString                                              ChapterPrefix;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FChapterMissionUI>                           ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.GetActiveFrigate
	 */
	struct ASIGISPlayerController_GetActiveFrigate_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.FocusUIAndGame
	 */
	struct ASIGISPlayerController_FocusUIAndGame_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.FocusGame
	 */
	struct ASIGISPlayerController_FocusGame_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.FadeOut
	 */
	struct ASIGISPlayerController_FadeOut_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.FadeIn
	 */
	struct ASIGISPlayerController_FadeIn_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DynamoTestSet
	 */
	struct ASIGISPlayerController_DynamoTestSet_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DynamoTesthasUserTrue
	 */
	struct ASIGISPlayerController_DynamoTesthasUserTrue_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DynamoTesthasUserFalse
	 */
	struct ASIGISPlayerController_DynamoTesthasUserFalse_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DynamoTestGetUserScore
	 */
	struct ASIGISPlayerController_DynamoTestGetUserScore_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DynamoTestGet
	 */
	struct ASIGISPlayerController_DynamoTestGet_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DynamoTestCreateUser
	 */
	struct ASIGISPlayerController_DynamoTestCreateUser_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DitchAllItemsFromDataBase
	 */
	struct ASIGISPlayerController_DitchAllItemsFromDataBase_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DebugRestartChapterMissions
	 */
	struct ASIGISPlayerController_DebugRestartChapterMissions_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DebugIncremmentChapterMissions
	 */
	struct ASIGISPlayerController_DebugIncremmentChapterMissions_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DebugIncremmentChapterMissionProgress
	 */
	struct ASIGISPlayerController_DebugIncremmentChapterMissionProgress_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.DebugGiveActiveTestQuest
	 */
	struct ASIGISPlayerController_DebugGiveActiveTestQuest_Params
	{
	public:
		class FString                                              MissonRow;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Debug_SetShopStage
	 */
	struct ASIGISPlayerController_Debug_SetShopStage_Params
	{
	public:
		int32_t                                                    ShopKeeper;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ConfirmDestroyItem
	 */
	struct ASIGISPlayerController_ConfirmDestroyItem_Params
	{
	public:
		class FString                                              ItemUID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ColourItem
	 */
	struct ASIGISPlayerController_ColourItem_Params
	{
	public:
		class FString                                              UColourID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ColourToUse;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CollectMissionReward
	 */
	struct ASIGISPlayerController_CollectMissionReward_Params
	{
	public:
		class FName                                                MissionRow;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CollectChapterMission
	 */
	struct ASIGISPlayerController_CollectChapterMission_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CloseInventory
	 */
	struct ASIGISPlayerController_CloseInventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_UsedItemEvent
	 */
	struct ASIGISPlayerController_Client_UsedItemEvent_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_UIPromt
	 */
	struct ASIGISPlayerController_Client_UIPromt_Params
	{
	public:
		class FString                                              MessageIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_StopHealingAnim
	 */
	struct ASIGISPlayerController_Client_StopHealingAnim_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_ShowLevel
	 */
	struct ASIGISPlayerController_Client_ShowLevel_Params
	{
	public:
		class FString                                              LevelIn;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LevelShow;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_ReturnPushMessage
	 */
	struct ASIGISPlayerController_Client_ReturnPushMessage_Params
	{
	public:
		class FString                                              MessageIn;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_RemoveEquippedItems
	 */
	struct ASIGISPlayerController_Client_RemoveEquippedItems_Params
	{
	public:
		TArray<class FString>                                      ItemIds;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_PickedUpItem
	 */
	struct ASIGISPlayerController_Client_PickedUpItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_MutateItem
	 */
	struct ASIGISPlayerController_Client_MutateItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_HealingEvent
	 */
	struct ASIGISPlayerController_Client_HealingEvent_Params
	{
	public:
		EHealingOptions                                            HealEvent;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_HealingAnim
	 */
	struct ASIGISPlayerController_Client_HealingAnim_Params
	{
	public:
		class FName                                                ItemRow;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      HealingTime;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_GetShipLobbyStash
	 */
	struct ASIGISPlayerController_Client_GetShipLobbyStash_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_GetEquippedItems
	 */
	struct ASIGISPlayerController_Client_GetEquippedItems_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_DroppedItem
	 */
	struct ASIGISPlayerController_Client_DroppedItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_DestroyPrompt
	 */
	struct ASIGISPlayerController_Client_DestroyPrompt_Params
	{
	public:
		class FString                                              ItemUID;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ItemData;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.Client_CheckMissionEvent
	 */
	struct ASIGISPlayerController_Client_CheckMissionEvent_Params
	{
	public:
		class FName                                                MessageIn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EContractType                                              ContracyType;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ClearXP
	 */
	struct ASIGISPlayerController_ClearXP_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ClearPresigeUnlocks
	 */
	struct ASIGISPlayerController_ClearPresigeUnlocks_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.ClearDailyMissions
	 */
	struct ASIGISPlayerController_ClearDailyMissions_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CantUnFoldNoSpace
	 */
	struct ASIGISPlayerController_CantUnFoldNoSpace_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CantFoldItemsInside
	 */
	struct ASIGISPlayerController_CantFoldItemsInside_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CanCollectCurrentMissionLoot
	 */
	struct ASIGISPlayerController_CanCollectCurrentMissionLoot_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.CanCollectCurrentContractLoot
	 */
	struct ASIGISPlayerController_CanCollectCurrentContractLoot_Params
	{
	public:
		class FName                                                MissionRow;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.BrokeItem
	 */
	struct ASIGISPlayerController_BrokeItem_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.BP_CloseEvenventory
	 */
	struct ASIGISPlayerController_BP_CloseEvenventory_Params
	{	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.AddXpToFaction
	 */
	struct ASIGISPlayerController_AddXpToFaction_Params
	{
	public:
		EFactionType                                               FactionIn;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D3YI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    XpAmount;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.AddXP
	 */
	struct ASIGISPlayerController_AddXP_Params
	{
	public:
		int32_t                                                    XPIn;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.AddPrestige
	 */
	struct ASIGISPlayerController_AddPrestige_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISPlayerController.AddPoints
	 */
	struct ASIGISPlayerController_AddPoints_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SIGISRenderActor.GetRenderMat
	 */
	struct ASIGISRenderActor_GetRenderMat_Params
	{
	public:
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SkillTreeWidgetItem.UnlockSkill
	 */
	struct USkillTreeWidgetItem_UnlockSkill_Params
	{	};

	/**
	 * Function SIGISPlugin.SkillTreeWidgetItem.IsSkillUnlocked
	 */
	struct USkillTreeWidgetItem_IsSkillUnlocked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.SkillTreeWidgetItem.CanUnlock
	 */
	struct USkillTreeWidgetItem_CanUnlock_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneration.SaveThumbnail
	 */
	struct UThumbnailGeneration_SaveThumbnail_Params
	{
	public:
		class UTexture2D*                                          Thumbnail;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FDirectoryPath                                      Directory;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneration.InitializeThumbnailWorld
	 */
	struct UThumbnailGeneration_InitializeThumbnailWorld_Params
	{	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneration.GetThumbnailWorld
	 */
	struct UThumbnailGeneration_GetThumbnailWorld_Params
	{
	public:
		class UWorld*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneration.GetThumbnailCaptureComponent
	 */
	struct UThumbnailGeneration_GetThumbnailCaptureComponent_Params
	{
	public:
		class USceneCaptureComponent2D*                            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneration.GenerateThumbnail_Synchronous
	 */
	struct UThumbnailGeneration_GenerateThumbnail_Synchronous_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECacheMethod                                               CacheMethod;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5FVF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FThumbnailSettings                                  ThumbnailSettings;                                       // 0x0010(0x0650)  (Parm, NativeAccessSpecifierPublic)
		class UTexture2D*                                          ReturnValue;                                             // 0x0660(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneration.CreateThumbnailGenerationProxyObject
	 */
	struct UThumbnailGeneration_CreateThumbnailGenerationProxyObject_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECacheMethod                                               CacheMethod;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_09S8[0xF];                                   // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FThumbnailSettings                                  ThumbnailSettings;                                       // 0x0020(0x0650)  (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
		class UThumbnailGenerationProxy*                           ReturnValue;                                             // 0x0670(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailSceneInterface.OnUpdateThumbnailScene
	 */
	struct UThumbnailSceneInterface_OnUpdateThumbnailScene_Params
	{
	public:
		struct FThumbnailSettings                                  ThumbnailSettings;                                       // 0x0000(0x0650)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailActorInterface.PreCaptureActorThumbnail
	 */
	struct UThumbnailActorInterface_PreCaptureActorThumbnail_Params
	{	};

	/**
	 * Function SIGISPlugin.ThumbnailActorInterface.GetThumbnailTransform
	 */
	struct UThumbnailActorInterface_GetThumbnailTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.ThumbnailGeneratorScript.PreCaptureActorThumbnail
	 */
	struct UThumbnailGeneratorScript_PreCaptureActorThumbnail_Params
	{
	public:
		class AActor*                                              ThumbnailActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.SetOptionArray
	 */
	struct UTooltipWidget_SetOptionArray_Params
	{
	public:
		TArray<EItemOptions>                                       SentItems;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.SetItem
	 */
	struct UTooltipWidget_SetItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsSplitMenu;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInventoryGridPair                                  ToSlot;                                                  // 0x0009(0x0002)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeTo;                                              // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ELCJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ToCon;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESlotType                                                  MovetypeFrom;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.SetButtonOptions
	 */
	struct UTooltipWidget_SetButtonOptions_Params
	{
	public:
		int32_t                                                    Button;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EItemOptions                                               OptionToSet;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.ProcessBtnPress
	 */
	struct UTooltipWidget_ProcessBtnPress_Params
	{
	public:
		EItemOptions                                               OptionIn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OpenWeaponWindow
	 */
	struct UTooltipWidget_OpenWeaponWindow_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OpenRig
	 */
	struct UTooltipWidget_OpenRig_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OpenBag
	 */
	struct UTooltipWidget_OpenBag_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnSplitStackBTNPressed
	 */
	struct UTooltipWidget_OnSplitStackBTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnRightClickOpen
	 */
	struct UTooltipWidget_OnRightClickOpen_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnOption5BTNPressed
	 */
	struct UTooltipWidget_OnOption5BTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnOption4BTNPressed
	 */
	struct UTooltipWidget_OnOption4BTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnOption3BTNPressed
	 */
	struct UTooltipWidget_OnOption3BTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnOption2BTNPressed
	 */
	struct UTooltipWidget_OnOption2BTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnOption1BTNPressed
	 */
	struct UTooltipWidget_OnOption1BTNPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.TooltipWidget.OnAmountSliderValueChanged
	 */
	struct UTooltipWidget_OnAmountSliderValueChanged_Params
	{
	public:
		float                                                      ValueChange;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.NameStorageCon
	 */
	struct UTooltipWidget_NameStorageCon_Params
	{
	public:
		class FString                                              NewName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.IsItemRepairable
	 */
	struct UTooltipWidget_IsItemRepairable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.IsItemColourable
	 */
	struct UTooltipWidget_IsItemColourable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.IsItemAKeyCard
	 */
	struct UTooltipWidget_IsItemAKeyCard_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.IsALockBox
	 */
	struct UTooltipWidget_IsALockBox_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.GetRepairCost
	 */
	struct UTooltipWidget_GetRepairCost_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.GetPotentialScrapItems
	 */
	struct UTooltipWidget_GetPotentialScrapItems_Params
	{
	public:
		TArray<struct FScrapItemRNG>                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.GetNameStorageCon
	 */
	struct UTooltipWidget_GetNameStorageCon_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.GetKeyCardInfo
	 */
	struct UTooltipWidget_GetKeyCardInfo_Params
	{
	public:
		class FString                                              CaptainsName;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShipName;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ShipType;                                                // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.Debug_DamageItem
	 */
	struct UTooltipWidget_Debug_DamageItem_Params
	{
	public:
		float                                                      amountDamge;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.TooltipWidget.CanItemBeScrapped
	 */
	struct UTooltipWidget_CanItemBeScrapped_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.WeaponWindowWidget.OnDragBorderMouseDown
	 */
	struct UWeaponWindowWidget_OnDragBorderMouseDown_Params
	{	};

	/**
	 * Function SIGISPlugin.WeaponWindowWidget.OnCloseButtonPressed
	 */
	struct UWeaponWindowWidget_OnCloseButtonPressed_Params
	{	};

	/**
	 * Function SIGISPlugin.WeaponWindowWidget.GetWeaponActor
	 */
	struct UWeaponWindowWidget_GetWeaponActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SIGISPlugin.WeaponWindowWidget.GetCurrentItem
	 */
	struct UWeaponWindowWidget_GetCurrentItem_Params
	{
	public:
		class ASIGISInventoryItem*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
