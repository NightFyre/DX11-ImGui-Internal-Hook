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
	 * 		Name   -> Function SIGISPlugin.AdminWidget.UserListReturned
	 * 		Flags  -> ()
	 */
	void UAdminWidget::UserListReturned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.UserListReturned");
		
		UAdminWidget_UserListReturned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.UserInfoReturned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUserInfo                                   UserInfoFetched                                            (Parm, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::UserInfoReturned(const struct FUserInfo& UserInfoFetched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.UserInfoReturned");
		
		UAdminWidget_UserInfoReturned_Params params {};
		params.UserInfoFetched = UserInfoFetched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.OnLogIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::OnLogIn(const class FString& username, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.OnLogIn");
		
		UAdminWidget_OnLogIn_Params params {};
		params.username = username;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.LoginSucces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::LoginSucces(bool failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.LoginSucces");
		
		UAdminWidget_LoginSucces_Params params {};
		params.failed = failed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.LoginReturned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SuccessLogin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::LoginReturned(bool SuccessLogin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.LoginReturned");
		
		UAdminWidget_LoginReturned_Params params {};
		params.SuccessLogin = SuccessLogin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.GiveSkillsToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Skills                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::GiveSkillsToPlayer(const class FString& userId, TArray<class FString> Skills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.GiveSkillsToPlayer");
		
		UAdminWidget_GiveSkillsToPlayer_Params params {};
		params.userId = userId;
		params.Skills = Skills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.GiveGiftsToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              GiftNames                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::GiveGiftsToPlayer(const class FString& userId, TArray<class FString> GiftNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.GiveGiftsToPlayer");
		
		UAdminWidget_GiveGiftsToPlayer_Params params {};
		params.userId = userId;
		params.GiftNames = GiftNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.GiveCosmeticsToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              Cosmetics                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::GiveCosmeticsToPlayer(const class FString& userId, TArray<class FString> Cosmetics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.GiveCosmeticsToPlayer");
		
		UAdminWidget_GiveCosmeticsToPlayer_Params params {};
		params.userId = userId;
		params.Cosmetics = Cosmetics;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.GetUsersFetched
	 * 		Flags  -> ()
	 */
	TArray<struct FUserList> UAdminWidget::GetUsersFetched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.GetUsersFetched");
		
		UAdminWidget_GetUsersFetched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_WipeUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_WipeUser(const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_WipeUser");
		
		UAdminWidget_Admin_WipeUser_Params params {};
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_WipeAllUsers
	 * 		Flags  -> ()
	 */
	void UAdminWidget::Admin_WipeAllUsers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_WipeAllUsers");
		
		UAdminWidget_Admin_WipeAllUsers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_SetUserXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountXP                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_SetUserXP(int32_t AmountXP, const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_SetUserXP");
		
		UAdminWidget_Admin_SetUserXP_Params params {};
		params.AmountXP = AmountXP;
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_SetUserPrestege
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountPres                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_SetUserPrestege(int32_t AmountPres, const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_SetUserPrestege");
		
		UAdminWidget_Admin_SetUserPrestege_Params params {};
		params.AmountPres = AmountPres;
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_SetUserPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountPoints                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_SetUserPoints(int32_t AmountPoints, const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_SetUserPoints");
		
		UAdminWidget_Admin_SetUserPoints_Params params {};
		params.AmountPoints = AmountPoints;
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_SetUserCash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountCash                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_SetUserCash(int32_t AmountCash, const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_SetUserCash");
		
		UAdminWidget_Admin_SetUserCash_Params params {};
		params.AmountCash = AmountCash;
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_GetUsersInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_GetUsersInfo(const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_GetUsersInfo");
		
		UAdminWidget_Admin_GetUsersInfo_Params params {};
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_GetAllUsers
	 * 		Flags  -> ()
	 */
	void UAdminWidget::Admin_GetAllUsers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_GetAllUsers");
		
		UAdminWidget_Admin_GetAllUsers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_EditItemToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Properties                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Equipped                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_EditItemToPlayer(const class FString& username, const class FString& ItemId, const class FString& Properties, bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_EditItemToPlayer");
		
		UAdminWidget_Admin_EditItemToPlayer_Params params {};
		params.username = username;
		params.ItemId = ItemId;
		params.Properties = Properties;
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_DeleteItemToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_DeleteItemToPlayer(const class FString& username, const class FString& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_DeleteItemToPlayer");
		
		UAdminWidget_Admin_DeleteItemToPlayer_Params params {};
		params.username = username;
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AdminWidget.Admin_AddItemToPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Properties                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Equipped                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdminWidget::Admin_AddItemToPlayer(const class FString& username, const class FString& ItemName, const class FString& Properties, bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AdminWidget.Admin_AddItemToPlayer");
		
		UAdminWidget_Admin_AddItemToPlayer_Params params {};
		params.username = username;
		params.ItemName = ItemName;
		params.Properties = Properties;
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdminWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdminWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.AdminWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AttachmentSlotWidget.OnEndItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachmentSlotWidget::OnEndItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AttachmentSlotWidget.OnEndItemDrag");
		
		UAttachmentSlotWidget_OnEndItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.AttachmentSlotWidget.OnBeginItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAttachmentSlotWidget::OnBeginItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.AttachmentSlotWidget.OnBeginItemDrag");
		
		UAttachmentSlotWidget_OnBeginItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachmentSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachmentSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.AttachmentSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingSlotWidget.OnEndItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingSlotWidget::OnEndItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingSlotWidget.OnEndItemDrag");
		
		UCraftingSlotWidget_OnEndItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingSlotWidget.OnBeginItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingSlotWidget::OnBeginItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingSlotWidget.OnBeginItemDrag");
		
		UCraftingSlotWidget_OnBeginItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingSlotWidget.ItemRemovedFromSlot
	 * 		Flags  -> ()
	 */
	void UCraftingSlotWidget::ItemRemovedFromSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingSlotWidget.ItemRemovedFromSlot");
		
		UCraftingSlotWidget_ItemRemovedFromSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingSlotWidget.ItemAddedToSlot
	 * 		Flags  -> ()
	 */
	void UCraftingSlotWidget::ItemAddedToSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingSlotWidget.ItemAddedToSlot");
		
		UCraftingSlotWidget_ItemAddedToSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingSlotWidget.IsSlotAbleToCraft
	 * 		Flags  -> ()
	 */
	bool UCraftingSlotWidget::IsSlotAbleToCraft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingSlotWidget.IsSlotAbleToCraft");
		
		UCraftingSlotWidget_IsSlotAbleToCraft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingSlotWidget.ChangeBg
	 * 		Flags  -> ()
	 */
	void UCraftingSlotWidget::ChangeBg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingSlotWidget.ChangeBg");
		
		UCraftingSlotWidget_ChangeBg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftingSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftingSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.CraftingSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.UnlockSkill
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::UnlockSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.UnlockSkill");
		
		UCraftingWidget_UnlockSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.UnlockedRecipe
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::UnlockedRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.UnlockedRecipe");
		
		UCraftingWidget_UnlockedRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.OnActiveBtnPressed
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::OnActiveBtnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.OnActiveBtnPressed");
		
		UCraftingWidget_OnActiveBtnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.IsRecipeUnlocked
	 * 		Flags  -> ()
	 */
	bool UCraftingWidget::IsRecipeUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.IsRecipeUnlocked");
		
		UCraftingWidget_IsRecipeUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.GetRoeHandle
	 * 		Flags  -> ()
	 */
	struct FDataTableRowHandle UCraftingWidget::GetRoeHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.GetRoeHandle");
		
		UCraftingWidget_GetRoeHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.GetRecipeIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* UCraftingWidget::GetRecipeIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.GetRecipeIcon");
		
		UCraftingWidget_GetRecipeIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.FinishedAssetLoad
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::FinishedAssetLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.FinishedAssetLoad");
		
		UCraftingWidget_FinishedAssetLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.FakePress
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::FakePress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.FakePress");
		
		UCraftingWidget_FakePress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.DeActiveRecipe
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::DeActiveRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.DeActiveRecipe");
		
		UCraftingWidget_DeActiveRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.CanUnlock
	 * 		Flags  -> ()
	 */
	bool UCraftingWidget::CanUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.CanUnlock");
		
		UCraftingWidget_CanUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.CraftingWidget.ActiveRecipe
	 * 		Flags  -> ()
	 */
	void UCraftingWidget::ActiveRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.CraftingWidget.ActiveRecipe");
		
		UCraftingWidget_ActiveRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftingWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftingWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.CraftingWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragAndDropItemWidget.WidgetsNewSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDragAndDropItemWidget::WidgetsNewSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragAndDropItemWidget.WidgetsNewSize");
		
		UDragAndDropItemWidget_WidgetsNewSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragAndDropItemWidget.StaticImageLoaded
	 * 		Flags  -> ()
	 */
	void UDragAndDropItemWidget::StaticImageLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragAndDropItemWidget.StaticImageLoaded");
		
		UDragAndDropItemWidget_StaticImageLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragAndDropItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragAndDropItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.DragAndDropItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.WidgetsNewSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDraggableItemWidget::WidgetsNewSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.WidgetsNewSize");
		
		UDraggableItemWidget_WidgetsNewSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.UnlockWidget
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::UnlockWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.UnlockWidget");
		
		UDraggableItemWidget_UnlockWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.UnHighLightWidget
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::UnHighLightWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.UnHighLightWidget");
		
		UDraggableItemWidget_UnHighLightWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.StaticImageLoaded
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::StaticImageLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.StaticImageLoaded");
		
		UDraggableItemWidget_StaticImageLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.StartWidgetBeingUnLocked
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::StartWidgetBeingUnLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.StartWidgetBeingUnLocked");
		
		UDraggableItemWidget_StartWidgetBeingUnLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.StartDraggingEvent
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::StartDraggingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.StartDraggingEvent");
		
		UDraggableItemWidget_StartDraggingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.OnItemIconChange
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::OnItemIconChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.OnItemIconChange");
		
		UDraggableItemWidget_OnItemIconChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsShopOpen
	 * 		Flags  -> ()
	 */
	bool UDraggableItemWidget::IsShopOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsShopOpen");
		
		UDraggableItemWidget_IsShopOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsItemAKeyCard
	 * 		Flags  -> ()
	 */
	bool UDraggableItemWidget::IsItemAKeyCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsItemAKeyCard");
		
		UDraggableItemWidget_IsItemAKeyCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsItemAbleToColour
	 * 		Flags  -> ()
	 */
	bool UDraggableItemWidget::IsItemAbleToColour()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsItemAbleToColour");
		
		UDraggableItemWidget_IsItemAbleToColour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsAWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBulletType                                        AmmoType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDraggableItemWidget::IsAWeapon(EBulletType* AmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsAWeapon");
		
		UDraggableItemWidget_IsAWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmmoType != nullptr)
			*AmmoType = params.AmmoType;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsArmour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DamageMitagtionAmount                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDraggableItemWidget::IsArmour(int32_t* DamageMitagtionAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsArmour");
		
		UDraggableItemWidget_IsArmour_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageMitagtionAmount != nullptr)
			*DamageMitagtionAmount = params.DamageMitagtionAmount;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsALootWidgetandNeedsLocked
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::IsALootWidgetandNeedsLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsALootWidgetandNeedsLocked");
		
		UDraggableItemWidget_IsALootWidgetandNeedsLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsALootWidget
	 * 		Flags  -> ()
	 */
	bool UDraggableItemWidget::IsALootWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsALootWidget");
		
		UDraggableItemWidget_IsALootWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.IsAContainerRig
	 * 		Flags  -> ()
	 */
	bool UDraggableItemWidget::IsAContainerRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.IsAContainerRig");
		
		UDraggableItemWidget_IsAContainerRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.HighLightWidget
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::HighLightWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.HighLightWidget");
		
		UDraggableItemWidget_HighLightWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.HasDuribility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duribility                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxDuribility                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UDraggableItemWidget::HasDuribility(float* Duribility, float* MaxDuribility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.HasDuribility");
		
		UDraggableItemWidget_HasDuribility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Duribility != nullptr)
			*Duribility = params.Duribility;
		if (MaxDuribility != nullptr)
			*MaxDuribility = params.MaxDuribility;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.GetStorageName
	 * 		Flags  -> ()
	 */
	class FString UDraggableItemWidget::GetStorageName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.GetStorageName");
		
		UDraggableItemWidget_GetStorageName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.GetStackText
	 * 		Flags  -> ()
	 */
	class FText UDraggableItemWidget::GetStackText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.GetStackText");
		
		UDraggableItemWidget_GetStackText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.GetKeyCardInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CaptainsName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ShipName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ShipType                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDraggableItemWidget::GetKeyCardInfo(class FString* CaptainsName, class FString* ShipName, class FString* ShipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.GetKeyCardInfo");
		
		UDraggableItemWidget_GetKeyCardInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CaptainsName != nullptr)
			*CaptainsName = params.CaptainsName;
		if (ShipName != nullptr)
			*ShipName = params.ShipName;
		if (ShipType != nullptr)
			*ShipType = params.ShipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.GetItemType
	 * 		Flags  -> ()
	 */
	EItemType UDraggableItemWidget::GetItemType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.GetItemType");
		
		UDraggableItemWidget_GetItemType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.EquipmentNewSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewSize                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDraggableItemWidget::EquipmentNewSize(const struct FVector2D& NewSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.EquipmentNewSize");
		
		UDraggableItemWidget_EquipmentNewSize_Params params {};
		params.NewSize = NewSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.EndDraggingEvent
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::EndDraggingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.EndDraggingEvent");
		
		UDraggableItemWidget_EndDraggingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.EnableWidget
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::EnableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.EnableWidget");
		
		UDraggableItemWidget_EnableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.DuribilityChanged
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::DuribilityChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.DuribilityChanged");
		
		UDraggableItemWidget_DuribilityChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DraggableItemWidget.DisableWidget
	 * 		Flags  -> ()
	 */
	void UDraggableItemWidget::DisableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DraggableItemWidget.DisableWidget");
		
		UDraggableItemWidget_DisableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDraggableItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDraggableItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.DraggableItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.SetOverDragArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverArea                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDragWindowWidget::SetOverDragArea(bool OverArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.SetOverDragArea");
		
		UDragWindowWidget_SetOverDragArea_Params params {};
		params.OverArea = OverArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.SetClickStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   TouchedLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ClickStarted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDragWindowWidget::SetClickStarted(const struct FVector2D& TouchedLoc, bool ClickStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.SetClickStarted");
		
		UDragWindowWidget_SetClickStarted_Params params {};
		params.TouchedLoc = TouchedLoc;
		params.ClickStarted = ClickStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.OnDragBorderMouseDown
	 * 		Flags  -> ()
	 */
	void UDragWindowWidget::OnDragBorderMouseDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.OnDragBorderMouseDown");
		
		UDragWindowWidget_OnDragBorderMouseDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.OnCloseButtonPressed
	 * 		Flags  -> ()
	 */
	void UDragWindowWidget::OnCloseButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.OnCloseButtonPressed");
		
		UDragWindowWidget_OnCloseButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.IsAScrapingWindow
	 * 		Flags  -> ()
	 */
	bool UDragWindowWidget::IsAScrapingWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.IsAScrapingWindow");
		
		UDragWindowWidget_IsAScrapingWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.IsALootBoxWindow
	 * 		Flags  -> ()
	 */
	bool UDragWindowWidget::IsALootBoxWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.IsALootBoxWindow");
		
		UDragWindowWidget_IsALootBoxWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.HasItemsLeftInScrap
	 * 		Flags  -> ()
	 */
	bool UDragWindowWidget::HasItemsLeftInScrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.HasItemsLeftInScrap");
		
		UDragWindowWidget_HasItemsLeftInScrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.DragWindowWidget.CloseScrapWindow
	 * 		Flags  -> ()
	 */
	void UDragWindowWidget::CloseScrapWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.DragWindowWidget.CloseScrapWindow");
		
		UDragWindowWidget_CloseScrapWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDragWindowWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDragWindowWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.DragWindowWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.EquipmentSlotWidget.OnEndItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquipmentSlotWidget::OnEndItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.EquipmentSlotWidget.OnEndItemDrag");
		
		UEquipmentSlotWidget_OnEndItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.EquipmentSlotWidget.OnBeginItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEquipmentSlotWidget::OnBeginItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.EquipmentSlotWidget.OnBeginItemDrag");
		
		UEquipmentSlotWidget_OnBeginItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.EquipmentSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.UnblurBackground
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::UnblurBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.UnblurBackground");
		
		UInGameOverlayWidget_UnblurBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.StopDragAndDropOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               WasCanceled                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInGameOverlayWidget::StopDragAndDropOperation(bool WasCanceled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.StopDragAndDropOperation");
		
		UInGameOverlayWidget_StopDragAndDropOperation_Params params {};
		params.WasCanceled = WasCanceled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.StartDragAndDropOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInGameOverlayWidget::StartDragAndDropOperation(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.StartDragAndDropOperation");
		
		UInGameOverlayWidget_StartDragAndDropOperation_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.ShowTooltipAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   ScreenLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSplitMenu                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInGameOverlayWidget::ShowTooltipAtLocation(const struct FVector2D& ScreenLocation, class ASIGISInventoryItem* Item, bool IsSplitMenu, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, const class FString& ToCon, ESlotType MovetypeFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.ShowTooltipAtLocation");
		
		UInGameOverlayWidget_ShowTooltipAtLocation_Params params {};
		params.ScreenLocation = ScreenLocation;
		params.Item = Item;
		params.IsSplitMenu = IsSplitMenu;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		params.ToCon = ToCon;
		params.MovetypeFrom = MovetypeFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.ShowInventoryMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootWindowState                                   LootWinState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInGameOverlayWidget::ShowInventoryMenu(ELootWindowState LootWinState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.ShowInventoryMenu");
		
		UInGameOverlayWidget_ShowInventoryMenu_Params params {};
		params.LootWinState = LootWinState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonUnhovered
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::OnDropItemScreenButtonUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonUnhovered");
		
		UInGameOverlayWidget_OnDropItemScreenButtonUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonPressed
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::OnDropItemScreenButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonPressed");
		
		UInGameOverlayWidget_OnDropItemScreenButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonHovered
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::OnDropItemScreenButtonHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.OnDropItemScreenButtonHovered");
		
		UInGameOverlayWidget_OnDropItemScreenButtonHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.HideTooltip
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::HideTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.HideTooltip");
		
		UInGameOverlayWidget_HideTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.HideInventoryMenu
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::HideInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.HideInventoryMenu");
		
		UInGameOverlayWidget_HideInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.GetInventoryMenu
	 * 		Flags  -> ()
	 */
	class UInventoryMenuWidget* UInGameOverlayWidget::GetInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.GetInventoryMenu");
		
		UInGameOverlayWidget_GetInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.DragItemStopped
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::DragItemStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.DragItemStopped");
		
		UInGameOverlayWidget_DragItemStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.DragItemStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlotType                                          DraggedFrom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInGameOverlayWidget::DragItemStarted(ESlotType DraggedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.DragItemStarted");
		
		UInGameOverlayWidget_DragItemStarted_Params params {};
		params.DraggedFrom = DraggedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.CheckForItemDrop
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::CheckForItemDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.CheckForItemDrop");
		
		UInGameOverlayWidget_CheckForItemDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.BlurBackground
	 * 		Flags  -> ()
	 */
	void UInGameOverlayWidget::BlurBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.BlurBackground");
		
		UInGameOverlayWidget_BlurBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InGameOverlayWidget.AreMenusOpen
	 * 		Flags  -> ()
	 */
	bool UInGameOverlayWidget::AreMenusOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InGameOverlayWidget.AreMenusOpen");
		
		UInGameOverlayWidget_AreMenusOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInGameOverlayWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInGameOverlayWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.InGameOverlayWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryContainerWidget.RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          OriginGridSlot                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryContainerWidget::RemoveItem(class ASIGISInventoryItem* Item, const struct FInventoryGridPair& OriginGridSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryContainerWidget.RemoveItem");
		
		UInventoryContainerWidget_RemoveItem_Params params {};
		params.Item = Item;
		params.OriginGridSlot = OriginGridSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryContainerWidget.InitializeGrid
	 * 		Flags  -> ()
	 */
	void UInventoryContainerWidget::InitializeGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryContainerWidget.InitializeGrid");
		
		UInventoryContainerWidget_InitializeGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryContainerWidget.AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          OriginGridSlot                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryContainerWidget::AddItem(class ASIGISInventoryItem* Item, const struct FInventoryGridPair& OriginGridSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryContainerWidget.AddItem");
		
		UInventoryContainerWidget_AddItem_Params params {};
		params.Item = Item;
		params.OriginGridSlot = OriginGridSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryContainerWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryContainerWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.InventoryContainerWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryGridSlotWidget.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryGridSlotWidget::SetItem(class ASIGISInventoryItem* NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryGridSlotWidget.SetItem");
		
		UInventoryGridSlotWidget_SetItem_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryGridSlotWidget.GetItem
	 * 		Flags  -> ()
	 */
	class ASIGISInventoryItem* UInventoryGridSlotWidget::GetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryGridSlotWidget.GetItem");
		
		UInventoryGridSlotWidget_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryGridSlotWidget.EndItemOverlap
	 * 		Flags  -> ()
	 */
	void UInventoryGridSlotWidget::EndItemOverlap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryGridSlotWidget.EndItemOverlap");
		
		UInventoryGridSlotWidget_EndItemOverlap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryGridSlotWidget.BeginItemOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOverlapValid                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryGridSlotWidget::BeginItemOverlap(bool IsOverlapValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryGridSlotWidget.BeginItemOverlap");
		
		UInventoryGridSlotWidget_BeginItemOverlap_Params params {};
		params.IsOverlapValid = IsOverlapValid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryGridSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryGridSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.InventoryGridSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.WeaponWorkBenchRightClickPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemUUID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::WeaponWorkBenchRightClickPressed(const class FString& ItemUUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.WeaponWorkBenchRightClickPressed");
		
		UInventoryMenuWidget_WeaponWorkBenchRightClickPressed_Params params {};
		params.ItemUUID = ItemUUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.UpDatePaperDoll
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::UpDatePaperDoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.UpDatePaperDoll");
		
		UInventoryMenuWidget_UpDatePaperDoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.UpDateFactionsAndContracts
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::UpDateFactionsAndContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.UpDateFactionsAndContracts");
		
		UInventoryMenuWidget_UpDateFactionsAndContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.UpdateChapterAndContracts
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::UpdateChapterAndContracts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.UpdateChapterAndContracts");
		
		UInventoryMenuWidget_UpdateChapterAndContracts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.UnlockCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CosmeticToCheck                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::UnlockCosmetic(const class FName& CosmeticToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.UnlockCosmetic");
		
		UInventoryMenuWidget_UnlockCosmetic_Params params {};
		params.CosmeticToCheck = CosmeticToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.UnlockActiveRecipe
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::UnlockActiveRecipe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.UnlockActiveRecipe");
		
		UInventoryMenuWidget_UnlockActiveRecipe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.SuccessfulBoughtItem
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::SuccessfulBoughtItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.SuccessfulBoughtItem");
		
		UInventoryMenuWidget_SuccessfulBoughtItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.StringToAttachmentArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutArray                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UInventoryMenuWidget::StringToAttachmentArray(const class FString& inString, TArray<class FString>* OutArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.StringToAttachmentArray");
		
		UInventoryMenuWidget_StringToAttachmentArray_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArray != nullptr)
			*OutArray = params.OutArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.StartedAContract
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::StartedAContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.StartedAContract");
		
		UInventoryMenuWidget_StartedAContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.StartedAChapterContract
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::StartedAChapterContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.StartedAChapterContract");
		
		UInventoryMenuWidget_StartedAChapterContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.SoldItem
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::SoldItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.SoldItem");
		
		UInventoryMenuWidget_SoldItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.SetRustbucketActive
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::SetRustbucketActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.SetRustbucketActive");
		
		UInventoryMenuWidget_SetRustbucketActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.SetActiveWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         NewActiveWeapon                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::SetActiveWeapon(class ASIGISInventoryItem* NewActiveWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.SetActiveWeapon");
		
		UInventoryMenuWidget_SetActiveWeapon_Params params {};
		params.NewActiveWeapon = NewActiveWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.SetActiveFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         NewActiveFrigate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::SetActiveFrigate(class ASIGISInventoryItem* NewActiveFrigate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.SetActiveFrigate");
		
		UInventoryMenuWidget_SetActiveFrigate_Params params {};
		params.NewActiveFrigate = NewActiveFrigate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.SelectShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UFrigID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::SelectShip(const class FString& UFrigID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.SelectShip");
		
		UInventoryMenuWidget_SelectShip_Params params {};
		params.UFrigID = UFrigID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ReturnModToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    ModSlotOnWepaon                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ReturnModToInventory(EAttachmentSlot ModSlotOnWepaon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ReturnModToInventory");
		
		UInventoryMenuWidget_ReturnModToInventory_Params params {};
		params.ModSlotOnWepaon = ModSlotOnWepaon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ReturnFrigateModToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                ModSlotOnWepaon                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ReturnFrigateModToInventory(EShipAttachmentSlot ModSlotOnWepaon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ReturnFrigateModToInventory");
		
		UInventoryMenuWidget_ReturnFrigateModToInventory_Params params {};
		params.ModSlotOnWepaon = ModSlotOnWepaon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RemoveShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UFrigID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::RemoveShip(const class FString& UFrigID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RemoveShip");
		
		UInventoryMenuWidget_RemoveShip_Params params {};
		params.UFrigID = UFrigID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RefreshWeaponModuleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::RefreshWeaponModuleActor(EAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RefreshWeaponModuleActor");
		
		UInventoryMenuWidget_RefreshWeaponModuleActor_Params params {};
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RefreshWeaponActor
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::RefreshWeaponActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RefreshWeaponActor");
		
		UInventoryMenuWidget_RefreshWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RefreshMenuPlayerActor
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::RefreshMenuPlayerActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RefreshMenuPlayerActor");
		
		UInventoryMenuWidget_RefreshMenuPlayerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RefreshFrigateModuleActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::RefreshFrigateModuleActor(EShipAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RefreshFrigateModuleActor");
		
		UInventoryMenuWidget_RefreshFrigateModuleActor_Params params {};
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RefreshFrigateActor
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::RefreshFrigateActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RefreshFrigateActor");
		
		UInventoryMenuWidget_RefreshFrigateActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.RecipeChagedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCraftingRecipeList                         RecipeDetails                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::RecipeChagedEvent(const struct FCraftingRecipeList& RecipeDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.RecipeChagedEvent");
		
		UInventoryMenuWidget_RecipeChagedEvent_Params params {};
		params.RecipeDetails = RecipeDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.PrePrefreshMenuPlayerActor
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::PrePrefreshMenuPlayerActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.PrePrefreshMenuPlayerActor");
		
		UInventoryMenuWidget_PrePrefreshMenuPlayerActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.PlayerHealBodyHover
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HoveredOver                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::PlayerHealBodyHover(bool HoveredOver)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.PlayerHealBodyHover");
		
		UInventoryMenuWidget_PlayerHealBodyHover_Params params {};
		params.HoveredOver = HoveredOver;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OverFrigateCapacity
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OverFrigateCapacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OverFrigateCapacity");
		
		UInventoryMenuWidget_OverFrigateCapacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnWorkBenchBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnWorkBenchBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnWorkBenchBTNPressed");
		
		UInventoryMenuWidget_OnWorkBenchBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnSKILLTREEBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnSKILLTREEBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnSKILLTREEBTNPressed");
		
		UInventoryMenuWidget_OnSKILLTREEBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnSHOPBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnSHOPBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnSHOPBTNPressed");
		
		UInventoryMenuWidget_OnSHOPBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnItemBPLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorLoaded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::OnItemBPLoaded(class AActor* ActorLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnItemBPLoaded");
		
		UInventoryMenuWidget_OnItemBPLoaded_Params params {};
		params.ActorLoaded = ActorLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnHANGERBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnHANGERBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnHANGERBTNPressed");
		
		UInventoryMenuWidget_OnHANGERBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnGIFTBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnGIFTBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnGIFTBTNPressed");
		
		UInventoryMenuWidget_OnGIFTBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnEQUIPBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnEQUIPBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnEQUIPBTNPressed");
		
		UInventoryMenuWidget_OnEQUIPBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnDealBtnPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnDealBtnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnDealBtnPressed");
		
		UInventoryMenuWidget_OnDealBtnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnCreateRecipePressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnCreateRecipePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnCreateRecipePressed");
		
		UInventoryMenuWidget_OnCreateRecipePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnCRAFTBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnCRAFTBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnCRAFTBTNPressed");
		
		UInventoryMenuWidget_OnCRAFTBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.OnBACKBTNPressed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::OnBACKBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.OnBACKBTNPressed");
		
		UInventoryMenuWidget_OnBACKBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.NotEnoughMoney
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::NotEnoughMoney()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.NotEnoughMoney");
		
		UInventoryMenuWidget_NotEnoughMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.MenuOpenStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootWindowState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::MenuOpenStateChange(ELootWindowState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.MenuOpenStateChange");
		
		UInventoryMenuWidget_MenuOpenStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.LeftCrewShowShipStash
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::LeftCrewShowShipStash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.LeftCrewShowShipStash");
		
		UInventoryMenuWidget_LeftCrewShowShipStash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.JoinedCrewHideShipStash
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::JoinedCrewHideShipStash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.JoinedCrewHideShipStash");
		
		UInventoryMenuWidget_JoinedCrewHideShipStash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ItemBPLoaded
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::ItemBPLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ItemBPLoaded");
		
		UInventoryMenuWidget_ItemBPLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.IsCurrentlyCrafting
	 * 		Flags  -> ()
	 */
	bool UInventoryMenuWidget::IsCurrentlyCrafting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.IsCurrentlyCrafting");
		
		UInventoryMenuWidget_IsCurrentlyCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.InventoryStateChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryState                                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::InventoryStateChange(EInventoryState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.InventoryStateChange");
		
		UInventoryMenuWidget_InventoryStateChange_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.HasPendingGifts
	 * 		Flags  -> ()
	 */
	bool UInventoryMenuWidget::HasPendingGifts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.HasPendingGifts");
		
		UInventoryMenuWidget_HasPendingGifts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GiveTestStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerStat>                         ToGive                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::GiveTestStat(TArray<struct FPlayerStat> ToGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GiveTestStat");
		
		UInventoryMenuWidget_GiveTestStat_Params params {};
		params.ToGive = ToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GiveDebugGift
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ItemRowNames                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::GiveDebugGift(TArray<class FString> ItemRowNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GiveDebugGift");
		
		UInventoryMenuWidget_GiveDebugGift_Params params {};
		params.ItemRowNames = ItemRowNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GiftsMenuClosed
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::GiftsMenuClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GiftsMenuClosed");
		
		UInventoryMenuWidget_GiftsMenuClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetWeaponStats
	 * 		Flags  -> ()
	 */
	struct FWeaponStats UInventoryMenuWidget::GetWeaponStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetWeaponStats");
		
		UInventoryMenuWidget_GetWeaponStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetUnlockedCosmetics
	 * 		Flags  -> ()
	 */
	TArray<class FString> UInventoryMenuWidget::GetUnlockedCosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetUnlockedCosmetics");
		
		UInventoryMenuWidget_GetUnlockedCosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetTraderMoney
	 * 		Flags  -> ()
	 */
	int32_t UInventoryMenuWidget::GetTraderMoney()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetTraderMoney");
		
		UInventoryMenuWidget_GetTraderMoney_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetTimeInSecondsTillCrafted
	 * 		Flags  -> ()
	 */
	int32_t UInventoryMenuWidget::GetTimeInSecondsTillCrafted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetTimeInSecondsTillCrafted");
		
		UInventoryMenuWidget_GetTimeInSecondsTillCrafted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetShips
	 * 		Flags  -> ()
	 */
	TArray<struct FHangerShipInfo> UInventoryMenuWidget::GetShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetShips");
		
		UInventoryMenuWidget_GetShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetSecondsTillShopRefresh
	 * 		Flags  -> ()
	 */
	int32_t UInventoryMenuWidget::GetSecondsTillShopRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetSecondsTillShopRefresh");
		
		UInventoryMenuWidget_GetSecondsTillShopRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetPlayersStats
	 * 		Flags  -> ()
	 */
	TArray<struct FPlayerStat> UInventoryMenuWidget::GetPlayersStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetPlayersStats");
		
		UInventoryMenuWidget_GetPlayersStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetModuleModifiers
	 * 		Flags  -> ()
	 */
	struct FWeaponStats UInventoryMenuWidget::GetModuleModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetModuleModifiers");
		
		UInventoryMenuWidget_GetModuleModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetMenuPlayerEquippedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMenuPlayerLook                             PlayerInfo                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::GetMenuPlayerEquippedItems(struct FMenuPlayerLook* PlayerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetMenuPlayerEquippedItems");
		
		UInventoryMenuWidget_GetMenuPlayerEquippedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerInfo != nullptr)
			*PlayerInfo = params.PlayerInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetItemBPForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::GetItemBPForItem(const class FName& ItemRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetItemBPForItem");
		
		UInventoryMenuWidget_GetItemBPForItem_Params params {};
		params.ItemRow = ItemRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetFrigateStats
	 * 		Flags  -> ()
	 */
	struct FFrigateStats UInventoryMenuWidget::GetFrigateStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetFrigateStats");
		
		UInventoryMenuWidget_GetFrigateStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetFrigateModifiers
	 * 		Flags  -> ()
	 */
	struct FFrigateStats UInventoryMenuWidget::GetFrigateModifiers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetFrigateModifiers");
		
		UInventoryMenuWidget_GetFrigateModifiers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetCurrentRecipeCrafting
	 * 		Flags  -> ()
	 */
	class FString UInventoryMenuWidget::GetCurrentRecipeCrafting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetCurrentRecipeCrafting");
		
		UInventoryMenuWidget_GetCurrentRecipeCrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetCraftingQueInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotFrom                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCraftingQueInfo UInventoryMenuWidget::GetCraftingQueInfo(int32_t SlotFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetCraftingQueInfo");
		
		UInventoryMenuWidget_GetCraftingQueInfo_Params params {};
		params.SlotFrom = SlotFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAviableModsForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAttachmentSlot                                    SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ASIGISInventoryItem*> UInventoryMenuWidget::GetAviableModsForSlot(EAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAviableModsForSlot");
		
		UInventoryMenuWidget_GetAviableModsForSlot_Params params {};
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAviableFrigateModsForSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EShipAttachmentSlot                                SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class ASIGISInventoryItem*> UInventoryMenuWidget::GetAviableFrigateModsForSlot(EShipAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAviableFrigateModsForSlot");
		
		UInventoryMenuWidget_GetAviableFrigateModsForSlot_Params params {};
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAttachmentsSlotsAvialbleforCurrentWeapon
	 * 		Flags  -> ()
	 */
	TArray<EAttachmentSlot> UInventoryMenuWidget::GetAttachmentsSlotsAvialbleforCurrentWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAttachmentsSlotsAvialbleforCurrentWeapon");
		
		UInventoryMenuWidget_GetAttachmentsSlotsAvialbleforCurrentWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAttachmentsSlotsAvialbleforCurrentFrigate
	 * 		Flags  -> ()
	 */
	TArray<EShipAttachmentSlot> UInventoryMenuWidget::GetAttachmentsSlotsAvialbleforCurrentFrigate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAttachmentsSlotsAvialbleforCurrentFrigate");
		
		UInventoryMenuWidget_GetAttachmentsSlotsAvialbleforCurrentFrigate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         WeaponIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAttachmentItemData> UInventoryMenuWidget::GetAttachmentItemDataForWeapon(class ASIGISInventoryItem* WeaponIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForWeapon");
		
		UInventoryMenuWidget_GetAttachmentItemDataForWeapon_Params params {};
		params.WeaponIn = WeaponIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         FrigIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FFrigModItemData> UInventoryMenuWidget::GetAttachmentItemDataForShip(class ASIGISInventoryItem* FrigIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForShip");
		
		UInventoryMenuWidget_GetAttachmentItemDataForShip_Params params {};
		params.FrigIn = FrigIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForCurrentWeapon
	 * 		Flags  -> ()
	 */
	TArray<struct FAttachmentItemData> UInventoryMenuWidget::GetAttachmentItemDataForCurrentWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForCurrentWeapon");
		
		UInventoryMenuWidget_GetAttachmentItemDataForCurrentWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForCurrentFrigate
	 * 		Flags  -> ()
	 */
	TArray<struct FFrigModItemData> UInventoryMenuWidget::GetAttachmentItemDataForCurrentFrigate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAttachmentItemDataForCurrentFrigate");
		
		UInventoryMenuWidget_GetAttachmentItemDataForCurrentFrigate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAllWeaponsInInventory
	 * 		Flags  -> ()
	 */
	TArray<class ASIGISInventoryItem*> UInventoryMenuWidget::GetAllWeaponsInInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAllWeaponsInInventory");
		
		UInventoryMenuWidget_GetAllWeaponsInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetAllFrigateInInventory
	 * 		Flags  -> ()
	 */
	TArray<class ASIGISInventoryItem*> UInventoryMenuWidget::GetAllFrigateInInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetAllFrigateInInventory");
		
		UInventoryMenuWidget_GetAllFrigateInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetActiveWorkbenchRenderActor
	 * 		Flags  -> ()
	 */
	class ASIGISWorkbenchRenderActor* UInventoryMenuWidget::GetActiveWorkbenchRenderActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetActiveWorkbenchRenderActor");
		
		UInventoryMenuWidget_GetActiveWorkbenchRenderActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetActiveWeaponItem
	 * 		Flags  -> ()
	 */
	class ASIGISInventoryItem* UInventoryMenuWidget::GetActiveWeaponItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetActiveWeaponItem");
		
		UInventoryMenuWidget_GetActiveWeaponItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetActiveShipID
	 * 		Flags  -> ()
	 */
	class FString UInventoryMenuWidget::GetActiveShipID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetActiveShipID");
		
		UInventoryMenuWidget_GetActiveShipID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetActiveShip
	 * 		Flags  -> ()
	 */
	class FName UInventoryMenuWidget::GetActiveShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetActiveShip");
		
		UInventoryMenuWidget_GetActiveShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetActiveFrigateRenderActor
	 * 		Flags  -> ()
	 */
	class ASIGISFrigateRenderActor* UInventoryMenuWidget::GetActiveFrigateRenderActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetActiveFrigateRenderActor");
		
		UInventoryMenuWidget_GetActiveFrigateRenderActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.GetActiveFrigateItem
	 * 		Flags  -> ()
	 */
	class ASIGISInventoryItem* UInventoryMenuWidget::GetActiveFrigateItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.GetActiveFrigateItem");
		
		UInventoryMenuWidget_GetActiveFrigateItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.FilterByRecipeType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Craftingtype                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllRecipes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::FilterByRecipeType(const class FString& Craftingtype, bool AllRecipes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.FilterByRecipeType");
		
		UInventoryMenuWidget_FilterByRecipeType_Params params {};
		params.Craftingtype = Craftingtype;
		params.AllRecipes = AllRecipes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.EquipCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CosmeticToEquip                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECosmeticSlot                                      ToSlot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::EquipCosmetic(const class FName& CosmeticToEquip, ECosmeticSlot ToSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.EquipCosmetic");
		
		UInventoryMenuWidget_EquipCosmetic_Params params {};
		params.CosmeticToEquip = CosmeticToEquip;
		params.ToSlot = ToSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.DoesShipHaveItemsinCargo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UFrigID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryMenuWidget::DoesShipHaveItemsinCargo(const class FString& UFrigID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.DoesShipHaveItemsinCargo");
		
		UInventoryMenuWidget_DoesShipHaveItemsinCargo_Params params {};
		params.UFrigID = UFrigID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CraftingWidgetpressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftingWidget*                             ActiveWid                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::CraftingWidgetpressed(class UCraftingWidget* ActiveWid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CraftingWidgetpressed");
		
		UInventoryMenuWidget_CraftingWidgetpressed_Params params {};
		params.ActiveWid = ActiveWid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CollectedChapterContract
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::CollectedChapterContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CollectedChapterContract");
		
		UInventoryMenuWidget_CollectedChapterContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CollectedAContract
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::CollectedAContract()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CollectedAContract");
		
		UInventoryMenuWidget_CollectedAContract_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CollectCraftedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotFrom                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::CollectCraftedItem(int32_t SlotFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CollectCraftedItem");
		
		UInventoryMenuWidget_CollectCraftedItem_Params params {};
		params.SlotFrom = SlotFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CloseInventory
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::CloseInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CloseInventory");
		
		UInventoryMenuWidget_CloseInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ChangeMenuState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryState                                    StateTo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ChangeMenuState(EInventoryState StateTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ChangeMenuState");
		
		UInventoryMenuWidget_ChangeMenuState_Params params {};
		params.StateTo = StateTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CanUnLockCosmetic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        CosmeticToCheck                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               WasAStatFail                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryMenuWidget::CanUnLockCosmetic(const class FName& CosmeticToCheck, bool* WasAStatFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CanUnLockCosmetic");
		
		UInventoryMenuWidget_CanUnLockCosmetic_Params params {};
		params.CosmeticToCheck = CosmeticToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasAStatFail != nullptr)
			*WasAStatFail = params.WasAStatFail;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CantCraftEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERecipeFail                                        Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::CantCraftEvent(ERecipeFail Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CantCraftEvent");
		
		UInventoryMenuWidget_CantCraftEvent_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.CanCraftMore
	 * 		Flags  -> ()
	 */
	bool UInventoryMenuWidget::CanCraftMore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.CanCraftMore");
		
		UInventoryMenuWidget_CanCraftMore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.BP_UpDateCraftingInfo
	 * 		Flags  -> ()
	 */
	void UInventoryMenuWidget::BP_UpDateCraftingInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.BP_UpDateCraftingInfo");
		
		UInventoryMenuWidget_BP_UpDateCraftingInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.AssignWeaponModToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         NewMod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAttachmentSlot                                    SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::AssignWeaponModToSlot(class ASIGISInventoryItem* NewMod, EAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.AssignWeaponModToSlot");
		
		UInventoryMenuWidget_AssignWeaponModToSlot_Params params {};
		params.NewMod = NewMod;
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.AssignFrigateModToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         NewMod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EShipAttachmentSlot                                SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::AssignFrigateModToSlot(class ASIGISInventoryItem* NewMod, EShipAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.AssignFrigateModToSlot");
		
		UInventoryMenuWidget_AssignFrigateModToSlot_Params params {};
		params.NewMod = NewMod;
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToWeaponSocket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EAttachmentSlot                                    SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ApplyTransformToWeaponSocket(const struct FTransform& NewTransform, EAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToWeaponSocket");
		
		UInventoryMenuWidget_ApplyTransformToWeaponSocket_Params params {};
		params.NewTransform = NewTransform;
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToWeaponMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ApplyTransformToWeaponMesh(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToWeaponMesh");
		
		UInventoryMenuWidget_ApplyTransformToWeaponMesh_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToFrigateMod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EShipAttachmentSlot                                SlotIn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ApplyTransformToFrigateMod(const struct FTransform& NewTransform, EShipAttachmentSlot SlotIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToFrigateMod");
		
		UInventoryMenuWidget_ApplyTransformToFrigateMod_Params params {};
		params.NewTransform = NewTransform;
		params.SlotIn = SlotIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToFrigate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::ApplyTransformToFrigate(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.ApplyTransformToFrigate");
		
		UInventoryMenuWidget_ApplyTransformToFrigate_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.InventoryMenuWidget.AddShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShipTableRow                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryMenuWidget::AddShip(const class FName& ShipTableRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.InventoryMenuWidget.AddShip");
		
		UInventoryMenuWidget_AddShip_Params params {};
		params.ShipTableRow = ShipTableRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.InventoryMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginSave.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginSave::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.LoginSave");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.WaitingForLogIn
	 * 		Flags  -> ()
	 */
	void ULoginWidget::WaitingForLogIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.WaitingForLogIn");
		
		ULoginWidget_WaitingForLogIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.ReturnedFromMatch
	 * 		Flags  -> ()
	 */
	void ULoginWidget::ReturnedFromMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.ReturnedFromMatch");
		
		ULoginWidget_ReturnedFromMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.OnSubmitBTNPressed
	 * 		Flags  -> ()
	 */
	void ULoginWidget::OnSubmitBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.OnSubmitBTNPressed");
		
		ULoginWidget_OnSubmitBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.OnRegisterBTNPressed
	 * 		Flags  -> ()
	 */
	void ULoginWidget::OnRegisterBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.OnRegisterBTNPressed");
		
		ULoginWidget_OnRegisterBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.LogInValid
	 * 		Flags  -> ()
	 */
	void ULoginWidget::LogInValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.LogInValid");
		
		ULoginWidget_LogInValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.LoginSucces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               failed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoginWidget::LoginSucces(bool failed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.LoginSucces");
		
		ULoginWidget_LoginSucces_Params params {};
		params.failed = failed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.LoginReturned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               SuccessLogin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULoginWidget::LoginReturned(bool SuccessLogin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.LoginReturned");
		
		ULoginWidget_LoginReturned_Params params {};
		params.SuccessLogin = SuccessLogin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.LoginDiscordNotValid
	 * 		Flags  -> ()
	 */
	void ULoginWidget::LoginDiscordNotValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.LoginDiscordNotValid");
		
		ULoginWidget_LoginDiscordNotValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.LoadAndTransitionToMainMenu
	 * 		Flags  -> ()
	 */
	void ULoginWidget::LoadAndTransitionToMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.LoadAndTransitionToMainMenu");
		
		ULoginWidget_LoadAndTransitionToMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.IsXBoxAppRunning
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::IsXBoxAppRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.IsXBoxAppRunning");
		
		ULoginWidget_IsXBoxAppRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.IsSteamRunning
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::IsSteamRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.IsSteamRunning");
		
		ULoginWidget_IsSteamRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.IsGameAlreadyRunning
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::IsGameAlreadyRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.IsGameAlreadyRunning");
		
		ULoginWidget_IsGameAlreadyRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.HasAuthToken
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::HasAuthToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.HasAuthToken");
		
		ULoginWidget_HasAuthToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.CheckVoidVersion
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::CheckVoidVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.CheckVoidVersion");
		
		ULoginWidget_CheckVoidVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.CheckOutDatedVersion
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::CheckOutDatedVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.CheckOutDatedVersion");
		
		ULoginWidget_CheckOutDatedVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.CheckDataConnection
	 * 		Flags  -> ()
	 */
	bool ULoginWidget::CheckDataConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.CheckDataConnection");
		
		ULoginWidget_CheckDataConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.LoginWidget.BackEndConnected
	 * 		Flags  -> ()
	 */
	void ULoginWidget::BackEndConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.LoginWidget.BackEndConnected");
		
		ULoginWidget_BackEndConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.LoginWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.UnblurBackground
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::UnblurBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.UnblurBackground");
		
		UMasterMenuWidget_UnblurBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.StartUpIssue
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::StartUpIssue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.StartUpIssue");
		
		UMasterMenuWidget_StartUpIssue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.ShowMatchMake
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::ShowMatchMake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.ShowMatchMake");
		
		UMasterMenuWidget_ShowMatchMake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.ShowMainMenuOptions
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::ShowMainMenuOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.ShowMainMenuOptions");
		
		UMasterMenuWidget_ShowMainMenuOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.ShowLogInMenu
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::ShowLogInMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.ShowLogInMenu");
		
		UMasterMenuWidget_ShowLogInMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.HideAllMenus
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::HideAllMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.HideAllMenus");
		
		UMasterMenuWidget_HideAllMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MasterMenuWidget.BlurBackground
	 * 		Flags  -> ()
	 */
	void UMasterMenuWidget::BlurBackground()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MasterMenuWidget.BlurBackground");
		
		UMasterMenuWidget_BlurBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMasterMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMasterMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.MasterMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.WaitingForMatch
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::WaitingForMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.WaitingForMatch");
		
		UMatchMakingMenu_WaitingForMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.SetRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ERegionSig                                         NewRegion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::SetRegion(ERegionSig NewRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.SetRegion");
		
		UMatchMakingMenu_SetRegion_Params params {};
		params.NewRegion = NewRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.SetCrewLobbyInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ZeuzIDIn                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DiscordIDIn                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CrewNameIn                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture2DDynamic*                           ProfilePicIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::SetCrewLobbyInformation(int32_t SlotNumber, const class FString& ZeuzIDIn, const class FString& DiscordIDIn, const class FString& CrewNameIn, class UTexture2DDynamic* ProfilePicIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.SetCrewLobbyInformation");
		
		UMatchMakingMenu_SetCrewLobbyInformation_Params params {};
		params.SlotNumber = SlotNumber;
		params.ZeuzIDIn = ZeuzIDIn;
		params.DiscordIDIn = DiscordIDIn;
		params.CrewNameIn = CrewNameIn;
		params.ProfilePicIn = ProfilePicIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.RefreshCrew
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::RefreshCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.RefreshCrew");
		
		UMatchMakingMenu_RefreshCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.PurgeCrew
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::PurgeCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.PurgeCrew");
		
		UMatchMakingMenu_PurgeCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.PingPlayFabDataCenter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Addrss                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::PingPlayFabDataCenter(const class FString& Addrss)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.PingPlayFabDataCenter");
		
		UMatchMakingMenu_PingPlayFabDataCenter_Params params {};
		params.Addrss = Addrss;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.OnBACKBTNPressed
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::OnBACKBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.OnBACKBTNPressed");
		
		UMatchMakingMenu_OnBACKBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.MatchMake
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::MatchMake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.MatchMake");
		
		UMatchMakingMenu_MatchMake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.MatchFound
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::MatchFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.MatchFound");
		
		UMatchMakingMenu_MatchFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.KickMemberfromCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            numSlot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::KickMemberfromCrew(int32_t numSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.KickMemberfromCrew");
		
		UMatchMakingMenu_KickMemberfromCrew_Params params {};
		params.numSlot = numSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.KickCrewMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToKickPlayerID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MessageIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::KickCrewMember(const class FString& ToKickPlayerID, const class FString& MessageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.KickCrewMember");
		
		UMatchMakingMenu_KickCrewMember_Params params {};
		params.ToKickPlayerID = ToKickPlayerID;
		params.MessageIn = MessageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.JoinCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::JoinCrew(const class FString& CrewName, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.JoinCrew");
		
		UMatchMakingMenu_JoinCrew_Params params {};
		params.CrewName = CrewName;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.ImIInACrew
	 * 		Flags  -> ()
	 */
	bool UMatchMakingMenu::ImIInACrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.ImIInACrew");
		
		UMatchMakingMenu_ImIInACrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.ImIACaptian
	 * 		Flags  -> ()
	 */
	bool UMatchMakingMenu::ImIACaptian()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.ImIACaptian");
		
		UMatchMakingMenu_ImIACaptian_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.GetSlotCrewInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCrewLobbyInfo UMatchMakingMenu::GetSlotCrewInfo(int32_t SlotNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.GetSlotCrewInfo");
		
		UMatchMakingMenu_GetSlotCrewInfo_Params params {};
		params.SlotNumber = SlotNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.GetRegionAsString
	 * 		Flags  -> ()
	 */
	class FString UMatchMakingMenu::GetRegionAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.GetRegionAsString");
		
		UMatchMakingMenu_GetRegionAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.GetExtraOptions
	 * 		Flags  -> ()
	 */
	class FString UMatchMakingMenu::GetExtraOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.GetExtraOptions");
		
		UMatchMakingMenu_GetExtraOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.GetActiveShipRow
	 * 		Flags  -> ()
	 */
	class FName UMatchMakingMenu::GetActiveShipRow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.GetActiveShipRow");
		
		UMatchMakingMenu_GetActiveShipRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.FindServers
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::FindServers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.FindServers");
		
		UMatchMakingMenu_FindServers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.CreateCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PasswwordIn                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CrewNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::CreateCrew(const class FString& CrewName, const class FString& PasswwordIn, int32_t CrewNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.CreateCrew");
		
		UMatchMakingMenu_CreateCrew_Params params {};
		params.CrewName = CrewName;
		params.PasswwordIn = PasswwordIn;
		params.CrewNumber = CrewNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.CheckLobby
	 * 		Flags  -> ()
	 */
	void UMatchMakingMenu::CheckLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.CheckLobby");
		
		UMatchMakingMenu_CheckLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MatchMakingMenu.ChangeCrewSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PasswwordIn                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CrewNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CurrentCrewName                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMatchMakingMenu::ChangeCrewSettings(const class FString& PasswwordIn, int32_t CrewNumber, const class FString& CurrentCrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MatchMakingMenu.ChangeCrewSettings");
		
		UMatchMakingMenu_ChangeCrewSettings_Params params {};
		params.PasswwordIn = PasswwordIn;
		params.CrewNumber = CrewNumber;
		params.CurrentCrewName = CurrentCrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMatchMakingMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMatchMakingMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.MatchMakingMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MenuOptions.TestStartMatchMake
	 * 		Flags  -> ()
	 */
	void UMenuOptions::TestStartMatchMake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MenuOptions.TestStartMatchMake");
		
		UMenuOptions_TestStartMatchMake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MenuOptions.TestQueryTicket
	 * 		Flags  -> ()
	 */
	void UMenuOptions::TestQueryTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MenuOptions.TestQueryTicket");
		
		UMenuOptions_TestQueryTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MenuOptions.TestCancelTicket
	 * 		Flags  -> ()
	 */
	void UMenuOptions::TestCancelTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MenuOptions.TestCancelTicket");
		
		UMenuOptions_TestCancelTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MenuOptions.OnOptionsBTNPressed
	 * 		Flags  -> ()
	 */
	void UMenuOptions::OnOptionsBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MenuOptions.OnOptionsBTNPressed");
		
		UMenuOptions_OnOptionsBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MenuOptions.OnMatchMakeBTNPressed
	 * 		Flags  -> ()
	 */
	void UMenuOptions::OnMatchMakeBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MenuOptions.OnMatchMakeBTNPressed");
		
		UMenuOptions_OnMatchMakeBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.MenuOptions.OnCharacterBTNPressed
	 * 		Flags  -> ()
	 */
	void UMenuOptions::OnCharacterBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.MenuOptions.OnCharacterBTNPressed");
		
		UMenuOptions_OnCharacterBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMenuOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMenuOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.MenuOptions");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.QuickSlotWidget.OnEndItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuickSlotWidget::OnEndItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.QuickSlotWidget.OnEndItemDrag");
		
		UQuickSlotWidget_OnEndItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.QuickSlotWidget.OnBeginItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UQuickSlotWidget::OnBeginItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.QuickSlotWidget.OnBeginItemDrag");
		
		UQuickSlotWidget_OnBeginItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.QuickSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RenderTargetUMG.UpDateRenderActor
	 * 		Flags  -> ()
	 */
	void URenderTargetUMG::UpDateRenderActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RenderTargetUMG.UpDateRenderActor");
		
		URenderTargetUMG_UpDateRenderActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RenderTargetUMG.GetRenderMat
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* URenderTargetUMG::GetRenderMat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RenderTargetUMG.GetRenderMat");
		
		URenderTargetUMG_GetRenderMat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RenderTargetUMG.GetRenderActor
	 * 		Flags  -> ()
	 */
	class ASIGISRenderActor* URenderTargetUMG::GetRenderActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RenderTargetUMG.GetRenderActor");
		
		URenderTargetUMG_GetRenderActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RenderTargetUMG.DestoryRenderActor
	 * 		Flags  -> ()
	 */
	void URenderTargetUMG::DestoryRenderActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RenderTargetUMG.DestoryRenderActor");
		
		URenderTargetUMG_DestoryRenderActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RenderTargetUMG.CreateRenderActor
	 * 		Flags  -> ()
	 */
	void URenderTargetUMG::CreateRenderActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RenderTargetUMG.CreateRenderActor");
		
		URenderTargetUMG_CreateRenderActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URenderTargetUMG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URenderTargetUMG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.RenderTargetUMG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RigWidget.SetOverDragArea
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverArea                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigWidget::SetOverDragArea(bool OverArea)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RigWidget.SetOverDragArea");
		
		URigWidget_SetOverDragArea_Params params {};
		params.OverArea = OverArea;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RigWidget.SetClickStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   TouchedLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ClickStarted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URigWidget::SetClickStarted(const struct FVector2D& TouchedLoc, bool ClickStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RigWidget.SetClickStarted");
		
		URigWidget_SetClickStarted_Params params {};
		params.TouchedLoc = TouchedLoc;
		params.ClickStarted = ClickStarted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RigWidget.OnDragBorderMouseDown
	 * 		Flags  -> ()
	 */
	void URigWidget::OnDragBorderMouseDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RigWidget.OnDragBorderMouseDown");
		
		URigWidget_OnDragBorderMouseDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.RigWidget.OnCloseButtonPressed
	 * 		Flags  -> ()
	 */
	void URigWidget::OnCloseButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.RigWidget.OnCloseButtonPressed");
		
		URigWidget_OnCloseButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.RigWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipConfigMenu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipConfigMenu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ShipConfigMenu");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ShipSlotWidget.OnEndItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShipSlotWidget::OnEndItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ShipSlotWidget.OnEndItemDrag");
		
		UShipSlotWidget_OnEndItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ShipSlotWidget.OnBeginItemDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UShipSlotWidget::OnBeginItemDrag(class ASIGISInventoryItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ShipSlotWidget.OnBeginItemDrag");
		
		UShipSlotWidget_OnBeginItemDrag_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShipSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShipSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ShipSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.OnRep_Mesh
	 * 		Flags  -> ()
	 */
	void ASIGISBaseActor::OnRep_Mesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.OnRep_Mesh");
		
		ASIGISBaseActor_OnRep_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.OnRep_IsActive
	 * 		Flags  -> ()
	 */
	void ASIGISBaseActor::OnRep_IsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.OnRep_IsActive");
		
		ASIGISBaseActor_OnRep_IsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISBaseActor::Interact(class AActor* InteractingOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.Interact");
		
		ASIGISBaseActor_Interact_Params params {};
		params.InteractingOwner = InteractingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.GetInteractionInfo
	 * 		Flags  -> ()
	 */
	struct FInteractionInfo ASIGISBaseActor::GetInteractionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.GetInteractionInfo");
		
		ASIGISBaseActor_GetInteractionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.FinishedInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISBaseActor::FinishedInteract(class AActor* InteractingOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.FinishedInteract");
		
		ASIGISBaseActor_FinishedInteract_Params params {};
		params.InteractingOwner = InteractingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.DeActiveCalled
	 * 		Flags  -> ()
	 */
	void ASIGISBaseActor::DeActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.DeActiveCalled");
		
		ASIGISBaseActor_DeActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseActor.ActiveCalled
	 * 		Flags  -> ()
	 */
	void ASIGISBaseActor::ActiveCalled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseActor.ActiveCalled");
		
		ASIGISBaseActor_ActiveCalled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISBaseActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISBaseActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISBaseActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseComponent.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISBaseComponent::Interact(class AActor* InteractingOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseComponent.Interact");
		
		USIGISBaseComponent_Interact_Params params {};
		params.InteractingOwner = InteractingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseComponent.GetInteractionInfo
	 * 		Flags  -> ()
	 */
	struct FInteractionInfo USIGISBaseComponent::GetInteractionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseComponent.GetInteractionInfo");
		
		USIGISBaseComponent_GetInteractionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISBaseComponent.FinishedInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISBaseComponent::FinishedInteract(class AActor* InteractingOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISBaseComponent.FinishedInteract");
		
		USIGISBaseComponent_FinishedInteract_Params params {};
		params.InteractingOwner = InteractingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISBaseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISBaseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISBaseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.UseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ItemToEquip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FromLoot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::UseItem(class ASIGISInventoryItem* ItemToEquip, bool FromLoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.UseItem");
		
		ASIGISCharacter_UseItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		params.FromLoot = FromLoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.UnEquipAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemToEquip                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASIGISInventoryItem*                         ItemToEquipFrom                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::UnEquipAttachmentItem(const class FString& ItemToEquip, class ASIGISInventoryItem* ItemToEquipFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.UnEquipAttachmentItem");
		
		ASIGISCharacter_UnEquipAttachmentItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		params.ItemToEquipFrom = ItemToEquipFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.UnEquipActorItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ItemToEquip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     EqualSlot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::UnEquipActorItem(class ASIGISInventoryItem* ItemToEquip, EEquipmentSlot EqualSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.UnEquipActorItem");
		
		ASIGISCharacter_UnEquipActorItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		params.EqualSlot = EqualSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.StopInteraction
	 * 		Flags  -> ()
	 */
	void ASIGISCharacter::StopInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.StopInteraction");
		
		ASIGISCharacter_StopInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.StartInteraction
	 * 		Flags  -> ()
	 */
	void ASIGISCharacter::StartInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.StartInteraction");
		
		ASIGISCharacter_StartInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.StartAbilityInteraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInteractionAbilityTypes                           AblityToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::StartAbilityInteraction(EInteractionAbilityTypes AblityToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.StartAbilityInteraction");
		
		ASIGISCharacter_StartAbilityInteraction_Params params {};
		params.AblityToUse = AblityToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.SIGIS_InteractionResultComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         ActorToInteractWith                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::SIGIS_InteractionResultComp(class UPrimitiveComponent* ActorToInteractWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.SIGIS_InteractionResultComp");
		
		ASIGISCharacter_SIGIS_InteractionResultComp_Params params {};
		params.ActorToInteractWith = ActorToInteractWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.SIGIS_InteractionResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToInteractWith                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::SIGIS_InteractionResult(class AActor* ActorToInteractWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.SIGIS_InteractionResult");
		
		ASIGISCharacter_SIGIS_InteractionResult_Params params {};
		params.ActorToInteractWith = ActorToInteractWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.SetIsMovementInputEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsMovementInputEnabled                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::SetIsMovementInputEnabled(bool IsMovementInputEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.SetIsMovementInputEnabled");
		
		ASIGISCharacter_SetIsMovementInputEnabled_Params params {};
		params.IsMovementInputEnabled = IsMovementInputEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.ServerInteractComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         CompToInteractWith                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::ServerInteractComp(class UPrimitiveComponent* CompToInteractWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.ServerInteractComp");
		
		ASIGISCharacter_ServerInteractComp_Params params {};
		params.CompToInteractWith = CompToInteractWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.ServerInteract
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ActorToInteractWith                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::ServerInteract(class AActor* ActorToInteractWith)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.ServerInteract");
		
		ASIGISCharacter_ServerInteract_Params params {};
		params.ActorToInteractWith = ActorToInteractWith;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.ProcessInteraction
	 * 		Flags  -> ()
	 */
	void ASIGISCharacter::ProcessInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.ProcessInteraction");
		
		ASIGISCharacter_ProcessInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.PlaySoundOnAllClients
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundCue*                                   Sound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::PlaySoundOnAllClients(class USoundCue* Sound, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.PlaySoundOnAllClients");
		
		ASIGISCharacter_PlaySoundOnAllClients_Params params {};
		params.Sound = Sound;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.PlayReachOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AnimToUse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::PlayReachOutAnim(const class FName& AnimToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.PlayReachOutAnim");
		
		ASIGISCharacter_PlayReachOutAnim_Params params {};
		params.AnimToUse = AnimToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.OnPlayReachOutAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        AnimToUse                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::OnPlayReachOutAnim(const class FName& AnimToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.OnPlayReachOutAnim");
		
		ASIGISCharacter_OnPlayReachOutAnim_Params params {};
		params.AnimToUse = AnimToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.InteractionDetection
	 * 		Flags  -> ()
	 */
	void ASIGISCharacter::InteractionDetection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.InteractionDetection");
		
		ASIGISCharacter_InteractionDetection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionCompInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      CompClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPrimitiveComponent* ASIGISCharacter::GetUsedLastInteractionCompInRange(class UClass* CompClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionCompInRange");
		
		ASIGISCharacter_GetUsedLastInteractionCompInRange_Params params {};
		params.CompClass = CompClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionComp
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ASIGISCharacter::GetUsedLastInteractionComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionComp");
		
		ASIGISCharacter_GetUsedLastInteractionComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionActor
	 * 		Flags  -> ()
	 */
	class AActor* ASIGISCharacter::GetUsedLastInteractionActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetUsedLastInteractionActor");
		
		ASIGISCharacter_GetUsedLastInteractionActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetLastInteractionComp
	 * 		Flags  -> ()
	 */
	class UPrimitiveComponent* ASIGISCharacter::GetLastInteractionComp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetLastInteractionComp");
		
		ASIGISCharacter_GetLastInteractionComp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetLastInteractionActor
	 * 		Flags  -> ()
	 */
	class AActor* ASIGISCharacter::GetLastInteractionActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetLastInteractionActor");
		
		ASIGISCharacter_GetLastInteractionActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetIsMovementInputEnabled
	 * 		Flags  -> ()
	 */
	bool ASIGISCharacter::GetIsMovementInputEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetIsMovementInputEnabled");
		
		ASIGISCharacter_GetIsMovementInputEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.GetHUD
	 * 		Flags  -> ()
	 */
	class ASIGISHUD* ASIGISCharacter::GetHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.GetHUD");
		
		ASIGISCharacter_GetHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.EquipAttachmentItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemToEquip                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASIGISInventoryItem*                         ItemToEquipTo                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::EquipAttachmentItem(const class FString& ItemToEquip, class ASIGISInventoryItem* ItemToEquipTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.EquipAttachmentItem");
		
		ASIGISCharacter_EquipAttachmentItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		params.ItemToEquipTo = ItemToEquipTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.EquipActorItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ItemToEquip                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     EqualSlot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISCharacter::EquipActorItem(class ASIGISInventoryItem* ItemToEquip, EEquipmentSlot EqualSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.EquipActorItem");
		
		ASIGISCharacter_EquipActorItem_Params params {};
		params.ItemToEquip = ItemToEquip;
		params.EqualSlot = EqualSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.CheckLoadInventory
	 * 		Flags  -> ()
	 */
	void ASIGISCharacter::CheckLoadInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.CheckLoadInventory");
		
		ASIGISCharacter_CheckLoadInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISCharacter.BagUsed
	 * 		Flags  -> ()
	 */
	void ASIGISCharacter::BagUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISCharacter.BagUsed");
		
		ASIGISCharacter_BagUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISContractActor.CharacterOverlapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISCharacter*                             InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISContractActor::CharacterOverlapped(class ASIGISCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISContractActor.CharacterOverlapped");
		
		ASIGISContractActor_CharacterOverlapped_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISContractActor.CharacterEndOverlapped
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISCharacter*                             InteractingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISContractActor::CharacterEndOverlapped(class ASIGISCharacter* InteractingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISContractActor.CharacterEndOverlapped");
		
		ASIGISContractActor_CharacterEndOverlapped_Params params {};
		params.InteractingActor = InteractingActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISContractActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISContractActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISContractActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISDeathActor.OnRep_SetEquipment
	 * 		Flags  -> ()
	 */
	void ASIGISDeathActor::OnRep_SetEquipment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISDeathActor.OnRep_SetEquipment");
		
		ASIGISDeathActor_OnRep_SetEquipment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISDeathActor.OnRep_SetBoth
	 * 		Flags  -> ()
	 */
	void ASIGISDeathActor::OnRep_SetBoth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISDeathActor.OnRep_SetBoth");
		
		ASIGISDeathActor_OnRep_SetBoth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISDeathActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISDeathActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISDeathActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.ServerUnequipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     SlotChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::ServerUnequipItem(const class FString& ItemId, EEquipmentSlot SlotChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.ServerUnequipItem");
		
		USIGISEquipmentComponent_ServerUnequipItem_Params params {};
		params.ItemId = ItemId;
		params.SlotChecked = SlotChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.ServerUnequipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemIDTo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::ServerUnequipAttachment(const class FString& ItemId, const class FString& ItemIDTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.ServerUnequipAttachment");
		
		USIGISEquipmentComponent_ServerUnequipAttachment_Params params {};
		params.ItemId = ItemId;
		params.ItemIDTo = ItemIDTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.ServerEquipItemToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     EquipmentSlote                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::ServerEquipItemToSlot(const class FString& ItemId, EEquipmentSlot EquipmentSlote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.ServerEquipItemToSlot");
		
		USIGISEquipmentComponent_ServerEquipItemToSlot_Params params {};
		params.ItemId = ItemId;
		params.EquipmentSlote = EquipmentSlote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.ServerEquipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemIDTo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::ServerEquipAttachment(const class FString& ItemId, const class FString& ItemIDTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.ServerEquipAttachment");
		
		USIGISEquipmentComponent_ServerEquipAttachment_Params params {};
		params.ItemId = ItemId;
		params.ItemIDTo = ItemIDTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.Server_UsedDuribility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::Server_UsedDuribility(const class FString& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.Server_UsedDuribility");
		
		USIGISEquipmentComponent_Server_UsedDuribility_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.Client_UsedDuribility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::Client_UsedDuribility(const class FString& ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.Client_UsedDuribility");
		
		USIGISEquipmentComponent_Client_UsedDuribility_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.Client_UnequipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     EquipmentSlote                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::Client_UnequipItem(const class FString& ItemId, EEquipmentSlot EquipmentSlote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.Client_UnequipItem");
		
		USIGISEquipmentComponent_Client_UnequipItem_Params params {};
		params.ItemId = ItemId;
		params.EquipmentSlote = EquipmentSlote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.Client_UnequipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemIDTo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::Client_UnequipAttachment(const class FString& ItemId, const class FString& ItemIDTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.Client_UnequipAttachment");
		
		USIGISEquipmentComponent_Client_UnequipAttachment_Params params {};
		params.ItemId = ItemId;
		params.ItemIDTo = ItemIDTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.Client_EquipItemToSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     EquipmentSlote                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::Client_EquipItemToSlot(const class FString& ItemId, EEquipmentSlot EquipmentSlote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.Client_EquipItemToSlot");
		
		USIGISEquipmentComponent_Client_EquipItemToSlot_Params params {};
		params.ItemId = ItemId;
		params.EquipmentSlote = EquipmentSlote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISEquipmentComponent.Client_EquipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ItemIDTo                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISEquipmentComponent::Client_EquipAttachment(const class FString& ItemId, const class FString& ItemIDTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISEquipmentComponent.Client_EquipAttachment");
		
		USIGISEquipmentComponent_Client_EquipAttachment_Params params {};
		params.ItemId = ItemId;
		params.ItemIDTo = ItemIDTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISEquipmentComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISEquipmentComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISEquipmentComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISFrigateRenderActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISFrigateRenderActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISFrigateRenderActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.Twitch_HasAppLink
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstanceNakama::Twitch_HasAppLink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.Twitch_HasAppLink");
		
		USIGISGameInstanceNakama_Twitch_HasAppLink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.IsBackendHealthy
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::IsBackendHealthy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.IsBackendHealthy");
		
		USIGISGameInstanceNakama_IsBackendHealthy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.IsADevBuild
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstanceNakama::IsADevBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.IsADevBuild");
		
		USIGISGameInstanceNakama_IsADevBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.GetMyNakamaID
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstanceNakama::GetMyNakamaID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.GetMyNakamaID");
		
		USIGISGameInstanceNakama_GetMyNakamaID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.GetCrrentNakMatchmakingTicket
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstanceNakama::GetCrrentNakMatchmakingTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.GetCrrentNakMatchmakingTicket");
		
		USIGISGameInstanceNakama_GetCrrentNakMatchmakingTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.GenerateQrCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* USIGISGameInstanceNakama::GenerateQrCode(class UObject* Parent, const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.GenerateQrCode");
		
		USIGISGameInstanceNakama_GenerateQrCode_Params params {};
		params.Parent = Parent;
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.ClearNakMatchmakingTicket
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::ClearNakMatchmakingTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.ClearNakMatchmakingTicket");
		
		USIGISGameInstanceNakama_ClearNakMatchmakingTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_WriteLeaderBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LeaderboardId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numScore                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_WriteLeaderBoard(const class FString& LeaderboardId, int32_t numScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_WriteLeaderBoard");
		
		USIGISGameInstanceNakama_AwsN_WriteLeaderBoard_Params params {};
		params.LeaderboardId = LeaderboardId;
		params.numScore = numScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMetaArrayTravelToMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewIDKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPlayerStatString>                   StatArray                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServeripToJoin                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_UpdateCrewMetaArrayTravelToMatch(const class FString& CrewIDKey, TArray<struct FPlayerStatString> StatArray, const class FString& ServeripToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMetaArrayTravelToMatch");
		
		USIGISGameInstanceNakama_AwsN_UpdateCrewMetaArrayTravelToMatch_Params params {};
		params.CrewIDKey = CrewIDKey;
		params.StatArray = StatArray;
		params.ServeripToJoin = ServeripToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMetaArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewIDKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FPlayerStatString>                   StatArray                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_UpdateCrewMetaArray(const class FString& CrewIDKey, TArray<struct FPlayerStatString> StatArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMetaArray");
		
		USIGISGameInstanceNakama_AwsN_UpdateCrewMetaArray_Params params {};
		params.CrewIDKey = CrewIDKey;
		params.StatArray = StatArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMeta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewIDKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaKey                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MetaValue                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_UpdateCrewMeta(const class FString& CrewIDKey, const class FString& MetaKey, const class FString& MetaValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrewMeta");
		
		USIGISGameInstanceNakama_AwsN_UpdateCrewMeta_Params params {};
		params.CrewIDKey = CrewIDKey;
		params.MetaKey = MetaKey;
		params.MetaValue = MetaValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PrivateCrew                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      avatarUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      langTag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_UpdateCrew(const class FString& CrewName, bool PrivateCrew, const class FString& Description, const class FString& avatarUrl, const class FString& langTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_UpdateCrew");
		
		USIGISGameInstanceNakama_AwsN_UpdateCrew_Params params {};
		params.CrewName = CrewName;
		params.PrivateCrew = PrivateCrew;
		params.Description = Description;
		params.avatarUrl = avatarUrl;
		params.langTag = langTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      myStatus                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_SetStatus(const class FString& myStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetStatus");
		
		USIGISGameInstanceNakama_AwsN_SetStatus_Params params {};
		params.myStatus = myStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetMetaStatString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatAddion                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_SetMetaStatString(const class FString& StatName, const class FString& StatAddion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetMetaStatString");
		
		USIGISGameInstanceNakama_AwsN_SetMetaStatString_Params params {};
		params.StatName = StatName;
		params.StatAddion = StatAddion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetMetaStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StatAddion                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_SetMetaStat(const class FString& StatName, int32_t StatAddion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetMetaStat");
		
		USIGISGameInstanceNakama_AwsN_SetMetaStat_Params params {};
		params.StatName = StatName;
		params.StatAddion = StatAddion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetJsonPropMakeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyIn                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ValueIn                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USIGISGameInstanceNakama::AwsN_SetJsonPropMakeString(const class FString& KeyIn, const class FString& ValueIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetJsonPropMakeString");
		
		USIGISGameInstanceNakama_AwsN_SetJsonPropMakeString_Params params {};
		params.KeyIn = KeyIn;
		params.ValueIn = ValueIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetJsonPropArrayMakeString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLobbyInfo>                          ArrayIn                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class FString USIGISGameInstanceNakama::AwsN_SetJsonPropArrayMakeString(TArray<struct FLobbyInfo> ArrayIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetJsonPropArrayMakeString");
		
		USIGISGameInstanceNakama_AwsN_SetJsonPropArrayMakeString_Params params {};
		params.ArrayIn = ArrayIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetCrewMyLook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StatAddion                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_SetCrewMyLook(const class FString& StatName, const class FString& StatAddion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SetCrewMyLook");
		
		USIGISGameInstanceNakama_AwsN_SetCrewMyLook_Params params {};
		params.StatName = StatName;
		params.StatAddion = StatAddion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SendCrewChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewChatMessage                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_SendCrewChat(const class FString& CrewChatMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_SendCrewChat");
		
		USIGISGameInstanceNakama_AwsN_SendCrewChat_Params params {};
		params.CrewChatMessage = CrewChatMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_NakStartSoloMM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RegionCode                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FleetAlias                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_NakStartSoloMM(const class FString& RegionCode, const class FString& FleetAlias)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_NakStartSoloMM");
		
		USIGISGameInstanceNakama_AwsN_NakStartSoloMM_Params params {};
		params.RegionCode = RegionCode;
		params.FleetAlias = FleetAlias;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_NakStartMM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RegionCode                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FleetAlias                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Minplayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_NakStartMM(const class FString& RegionCode, const class FString& FleetAlias, int32_t Minplayers, int32_t MaxPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_NakStartMM");
		
		USIGISGameInstanceNakama_AwsN_NakStartMM_Params params {};
		params.RegionCode = RegionCode;
		params.FleetAlias = FleetAlias;
		params.Minplayers = Minplayers;
		params.MaxPlayers = MaxPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListLeaderBoardAroundUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LeaderboardId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numAround                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_ListLeaderBoardAroundUser(const class FString& LeaderboardId, int32_t numAround)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListLeaderBoardAroundUser");
		
		USIGISGameInstanceNakama_AwsN_ListLeaderBoardAroundUser_Params params {};
		params.LeaderboardId = LeaderboardId;
		params.numAround = numAround;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListLeaderBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LeaderboardId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmountReturn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SpecificUserInAddition                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_ListLeaderBoard(const class FString& LeaderboardId, const class FString& pageNum, int32_t AmountReturn, TArray<class FString> SpecificUserInAddition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListLeaderBoard");
		
		USIGISGameInstanceNakama_AwsN_ListLeaderBoard_Params params {};
		params.LeaderboardId = LeaderboardId;
		params.pageNum = pageNum;
		params.AmountReturn = AmountReturn;
		params.SpecificUserInAddition = SpecificUserInAddition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListFriends
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PageIn                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_ListFriends(const class FString& PageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_ListFriends");
		
		USIGISGameInstanceNakama_AwsN_ListFriends_Params params {};
		params.PageIn = PageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyIDIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_LeaveParty(const class FString& PartyIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveParty");
		
		USIGISGameInstanceNakama_AwsN_LeaveParty_Params params {};
		params.PartyIDIn = PartyIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveCrewChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_LeaveCrewChat(const class FString& CrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveCrewChat");
		
		USIGISGameInstanceNakama_AwsN_LeaveCrewChat_Params params {};
		params.CrewID = CrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NCrewID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_LeaveCrew(const class FString& NCrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_LeaveCrew");
		
		USIGISGameInstanceNakama_AwsN_LeaveCrew_Params params {};
		params.NCrewID = NCrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_KickCrewMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NCrewID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_KickCrewMember(const class FString& NCrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_KickCrewMember");
		
		USIGISGameInstanceNakama_AwsN_KickCrewMember_Params params {};
		params.NCrewID = NCrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_JoingCrewChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewID                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_JoingCrewChat(const class FString& CrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_JoingCrewChat");
		
		USIGISGameInstanceNakama_AwsN_JoingCrewChat_Params params {};
		params.CrewID = CrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_JoinCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NCrewID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_JoinCrew(const class FString& NCrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_JoinCrew");
		
		USIGISGameInstanceNakama_AwsN_JoinCrew_Params params {};
		params.NCrewID = NCrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_IncrementMetaStatArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FPlayerStat>                         StatArray                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_IncrementMetaStatArray(TArray<struct FPlayerStat> StatArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_IncrementMetaStatArray");
		
		USIGISGameInstanceNakama_AwsN_IncrementMetaStatArray_Params params {};
		params.StatArray = StatArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_IncrementMetaStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StatName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StatAddion                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_IncrementMetaStat(const class FString& StatName, int32_t StatAddion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_IncrementMetaStat");
		
		USIGISGameInstanceNakama_AwsN_IncrementMetaStat_Params params {};
		params.StatName = StatName;
		params.StatAddion = StatAddion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetVersion
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetVersion");
		
		USIGISGameInstanceNakama_AwsN_GetVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerNotice
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetplayerNotice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerNotice");
		
		USIGISGameInstanceNakama_AwsN_GetplayerNotice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerGifts
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetplayerGifts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerGifts");
		
		USIGISGameInstanceNakama_AwsN_GetplayerGifts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerCampaign
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetplayerCampaign()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetplayerCampaign");
		
		USIGISGameInstanceNakama_AwsN_GetplayerCampaign_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetNotifications
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetNotifications");
		
		USIGISGameInstanceNakama_AwsN_GetNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetMetaStats
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetMetaStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetMetaStats");
		
		USIGISGameInstanceNakama_AwsN_GetMetaStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetJsonPropFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyIn                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JsonStringIn                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USIGISGameInstanceNakama::AwsN_GetJsonPropFromString(const class FString& KeyIn, const class FString& JsonStringIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetJsonPropFromString");
		
		USIGISGameInstanceNakama_AwsN_GetJsonPropFromString_Params params {};
		params.KeyIn = KeyIn;
		params.JsonStringIn = JsonStringIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetGroupInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      GroupIdIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_GetGroupInfo(const class FString& GroupIdIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetGroupInfo");
		
		USIGISGameInstanceNakama_AwsN_GetGroupInfo_Params params {};
		params.GroupIdIn = GroupIdIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetCrewMetaReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_GetCrewMetaReturn(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetCrewMetaReturn");
		
		USIGISGameInstanceNakama_AwsN_GetCrewMetaReturn_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetCrewMeta
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewIDKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_GetCrewMeta(const class FString& CrewIDKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetCrewMeta");
		
		USIGISGameInstanceNakama_AwsN_GetCrewMeta_Params params {};
		params.CrewIDKey = CrewIDKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetAllFriendsGroups
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetAllFriendsGroups()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetAllFriendsGroups");
		
		USIGISGameInstanceNakama_AwsN_GetAllFriendsGroups_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetAccount
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_GetAccount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_GetAccount");
		
		USIGISGameInstanceNakama_AwsN_GetAccount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_DestroyCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NCrewID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_DestroyCrew(const class FString& NCrewID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_DestroyCrew");
		
		USIGISGameInstanceNakama_AwsN_DestroyCrew_Params params {};
		params.NCrewID = NCrewID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_DeleteNofifications
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              IDsToRemove                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_DeleteNofifications(TArray<class FString> IDsToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_DeleteNofifications");
		
		USIGISGameInstanceNakama_AwsN_DeleteNofifications_Params params {};
		params.IDsToRemove = IDsToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchMyGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CrewSearchMyGroups(const class FString& pageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchMyGroups");
		
		USIGISGameInstanceNakama_AwsN_CrewSearchMyGroups_Params params {};
		params.pageNum = pageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchFriendHasCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserUUID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CrewSearchFriendHasCrew(const class FString& pageNum, const class FString& UserUUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchFriendHasCrew");
		
		USIGISGameInstanceNakama_AwsN_CrewSearchFriendHasCrew_Params params {};
		params.pageNum = pageNum;
		params.UserUUID = UserUUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserUUID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CrewSearchFriend(const class FString& pageNum, const class FString& UserUUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchFriend");
		
		USIGISGameInstanceNakama_AwsN_CrewSearchFriend_Params params {};
		params.pageNum = pageNum;
		params.UserUUID = UserUUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbyUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UserUUID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CrewSearchbyUser(const class FString& pageNum, const class FString& UserUUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbyUser");
		
		USIGISGameInstanceNakama_AwsN_CrewSearchbyUser_Params params {};
		params.pageNum = pageNum;
		params.UserUUID = UserUUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbySteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      steamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CrewSearchbySteamID(const class FString& pageNum, const class FString& steamId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbySteamID");
		
		USIGISGameInstanceNakama_AwsN_CrewSearchbySteamID_Params params {};
		params.pageNum = pageNum;
		params.steamId = steamId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbyName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      pageNum                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CrewSearchbyName(const class FString& pageNum, const class FString& CrewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CrewSearchbyName");
		
		USIGISGameInstanceNakama_AwsN_CrewSearchbyName_Params params {};
		params.pageNum = pageNum;
		params.CrewName = CrewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateParty
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_CreateParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateParty");
		
		USIGISGameInstanceNakama_AwsN_CreateParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrewRpcReceaved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CreateCrewRpcReceaved(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrewRpcReceaved");
		
		USIGISGameInstanceNakama_AwsN_CreateCrewRpcReceaved_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrewRpc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PrivateCrew                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      avatarUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CptName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      steamId                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               locked                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ship                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CreateCrewRpc(const class FString& CrewName, bool PrivateCrew, const class FString& Description, const class FString& avatarUrl, const class FString& CptName, const class FString& steamId, bool locked, const class FString& ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrewRpc");
		
		USIGISGameInstanceNakama_AwsN_CreateCrewRpc_Params params {};
		params.CrewName = CrewName;
		params.PrivateCrew = PrivateCrew;
		params.Description = Description;
		params.avatarUrl = avatarUrl;
		params.CptName = CptName;
		params.steamId = steamId;
		params.locked = locked;
		params.ship = ship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PrivateCrew                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      avatarUrl                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      langTag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_CreateCrew(const class FString& CrewName, bool PrivateCrew, const class FString& Description, const class FString& avatarUrl, const class FString& langTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CreateCrew");
		
		USIGISGameInstanceNakama_AwsN_CreateCrew_Params params {};
		params.CrewName = CrewName;
		params.PrivateCrew = PrivateCrew;
		params.Description = Description;
		params.avatarUrl = avatarUrl;
		params.langTag = langTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CancelMM
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_CancelMM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_CancelMM");
		
		USIGISGameInstanceNakama_AwsN_CancelMM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_BeenKicked
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceNakama::AwsN_BeenKicked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_BeenKicked");
		
		USIGISGameInstanceNakama_AwsN_BeenKicked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_AddFriendToGroup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NCrewID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FriendID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceNakama::AwsN_AddFriendToGroup(const class FString& NCrewID, const class FString& FriendID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceNakama.AwsN_AddFriendToGroup");
		
		USIGISGameInstanceNakama_AwsN_AddFriendToGroup_Params params {};
		params.NCrewID = NCrewID;
		params.FriendID = FriendID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISGameInstanceNakama.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISGameInstanceNakama::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameInstanceNakama");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.SetPlatformLobbyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::SetPlatformLobbyData(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.SetPlatformLobbyData");
		
		USIGISGameInstanceGraphQL_SetPlatformLobbyData_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.SendDynamoScoreRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUpdateItemRequest                          RequstOut                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		EDynamoLeaderBoardEvent                            RequestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::SendDynamoScoreRequest(const struct FUpdateItemRequest& RequstOut, EDynamoLeaderBoardEvent RequestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.SendDynamoScoreRequest");
		
		USIGISGameInstanceGraphQL_SendDynamoScoreRequest_Params params {};
		params.RequstOut = RequstOut;
		params.RequestType = RequestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.SendDynamoRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQueryRequest                               RequstOut                                                  (Parm, NativeAccessSpecifierPublic)
	 * 		EDynamoLeaderBoardEvent                            RequestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::SendDynamoRequest(const struct FQueryRequest& RequstOut, EDynamoLeaderBoardEvent RequestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.SendDynamoRequest");
		
		USIGISGameInstanceGraphQL_SendDynamoRequest_Params params {};
		params.RequstOut = RequstOut;
		params.RequestType = RequestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.ReturnQuery
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               DynoFailed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              QueryBack                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EDynamoLeaderBoardEvent                            RequestType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::ReturnQuery(bool DynoFailed, TArray<class FString> QueryBack, EDynamoLeaderBoardEvent RequestType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.ReturnQuery");
		
		USIGISGameInstanceGraphQL_ReturnQuery_Params params {};
		params.DynoFailed = DynoFailed;
		params.QueryBack = QueryBack;
		params.RequestType = RequestType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.Ping_OnFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPingIP*                                     PingOperation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Hostname                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::Ping_OnFail(class UPingIP* PingOperation, const class FString& Hostname)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.Ping_OnFail");
		
		USIGISGameInstanceGraphQL_Ping_OnFail_Params params {};
		params.PingOperation = PingOperation;
		params.Hostname = Hostname;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.Ping_OnComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPingIP*                                     PingOperation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Hostname                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TimeMS                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::Ping_OnComplete(class UPingIP* PingOperation, const class FString& Hostname, int32_t TimeMS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.Ping_OnComplete");
		
		USIGISGameInstanceGraphQL_Ping_OnComplete_Params params {};
		params.PingOperation = PingOperation;
		params.Hostname = Hostname;
		params.TimeMS = TimeMS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.IsOnNaughtyList
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceGraphQL::IsOnNaughtyList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.IsOnNaughtyList");
		
		USIGISGameInstanceGraphQL_IsOnNaughtyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.IsASIGBuild
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstanceGraphQL::IsASIGBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.IsASIGBuild");
		
		USIGISGameInstanceGraphQL_IsASIGBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.IsAnAlphaBuild
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstanceGraphQL::IsAnAlphaBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.IsAnAlphaBuild");
		
		USIGISGameInstanceGraphQL_IsAnAlphaBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.ISAMarauderAPP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AppIDIn                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USIGISGameInstanceGraphQL::ISAMarauderAPP(const class FString& AppIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.ISAMarauderAPP");
		
		USIGISGameInstanceGraphQL_ISAMarauderAPP_Params params {};
		params.AppIDIn = AppIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.IsAEXPOBuild
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstanceGraphQL::IsAEXPOBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.IsAEXPOBuild");
		
		USIGISGameInstanceGraphQL_IsAEXPOBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriendToCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FriendID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USIGISGameInstanceGraphQL::InviteFriendToCrew(const class FString& FriendID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriendToCrew");
		
		USIGISGameInstanceGraphQL_InviteFriendToCrew_Params params {};
		params.FriendID = FriendID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriendbyCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewUniqieUserID                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::InviteFriendbyCrew(const class FString& CrewUniqieUserID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriendbyCrew");
		
		USIGISGameInstanceGraphQL_InviteFriendbyCrew_Params params {};
		params.CrewUniqieUserID = CrewUniqieUserID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FriendCode                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::InviteFriend(const class FString& FriendCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.InviteFriend");
		
		USIGISGameInstanceGraphQL_InviteFriend_Params params {};
		params.FriendCode = FriendCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetTitleInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TitleTypeOut                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleNewsOut                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      titleNewsImageURLOut                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::GetTitleInfo(class FString* TitleTypeOut, class FString* TitleNewsOut, class FString* titleNewsImageURLOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetTitleInfo");
		
		USIGISGameInstanceGraphQL_GetTitleInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TitleTypeOut != nullptr)
			*TitleTypeOut = params.TitleTypeOut;
		if (TitleNewsOut != nullptr)
			*TitleNewsOut = params.TitleNewsOut;
		if (titleNewsImageURLOut != nullptr)
			*titleNewsImageURLOut = params.titleNewsImageURLOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetSteamFriendsForLobbySearch
	 * 		Flags  -> ()
	 */
	TArray<struct FPlatformFriendInformationSteam> USIGISGameInstanceGraphQL::GetSteamFriendsForLobbySearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetSteamFriendsForLobbySearch");
		
		USIGISGameInstanceGraphQL_GetSteamFriendsForLobbySearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetSteamAvatarURLandNick
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceGraphQL::GetSteamAvatarURLandNick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetSteamAvatarURLandNick");
		
		USIGISGameInstanceGraphQL_GetSteamAvatarURLandNick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPingsToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FDynamicRegions>                     ArrayIn                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString USIGISGameInstanceGraphQL::GetPlayerRegionPingsToString(TArray<struct FDynamicRegions> ArrayIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPingsToString");
		
		USIGISGameInstanceGraphQL_GetPlayerRegionPingsToString_Params params {};
		params.ArrayIn = ArrayIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPingsFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ArrayIn                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FDynamicRegions> USIGISGameInstanceGraphQL::GetPlayerRegionPingsFromString(const class FString& ArrayIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPingsFromString");
		
		USIGISGameInstanceGraphQL_GetPlayerRegionPingsFromString_Params params {};
		params.ArrayIn = ArrayIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPings
	 * 		Flags  -> ()
	 */
	TArray<struct FDynamicRegions> USIGISGameInstanceGraphQL::GetPlayerRegionPings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlayerRegionPings");
		
		USIGISGameInstanceGraphQL_GetPlayerRegionPings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlatformLobbyData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USIGISGameInstanceGraphQL::GetPlatformLobbyData(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetPlatformLobbyData");
		
		USIGISGameInstanceGraphQL_GetPlatformLobbyData_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetMyLeaderBoardPos
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceGraphQL::GetMyLeaderBoardPos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetMyLeaderBoardPos");
		
		USIGISGameInstanceGraphQL_GetMyLeaderBoardPos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetMyFriendCode
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstanceGraphQL::GetMyFriendCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetMyFriendCode");
		
		USIGISGameInstanceGraphQL_GetMyFriendCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetLambdaObject
	 * 		Flags  -> ()
	 */
	class ULambdaClientObject* USIGISGameInstanceGraphQL::GetLambdaObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetLambdaObject");
		
		USIGISGameInstanceGraphQL_GetLambdaObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetKillsLeaderBoard
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceGraphQL::GetKillsLeaderBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetKillsLeaderBoard");
		
		USIGISGameInstanceGraphQL_GetKillsLeaderBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetDBObject
	 * 		Flags  -> ()
	 */
	class UDynamoDBClientObject* USIGISGameInstanceGraphQL::GetDBObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetDBObject");
		
		USIGISGameInstanceGraphQL_GetDBObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.GetAllFriendsInfo
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceGraphQL::GetAllFriendsInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.GetAllFriendsInfo");
		
		USIGISGameInstanceGraphQL_GetAllFriendsInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoLeaderBoardSetScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ScoreIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::DynoLeaderBoardSetScore(int32_t ScoreIn, const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoLeaderBoardSetScore");
		
		USIGISGameInstanceGraphQL_DynoLeaderBoardSetScore_Params params {};
		params.ScoreIn = ScoreIn;
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoHasUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::DynoHasUser(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoHasUser");
		
		USIGISGameInstanceGraphQL_DynoHasUser_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoGetMyScore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::DynoGetMyScore(const class FString& PlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoGetMyScore");
		
		USIGISGameInstanceGraphQL_DynoGetMyScore_Params params {};
		params.PlayerName = PlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoGetAllLeaderBoard
	 * 		Flags  -> ()
	 */
	void USIGISGameInstanceGraphQL::DynoGetAllLeaderBoard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.DynoGetAllLeaderBoard");
		
		USIGISGameInstanceGraphQL_DynoGetAllLeaderBoard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.DynamoCreatePlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VersionString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::DynamoCreatePlayer(const class FString& PlayerName, const class FString& VersionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.DynamoCreatePlayer");
		
		USIGISGameInstanceGraphQL_DynamoCreatePlayer_Params params {};
		params.PlayerName = PlayerName;
		params.VersionString = VersionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_StartMatchMaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FSIGGameLiftPlayer>                  players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      configurationName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::AwsWs_StartMatchMaking(TArray<struct FSIGGameLiftPlayer> players, const class FString& configurationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_StartMatchMaking");
		
		USIGISGameInstanceGraphQL_AwsWs_StartMatchMaking_Params params {};
		params.players = players;
		params.configurationName = configurationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_QueryMMTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::AwsWs_QueryMMTicket(const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_QueryMMTicket");
		
		USIGISGameInstanceGraphQL_AwsWs_QueryMMTicket_Params params {};
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_CancelMatchMaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::AwsWs_CancelMatchMaking(const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.AwsWs_CancelMatchMaking");
		
		USIGISGameInstanceGraphQL_AwsWs_CancelMatchMaking_Params params {};
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceGraphQL.AddKillToLeaderBoard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Kills                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceGraphQL::AddKillToLeaderBoard(int32_t Kills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceGraphQL.AddKillToLeaderBoard");
		
		USIGISGameInstanceGraphQL_AddKillToLeaderBoard_Params params {};
		params.Kills = Kills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISGameInstanceGraphQL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISGameInstanceGraphQL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameInstanceGraphQL");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.StringToAttachmentArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              OutArray                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool USIGISGameInstance::StringToAttachmentArray(const class FString& inString, TArray<class FString>* OutArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.StringToAttachmentArray");
		
		USIGISGameInstance_StringToAttachmentArray_Params params {};
		params.inString = inString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutArray != nullptr)
			*OutArray = params.OutArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.StateFromString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StateIn                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECrewState USIGISGameInstance::StateFromString(const class FString& StateIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.StateFromString");
		
		USIGISGameInstance_StateFromString_Params params {};
		params.StateIn = StateIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.StartPlayFabLogin
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::StartPlayFabLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.StartPlayFabLogin");
		
		USIGISGameInstance_StartPlayFabLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.StartAndRefreshMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::StartAndRefreshMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.StartAndRefreshMatchmaking");
		
		USIGISGameInstance_StartAndRefreshMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ShipChanged
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::ShipChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ShipChanged");
		
		USIGISGameInstance_ShipChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetVoiceRoomID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RoomIDOut                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetVoiceRoomID(const class FString& RoomIDOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetVoiceRoomID");
		
		USIGISGameInstance_SetVoiceRoomID_Params params {};
		params.RoomIDOut = RoomIDOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetProfileInBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IDOut                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetProfileInBP(const class FString& IDOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetProfileInBP");
		
		USIGISGameInstance_SetProfileInBP_Params params {};
		params.IDOut = IDOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetPlayerSessionIDsAndSetTravelToMapIP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameliftSessionPlayerID>            PlaySessions                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ConnectIP                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetPlayerSessionIDsAndSetTravelToMapIP(TArray<struct FGameliftSessionPlayerID> PlaySessions, const class FString& ConnectIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetPlayerSessionIDsAndSetTravelToMapIP");
		
		USIGISGameInstance_SetPlayerSessionIDsAndSetTravelToMapIP_Params params {};
		params.PlaySessions = PlaySessions;
		params.ConnectIP = ConnectIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetPlatfromNickNameandAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerNick                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImageURL                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetPlatfromNickNameandAvatar(const class FString& PlayerNick, const class FString& ImageURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetPlatfromNickNameandAvatar");
		
		USIGISGameInstance_SetPlatfromNickNameandAvatar_Params params {};
		params.PlayerNick = PlayerNick;
		params.ImageURL = ImageURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetMatchMakeDrone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IDdrone                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      QueMode                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetMatchMakeDrone(const class FString& IDdrone, const class FString& QueMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetMatchMakeDrone");
		
		USIGISGameInstance_SetMatchMakeDrone_Params params {};
		params.IDdrone = IDdrone;
		params.QueMode = QueMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetEndMatchXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            AmountXP                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetEndMatchXP(int32_t AmountXP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetEndMatchXP");
		
		USIGISGameInstance_SetEndMatchXP_Params params {};
		params.AmountXP = AmountXP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SetActiveShipConSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ShipDataIn                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SetActiveShipConSize(const class FString& ShipDataIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SetActiveShipConSize");
		
		USIGISGameInstance_SetActiveShipConSize_Params params {};
		params.ShipDataIn = ShipDataIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ServerRefreshBackEnd
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::ServerRefreshBackEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ServerRefreshBackEnd");
		
		USIGISGameInstance_ServerRefreshBackEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SendTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTicketInfo                                 TicketInfo                                                 (Parm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SendTicket(const struct FTicketInfo& TicketInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SendTicket");
		
		USIGISGameInstance_SendTicket_Params params {};
		params.TicketInfo = TicketInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SendEndMatchInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                ItemsHave                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            XPIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            KillsIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               DeathIn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SendEndMatchInfo(TArray<class FName> ItemsHave, int32_t XPIn, int32_t KillsIn, bool DeathIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SendEndMatchInfo");
		
		USIGISGameInstance_SendEndMatchInfo_Params params {};
		params.ItemsHave = ItemsHave;
		params.XPIn = XPIn;
		params.KillsIn = KillsIn;
		params.DeathIn = DeathIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SearchingForMatch
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::SearchingForMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SearchingForMatch");
		
		USIGISGameInstance_SearchingForMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.SearchForCrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pageNum                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::SearchForCrew(int32_t pageNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.SearchForCrew");
		
		USIGISGameInstance_SearchForCrew_Params params {};
		params.pageNum = pageNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.RefreshLobbyItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringIn                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::RefreshLobbyItems(const class FString& StringIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.RefreshLobbyItems");
		
		USIGISGameInstance_RefreshLobbyItems_Params params {};
		params.StringIn = StringIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ProfileGetPlayerReturnFromMatch
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::ProfileGetPlayerReturnFromMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ProfileGetPlayerReturnFromMatch");
		
		USIGISGameInstance_ProfileGetPlayerReturnFromMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.PlayerChangedDisplayStringToInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      StringIn                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FMenuPlayerLook USIGISGameInstance::PlayerChangedDisplayStringToInfo(const class FString& StringIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.PlayerChangedDisplayStringToInfo");
		
		USIGISGameInstance_PlayerChangedDisplayStringToInfo_Params params {};
		params.StringIn = StringIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.OverrideKilledByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewOverride                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::OverrideKilledByName(const class FString& NewOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.OverrideKilledByName");
		
		USIGISGameInstance_OverrideKilledByName_Params params {};
		params.NewOverride = NewOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.LoadMainMenu
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::LoadMainMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.LoadMainMenu");
		
		USIGISGameInstance_LoadMainMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.LeaveCrew
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::LeaveCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.LeaveCrew");
		
		USIGISGameInstance_LeaveCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.JoinACrew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHLobbyDetails                           LobbyToJoin                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::JoinACrew(const struct FEOSHLobbyDetails& LobbyToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.JoinACrew");
		
		USIGISGameInstance_JoinACrew_Params params {};
		params.LobbyToJoin = LobbyToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.IsSteamRunning
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::IsSteamRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.IsSteamRunning");
		
		USIGISGameInstance_IsSteamRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.IsInCrew
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::IsInCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.IsInCrew");
		
		USIGISGameInstance_IsInCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.IsGDKRunning
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::IsGDKRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.IsGDKRunning");
		
		USIGISGameInstance_IsGDKRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.IsDisCordRunning
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::IsDisCordRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.IsDisCordRunning");
		
		USIGISGameInstance_IsDisCordRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.IsATestBuild
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::IsATestBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.IsATestBuild");
		
		USIGISGameInstance_IsATestBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ImIACaptian
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::ImIACaptian()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ImIACaptian");
		
		USIGISGameInstance_ImIACaptian_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetServerPort
	 * 		Flags  -> ()
	 */
	int32_t USIGISGameInstance::GetServerPort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetServerPort");
		
		USIGISGameInstance_GetServerPort_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetRownameForFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFactionType                                       FactionIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName USIGISGameInstance::GetRownameForFaction(EFactionType FactionIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetRownameForFaction");
		
		USIGISGameInstance_GetRownameForFaction_Params params {};
		params.FactionIn = FactionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetRemoteDiscordUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DiscordIDIn                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::GetRemoteDiscordUserInfo(const class FString& DiscordIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetRemoteDiscordUserInfo");
		
		USIGISGameInstance_GetRemoteDiscordUserInfo_Params params {};
		params.DiscordIDIn = DiscordIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetRegionNumberAsString
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetRegionNumberAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetRegionNumberAsString");
		
		USIGISGameInstance_GetRegionNumberAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetPlatformNickAndAvater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayerNick                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImageURL                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::GetPlatformNickAndAvater(class FString* PlayerNick, class FString* ImageURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetPlatformNickAndAvater");
		
		USIGISGameInstance_GetPlatformNickAndAvater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerNick != nullptr)
			*PlayerNick = params.PlayerNick;
		if (ImageURL != nullptr)
			*ImageURL = params.ImageURL;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetPlatformBuildType
	 * 		Flags  -> ()
	 */
	EPlatformBuild USIGISGameInstance::GetPlatformBuildType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetPlatformBuildType");
		
		USIGISGameInstance_GetPlatformBuildType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetOSSPlayerInfo
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::GetOSSPlayerInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetOSSPlayerInfo");
		
		USIGISGameInstance_GetOSSPlayerInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetNumberOfPlayersInMatch
	 * 		Flags  -> ()
	 */
	int32_t USIGISGameInstance::GetNumberOfPlayersInMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetNumberOfPlayersInMatch");
		
		USIGISGameInstance_GetNumberOfPlayersInMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetMyPlatformID
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetMyPlatformID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetMyPlatformID");
		
		USIGISGameInstance_GetMyPlatformID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetMyLocalZeuzID
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetMyLocalZeuzID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetMyLocalZeuzID");
		
		USIGISGameInstance_GetMyLocalZeuzID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetMemberLobbyInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           userId                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLobbyInfo> USIGISGameInstance::GetMemberLobbyInformation(const struct FEOSProductUserId& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetMemberLobbyInformation");
		
		USIGISGameInstance_GetMemberLobbyInformation_Params params {};
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetLobbySeachInfo
	 * 		Flags  -> ()
	 */
	TArray<struct FLobbySearchInfo> USIGISGameInstance::GetLobbySeachInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetLobbySeachInfo");
		
		USIGISGameInstance_GetLobbySeachInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetLobbyInformation
	 * 		Flags  -> ()
	 */
	TArray<struct FLobbyInfo> USIGISGameInstance::GetLobbyInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetLobbyInformation");
		
		USIGISGameInstance_GetLobbyInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetLobbyIDAsString
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetLobbyIDAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetLobbyIDAsString");
		
		USIGISGameInstance_GetLobbyIDAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetLastRoundTime
	 * 		Flags  -> ()
	 */
	float USIGISGameInstance::GetLastRoundTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetLastRoundTime");
		
		USIGISGameInstance_GetLastRoundTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetLastKilledBy
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetLastKilledBy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetLastKilledBy");
		
		USIGISGameInstance_GetLastKilledBy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetInventoryGridSlotSize
	 * 		Flags  -> ()
	 */
	float USIGISGameInstance::GetInventoryGridSlotSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetInventoryGridSlotSize");
		
		USIGISGameInstance_GetInventoryGridSlotSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetFactionForShopInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShopInt                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EFactionType USIGISGameInstance::GetFactionForShopInt(int32_t ShopInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetFactionForShopInt");
		
		USIGISGameInstance_GetFactionForShopInt_Params params {};
		params.ShopInt = ShopInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetExtraConnectionInfo
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetExtraConnectionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetExtraConnectionInfo");
		
		USIGISGameInstance_GetExtraConnectionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetEndMatchXP
	 * 		Flags  -> ()
	 */
	int32_t USIGISGameInstance::GetEndMatchXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetEndMatchXP");
		
		USIGISGameInstance_GetEndMatchXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetEndMatchStats
	 * 		Flags  -> ()
	 */
	TArray<struct FPlayerStat> USIGISGameInstance::GetEndMatchStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetEndMatchStats");
		
		USIGISGameInstance_GetEndMatchStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetDragAndDropItemWidgetClass
	 * 		Flags  -> ()
	 */
	class UClass* USIGISGameInstance::GetDragAndDropItemWidgetClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetDragAndDropItemWidgetClass");
		
		USIGISGameInstance_GetDragAndDropItemWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetDiscordUserInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      userId                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::GetDiscordUserInfo(const class FString& userId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetDiscordUserInfo");
		
		USIGISGameInstance_GetDiscordUserInfo_Params params {};
		params.userId = userId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetDisCordAvatarURLandNick
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::GetDisCordAvatarURLandNick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetDisCordAvatarURLandNick");
		
		USIGISGameInstance_GetDisCordAvatarURLandNick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetDefaultContainerWidgetClass
	 * 		Flags  -> ()
	 */
	class UClass* USIGISGameInstance::GetDefaultContainerWidgetClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetDefaultContainerWidgetClass");
		
		USIGISGameInstance_GetDefaultContainerWidgetClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetCurrentShopKeeperFaction
	 * 		Flags  -> ()
	 */
	EFactionType USIGISGameInstance::GetCurrentShopKeeperFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetCurrentShopKeeperFaction");
		
		USIGISGameInstance_GetCurrentShopKeeperFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetCurrentShopKeeper
	 * 		Flags  -> ()
	 */
	int32_t USIGISGameInstance::GetCurrentShopKeeper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetCurrentShopKeeper");
		
		USIGISGameInstance_GetCurrentShopKeeper_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetCurrentLobbyMembers
	 * 		Flags  -> ()
	 */
	TArray<struct FEOSProductUserId> USIGISGameInstance::GetCurrentLobbyMembers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetCurrentLobbyMembers");
		
		USIGISGameInstance_GetCurrentLobbyMembers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetBuildNameType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDev                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USIGISGameInstance::GetBuildNameType(bool isDev)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetBuildNameType");
		
		USIGISGameInstance_GetBuildNameType_Params params {};
		params.isDev = isDev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetBuildIDTime
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetBuildIDTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetBuildIDTime");
		
		USIGISGameInstance_GetBuildIDTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetBuildIDDate
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetBuildIDDate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetBuildIDDate");
		
		USIGISGameInstance_GetBuildIDDate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetBuildID
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::GetBuildID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetBuildID");
		
		USIGISGameInstance_GetBuildID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetBpForSoftClass
	 * 		Flags  -> ()
	 */
	class AActor* USIGISGameInstance::GetBpForSoftClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetBpForSoftClass");
		
		USIGISGameInstance_GetBpForSoftClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.GetAllCrewReady
	 * 		Flags  -> ()
	 */
	bool USIGISGameInstance::GetAllCrewReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.GetAllCrewReady");
		
		USIGISGameInstance_GetAllCrewReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.FoundMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConnectionString                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::FoundMatch(const class FString& ConnectionString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.FoundMatch");
		
		USIGISGameInstance_FoundMatch_Params params {};
		params.ConnectionString = ConnectionString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_SetLobbyMyMemberAttributte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLobbyInfo>                          InfoForLobby                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_SetLobbyMyMemberAttributte(TArray<struct FLobbyInfo> InfoForLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_SetLobbyMyMemberAttributte");
		
		USIGISGameInstance_EOS_SetLobbyMyMemberAttributte_Params params {};
		params.InfoForLobby = InfoForLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_SetLobbyAttributte
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLobbyInfo>                          InfoForLobby                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_SetLobbyAttributte(TArray<struct FLobbyInfo> InfoForLobby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_SetLobbyAttributte");
		
		USIGISGameInstance_EOS_SetLobbyAttributte_Params params {};
		params.InfoForLobby = InfoForLobby;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_ReportLastKilledBy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEOSEPlayerReportsCategory                         TypeOf                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MessageIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_ReportLastKilledBy(EEOSEPlayerReportsCategory TypeOf, const class FString& MessageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_ReportLastKilledBy");
		
		USIGISGameInstance_EOS_ReportLastKilledBy_Params params {};
		params.TypeOf = TypeOf;
		params.MessageIn = MessageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_QueryCachedStats
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_QueryCachedStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_QueryCachedStats");
		
		USIGISGameInstance_EOS_QueryCachedStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnSaveStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSStatsIngestStatCompleteCallbackInfo     Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnSaveStats(const struct FEOSStatsIngestStatCompleteCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnSaveStats");
		
		USIGISGameInstance_EOS_OnSaveStats_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_Onreported
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_Onreported(const struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_Onreported");
		
		USIGISGameInstance_EOS_Onreported_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyUpdateLobbyCallbackInfo            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyUpdate(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyUpdate");
		
		USIGISGameInstance_EOS_OnLobbyUpdate_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbySearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbySearchFindCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbySearch(const struct FEOSLobbySearchFindCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbySearch");
		
		USIGISGameInstance_EOS_OnLobbySearch_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyLeaveLobbyCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyLeave(const struct FEOSLobbyLeaveLobbyCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyLeave");
		
		USIGISGameInstance_EOS_OnLobbyLeave_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyKickMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyKickMemberCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyKickMember(const struct FEOSLobbyKickMemberCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyKickMember");
		
		USIGISGameInstance_EOS_OnLobbyKickMember_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyJoinLobbyCallbackInfo              Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyJoin(const struct FEOSLobbyJoinLobbyCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyJoin");
		
		USIGISGameInstance_EOS_OnLobbyJoin_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyFirstUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyUpdateLobbyCallbackInfo            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyFirstUpdate(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyFirstUpdate");
		
		USIGISGameInstance_EOS_OnLobbyFirstUpdate_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyDestroyLobbyCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyDestroy(const struct FEOSLobbyDestroyLobbyCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyDestroy");
		
		USIGISGameInstance_EOS_OnLobbyDestroy_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyCrewNameSearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbySearchFindCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLobbyCrewNameSearch(const struct FEOSLobbySearchFindCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLobbyCrewNameSearch");
		
		USIGISGameInstance_EOS_OnLobbyCrewNameSearch_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnLoadStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSStatsOnQueryStatsCompleteCallbackInfo   Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnLoadStats(const struct FEOSStatsOnQueryStatsCompleteCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnLoadStats");
		
		USIGISGameInstance_EOS_OnLoadStats_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnGetDeviceID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectCreateDeviceIdCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnGetDeviceID(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnGetDeviceID");
		
		USIGISGameInstance_EOS_OnGetDeviceID_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnFriendLobbySearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbySearchFindCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnFriendLobbySearch(const struct FEOSLobbySearchFindCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnFriendLobbySearch");
		
		USIGISGameInstance_EOS_OnFriendLobbySearch_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnEOSGDK_LoginReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectLoginCallbackInfo                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnEOSGDK_LoginReturn(const struct FEOSConnectLoginCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnEOSGDK_LoginReturn");
		
		USIGISGameInstance_EOS_OnEOSGDK_LoginReturn_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_LoginReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectLoginCallbackInfo                Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnEOS_LoginReturn(const struct FEOSConnectLoginCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_LoginReturn");
		
		USIGISGameInstance_EOS_OnEOS_LoginReturn_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_GDKLoginReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectCreateDeviceIdCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnEOS_GDKLoginReturn(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_GDKLoginReturn");
		
		USIGISGameInstance_EOS_OnEOS_GDKLoginReturn_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_GDKLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorStr                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnEOS_GDKLogin(bool bWasSuccessful, const class FString& ErrorStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_GDKLogin");
		
		USIGISGameInstance_EOS_OnEOS_GDKLogin_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.ErrorStr = ErrorStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_CreateUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectCreateUserCallbackInfo           Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnEOS_CreateUser(const struct FEOSConnectCreateUserCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnEOS_CreateUser");
		
		USIGISGameInstance_EOS_OnEOS_CreateUser_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnCreateLobbyreturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbyCreateLobbyCallbackInfo            Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnCreateLobbyreturn(const struct FEOSLobbyCreateLobbyCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnCreateLobbyreturn");
		
		USIGISGameInstance_EOS_OnCreateLobbyreturn_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_OnCheckSanctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_OnCheckSanctions(const struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_OnCheckSanctions");
		
		USIGISGameInstance_EOS_OnCheckSanctions_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_Login
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_Login()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_Login");
		
		USIGISGameInstance_EOS_Login_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearchByCrewName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewNameIn                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_LobbySearchByCrewName(const class FString& CrewNameIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearchByCrewName");
		
		USIGISGameInstance_EOS_LobbySearchByCrewName_Params params {};
		params.CrewNameIn = CrewNameIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearchByCrewID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewIDIn                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_LobbySearchByCrewID(const class FString& CrewIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearchByCrewID");
		
		USIGISGameInstance_EOS_LobbySearchByCrewID_Params params {};
		params.CrewIDIn = CrewIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearch
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_LobbySearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbySearch");
		
		USIGISGameInstance_EOS_LobbySearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbyLeave
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_LobbyLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbyLeave");
		
		USIGISGameInstance_EOS_LobbyLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbyKickMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSProductUserId                           TargetUserId                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_LobbyKickMember(const struct FEOSProductUserId& TargetUserId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbyKickMember");
		
		USIGISGameInstance_EOS_LobbyKickMember_Params params {};
		params.TargetUserId = TargetUserId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbyJoin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSHLobbyDetails                           LobbyToJoin                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_LobbyJoin(const struct FEOSHLobbyDetails& LobbyToJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbyJoin");
		
		USIGISGameInstance_EOS_LobbyJoin_Params params {};
		params.LobbyToJoin = LobbyToJoin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_LobbyDestroy
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_LobbyDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_LobbyDestroy");
		
		USIGISGameInstance_EOS_LobbyDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_JoinFriendLobbySearch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSLobbySearchFindCallbackInfo             Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_JoinFriendLobbySearch(const struct FEOSLobbySearchFindCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_JoinFriendLobbySearch");
		
		USIGISGameInstance_EOS_JoinFriendLobbySearch_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_GetStatsFromBackEnd
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_GetStatsFromBackEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_GetStatsFromBackEnd");
		
		USIGISGameInstance_EOS_GetStatsFromBackEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_GetPlayerSanctions
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_GetPlayerSanctions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_GetPlayerSanctions");
		
		USIGISGameInstance_EOS_GetPlayerSanctions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_GetCachedStats
	 * 		Flags  -> ()
	 */
	TArray<struct FPlayerStat> USIGISGameInstance::EOS_GetCachedStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_GetCachedStats");
		
		USIGISGameInstance_EOS_GetCachedStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_GetAllFriendLobbySearch
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_GetAllFriendLobbySearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_GetAllFriendLobbySearch");
		
		USIGISGameInstance_EOS_GetAllFriendLobbySearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_DeviceIDReturn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectCreateDeviceIdCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_DeviceIDReturn(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_DeviceIDReturn");
		
		USIGISGameInstance_EOS_DeviceIDReturn_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_CreateLobby
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_CreateLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_CreateLobby");
		
		USIGISGameInstance_EOS_CreateLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_CreateFriendLobby
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EOS_CreateFriendLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_CreateFriendLobby");
		
		USIGISGameInstance_EOS_CreateFriendLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_AuthExpiCallaback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEOSConnectAuthExpirationCallbackInfo       Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_AuthExpiCallaback(const struct FEOSConnectAuthExpirationCallbackInfo& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_AuthExpiCallaback");
		
		USIGISGameInstance_EOS_AuthExpiCallaback_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EOS_AlterLeaderBoardStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LeaderboardStat                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FEOSProductUserId                           TargetProductID                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmountTO                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::EOS_AlterLeaderBoardStat(const class FString& LeaderboardStat, const struct FEOSProductUserId& TargetProductID, int32_t AmountTO)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EOS_AlterLeaderBoardStat");
		
		USIGISGameInstance_EOS_AlterLeaderBoardStat_Params params {};
		params.LeaderboardStat = LeaderboardStat;
		params.TargetProductID = TargetProductID;
		params.AmountTO = AmountTO;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.EndServerhMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::EndServerhMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.EndServerhMatchmaking");
		
		USIGISGameInstance_EndServerhMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.DisbandCrew
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::DisbandCrew()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.DisbandCrew");
		
		USIGISGameInstance_DisbandCrew_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.DestroyServerMatchmaking
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::DestroyServerMatchmaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.DestroyServerMatchmaking");
		
		USIGISGameInstance_DestroyServerMatchmaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CrewUnLocked
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::CrewUnLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CrewUnLocked");
		
		USIGISGameInstance_CrewUnLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CrewMemberUnready
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::CrewMemberUnready()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CrewMemberUnready");
		
		USIGISGameInstance_CrewMemberUnready_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CrewMemberReady
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::CrewMemberReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CrewMemberReady");
		
		USIGISGameInstance_CrewMemberReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CrewLocked
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::CrewLocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CrewLocked");
		
		USIGISGameInstance_CrewLocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CrewGetSessionIDAndServerIP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MyGameLiftSessionID                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ServerConnectIP                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::CrewGetSessionIDAndServerIP(class FString* MyGameLiftSessionID, class FString* ServerConnectIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CrewGetSessionIDAndServerIP");
		
		USIGISGameInstance_CrewGetSessionIDAndServerIP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MyGameLiftSessionID != nullptr)
			*MyGameLiftSessionID = params.MyGameLiftSessionID;
		if (ServerConnectIP != nullptr)
			*ServerConnectIP = params.ServerConnectIP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CptKickCrewMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToKickPlayerID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MessageIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::CptKickCrewMember(const class FString& ToKickPlayerID, const class FString& MessageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CptKickCrewMember");
		
		USIGISGameInstance_CptKickCrewMember_Params params {};
		params.ToKickPlayerID = ToKickPlayerID;
		params.MessageIn = MessageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ContainsRudeWord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Word                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USIGISGameInstance::ContainsRudeWord(const class FString& Word)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ContainsRudeWord");
		
		USIGISGameInstance_ContainsRudeWord_Params params {};
		params.Word = Word;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ClientHasnotGotOnlinePrivalige
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::ClientHasnotGotOnlinePrivalige()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ClientHasnotGotOnlinePrivalige");
		
		USIGISGameInstance_ClientHasnotGotOnlinePrivalige_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ClientHasBeenDisconectedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::ClientHasBeenDisconectedEvent(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ClientHasBeenDisconectedEvent");
		
		USIGISGameInstance_ClientHasBeenDisconectedEvent_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ClearKilledByName
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::ClearKilledByName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ClearKilledByName");
		
		USIGISGameInstance_ClearKilledByName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.ChangeLobbyState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECrewState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::ChangeLobbyState(ECrewState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.ChangeLobbyState");
		
		USIGISGameInstance_ChangeLobbyState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CaptainCrewCreation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CrewName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Password                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::CaptainCrewCreation(const class FString& CrewName, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CaptainCrewCreation");
		
		USIGISGameInstance_CaptainCrewCreation_Params params {};
		params.CrewName = CrewName;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.CancelSearch
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::CancelSearch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.CancelSearch");
		
		USIGISGameInstance_CancelSearch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.BeenKickedFromLobby
	 * 		Flags  -> ()
	 */
	void USIGISGameInstance::BeenKickedFromLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.BeenKickedFromLobby");
		
		USIGISGameInstance_BeenKickedFromLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.BatchEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAnalyticEvent                              NewEventIn                                                 (Parm, NativeAccessSpecifierPublic)
	 * 		bool                                               Urgent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::BatchEvent(const struct FAnalyticEvent& NewEventIn, bool Urgent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.BatchEvent");
		
		USIGISGameInstance_BatchEvent_Params params {};
		params.NewEventIn = NewEventIn;
		params.Urgent = Urgent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.AuthDiscord
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AutBackIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstance::AuthDiscord(const class FString& AutBackIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.AuthDiscord");
		
		USIGISGameInstance_AuthDiscord_Params params {};
		params.AutBackIn = AutBackIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstance.AskForIP
	 * 		Flags  -> ()
	 */
	class FString USIGISGameInstance::AskForIP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstance.AskForIP");
		
		USIGISGameInstance_AskForIP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_StartMatchMaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FGameLiftPlayer>                     players                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      configurationName                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceSocket::AwsWs_StartMatchMaking(TArray<struct FGameLiftPlayer> players, const class FString& configurationName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_StartMatchMaking");
		
		USIGISGameInstanceSocket_AwsWs_StartMatchMaking_Params params {};
		params.players = players;
		params.configurationName = configurationName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_QueryMMTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceSocket::AwsWs_QueryMMTicket(const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_QueryMMTicket");
		
		USIGISGameInstanceSocket_AwsWs_QueryMMTicket_Params params {};
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_CancelMatchMaking
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TicketID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISGameInstanceSocket::AwsWs_CancelMatchMaking(const class FString& TicketID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameInstanceSocket.AwsWs_CancelMatchMaking");
		
		USIGISGameInstanceSocket_AwsWs_CancelMatchMaking_Params params {};
		params.TicketID = TicketID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISGameInstanceSocket.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISGameInstanceSocket::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameInstanceSocket");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISGameSettings.GetDBuildType
	 * 		Flags  -> ()
	 */
	int32_t USIGISGameSettings::GetDBuildType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISGameSettings.GetDBuildType");
		
		USIGISGameSettings_GetDBuildType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISGameSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISGameSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISGameViewportClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISGameViewportClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISGameViewportClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.StartedHold
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::StartedHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.StartedHold");
		
		ASIGISHUD_StartedHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.ShowReticle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemNameIn                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HasHold                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISHUD::ShowReticle(const class FString& ItemNameIn, bool HasHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.ShowReticle");
		
		ASIGISHUD_ShowReticle_Params params {};
		params.ItemNameIn = ItemNameIn;
		params.HasHold = HasHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.ShowInventoryMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootWindowState                                   LootWinState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISHUD::ShowInventoryMenu(ELootWindowState LootWinState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.ShowInventoryMenu");
		
		ASIGISHUD_ShowInventoryMenu_Params params {};
		params.LootWinState = LootWinState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.SetRegionToPing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAmazonRegions                                     RegionToSet                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISHUD::SetRegionToPing(EAmazonRegions RegionToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.SetRegionToPing");
		
		ASIGISHUD_SetRegionToPing_Params params {};
		params.RegionToSet = RegionToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.ResetMatchResult
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::ResetMatchResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.ResetMatchResult");
		
		ASIGISHUD_ResetMatchResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.PostLoginLoad
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::PostLoginLoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.PostLoginLoad");
		
		ASIGISHUD_PostLoginLoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.PlayerReadyToDeploy
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::PlayerReadyToDeploy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.PlayerReadyToDeploy");
		
		ASIGISHUD_PlayerReadyToDeploy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.OnKilledEvent
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::OnKilledEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.OnKilledEvent");
		
		ASIGISHUD_OnKilledEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.MenuStateChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISHUD::MenuStateChanged(EMenuState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.MenuStateChanged");
		
		ASIGISHUD_MenuStateChanged_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.InventoryOpen
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::InventoryOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.InventoryOpen");
		
		ASIGISHUD_InventoryOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.InventoryClosed
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::InventoryClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.InventoryClosed");
		
		ASIGISHUD_InventoryClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.HideReticle
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::HideReticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.HideReticle");
		
		ASIGISHUD_HideReticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.HideInventoryMenu
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::HideInventoryMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.HideInventoryMenu");
		
		ASIGISHUD_HideInventoryMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetRecommendendRegion
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::GetRecommendendRegion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetRecommendendRegion");
		
		ASIGISHUD_GetRecommendendRegion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetMasterMenu
	 * 		Flags  -> ()
	 */
	class UMasterMenuWidget* ASIGISHUD::GetMasterMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetMasterMenu");
		
		ASIGISHUD_GetMasterMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetLastMatchXP
	 * 		Flags  -> ()
	 */
	int32_t ASIGISHUD::GetLastMatchXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetLastMatchXP");
		
		ASIGISHUD_GetLastMatchXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetLastMatchResult
	 * 		Flags  -> ()
	 */
	ERaidResult ASIGISHUD::GetLastMatchResult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetLastMatchResult");
		
		ASIGISHUD_GetLastMatchResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetInGameOverlay
	 * 		Flags  -> ()
	 */
	class UInGameOverlayWidget* ASIGISHUD::GetInGameOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetInGameOverlay");
		
		ASIGISHUD_GetInGameOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetBuildID
	 * 		Flags  -> ()
	 */
	class FString ASIGISHUD::GetBuildID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetBuildID");
		
		ASIGISHUD_GetBuildID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.GetAveragePlayerLatency
	 * 		Flags  -> ()
	 */
	class FString ASIGISHUD::GetAveragePlayerLatency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.GetAveragePlayerLatency");
		
		ASIGISHUD_GetAveragePlayerLatency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.EndedHold
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::EndedHold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.EndedHold");
		
		ASIGISHUD_EndedHold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.ChangeMainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMenuState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISHUD::ChangeMainMenu(EMenuState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.ChangeMainMenu");
		
		ASIGISHUD_ChangeMainMenu_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.BP_ShowInfoEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyAndItemType                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HasHold                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISHUD::BP_ShowInfoEvent(const class FString& KeyAndItemType, bool HasHold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.BP_ShowInfoEvent");
		
		ASIGISHUD_BP_ShowInfoEvent_Params params {};
		params.KeyAndItemType = KeyAndItemType;
		params.HasHold = HasHold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.BP_NoSpaceForItem
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::BP_NoSpaceForItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.BP_NoSpaceForItem");
		
		ASIGISHUD_BP_NoSpaceForItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.BP_HideInfoEvent
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::BP_HideInfoEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.BP_HideInfoEvent");
		
		ASIGISHUD_BP_HideInfoEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.BP_CantSellItemsInside
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::BP_CantSellItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.BP_CantSellItemsInside");
		
		ASIGISHUD_BP_CantSellItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.BP_CantScrapItemsInside
	 * 		Flags  -> ()
	 */
	void ASIGISHUD::BP_CantScrapItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.BP_CantScrapItemsInside");
		
		ASIGISHUD_BP_CantScrapItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISHUD.AreMenusVisible
	 * 		Flags  -> ()
	 */
	bool ASIGISHUD::AreMenusVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISHUD.AreMenusVisible");
		
		ASIGISHUD_AreMenusVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInteractionInterface.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      InteractingOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInteractionInterface::Interact(class AActor* InteractingOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInteractionInterface.Interact");
		
		USIGISInteractionInterface_Interact_Params params {};
		params.InteractingOwner = InteractingOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInteractionInterface.GetInteractionInfo
	 * 		Flags  -> ()
	 */
	struct FInteractionInfo USIGISInteractionInterface::GetInteractionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInteractionInterface.GetInteractionInfo");
		
		USIGISInteractionInterface_GetInteractionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISInteractionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISInteractionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISInteractionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateStashInventory
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Server_ValidateStashInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateStashInventory");
		
		USIGISInventoryComponent_Server_ValidateStashInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateInvCon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_ValidateInvCon(const class FString& ToCon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateInvCon");
		
		USIGISInventoryComponent_Server_ValidateInvCon_Params params {};
		params.ToCon = ToCon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateEquippedInventory
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Server_ValidateEquippedInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_ValidateEquippedInventory");
		
		USIGISInventoryComponent_Server_ValidateEquippedInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_UseItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FromLoot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_UseItem(const class FString& UniqueItemGUID, bool FromLoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_UseItem");
		
		USIGISInventoryComponent_Server_UseItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.FromLoot = FromLoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_UnEquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     SlotTo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_UnEquipItem(const class FString& UniqueItemGUID, EEquipmentSlot SlotTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_UnEquipItem");
		
		USIGISInventoryComponent_Server_UnEquipItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.SlotTo = SlotTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_UnEquipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueItemGUIDAttachedTo                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_UnEquipAttachment(const class FString& UniqueItemGUID, const class FString& UniqueItemGUIDAttachedTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_UnEquipAttachment");
		
		USIGISInventoryComponent_Server_UnEquipAttachment_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.UniqueItemGUIDAttachedTo = UniqueItemGUIDAttachedTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_SwapItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUIDFrom                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueItemGUIDTo                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               RequiresMove                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_SwapItem(const class FString& UniqueItemGUIDFrom, const class FString& UniqueItemGUIDTo, ESlotType MovetypeTo, ESlotType MovetypeFrom, bool RequiresMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_SwapItem");
		
		USIGISInventoryComponent_Server_SwapItem_Params params {};
		params.UniqueItemGUIDFrom = UniqueItemGUIDFrom;
		params.UniqueItemGUIDTo = UniqueItemGUIDTo;
		params.MovetypeTo = MovetypeTo;
		params.MovetypeFrom = MovetypeFrom;
		params.RequiresMove = RequiresMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_StartLooting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISBaseActor*                             LootItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_StartLooting(class ASIGISBaseActor* LootItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_StartLooting");
		
		USIGISInventoryComponent_Server_StartLooting_Params params {};
		params.LootItem = LootItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_SplitStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmountToSplit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      FromLoot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ToLoot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_SplitStack(const class FString& UniqueItemGUID, const struct FInventoryGridPair& ToSlot, const class FString& ToCon, int32_t AmountToSplit, unsigned char FromLoot, unsigned char ToLoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_SplitStack");
		
		USIGISInventoryComponent_Server_SplitStack_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToSlot = ToSlot;
		params.ToCon = ToCon;
		params.AmountToSplit = AmountToSplit;
		params.FromLoot = FromLoot;
		params.ToLoot = ToLoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_SetItemRotated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_SetItemRotated(const class FString& UniqueItemGUID, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_SetItemRotated");
		
		USIGISInventoryComponent_Server_SetItemRotated_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_SellItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_SellItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_SellItem");
		
		USIGISInventoryComponent_Server_SellItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_RemoveItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_RemoveItem");
		
		USIGISInventoryComponent_Server_RemoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_ProcessRightClickOption
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemOptions                                       OptionToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_ProcessRightClickOption(EItemOptions OptionToUse, const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_ProcessRightClickOption");
		
		USIGISInventoryComponent_Server_ProcessRightClickOption_Params params {};
		params.OptionToUse = OptionToUse;
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_PredictUseAmmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmountNew                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_PredictUseAmmo(const class FString& UniqueItemGUID, int32_t AmountNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_PredictUseAmmo");
		
		USIGISInventoryComponent_Server_PredictUseAmmo_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.AmountNew = AmountNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_MoveLobbyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_MoveLobbyItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_MoveLobbyItem");
		
		USIGISInventoryComponent_Server_MoveLobbyItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		params.MovetypeFrom = MovetypeFrom;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_MoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_MoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_MoveItem");
		
		USIGISInventoryComponent_Server_MoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		params.MovetypeFrom = MovetypeFrom;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_MergeStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueItemGUIDMerge                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      FromLoot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ToLoot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_MergeStack(const class FString& UniqueItemGUID, const class FString& UniqueItemGUIDMerge, unsigned char FromLoot, unsigned char ToLoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_MergeStack");
		
		USIGISInventoryComponent_Server_MergeStack_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.UniqueItemGUIDMerge = UniqueItemGUIDMerge;
		params.FromLoot = FromLoot;
		params.ToLoot = ToLoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_MenuMoveLobbyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_MenuMoveLobbyItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_MenuMoveLobbyItem");
		
		USIGISInventoryComponent_Server_MenuMoveLobbyItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		params.MovetypeFrom = MovetypeFrom;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_FoldBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_FoldBag(const class FString& UniqueItemGUID, ESlotType MovetypeTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_FoldBag");
		
		USIGISInventoryComponent_Server_FoldBag_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.MovetypeTo = MovetypeTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_EquipItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEquipmentSlot                                     SlotTo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_EquipItem(const class FString& UniqueItemGUID, EEquipmentSlot SlotTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_EquipItem");
		
		USIGISInventoryComponent_Server_EquipItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.SlotTo = SlotTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_EquipAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueItemGUIDAttachedTo                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_EquipAttachment(const class FString& UniqueItemGUID, const class FString& UniqueItemGUIDAttachedTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_EquipAttachment");
		
		USIGISInventoryComponent_Server_EquipAttachment_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.UniqueItemGUIDAttachedTo = UniqueItemGUIDAttachedTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_DropItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         IteToDrop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_DropItem(class ASIGISInventoryItem* IteToDrop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_DropItem");
		
		USIGISInventoryComponent_Server_DropItem_Params params {};
		params.IteToDrop = IteToDrop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_DropInHud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_DropInHud(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_DropInHud");
		
		USIGISInventoryComponent_Server_DropInHud_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_DestoryEquippedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_DestoryEquippedItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_DestoryEquippedItem");
		
		USIGISInventoryComponent_Server_DestoryEquippedItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_CtrlClickItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_CtrlClickItem(const class FString& UniqueItemGUID, const class FString& ToCon, ESlotType MovetypeFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_CtrlClickItem");
		
		USIGISInventoryComponent_Server_CtrlClickItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.MovetypeFrom = MovetypeFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_ColourItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_ColourItem(const class FString& UniqueItemGUID, const class FName& NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_ColourItem");
		
		USIGISInventoryComponent_Server_ColourItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_CloseInventory
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Server_CloseInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_CloseInventory");
		
		USIGISInventoryComponent_Server_CloseInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_ChangeItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmountNew                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Inloot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_ChangeItemAmount(const class FString& UniqueItemGUID, int32_t AmountNew, unsigned char Inloot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_ChangeItemAmount");
		
		USIGISInventoryComponent_Server_ChangeItemAmount_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.AmountNew = AmountNew;
		params.Inloot = Inloot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_BuyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackAmount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          OriginSlot                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ShouldRotate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_BuyItem(const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& OriginSlot, int32_t ShouldRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_BuyItem");
		
		USIGISInventoryComponent_Server_BuyItem_Params params {};
		params.ItemData = ItemData;
		params.StackAmount = StackAmount;
		params.Condition = Condition;
		params.ToCon = ToCon;
		params.OriginSlot = OriginSlot;
		params.ShouldRotate = ShouldRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_BatchAddItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsIn                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_BatchAddItems(TArray<struct FInventoryItemStruct> ItemsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_BatchAddItems");
		
		USIGISInventoryComponent_Server_BatchAddItems_Params params {};
		params.ItemsIn = ItemsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_AssignToQuickSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ClearSlot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_AssignToQuickSlot(const class FString& UniqueItemGUID, int32_t SlotNumber, bool ClearSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_AssignToQuickSlot");
		
		USIGISInventoryComponent_Server_AssignToQuickSlot_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.SlotNumber = SlotNumber;
		params.ClearSlot = ClearSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_AdjustShopInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemToRemove                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_AdjustShopInventory(const class FName& ItemToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_AdjustShopInventory");
		
		USIGISInventoryComponent_Server_AdjustShopInventory_Params params {};
		params.ItemToRemove = ItemToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_AdjustMoney
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_AdjustMoney(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_AdjustMoney");
		
		USIGISInventoryComponent_Server_AdjustMoney_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Server_AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackAmount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          OriginSlot                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               IsALoad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SpecificUUID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttachmentsOn                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxDuribilityIn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Server_AddItem(const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& OriginSlot, bool IsALoad, const class FString& SpecificUUID, int32_t bRotate, const class FString& AttachmentsOn, int32_t MaxDuribilityIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Server_AddItem");
		
		USIGISInventoryComponent_Server_AddItem_Params params {};
		params.ItemData = ItemData;
		params.StackAmount = StackAmount;
		params.Condition = Condition;
		params.ToCon = ToCon;
		params.OriginSlot = OriginSlot;
		params.IsALoad = IsALoad;
		params.SpecificUUID = SpecificUUID;
		params.bRotate = bRotate;
		params.AttachmentsOn = AttachmentsOn;
		params.MaxDuribilityIn = MaxDuribilityIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootRemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootRemoveItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootRemoveItem");
		
		USIGISInventoryComponent_LootRemoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootRemoveBatchItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueItemGUIDs                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootRemoveBatchItems(TArray<class FString> UniqueItemGUIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootRemoveBatchItems");
		
		USIGISInventoryComponent_LootRemoveBatchItems_Params params {};
		params.UniqueItemGUIDs = UniqueItemGUIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootMoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootMoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootMoveItem");
		
		USIGISInventoryComponent_LootMoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootCompRemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootCompRemoveItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootCompRemoveItem");
		
		USIGISInventoryComponent_LootCompRemoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootCompMoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootCompMoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootCompMoveItem");
		
		USIGISInventoryComponent_LootCompMoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootCompAmountItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootCompAmountItem(const class FString& UniqueItemGUID, int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootCompAmountItem");
		
		USIGISInventoryComponent_LootCompAmountItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootCompAddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemStruct                        ItemAdded                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootCompAddItem(const struct FInventoryItemStruct& ItemAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootCompAddItem");
		
		USIGISInventoryComponent_LootCompAddItem_Params params {};
		params.ItemAdded = ItemAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootAmountItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NewAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootAmountItem(const class FString& UniqueItemGUID, int32_t NewAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootAmountItem");
		
		USIGISInventoryComponent_LootAmountItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.NewAmount = NewAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootAddItemStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemStruct                        ItemIn                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootAddItemStruct(const struct FInventoryItemStruct& ItemIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootAddItemStruct");
		
		USIGISInventoryComponent_LootAddItemStruct_Params params {};
		params.ItemIn = ItemIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootAddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemStruct                        ItemAdded                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootAddItem(const struct FInventoryItemStruct& ItemAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootAddItem");
		
		USIGISInventoryComponent_LootAddItem_Params params {};
		params.ItemAdded = ItemAdded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootAddBatchItemStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemIn                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootAddBatchItemStruct(TArray<struct FInventoryItemStruct> ItemIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootAddBatchItemStruct");
		
		USIGISInventoryComponent_LootAddBatchItemStruct_Params params {};
		params.ItemIn = ItemIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.LootActorPickedup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISBaseActor*                             Actorpicked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::LootActorPickedup(class ASIGISBaseActor* Actorpicked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.LootActorPickedup");
		
		USIGISInventoryComponent_LootActorPickedup_Params params {};
		params.Actorpicked = Actorpicked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateStashInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsToAdd                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_ValidateStashInventory(TArray<struct FInventoryItemStruct> ItemsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateStashInventory");
		
		USIGISInventoryComponent_Client_ValidateStashInventory_Params params {};
		params.ItemsToAdd = ItemsToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateInvCon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInventoryItemStruct>                ItemsToAdd                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_ValidateInvCon(const class FString& ToCon, TArray<struct FInventoryItemStruct> ItemsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateInvCon");
		
		USIGISInventoryComponent_Client_ValidateInvCon_Params params {};
		params.ToCon = ToCon;
		params.ItemsToAdd = ItemsToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateEquippedInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsToAdd                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_ValidateEquippedInventory(TArray<struct FInventoryItemStruct> ItemsToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_ValidateEquippedInventory");
		
		USIGISInventoryComponent_Client_ValidateEquippedInventory_Params params {};
		params.ItemsToAdd = ItemsToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_UnlockLootItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_UnlockLootItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_UnlockLootItem");
		
		USIGISInventoryComponent_Client_UnlockLootItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_SwapItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUIDFrom                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      UniqueItemGUIDTo                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          MovedToSlot                                                (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_SwapItem(const class FString& UniqueItemGUIDFrom, const class FString& UniqueItemGUIDTo, ESlotType MovetypeTo, ESlotType MovetypeFrom, const struct FInventoryGridPair& MovedToSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_SwapItem");
		
		USIGISInventoryComponent_Client_SwapItem_Params params {};
		params.UniqueItemGUIDFrom = UniqueItemGUIDFrom;
		params.UniqueItemGUIDTo = UniqueItemGUIDTo;
		params.MovetypeTo = MovetypeTo;
		params.MovetypeFrom = MovetypeFrom;
		params.MovedToSlot = MovedToSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_StoreDisconnectItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsIn                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_StoreDisconnectItems(TArray<struct FInventoryItemStruct> ItemsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_StoreDisconnectItems");
		
		USIGISInventoryComponent_Client_StoreDisconnectItems_Params params {};
		params.ItemsIn = ItemsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_StartShoppingMenu
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Client_StartShoppingMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_StartShoppingMenu");
		
		USIGISInventoryComponent_Client_StartShoppingMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_SetItemRotated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_SetItemRotated(const class FString& UniqueItemGUID, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_SetItemRotated");
		
		USIGISInventoryComponent_Client_SetItemRotated_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveShopItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_RemoveShopItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveShopItem");
		
		USIGISInventoryComponent_Client_RemoveShopItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLootItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_RemoveLootItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLootItem");
		
		USIGISInventoryComponent_Client_RemoveLootItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLootBatchItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              UniqueItemGUIDs                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_RemoveLootBatchItems(TArray<class FString> UniqueItemGUIDs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLootBatchItems");
		
		USIGISInventoryComponent_Client_RemoveLootBatchItems_Params params {};
		params.UniqueItemGUIDs = UniqueItemGUIDs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLobbyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_RemoveLobbyItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveLobbyItem");
		
		USIGISInventoryComponent_Client_RemoveLobbyItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_RemoveItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveItem");
		
		USIGISInventoryComponent_Client_RemoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveGiftItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_RemoveGiftItem(const class FString& UniqueItemGUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_RemoveGiftItem");
		
		USIGISInventoryComponent_Client_RemoveGiftItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_OpenInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELootWindowState                                   LootWinState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      ConActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_OpenInventory(ELootWindowState LootWinState, class AActor* ConActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_OpenInventory");
		
		USIGISInventoryComponent_Client_OpenInventory_Params params {};
		params.LootWinState = LootWinState;
		params.ConActor = ConActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_NoSpaceInInventory
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Client_NoSpaceInInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_NoSpaceInInventory");
		
		USIGISInventoryComponent_Client_NoSpaceInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_MoveItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_MoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_MoveItem");
		
		USIGISInventoryComponent_Client_MoveItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		params.MovetypeFrom = MovetypeFrom;
		params.bRotate = bRotate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_LootActorPickedup
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Client_LootActorPickedup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_LootActorPickedup");
		
		USIGISInventoryComponent_Client_LootActorPickedup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_Loaded
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Client_Loaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_Loaded");
		
		USIGISInventoryComponent_Client_Loaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_GetOutWithLootAndShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ShipsItem                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInventoryItemStruct                        ship                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_GetOutWithLootAndShip(TArray<struct FInventoryItemStruct> ShipsItem, const struct FInventoryItemStruct& ship)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_GetOutWithLootAndShip");
		
		USIGISInventoryComponent_Client_GetOutWithLootAndShip_Params params {};
		params.ShipsItem = ShipsItem;
		params.ship = ship;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_GetOutWithLoot
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Client_GetOutWithLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_GetOutWithLoot");
		
		USIGISInventoryComponent_Client_GetOutWithLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_FoldBag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_FoldBag(const class FString& UniqueItemGUID, ESlotType MovetypeTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_FoldBag");
		
		USIGISInventoryComponent_Client_FoldBag_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.MovetypeTo = MovetypeTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_EndLooting
	 * 		Flags  -> ()
	 */
	void USIGISInventoryComponent::Client_EndLooting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_EndLooting");
		
		USIGISInventoryComponent_Client_EndLooting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_ColourItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_ColourItem(const class FString& UniqueItemGUID, const class FName& NewItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_ColourItem");
		
		USIGISInventoryComponent_Client_ColourItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_ChangeItemAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AmountNew                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_ChangeItemAmount(const class FString& UniqueItemGUID, int32_t AmountNew)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_ChangeItemAmount");
		
		USIGISInventoryComponent_Client_ChangeItemAmount_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.AmountNew = AmountNew;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_BatchAddLootItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsIn                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_BatchAddLootItems(TArray<struct FInventoryItemStruct> ItemsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_BatchAddLootItems");
		
		USIGISInventoryComponent_Client_BatchAddLootItems_Params params {};
		params.ItemsIn = ItemsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_BatchAddItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsIn                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_BatchAddItems(TArray<struct FInventoryItemStruct> ItemsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_BatchAddItems");
		
		USIGISInventoryComponent_Client_BatchAddItems_Params params {};
		params.ItemsIn = ItemsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AssignToQuickSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ClearSlot                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AssignToQuickSlot(const class FString& UniqueItemGUID, int32_t SlotNumber, bool ClearSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AssignToQuickSlot");
		
		USIGISInventoryComponent_Client_AssignToQuickSlot_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.SlotNumber = SlotNumber;
		params.ClearSlot = ClearSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddShopItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ItemData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackAmount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddShopItem(const class FString& UniqueItemGUID, const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& ToSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddShopItem");
		
		USIGISInventoryComponent_Client_AddShopItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ItemData = ItemData;
		params.StackAmount = StackAmount;
		params.Condition = Condition;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItemStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemStruct                        ItemIn                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddLootItemStruct(const struct FInventoryItemStruct& ItemIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItemStruct");
		
		USIGISInventoryComponent_Client_AddLootItemStruct_Params params {};
		params.ItemIn = ItemIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItemsStruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                ItemsIn                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddLootItemsStruct(TArray<struct FInventoryItemStruct> ItemsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItemsStruct");
		
		USIGISInventoryComponent_Client_AddLootItemsStruct_Params params {};
		params.ItemsIn = ItemsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemStruct                        ItemIn                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddLootItem(const struct FInventoryItemStruct& ItemIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddLootItem");
		
		USIGISInventoryComponent_Client_AddLootItem_Params params {};
		params.ItemIn = ItemIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddLobbyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInventoryItemStruct                        ItemIn                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddLobbyItem(const struct FInventoryItemStruct& ItemIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddLobbyItem");
		
		USIGISInventoryComponent_Client_AddLobbyItem_Params params {};
		params.ItemIn = ItemIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ItemData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackAmount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            bRotate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AttachmentsOn                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddItem(const class FString& UniqueItemGUID, const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, int32_t bRotate, const class FString& AttachmentsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddItem");
		
		USIGISInventoryComponent_Client_AddItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ItemData = ItemData;
		params.StackAmount = StackAmount;
		params.Condition = Condition;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		params.bRotate = bRotate;
		params.AttachmentsOn = AttachmentsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryComponent.Client_AddGiftItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UniqueItemGUID                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ItemData                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackAmount                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Condition                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USIGISInventoryComponent::Client_AddGiftItem(const class FString& UniqueItemGUID, const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& ToSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryComponent.Client_AddGiftItem");
		
		USIGISInventoryComponent_Client_AddGiftItem_Params params {};
		params.UniqueItemGUID = UniqueItemGUID;
		params.ItemData = ItemData;
		params.StackAmount = StackAmount;
		params.Condition = Condition;
		params.ToCon = ToCon;
		params.ToSlot = ToSlot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISInventoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISInventoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISInventoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.IsALootBox
	 * 		Flags  -> ()
	 */
	bool ASIGISInventoryItem::IsALootBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.IsALootBox");
		
		ASIGISInventoryItem_IsALootBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetSquareIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* ASIGISInventoryItem::GetSquareIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetSquareIcon");
		
		ASIGISInventoryItem_GetSquareIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetQualityTierTextColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor ASIGISInventoryItem::GetQualityTierTextColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetQualityTierTextColor");
		
		ASIGISInventoryItem_GetQualityTierTextColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetQualityTierColor
	 * 		Flags  -> ()
	 */
	struct FLinearColor ASIGISInventoryItem::GetQualityTierColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetQualityTierColor");
		
		ASIGISInventoryItem_GetQualityTierColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetItemName
	 * 		Flags  -> ()
	 */
	class FText ASIGISInventoryItem::GetItemName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetItemName");
		
		ASIGISInventoryItem_GetItemName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetInventoryUseTooltipText
	 * 		Flags  -> ()
	 */
	class FText ASIGISInventoryItem::GetInventoryUseTooltipText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetInventoryUseTooltipText");
		
		ASIGISInventoryItem_GetInventoryUseTooltipText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetInteractionSound
	 * 		Flags  -> ()
	 */
	class USoundCue* ASIGISInventoryItem::GetInteractionSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetInteractionSound");
		
		ASIGISInventoryItem_GetInteractionSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetIcon
	 * 		Flags  -> ()
	 */
	class UTexture2D* ASIGISInventoryItem::GetIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetIcon");
		
		ASIGISInventoryItem_GetIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetGridSizeVector
	 * 		Flags  -> ()
	 */
	struct FVector2D ASIGISInventoryItem::GetGridSizeVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetGridSizeVector");
		
		ASIGISInventoryItem_GetGridSizeVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISInventoryItem.GetFlavorText
	 * 		Flags  -> ()
	 */
	class FText ASIGISInventoryItem::GetFlavorText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISInventoryItem.GetFlavorText");
		
		ASIGISInventoryItem_GetFlavorText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISInventoryItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISInventoryItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISInventoryItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISLootSingleSpawner.TriggerSpawn
	 * 		Flags  -> ()
	 */
	void ASIGISLootSingleSpawner::TriggerSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISLootSingleSpawner.TriggerSpawn");
		
		ASIGISLootSingleSpawner_TriggerSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISLootSingleSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISLootSingleSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISLootSingleSpawner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISNak_GetAccount.GetUserAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      userId                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SuccessDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ErrorDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USIGISNak_GetAccount* USIGISNak_GetAccount::GetUserAccount(class UObject* WorldContextObject, const class FString& userId, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISNak_GetAccount.GetUserAccount");
		
		USIGISNak_GetAccount_GetUserAccount_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.userId = userId;
		params.SuccessDelegate = SuccessDelegate;
		params.ErrorDelegate = ErrorDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISNak_GetAccount.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISNak_GetAccount::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISNak_GetAccount");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISNak_GetGroupInfo.GetGroupMembers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      GroupIdIn                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SuccessDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ErrorDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USIGISNak_GetGroupInfo* USIGISNak_GetGroupInfo::GetGroupMembers(class UObject* WorldContextObject, const class FString& GroupIdIn, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISNak_GetGroupInfo.GetGroupMembers");
		
		USIGISNak_GetGroupInfo_GetGroupMembers_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.GroupIdIn = GroupIdIn;
		params.SuccessDelegate = SuccessDelegate;
		params.ErrorDelegate = ErrorDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISNak_GetGroupInfo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISNak_GetGroupInfo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISNak_GetGroupInfo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISNak_GetMyCrews.GetMyGroups
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SuccessDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ErrorDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USIGISNak_GetMyCrews* USIGISNak_GetMyCrews::GetMyGroups(class UObject* WorldContextObject, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISNak_GetMyCrews.GetMyGroups");
		
		USIGISNak_GetMyCrews_GetMyGroups_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SuccessDelegate = SuccessDelegate;
		params.ErrorDelegate = ErrorDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISNak_GetMyCrews.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISNak_GetMyCrews::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISNak_GetMyCrews");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISNak_Rpc.SigNak_RPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      RpcFunctionName                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      JsonMsgBody                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              SuccessDelegate                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ErrorDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class USIGISNak_Rpc* USIGISNak_Rpc::SigNak_RPC(class UObject* WorldContextObject, const class FString& RpcFunctionName, const class FString& JsonMsgBody, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISNak_Rpc.SigNak_RPC");
		
		USIGISNak_Rpc_SigNak_RPC_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.RpcFunctionName = RpcFunctionName;
		params.JsonMsgBody = JsonMsgBody;
		params.SuccessDelegate = SuccessDelegate;
		params.ErrorDelegate = ErrorDelegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISNak_Rpc.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISNak_Rpc::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISNak_Rpc");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISOnlineSessionClient.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISOnlineSessionClient::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISOnlineSessionClient");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.SetTypeShape
	 * 		Flags  -> ()
	 */
	void USIGISPlatformLibrary::SetTypeShape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.SetTypeShape");
		
		USIGISPlatformLibrary_SetTypeShape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.IsPendingInfoOnUser
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamIDIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USIGISPlatformLibrary::IsPendingInfoOnUser(const class FString& SteamIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.IsPendingInfoOnUser");
		
		USIGISPlatformLibrary_IsPendingInfoOnUser_Params params {};
		params.SteamIDIn = SteamIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.InvitePlatformFriends
	 * 		Flags  -> ()
	 */
	void USIGISPlatformLibrary::InvitePlatformFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.InvitePlatformFriends");
		
		USIGISPlatformLibrary_InvitePlatformFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.HasSteamDLC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AppIDIn                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USIGISPlatformLibrary::HasSteamDLC(const class FString& AppIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.HasSteamDLC");
		
		USIGISPlatformLibrary_HasSteamDLC_Params params {};
		params.AppIDIn = AppIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetSteamIsRunning
	 * 		Flags  -> ()
	 */
	bool USIGISPlatformLibrary::GetSteamIsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetSteamIsRunning");
		
		USIGISPlatformLibrary_GetSteamIsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetSteamFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamIDIn                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBlueprintAsyncResultSwitch                        Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESteamAvatarSize                                   AvatarSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* USIGISPlatformLibrary::GetSteamFriendAvatar(const class FString& SteamIDIn, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetSteamFriendAvatar");
		
		USIGISPlatformLibrary_GetSteamFriendAvatar_Params params {};
		params.SteamIDIn = SteamIDIn;
		params.AvatarSize = AvatarSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetSteamActivatedLanguage
	 * 		Flags  -> ()
	 */
	class FString USIGISPlatformLibrary::GetSteamActivatedLanguage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetSteamActivatedLanguage");
		
		USIGISPlatformLibrary_GetSteamActivatedLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerNameFromSteamID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamIDIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USIGISPlatformLibrary::GetPlatformPlayerNameFromSteamID(const class FString& SteamIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerNameFromSteamID");
		
		USIGISPlatformLibrary_GetPlatformPlayerNameFromSteamID_Params params {};
		params.SteamIDIn = SteamIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerName
	 * 		Flags  -> ()
	 */
	class FString USIGISPlatformLibrary::GetPlatformPlayerName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerName");
		
		USIGISPlatformLibrary_GetPlatformPlayerName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerID
	 * 		Flags  -> ()
	 */
	class FString USIGISPlatformLibrary::GetPlatformPlayerID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformPlayerID");
		
		USIGISPlatformLibrary_GetPlatformPlayerID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformFriendAvatar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SteamIDIn                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* USIGISPlatformLibrary::GetPlatformFriendAvatar(const class FString& SteamIDIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformFriendAvatar");
		
		USIGISPlatformLibrary_GetPlatformFriendAvatar_Params params {};
		params.SteamIDIn = SteamIDIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformBuildType
	 * 		Flags  -> ()
	 */
	EPlatformBuild USIGISPlatformLibrary::GetPlatformBuildType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformBuildType");
		
		USIGISPlatformLibrary_GetPlatformBuildType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformAvatar
	 * 		Flags  -> ()
	 */
	class UTexture2D* USIGISPlatformLibrary::GetPlatformAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformAvatar");
		
		USIGISPlatformLibrary_GetPlatformAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformAppID
	 * 		Flags  -> ()
	 */
	class FString USIGISPlatformLibrary::GetPlatformAppID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetPlatformAppID");
		
		USIGISPlatformLibrary_GetPlatformAppID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlatformLibrary.GetIsBuildDebugBuild
	 * 		Flags  -> ()
	 */
	bool USIGISPlatformLibrary::GetIsBuildDebugBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlatformLibrary.GetIsBuildDebugBuild");
		
		USIGISPlatformLibrary_GetIsBuildDebugBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISPlatformLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISPlatformLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISPlatformLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.World_PickedUpItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::World_PickedUpItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.World_PickedUpItem");
		
		ASIGISPlayerController_World_PickedUpItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.World_DroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::World_DroppedItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.World_DroppedItem");
		
		ASIGISPlayerController_World_DroppedItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.WipePlayerShips
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::WipePlayerShips()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.WipePlayerShips");
		
		ASIGISPlayerController_WipePlayerShips_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.UnlockPrestigeUnlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PresTOUnlock                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::UnlockPrestigeUnlock(const class FString& PresTOUnlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.UnlockPrestigeUnlock");
		
		ASIGISPlayerController_UnlockPrestigeUnlock_Params params {};
		params.PresTOUnlock = PresTOUnlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.UnlockedSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SKillNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::UnlockedSkill(int32_t SKillNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.UnlockedSkill");
		
		ASIGISPlayerController_UnlockedSkill_Params params {};
		params.SKillNumber = SKillNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.UILeveledUP
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::UILeveledUP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.UILeveledUP");
		
		ASIGISPlayerController_UILeveledUP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.UI_StartedDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::UI_StartedDrag(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.UI_StartedDrag");
		
		ASIGISPlayerController_UI_StartedDrag_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.UI_EndedDrag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::UI_EndedDrag(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.UI_EndedDrag");
		
		ASIGISPlayerController_UI_EndedDrag_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TravelToMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::TravelToMap(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TravelToMap");
		
		ASIGISPlayerController_TravelToMap_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.testUserIn
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::testUserIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.testUserIn");
		
		ASIGISPlayerController_testUserIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestSocketMessage
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestSocketMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestSocketMessage");
		
		ASIGISPlayerController_TestSocketMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestSocket
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestSocket");
		
		ASIGISPlayerController_TestSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestNewMMCancel
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestNewMMCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestNewMMCancel");
		
		ASIGISPlayerController_TestNewMMCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestNewMM
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestNewMM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestNewMM");
		
		ASIGISPlayerController_TestNewMM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestNaughtyList
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestNaughtyList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestNaughtyList");
		
		ASIGISPlayerController_TestNaughtyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestNakama
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestNakama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestNakama");
		
		ASIGISPlayerController_TestNakama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestJoinServerMitchell
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestJoinServerMitchell()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestJoinServerMitchell");
		
		ASIGISPlayerController_TestJoinServerMitchell_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestJoinServerLocal
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestJoinServerLocal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestJoinServerLocal");
		
		ASIGISPlayerController_TestJoinServerLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestGetMyLB
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestGetMyLB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestGetMyLB");
		
		ASIGISPlayerController_TestGetMyLB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestGetAllLB
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestGetAllLB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestGetAllLB");
		
		ASIGISPlayerController_TestGetAllLB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.TestAddKillLB
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::TestAddKillLB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.TestAddKillLB");
		
		ASIGISPlayerController_TestAddKillLB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StopQuickUse
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::StopQuickUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StopQuickUse");
		
		ASIGISPlayerController_StopQuickUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StopQuickInput
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::StopQuickInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StopQuickInput");
		
		ASIGISPlayerController_StopQuickInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StopDiscardInputDown
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::StopDiscardInputDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StopDiscardInputDown");
		
		ASIGISPlayerController_StopDiscardInputDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StartQuickUse
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::StartQuickUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StartQuickUse");
		
		ASIGISPlayerController_StartQuickUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StartQuickInput
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::StartQuickInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StartQuickInput");
		
		ASIGISPlayerController_StartQuickInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StartMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASIGISPlayerController::StartMission(const class FName& MissionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StartMission");
		
		ASIGISPlayerController_StartMission_Params params {};
		params.MissionRow = MissionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StartDiscardInputDown
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::StartDiscardInputDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StartDiscardInputDown");
		
		ASIGISPlayerController_StartDiscardInputDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.StartColouringOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FColouringInfo                              COptions                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::StartColouringOptions(const struct FColouringInfo& COptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.StartColouringOptions");
		
		ASIGISPlayerController_StartColouringOptions_Params params {};
		params.COptions = COptions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGWipePlayerInventory
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIGWipePlayerInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGWipePlayerInventory");
		
		ASIGISPlayerController_SIGWipePlayerInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGWipePlayerData
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIGWipePlayerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGWipePlayerData");
		
		ASIGISPlayerController_SIGWipePlayerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGUnlockRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      recipenum                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGUnlockRecipe(unsigned char recipenum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGUnlockRecipe");
		
		ASIGISPlayerController_SIGUnlockRecipe_Params params {};
		params.recipenum = recipenum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGTestSteamFriends
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIGTestSteamFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGTestSteamFriends");
		
		ASIGISPlayerController_SIGTestSteamFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGTestDynamoDB
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIGTestDynamoDB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGTestDynamoDB");
		
		ASIGISPlayerController_SIGTestDynamoDB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGTestClose
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIGTestClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGTestClose");
		
		ASIGISPlayerController_SIGTestClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGGiveStartingItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               VIP                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGGiveStartingItems(bool VIP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGGiveStartingItems");
		
		ASIGISPlayerController_SIGGiveStartingItems_Params params {};
		params.VIP = VIP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGClearOldLobbyItems
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIGClearOldLobbyItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGClearOldLobbyItems");
		
		ASIGISPlayerController_SIGClearOldLobbyItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGAddXp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGAddXp(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGAddXp");
		
		ASIGISPlayerController_SIGAddXp_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGAddTestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemToAdd                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGAddTestItem(const class FString& ItemToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGAddTestItem");
		
		ASIGISPlayerController_SIGAddTestItem_Params params {};
		params.ItemToAdd = ItemToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGAddShip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ShipToAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGAddShip(const class FName& ShipToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGAddShip");
		
		ASIGISPlayerController_SIGAddShip_Params params {};
		params.ShipToAdd = ShipToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGAddPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGAddPoints(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGAddPoints");
		
		ASIGISPlayerController_SIGAddPoints_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIGAddCash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIGAddCash(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIGAddCash");
		
		ASIGISPlayerController_SIGAddCash_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_ToggleSnap
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_ToggleSnap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_ToggleSnap");
		
		ASIGISPlayerController_SIG_ToggleSnap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TetstCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            callID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIG_TetstCall(int32_t callID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TetstCall");
		
		ASIGISPlayerController_SIG_TetstCall_Params params {};
		params.callID = callID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TesttOS
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_TesttOS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TesttOS");
		
		ASIGISPlayerController_SIG_TesttOS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionStart
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_TestGDKSessionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionStart");
		
		ASIGISPlayerController_SIG_TestGDKSessionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionInfo
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_TestGDKSessionInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionInfo");
		
		ASIGISPlayerController_SIG_TestGDKSessionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionEnd
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_TestGDKSessionEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKSessionEnd");
		
		ASIGISPlayerController_SIG_TestGDKSessionEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKFriends
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_TestGDKFriends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKFriends");
		
		ASIGISPlayerController_SIG_TestGDKFriends_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKExternalInvite
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_TestGDKExternalInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_TestGDKExternalInvite");
		
		ASIGISPlayerController_SIG_TestGDKExternalInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_StartLag
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_StartLag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_StartLag");
		
		ASIGISPlayerController_SIG_StartLag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_StartEOS
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_StartEOS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_StartEOS");
		
		ASIGISPlayerController_SIG_StartEOS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_StartCreateLobby
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_StartCreateLobby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_StartCreateLobby");
		
		ASIGISPlayerController_SIG_StartCreateLobby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_SetDebugReport
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EOSIdToReport                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIG_SetDebugReport(const class FString& EOSIdToReport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_SetDebugReport");
		
		ASIGISPlayerController_SIG_SetDebugReport_Params params {};
		params.EOSIdToReport = EOSIdToReport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_Relog
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_Relog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_Relog");
		
		ASIGISPlayerController_SIG_Relog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_PushIntCommandToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CommandInt                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIG_PushIntCommandToServer(int32_t CommandInt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_PushIntCommandToServer");
		
		ASIGISPlayerController_SIG_PushIntCommandToServer_Params params {};
		params.CommandInt = CommandInt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_PushCommandToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CommandString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIG_PushCommandToServer(const class FString& CommandString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_PushCommandToServer");
		
		ASIGISPlayerController_SIG_PushCommandToServer_Params params {};
		params.CommandString = CommandString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_GetEOSAUTH
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_GetEOSAUTH()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_GetEOSAUTH");
		
		ASIGISPlayerController_SIG_GetEOSAUTH_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_FindServer
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_FindServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_FindServer");
		
		ASIGISPlayerController_SIG_FindServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_CreateFakePLayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SIG_CreateFakePLayers(int32_t NumPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_CreateFakePLayers");
		
		ASIGISPlayerController_SIG_CreateFakePLayers_Params params {};
		params.NumPlayers = NumPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_ClearDeviceID
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_ClearDeviceID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_ClearDeviceID");
		
		ASIGISPlayerController_SIG_ClearDeviceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SIG_CancelFind
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SIG_CancelFind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SIG_CancelFind");
		
		ASIGISPlayerController_SIG_CancelFind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetUnlockingHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverScrapping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetUnlockingHovered(bool OverScrapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetUnlockingHovered");
		
		ASIGISPlayerController_SetUnlockingHovered_Params params {};
		params.OverScrapping = OverScrapping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetToggleCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldToggle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetToggleCrouch(bool ShouldToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetToggleCrouch");
		
		ASIGISPlayerController_SetToggleCrouch_Params params {};
		params.ShouldToggle = ShouldToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetToggleADS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ShouldToggle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetToggleADS(bool ShouldToggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetToggleADS");
		
		ASIGISPlayerController_SetToggleADS_Params params {};
		params.ShouldToggle = ShouldToggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetScrappingHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverScrapping                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetScrappingHovered(bool OverScrapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetScrappingHovered");
		
		ASIGISPlayerController_SetScrappingHovered_Params params {};
		params.OverScrapping = OverScrapping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetRepairHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverRepairing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetRepairHovered(bool OverRepairing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetRepairHovered");
		
		ASIGISPlayerController_SetRepairHovered_Params params {};
		params.OverRepairing = OverRepairing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetPlayerUnlockCos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Cosmetic                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetPlayerUnlockCos(const class FName& Cosmetic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetPlayerUnlockCos");
		
		ASIGISPlayerController_SetPlayerUnlockCos_Params params {};
		params.Cosmetic = Cosmetic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetPlayerCosHead
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        head                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetPlayerCosHead(const class FName& head)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetPlayerCosHead");
		
		ASIGISPlayerController_SetPlayerCosHead_Params params {};
		params.head = head;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetPlayerCosBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Body                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetPlayerCosBody(const class FName& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetPlayerCosBody");
		
		ASIGISPlayerController_SetPlayerCosBody_Params params {};
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SetColouringHovered
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OverColouring                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::SetColouringHovered(bool OverColouring)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SetColouringHovered");
		
		ASIGISPlayerController_SetColouringHovered_Params params {};
		params.OverColouring = OverColouring;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_StartLag
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::Server_StartLag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_StartLag");
		
		ASIGISPlayerController_Server_StartLag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_SIGPushCommandToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CommandString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_SIGPushCommandToServer(const class FString& CommandString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_SIGPushCommandToServer");
		
		ASIGISPlayerController_Server_SIGPushCommandToServer_Params params {};
		params.CommandString = CommandString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_SIGCreateFakePLayers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NumPlayers                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_SIGCreateFakePLayers(int32_t NumPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_SIGCreateFakePLayers");
		
		ASIGISPlayerController_Server_SIGCreateFakePLayers_Params params {};
		params.NumPlayers = NumPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_SIG_PushIntCommandToServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            CommandString                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_SIG_PushIntCommandToServer(int32_t CommandString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_SIG_PushIntCommandToServer");
		
		ASIGISPlayerController_Server_SIG_PushIntCommandToServer_Params params {};
		params.CommandString = CommandString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_SendShipItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FInventoryItemStruct>                LobbyItemsIn                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_SendShipItems(TArray<struct FInventoryItemStruct> LobbyItemsIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_SendShipItems");
		
		ASIGISPlayerController_Server_SendShipItems_Params params {};
		params.LobbyItemsIn = LobbyItemsIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_CashChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ChangeAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_CashChange(int32_t ChangeAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_CashChange");
		
		ASIGISPlayerController_Server_CashChange_Params params {};
		params.ChangeAmount = ChangeAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_AwsN_EquippedplayerCosmeticsReturned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      returnedItems                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_AwsN_EquippedplayerCosmeticsReturned(const class FString& returnedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_AwsN_EquippedplayerCosmeticsReturned");
		
		ASIGISPlayerController_Server_AwsN_EquippedplayerCosmeticsReturned_Params params {};
		params.returnedItems = returnedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Server_AwsN_EquippedItemsReturned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      returnedItems                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Server_AwsN_EquippedItemsReturned(const class FString& returnedItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Server_AwsN_EquippedItemsReturned");
		
		ASIGISPlayerController_Server_AwsN_EquippedItemsReturned_Params params {};
		params.returnedItems = returnedItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SeclickPressed
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SeclickPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SeclickPressed");
		
		ASIGISPlayerController_SeclickPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.SecClickUnPressed
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::SecClickUnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.SecClickUnPressed");
		
		ASIGISPlayerController_SecClickUnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.RemovePrestigeUnlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RemovedPres                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::RemovePrestigeUnlock(const class FString& RemovedPres)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.RemovePrestigeUnlock");
		
		ASIGISPlayerController_RemovePrestigeUnlock_Params params {};
		params.RemovedPres = RemovedPres;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.RemoveGiftItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemToRemove                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::RemoveGiftItem(const class FString& ItemToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.RemoveGiftItem");
		
		ASIGISPlayerController_RemoveGiftItem_Params params {};
		params.ItemToRemove = ItemToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.RefreshActiveRecipeInfo
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::RefreshActiveRecipeInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.RefreshActiveRecipeInfo");
		
		ASIGISPlayerController_RefreshActiveRecipeInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.PrimClickUnPressed
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::PrimClickUnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.PrimClickUnPressed");
		
		ASIGISPlayerController_PrimClickUnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.PrimClickPressed
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::PrimClickPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.PrimClickPressed");
		
		ASIGISPlayerController_PrimClickPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.PrestigeWipeItems
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::PrestigeWipeItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.PrestigeWipeItems");
		
		ASIGISPlayerController_PrestigeWipeItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.PresteigeZeroOutPlayerCashCraftingSkills
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::PresteigeZeroOutPlayerCashCraftingSkills()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.PresteigeZeroOutPlayerCashCraftingSkills");
		
		ASIGISPlayerController_PresteigeZeroOutPlayerCashCraftingSkills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.PlayerHasNoWeaponEquipped
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::PlayerHasNoWeaponEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.PlayerHasNoWeaponEquipped");
		
		ASIGISPlayerController_PlayerHasNoWeaponEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnUsedItemEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnUsedItemEvent(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnUsedItemEvent");
		
		ASIGISPlayerController_OnUsedItemEvent_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnUpDateMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRowUpdated                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnUpDateMission(const class FName& MissionRowUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnUpDateMission");
		
		ASIGISPlayerController_OnUpDateMission_Params params {};
		params.MissionRowUpdated = MissionRowUpdated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnUpDateChapterMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCompleted                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnUpDateChapterMission(bool bCompleted, const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnUpDateChapterMission");
		
		ASIGISPlayerController_OnUpDateChapterMission_Params params {};
		params.bCompleted = bCompleted;
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnShowUIDestroyPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemUID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ItemData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnShowUIDestroyPrompt(const class FString& ItemUID, const class FName& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnShowUIDestroyPrompt");
		
		ASIGISPlayerController_OnShowUIDestroyPrompt_Params params {};
		params.ItemUID = ItemUID;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnMutatedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnMutatedItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnMutatedItem");
		
		ASIGISPlayerController_OnMutatedItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnItemRepaired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnItemRepaired(const class FName& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnItemRepaired");
		
		ASIGISPlayerController_OnItemRepaired_Params params {};
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnInventoryKeyPressed
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::OnInventoryKeyPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnInventoryKeyPressed");
		
		ASIGISPlayerController_OnInventoryKeyPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnHealingAnimStopped
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::OnHealingAnimStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnHealingAnimStopped");
		
		ASIGISPlayerController_OnHealingAnimStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnHealingAnimStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HealingTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnHealingAnimStarted(const class FName& ItemRow, float HealingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnHealingAnimStarted");
		
		ASIGISPlayerController_OnHealingAnimStarted_Params params {};
		params.ItemRow = ItemRow;
		params.HealingTime = HealingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnEscapeKeyPressed
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::OnEscapeKeyPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnEscapeKeyPressed");
		
		ASIGISPlayerController_OnEscapeKeyPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OnAntiCheatCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasAntiCheat                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEOSEAntiCheatClientViolationType                  ViolationOut                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ViolationDetails                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::OnAntiCheatCheck(bool HasAntiCheat, EEOSEAntiCheatClientViolationType ViolationOut, const class FString& ViolationDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OnAntiCheatCheck");
		
		ASIGISPlayerController_OnAntiCheatCheck_Params params {};
		params.HasAntiCheat = HasAntiCheat;
		params.ViolationOut = ViolationOut;
		params.ViolationDetails = ViolationDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.OfficeTravelToMap
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::OfficeTravelToMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.OfficeTravelToMap");
		
		ASIGISPlayerController_OfficeTravelToMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.MenuOpenMouseInput
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::MenuOpenMouseInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.MenuOpenMouseInput");
		
		ASIGISPlayerController_MenuOpenMouseInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.LoadTextureReference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TexturePath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* ASIGISPlayerController::LoadTextureReference(const class FString& TexturePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.LoadTextureReference");
		
		ASIGISPlayerController_LoadTextureReference_Params params {};
		params.TexturePath = TexturePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ItemAttemptedToScrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ScrapSuccesful                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::ItemAttemptedToScrap(const class FName& ItemData, bool ScrapSuccesful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ItemAttemptedToScrap");
		
		ASIGISPlayerController_ItemAttemptedToScrap_Params params {};
		params.ItemData = ItemData;
		params.ScrapSuccesful = ScrapSuccesful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IsMissionReadyToCollect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASIGISPlayerController::IsMissionReadyToCollect(const class FName& MissionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IsMissionReadyToCollect");
		
		ASIGISPlayerController_IsMissionReadyToCollect_Params params {};
		params.MissionRow = MissionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IsEditorInstance
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::IsEditorInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IsEditorInstance");
		
		ASIGISPlayerController_IsEditorInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IsChapterMissionReadyToCollect
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::IsChapterMissionReadyToCollect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IsChapterMissionReadyToCollect");
		
		ASIGISPlayerController_IsChapterMissionReadyToCollect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ISaVIPPlayer
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::ISaVIPPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ISaVIPPlayer");
		
		ASIGISPlayerController_ISaVIPPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IsATestBuild
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::IsATestBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IsATestBuild");
		
		ASIGISPlayerController_IsATestBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IsADevBuild
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::IsADevBuild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IsADevBuild");
		
		ASIGISPlayerController_IsADevBuild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IncrementMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASIGISPlayerController::IncrementMission(const class FName& MissionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IncrementMission");
		
		ASIGISPlayerController_IncrementMission_Params params {};
		params.MissionRow = MissionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IncrementChapterMission
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::IncrementChapterMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IncrementChapterMission");
		
		ASIGISPlayerController_IncrementChapterMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.IncreaseShipSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Shipslots                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::IncreaseShipSize(int32_t Shipslots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.IncreaseShipSize");
		
		ASIGISPlayerController_IncreaseShipSize_Params params {};
		params.Shipslots = Shipslots;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.HealingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealingOptions                                    HealEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::HealingEvent(EHealingOptions HealEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.HealingEvent");
		
		ASIGISPlayerController_HealingEvent_Params params {};
		params.HealEvent = HealEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.HasRecipeUnlocked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            skillrecipnum                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASIGISPlayerController::HasRecipeUnlocked(int32_t skillrecipnum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.HasRecipeUnlocked");
		
		ASIGISPlayerController_HasRecipeUnlocked_Params params {};
		params.skillrecipnum = skillrecipnum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.HasPlayerLoaded
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::HasPlayerLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.HasPlayerLoaded");
		
		ASIGISPlayerController_HasPlayerLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetXPTillNextLevel
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetXPTillNextLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetXPTillNextLevel");
		
		ASIGISPlayerController_GetXPTillNextLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetXPForLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LvlToCheck                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetXPForLevel(int32_t LvlToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetXPForLevel");
		
		ASIGISPlayerController_GetXPForLevel_Params params {};
		params.LvlToCheck = LvlToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetXP
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetXP");
		
		ASIGISPlayerController_GetXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetTotalInventoryIncrease
	 * 		Flags  -> ()
	 */
	struct FInventoryGridPair ASIGISPlayerController::GetTotalInventoryIncrease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetTotalInventoryIncrease");
		
		ASIGISPlayerController_GetTotalInventoryIncrease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetRepairInfo
	 * 		Flags  -> ()
	 */
	struct FRepairInfo ASIGISPlayerController::GetRepairInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetRepairInfo");
		
		ASIGISPlayerController_GetRepairInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetPrestigeCusomitations
	 * 		Flags  -> ()
	 */
	TArray<class FString> ASIGISPlayerController::GetPrestigeCusomitations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetPrestigeCusomitations");
		
		ASIGISPlayerController_GetPrestigeCusomitations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetPrestige
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetPrestige()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetPrestige");
		
		ASIGISPlayerController_GetPrestige_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetPresigeShipSizeIncrease
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetPresigeShipSizeIncrease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetPresigeShipSizeIncrease");
		
		ASIGISPlayerController_GetPresigeShipSizeIncrease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetPresigeRecipes
	 * 		Flags  -> ()
	 */
	TArray<int32_t> ASIGISPlayerController::GetPresigeRecipes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetPresigeRecipes");
		
		ASIGISPlayerController_GetPresigeRecipes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetPlayersLevel
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetPlayersLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetPlayersLevel");
		
		ASIGISPlayerController_GetPlayersLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetPlayerPoints
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetPlayerPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetPlayerPoints");
		
		ASIGISPlayerController_GetPlayerPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetMissionProgression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionToCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetMissionProgression(const class FName& MissionToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetMissionProgression");
		
		ASIGISPlayerController_GetMissionProgression_Params params {};
		params.MissionToCheck = MissionToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetMissionInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                AvailableMissions                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                MissionsInProgress                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                MissionsCollected                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::GetMissionInfo(TArray<class FName>* AvailableMissions, TArray<class FName>* MissionsInProgress, TArray<class FName>* MissionsCollected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetMissionInfo");
		
		ASIGISPlayerController_GetMissionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableMissions != nullptr)
			*AvailableMissions = params.AvailableMissions;
		if (MissionsInProgress != nullptr)
			*MissionsInProgress = params.MissionsInProgress;
		if (MissionsCollected != nullptr)
			*MissionsCollected = params.MissionsCollected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetMeshForModule
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ModuleItemData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UStaticMesh* ASIGISPlayerController::GetMeshForModule(const class FName& ModuleItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetMeshForModule");
		
		ASIGISPlayerController_GetMeshForModule_Params params {};
		params.ModuleItemData = ModuleItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetKeyForAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FInputActionKeyMapping> ASIGISPlayerController::GetKeyForAction(const class FName& ActionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetKeyForAction");
		
		ASIGISPlayerController_GetKeyForAction_Params params {};
		params.ActionName = ActionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetItemArmourValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         ItemFrom                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float ASIGISPlayerController::GetItemArmourValue(class ASIGISInventoryItem* ItemFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetItemArmourValue");
		
		ASIGISPlayerController_GetItemArmourValue_Params params {};
		params.ItemFrom = ItemFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetFactionXPtoLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XPIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetFactionXPtoLevel(int32_t XPIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetFactionXPtoLevel");
		
		ASIGISPlayerController_GetFactionXPtoLevel_Params params {};
		params.XPIn = XPIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetFactionXPTillNextLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFactionType                                       FactionIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetFactionXPTillNextLevel(EFactionType FactionIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetFactionXPTillNextLevel");
		
		ASIGISPlayerController_GetFactionXPTillNextLevel_Params params {};
		params.FactionIn = FactionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetFactionXPForLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LvlToCheck                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetFactionXPForLevel(int32_t LvlToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetFactionXPForLevel");
		
		ASIGISPlayerController_GetFactionXPForLevel_Params params {};
		params.LvlToCheck = LvlToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetFactionLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFactionType                                       FactionIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetFactionLevel(EFactionType FactionIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetFactionLevel");
		
		ASIGISPlayerController_GetFactionLevel_Params params {};
		params.FactionIn = FactionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetDeliverMissionAmount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ASIGISPlayerController::GetDeliverMissionAmount(const class FName& MissionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetDeliverMissionAmount");
		
		ASIGISPlayerController_GetDeliverMissionAmount_Params params {};
		params.MissionRow = MissionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetCurrentShopNumber
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetCurrentShopNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetCurrentShopNumber");
		
		ASIGISPlayerController_GetCurrentShopNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetCurrentFactionShopDiscount
	 * 		Flags  -> ()
	 */
	float ASIGISPlayerController::GetCurrentFactionShopDiscount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetCurrentFactionShopDiscount");
		
		ASIGISPlayerController_GetCurrentFactionShopDiscount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetCurrentChapterMission
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FChapterMissionUI ASIGISPlayerController::GetCurrentChapterMission(int32_t* Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetCurrentChapterMission");
		
		ASIGISPlayerController_GetCurrentChapterMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Progress != nullptr)
			*Progress = params.Progress;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetConnectionExtraOptions
	 * 		Flags  -> ()
	 */
	class FString ASIGISPlayerController::GetConnectionExtraOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetConnectionExtraOptions");
		
		ASIGISPlayerController_GetConnectionExtraOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetColouringInfo
	 * 		Flags  -> ()
	 */
	struct FColouringInfo ASIGISPlayerController::GetColouringInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetColouringInfo");
		
		ASIGISPlayerController_GetColouringInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetChapterMissionAmount
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetChapterMissionAmount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetChapterMissionAmount");
		
		ASIGISPlayerController_GetChapterMissionAmount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetCash
	 * 		Flags  -> ()
	 */
	int32_t ASIGISPlayerController::GetCash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetCash");
		
		ASIGISPlayerController_GetCash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetAllPrestigeUnlocks
	 * 		Flags  -> ()
	 */
	TArray<class FString> ASIGISPlayerController::GetAllPrestigeUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetAllPrestigeUnlocks");
		
		ASIGISPlayerController_GetAllPrestigeUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetAllMissionsForChapters
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ChapterPrefix                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FChapterMissionUI> ASIGISPlayerController::GetAllMissionsForChapters(const class FString& ChapterPrefix)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetAllMissionsForChapters");
		
		ASIGISPlayerController_GetAllMissionsForChapters_Params params {};
		params.ChapterPrefix = ChapterPrefix;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.GetActiveFrigate
	 * 		Flags  -> ()
	 */
	class FName ASIGISPlayerController::GetActiveFrigate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.GetActiveFrigate");
		
		ASIGISPlayerController_GetActiveFrigate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.FocusUIAndGame
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::FocusUIAndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.FocusUIAndGame");
		
		ASIGISPlayerController_FocusUIAndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.FocusGame
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::FocusGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.FocusGame");
		
		ASIGISPlayerController_FocusGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.FadeOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::FadeOut(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.FadeOut");
		
		ASIGISPlayerController_FadeOut_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.FadeIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::FadeIn(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.FadeIn");
		
		ASIGISPlayerController_FadeIn_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DynamoTestSet
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DynamoTestSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DynamoTestSet");
		
		ASIGISPlayerController_DynamoTestSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DynamoTesthasUserTrue
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DynamoTesthasUserTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DynamoTesthasUserTrue");
		
		ASIGISPlayerController_DynamoTesthasUserTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DynamoTesthasUserFalse
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DynamoTesthasUserFalse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DynamoTesthasUserFalse");
		
		ASIGISPlayerController_DynamoTesthasUserFalse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DynamoTestGetUserScore
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DynamoTestGetUserScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DynamoTestGetUserScore");
		
		ASIGISPlayerController_DynamoTestGetUserScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DynamoTestGet
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DynamoTestGet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DynamoTestGet");
		
		ASIGISPlayerController_DynamoTestGet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DynamoTestCreateUser
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DynamoTestCreateUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DynamoTestCreateUser");
		
		ASIGISPlayerController_DynamoTestCreateUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DitchAllItemsFromDataBase
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DitchAllItemsFromDataBase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DitchAllItemsFromDataBase");
		
		ASIGISPlayerController_DitchAllItemsFromDataBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DebugRestartChapterMissions
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DebugRestartChapterMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DebugRestartChapterMissions");
		
		ASIGISPlayerController_DebugRestartChapterMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DebugIncremmentChapterMissions
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DebugIncremmentChapterMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DebugIncremmentChapterMissions");
		
		ASIGISPlayerController_DebugIncremmentChapterMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DebugIncremmentChapterMissionProgress
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::DebugIncremmentChapterMissionProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DebugIncremmentChapterMissionProgress");
		
		ASIGISPlayerController_DebugIncremmentChapterMissionProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.DebugGiveActiveTestQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MissonRow                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::DebugGiveActiveTestQuest(const class FString& MissonRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.DebugGiveActiveTestQuest");
		
		ASIGISPlayerController_DebugGiveActiveTestQuest_Params params {};
		params.MissonRow = MissonRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Debug_SetShopStage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ShopKeeper                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Debug_SetShopStage(int32_t ShopKeeper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Debug_SetShopStage");
		
		ASIGISPlayerController_Debug_SetShopStage_Params params {};
		params.ShopKeeper = ShopKeeper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ConfirmDestroyItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemUID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::ConfirmDestroyItem(const class FString& ItemUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ConfirmDestroyItem");
		
		ASIGISPlayerController_ConfirmDestroyItem_Params params {};
		params.ItemUID = ItemUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ColourItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      UColourID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ColourToUse                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::ColourItem(const class FString& UColourID, const class FName& ColourToUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ColourItem");
		
		ASIGISPlayerController_ColourItem_Params params {};
		params.UColourID = UColourID;
		params.ColourToUse = ColourToUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CollectMissionReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::CollectMissionReward(const class FName& MissionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CollectMissionReward");
		
		ASIGISPlayerController_CollectMissionReward_Params params {};
		params.MissionRow = MissionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CollectChapterMission
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::CollectChapterMission()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CollectChapterMission");
		
		ASIGISPlayerController_CollectChapterMission_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CloseInventory
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::CloseInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CloseInventory");
		
		ASIGISPlayerController_CloseInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_UsedItemEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_UsedItemEvent(const class FName& ItemName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_UsedItemEvent");
		
		ASIGISPlayerController_Client_UsedItemEvent_Params params {};
		params.ItemName = ItemName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_UIPromt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_UIPromt(const class FString& MessageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_UIPromt");
		
		ASIGISPlayerController_Client_UIPromt_Params params {};
		params.MessageIn = MessageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_StopHealingAnim
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::Client_StopHealingAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_StopHealingAnim");
		
		ASIGISPlayerController_Client_StopHealingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_ShowLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelIn                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               LevelShow                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_ShowLevel(const class FString& LevelIn, bool LevelShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_ShowLevel");
		
		ASIGISPlayerController_Client_ShowLevel_Params params {};
		params.LevelIn = LevelIn;
		params.LevelShow = LevelShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_ReturnPushMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MessageIn                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_ReturnPushMessage(const class FString& MessageIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_ReturnPushMessage");
		
		ASIGISPlayerController_Client_ReturnPushMessage_Params params {};
		params.MessageIn = MessageIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_RemoveEquippedItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              ItemIds                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_RemoveEquippedItems(TArray<class FString> ItemIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_RemoveEquippedItems");
		
		ASIGISPlayerController_Client_RemoveEquippedItems_Params params {};
		params.ItemIds = ItemIds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_PickedUpItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_PickedUpItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_PickedUpItem");
		
		ASIGISPlayerController_Client_PickedUpItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_MutateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_MutateItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_MutateItem");
		
		ASIGISPlayerController_Client_MutateItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_HealingEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHealingOptions                                    HealEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_HealingEvent(EHealingOptions HealEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_HealingEvent");
		
		ASIGISPlayerController_Client_HealingEvent_Params params {};
		params.HealEvent = HealEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_HealingAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HealingTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_HealingAnim(const class FName& ItemRow, float HealingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_HealingAnim");
		
		ASIGISPlayerController_Client_HealingAnim_Params params {};
		params.ItemRow = ItemRow;
		params.HealingTime = HealingTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_GetShipLobbyStash
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::Client_GetShipLobbyStash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_GetShipLobbyStash");
		
		ASIGISPlayerController_Client_GetShipLobbyStash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_GetEquippedItems
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::Client_GetEquippedItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_GetEquippedItems");
		
		ASIGISPlayerController_Client_GetEquippedItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_DroppedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_DroppedItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_DroppedItem");
		
		ASIGISPlayerController_Client_DroppedItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_DestroyPrompt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ItemUID                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ItemData                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_DestroyPrompt(const class FString& ItemUID, const class FName& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_DestroyPrompt");
		
		ASIGISPlayerController_Client_DestroyPrompt_Params params {};
		params.ItemUID = ItemUID;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.Client_CheckMissionEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MessageIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EContractType                                      ContracyType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::Client_CheckMissionEvent(const class FName& MessageIn, EContractType ContracyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.Client_CheckMissionEvent");
		
		ASIGISPlayerController_Client_CheckMissionEvent_Params params {};
		params.MessageIn = MessageIn;
		params.ContracyType = ContracyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ClearXP
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::ClearXP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ClearXP");
		
		ASIGISPlayerController_ClearXP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ClearPresigeUnlocks
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::ClearPresigeUnlocks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ClearPresigeUnlocks");
		
		ASIGISPlayerController_ClearPresigeUnlocks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.ClearDailyMissions
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::ClearDailyMissions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.ClearDailyMissions");
		
		ASIGISPlayerController_ClearDailyMissions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CantUnFoldNoSpace
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::CantUnFoldNoSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CantUnFoldNoSpace");
		
		ASIGISPlayerController_CantUnFoldNoSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CantFoldItemsInside
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::CantFoldItemsInside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CantFoldItemsInside");
		
		ASIGISPlayerController_CantFoldItemsInside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CanCollectCurrentMissionLoot
	 * 		Flags  -> ()
	 */
	bool ASIGISPlayerController::CanCollectCurrentMissionLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CanCollectCurrentMissionLoot");
		
		ASIGISPlayerController_CanCollectCurrentMissionLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.CanCollectCurrentContractLoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MissionRow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASIGISPlayerController::CanCollectCurrentContractLoot(const class FName& MissionRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.CanCollectCurrentContractLoot");
		
		ASIGISPlayerController_CanCollectCurrentContractLoot_Params params {};
		params.MissionRow = MissionRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.BrokeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::BrokeItem(const class FName& ItemRowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.BrokeItem");
		
		ASIGISPlayerController_BrokeItem_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.BP_CloseEvenventory
	 * 		Flags  -> ()
	 */
	void ASIGISPlayerController::BP_CloseEvenventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.BP_CloseEvenventory");
		
		ASIGISPlayerController_BP_CloseEvenventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.AddXpToFaction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EFactionType                                       FactionIn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            XpAmount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::AddXpToFaction(EFactionType FactionIn, int32_t XpAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.AddXpToFaction");
		
		ASIGISPlayerController_AddXpToFaction_Params params {};
		params.FactionIn = FactionIn;
		params.XpAmount = XpAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.AddXP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            XPIn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::AddXP(int32_t XPIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.AddXP");
		
		ASIGISPlayerController_AddXP_Params params {};
		params.XPIn = XPIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.AddPrestige
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::AddPrestige(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.AddPrestige");
		
		ASIGISPlayerController_AddPrestige_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISPlayerController.AddPoints
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASIGISPlayerController::AddPoints(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISPlayerController.AddPoints");
		
		ASIGISPlayerController_AddPoints_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISPoseMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISPoseMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISPoseMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SIGISRenderActor.GetRenderMat
	 * 		Flags  -> ()
	 */
	class UMaterialInstanceDynamic* ASIGISRenderActor::GetRenderMat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SIGISRenderActor.GetRenderMat");
		
		ASIGISRenderActor_GetRenderMat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISRenderActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISRenderActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISRenderActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISResourceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISResourceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISResourceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISShipModActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISShipModActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISShipModActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USIGISLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USIGISLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASIGISWorkbenchRenderActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASIGISWorkbenchRenderActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SIGISWorkbenchRenderActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTreeWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTreeWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SkillTreeWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SkillTreeWidgetItem.UnlockSkill
	 * 		Flags  -> ()
	 */
	void USkillTreeWidgetItem::UnlockSkill()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SkillTreeWidgetItem.UnlockSkill");
		
		USkillTreeWidgetItem_UnlockSkill_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SkillTreeWidgetItem.IsSkillUnlocked
	 * 		Flags  -> ()
	 */
	bool USkillTreeWidgetItem::IsSkillUnlocked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SkillTreeWidgetItem.IsSkillUnlocked");
		
		USkillTreeWidgetItem_IsSkillUnlocked_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.SkillTreeWidgetItem.CanUnlock
	 * 		Flags  -> ()
	 */
	bool USkillTreeWidgetItem::CanUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.SkillTreeWidgetItem.CanUnlock");
		
		USkillTreeWidgetItem_CanUnlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTreeWidgetItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTreeWidgetItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SkillTreeWidgetItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USortingIconWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USortingIconWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.SortingIconWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThumbnailActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThumbnailActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailGenerationProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailGenerationProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailGenerationProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneration.SaveThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  Thumbnail                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FDirectoryPath                              Directory                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UThumbnailGeneration::SaveThumbnail(class UTexture2D* Thumbnail, const struct FDirectoryPath& Directory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneration.SaveThumbnail");
		
		UThumbnailGeneration_SaveThumbnail_Params params {};
		params.Thumbnail = Thumbnail;
		params.Directory = Directory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneration.InitializeThumbnailWorld
	 * 		Flags  -> ()
	 */
	void UThumbnailGeneration::InitializeThumbnailWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneration.InitializeThumbnailWorld");
		
		UThumbnailGeneration_InitializeThumbnailWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneration.GetThumbnailWorld
	 * 		Flags  -> ()
	 */
	class UWorld* UThumbnailGeneration::GetThumbnailWorld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneration.GetThumbnailWorld");
		
		UThumbnailGeneration_GetThumbnailWorld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneration.GetThumbnailCaptureComponent
	 * 		Flags  -> ()
	 */
	class USceneCaptureComponent2D* UThumbnailGeneration::GetThumbnailCaptureComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneration.GetThumbnailCaptureComponent");
		
		UThumbnailGeneration_GetThumbnailCaptureComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneration.GenerateThumbnail_Synchronous
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECacheMethod                                       CacheMethod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FThumbnailSettings                          ThumbnailSettings                                          (Parm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UThumbnailGeneration::GenerateThumbnail_Synchronous(class UClass* ActorClass, ECacheMethod CacheMethod, const struct FThumbnailSettings& ThumbnailSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneration.GenerateThumbnail_Synchronous");
		
		UThumbnailGeneration_GenerateThumbnail_Synchronous_Params params {};
		params.ActorClass = ActorClass;
		params.CacheMethod = CacheMethod;
		params.ThumbnailSettings = ThumbnailSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneration.CreateThumbnailGenerationProxyObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECacheMethod                                       CacheMethod                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FThumbnailSettings                          ThumbnailSettings                                          (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 */
	class UThumbnailGenerationProxy* UThumbnailGeneration::CreateThumbnailGenerationProxyObject(class UObject* WorldContextObject, class UClass* ActorClass, ECacheMethod CacheMethod, const struct FThumbnailSettings& ThumbnailSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneration.CreateThumbnailGenerationProxyObject");
		
		UThumbnailGeneration_CreateThumbnailGenerationProxyObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActorClass = ActorClass;
		params.CacheMethod = CacheMethod;
		params.ThumbnailSettings = ThumbnailSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailGeneration.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailGeneration::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailGeneration");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailSceneInterface.OnUpdateThumbnailScene
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThumbnailSettings                          ThumbnailSettings                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UThumbnailSceneInterface::OnUpdateThumbnailScene(const struct FThumbnailSettings& ThumbnailSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailSceneInterface.OnUpdateThumbnailScene");
		
		UThumbnailSceneInterface_OnUpdateThumbnailScene_Params params {};
		params.ThumbnailSettings = ThumbnailSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailSceneInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailSceneInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailSceneInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailActorInterface.PreCaptureActorThumbnail
	 * 		Flags  -> ()
	 */
	void UThumbnailActorInterface::PreCaptureActorThumbnail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailActorInterface.PreCaptureActorThumbnail");
		
		UThumbnailActorInterface_PreCaptureActorThumbnail_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailActorInterface.GetThumbnailTransform
	 * 		Flags  -> ()
	 */
	struct FTransform UThumbnailActorInterface::GetThumbnailTransform()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailActorInterface.GetThumbnailTransform");
		
		UThumbnailActorInterface_GetThumbnailTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailActorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailActorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailActorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.ThumbnailGeneratorScript.PreCaptureActorThumbnail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      ThumbnailActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThumbnailGeneratorScript::PreCaptureActorThumbnail(class AActor* ThumbnailActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.ThumbnailGeneratorScript.PreCaptureActorThumbnail");
		
		UThumbnailGeneratorScript_PreCaptureActorThumbnail_Params params {};
		params.ThumbnailActor = ThumbnailActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailGeneratorScript.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailGeneratorScript::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailGeneratorScript");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThumbnailGeneratorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThumbnailGeneratorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.ThumbnailGeneratorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.SetOptionArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<EItemOptions>                               SentItems                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::SetOptionArray(TArray<EItemOptions> SentItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.SetOptionArray");
		
		UTooltipWidget_SetOptionArray_Params params {};
		params.SentItems = SentItems;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.SetItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASIGISInventoryItem*                         NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsSplitMenu                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInventoryGridPair                          ToSlot                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeTo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ToCon                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESlotType                                          MovetypeFrom                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::SetItem(class ASIGISInventoryItem* NewItem, bool IsSplitMenu, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, const class FString& ToCon, ESlotType MovetypeFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.SetItem");
		
		UTooltipWidget_SetItem_Params params {};
		params.NewItem = NewItem;
		params.IsSplitMenu = IsSplitMenu;
		params.ToSlot = ToSlot;
		params.MovetypeTo = MovetypeTo;
		params.ToCon = ToCon;
		params.MovetypeFrom = MovetypeFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.SetButtonOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Button                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EItemOptions                                       OptionToSet                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::SetButtonOptions(int32_t Button, EItemOptions OptionToSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.SetButtonOptions");
		
		UTooltipWidget_SetButtonOptions_Params params {};
		params.Button = Button;
		params.OptionToSet = OptionToSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.ProcessBtnPress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemOptions                                       OptionIn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::ProcessBtnPress(EItemOptions OptionIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.ProcessBtnPress");
		
		UTooltipWidget_ProcessBtnPress_Params params {};
		params.OptionIn = OptionIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OpenWeaponWindow
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OpenWeaponWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OpenWeaponWindow");
		
		UTooltipWidget_OpenWeaponWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OpenRig
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OpenRig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OpenRig");
		
		UTooltipWidget_OpenRig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OpenBag
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OpenBag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OpenBag");
		
		UTooltipWidget_OpenBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnSplitStackBTNPressed
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnSplitStackBTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnSplitStackBTNPressed");
		
		UTooltipWidget_OnSplitStackBTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnRightClickOpen
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnRightClickOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnRightClickOpen");
		
		UTooltipWidget_OnRightClickOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnOption5BTNPressed
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnOption5BTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnOption5BTNPressed");
		
		UTooltipWidget_OnOption5BTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnOption4BTNPressed
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnOption4BTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnOption4BTNPressed");
		
		UTooltipWidget_OnOption4BTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnOption3BTNPressed
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnOption3BTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnOption3BTNPressed");
		
		UTooltipWidget_OnOption3BTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnOption2BTNPressed
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnOption2BTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnOption2BTNPressed");
		
		UTooltipWidget_OnOption2BTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnOption1BTNPressed
	 * 		Flags  -> ()
	 */
	void UTooltipWidget::OnOption1BTNPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnOption1BTNPressed");
		
		UTooltipWidget_OnOption1BTNPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.OnAmountSliderValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              ValueChange                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::OnAmountSliderValueChanged(float ValueChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.OnAmountSliderValueChanged");
		
		UTooltipWidget_OnAmountSliderValueChanged_Params params {};
		params.ValueChange = ValueChange;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.NameStorageCon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::NameStorageCon(const class FString& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.NameStorageCon");
		
		UTooltipWidget_NameStorageCon_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.IsItemRepairable
	 * 		Flags  -> ()
	 */
	bool UTooltipWidget::IsItemRepairable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.IsItemRepairable");
		
		UTooltipWidget_IsItemRepairable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.IsItemColourable
	 * 		Flags  -> ()
	 */
	bool UTooltipWidget::IsItemColourable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.IsItemColourable");
		
		UTooltipWidget_IsItemColourable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.IsItemAKeyCard
	 * 		Flags  -> ()
	 */
	bool UTooltipWidget::IsItemAKeyCard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.IsItemAKeyCard");
		
		UTooltipWidget_IsItemAKeyCard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.IsALockBox
	 * 		Flags  -> ()
	 */
	bool UTooltipWidget::IsALockBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.IsALockBox");
		
		UTooltipWidget_IsALockBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.GetRepairCost
	 * 		Flags  -> ()
	 */
	int32_t UTooltipWidget::GetRepairCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.GetRepairCost");
		
		UTooltipWidget_GetRepairCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.GetPotentialScrapItems
	 * 		Flags  -> ()
	 */
	TArray<struct FScrapItemRNG> UTooltipWidget::GetPotentialScrapItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.GetPotentialScrapItems");
		
		UTooltipWidget_GetPotentialScrapItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.GetNameStorageCon
	 * 		Flags  -> ()
	 */
	class FString UTooltipWidget::GetNameStorageCon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.GetNameStorageCon");
		
		UTooltipWidget_GetNameStorageCon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.GetKeyCardInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CaptainsName                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ShipName                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ShipType                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::GetKeyCardInfo(class FString* CaptainsName, class FString* ShipName, class FString* ShipType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.GetKeyCardInfo");
		
		UTooltipWidget_GetKeyCardInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CaptainsName != nullptr)
			*CaptainsName = params.CaptainsName;
		if (ShipName != nullptr)
			*ShipName = params.ShipName;
		if (ShipType != nullptr)
			*ShipType = params.ShipType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.Debug_DamageItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              amountDamge                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTooltipWidget::Debug_DamageItem(float amountDamge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.Debug_DamageItem");
		
		UTooltipWidget_Debug_DamageItem_Params params {};
		params.amountDamge = amountDamge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.TooltipWidget.CanItemBeScrapped
	 * 		Flags  -> ()
	 */
	bool UTooltipWidget::CanItemBeScrapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.TooltipWidget.CanItemBeScrapped");
		
		UTooltipWidget_CanItemBeScrapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTooltipWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTooltipWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.TooltipWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.WeaponWindowWidget.OnDragBorderMouseDown
	 * 		Flags  -> ()
	 */
	void UWeaponWindowWidget::OnDragBorderMouseDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.WeaponWindowWidget.OnDragBorderMouseDown");
		
		UWeaponWindowWidget_OnDragBorderMouseDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.WeaponWindowWidget.OnCloseButtonPressed
	 * 		Flags  -> ()
	 */
	void UWeaponWindowWidget::OnCloseButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.WeaponWindowWidget.OnCloseButtonPressed");
		
		UWeaponWindowWidget_OnCloseButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.WeaponWindowWidget.GetWeaponActor
	 * 		Flags  -> ()
	 */
	class AActor* UWeaponWindowWidget::GetWeaponActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.WeaponWindowWidget.GetWeaponActor");
		
		UWeaponWindowWidget_GetWeaponActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SIGISPlugin.WeaponWindowWidget.GetCurrentItem
	 * 		Flags  -> ()
	 */
	class ASIGISInventoryItem* UWeaponWindowWidget::GetCurrentItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SIGISPlugin.WeaponWindowWidget.GetCurrentItem");
		
		UWeaponWindowWidget_GetCurrentItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponWindowWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponWindowWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SIGISPlugin.WeaponWindowWidget");
		return ptr;
	}

}


