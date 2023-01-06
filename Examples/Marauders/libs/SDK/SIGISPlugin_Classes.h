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
	 * Class SIGISPlugin.AdminWidget
	 * Size -> 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
	 */
	class UAdminWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_E0YV[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerUserName;                                          // 0x0268(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2KPW[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AWSToken;                                                // 0x0280(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ApiUrl;                                                  // 0x0290(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MyLogInToken;                                            // 0x02A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_METI[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (PADDING)

	public:
		void UserListReturned();
		void UserInfoReturned(const struct FUserInfo& UserInfoFetched);
		void OnLogIn(const class FString& username, const class FString& Password);
		void LoginSucces(bool failed);
		void LoginReturned(bool SuccessLogin);
		void GiveSkillsToPlayer(const class FString& userId, TArray<class FString> Skills);
		void GiveGiftsToPlayer(const class FString& userId, TArray<class FString> GiftNames);
		void GiveCosmeticsToPlayer(const class FString& userId, TArray<class FString> Cosmetics);
		TArray<struct FUserList> GetUsersFetched();
		void Admin_WipeUser(const class FString& userId);
		void Admin_WipeAllUsers();
		void Admin_SetUserXP(int32_t AmountXP, const class FString& userId);
		void Admin_SetUserPrestege(int32_t AmountPres, const class FString& userId);
		void Admin_SetUserPoints(int32_t AmountPoints, const class FString& userId);
		void Admin_SetUserCash(int32_t AmountCash, const class FString& userId);
		void Admin_GetUsersInfo(const class FString& userId);
		void Admin_GetAllUsers();
		void Admin_EditItemToPlayer(const class FString& username, const class FString& ItemId, const class FString& Properties, bool Equipped);
		void Admin_DeleteItemToPlayer(const class FString& username, const class FString& ItemId);
		void Admin_AddItemToPlayer(const class FString& username, const class FString& ItemName, const class FString& Properties, bool Equipped);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.AttachmentSlotWidget
	 * Size -> 0x01D0 (FullSize[0x0430] - InheritedSize[0x0260])
	 */
	class UAttachmentSlotWidget : public UUserWidget
	{
	public:
		class UImage*                                              SlotBackground;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotHighlight;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotBorder;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultEquipmentImage;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DraggableEquipmentCanvas;                                // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAttachmentSlot                                            SlotType;                                                // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DQXF[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlotTypeID;                                              // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlotType                                                  SlotMasterType;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1PFG[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EAttachmentSlot, class UTexture2D*>                   EquipmentSlotTextures;                                   // 0x02A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EAttachmentSlot, struct FInventoryGridPair>           EquipmentSlotSizes;                                      // 0x02F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EAttachmentSlot, struct FInventoryGridPair>           EquipmentTextureSizes;                                   // 0x0348(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           BeginDragSound;                                          // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BindingRetryTime;                                        // 0x03A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanFitDraggedItem;                                      // 0x03A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9UER[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderSize;                                              // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBorderColor;                                      // 0x03AC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x03BC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        HighlightColor;                                          // 0x03CC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidOverlapHighlightColor;                              // 0x03DC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidOverlapHighlightColor;                            // 0x03EC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        LockedSlotItemColor;                                     // 0x03FC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WO1W[0x14];                                  // 0x040C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDraggableItemWidget*                                EquippedItemWidget;                                      // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWeaponWindowWidget*                                 ActiveWeaponWidget;                                      // 0x0428(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnEndItemDrag(class ASIGISInventoryItem* Item);
		void OnBeginItemDrag(class ASIGISInventoryItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.CraftingSlotWidget
	 * Size -> 0x01F8 (FullSize[0x0458] - InheritedSize[0x0260])
	 */
	class UCraftingSlotWidget : public UUserWidget
	{
	public:
		class UImage*                                              SlotBackground;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotHighlight;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotBorder;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultEquipmentImage;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DraggableEquipmentCanvas;                                // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEquipmentSlot                                             SlotType;                                                // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1LOP[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlotTypeID;                                              // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlotType                                                  SlotMasterType;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AIAX[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EEquipmentSlot, class UTexture2D*>                    EquipmentSlotTextures;                                   // 0x02A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentSlotSizes;                                      // 0x02F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentTextureSizes;                                   // 0x0348(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           BeginDragSound;                                          // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BindingRetryTime;                                        // 0x03A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanFitDraggedItem;                                      // 0x03A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y4JU[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderSize;                                              // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBorderColor;                                      // 0x03AC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x03BC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        HighlightColor;                                          // 0x03CC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidOverlapHighlightColor;                              // 0x03DC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidOverlapHighlightColor;                            // 0x03EC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        LockedSlotItemColor;                                     // 0x03FC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_20VY[0x14];                                  // 0x040C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          Txt_NeededName;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          Txt_SlotNumNeeded;                                       // 0x0428(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          Txt_SlotNumHave;                                         // 0x0430(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmountNeeed;                                             // 0x0438(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmountHave;                                              // 0x043C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDraggableItemWidget*                                EquippedItemWidget;                                      // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDraggableItemWidget*                                PredictedEquippedItemWidget;                             // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQ0F[0x8];                                   // 0x0450(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEndItemDrag(class ASIGISInventoryItem* Item);
		void OnBeginItemDrag(class ASIGISInventoryItem* Item);
		void ItemRemovedFromSlot();
		void ItemAddedToSlot();
		bool IsSlotAbleToCraft();
		void ChangeBg();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.CraftingWidget
	 * Size -> 0x0140 (FullSize[0x03A0] - InheritedSize[0x0260])
	 */
	class UCraftingWidget : public UUserWidget
	{
	public:
		class UButton*                                             ActiveButton;                                            // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RecipeRow;                                               // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          RecipeName;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 MyData;                                                  // 0x0278(0x0010) NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUnlocked;                                               // 0x0288(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YJR[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SKillNumber;                                             // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RequiredSkills;                                          // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PointCosts;                                              // 0x02A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CashCosts;                                               // 0x02A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UnlockLevelReq;                                          // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYOB[0x4];                                   // 0x02AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MyIcon;                                                  // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6PKB[0xE8];                                  // 0x02B8(0x00E8) MISSED OFFSET (PADDING)

	public:
		void UnlockSkill();
		void UnlockedRecipe();
		void OnActiveBtnPressed();
		bool IsRecipeUnlocked();
		struct FDataTableRowHandle GetRoeHandle();
		class UTexture2D* GetRecipeIcon();
		void FinishedAssetLoad();
		void FakePress();
		void DeActiveRecipe();
		bool CanUnlock();
		void ActiveRecipe();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.DragAndDropItemWidget
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UDragAndDropItemWidget : public UUserWidget
	{
	public:
		class UImage*                                              ItemImage;                                               // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X4XN[0x28];                                  // 0x0268(0x0028) MISSED OFFSET (PADDING)

	public:
		void WidgetsNewSize(const struct FVector2D& NewSize);
		void StaticImageLoaded();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.DraggableItemWidget
	 * Size -> 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
	 */
	class UDraggableItemWidget : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        ItemCanvas;                                              // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              ItemImage;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             ItemSelectButton;                                        // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          CashValue;                                               // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          amount;                                                  // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBorder*                                             BackGroundBorder;                                        // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          ItemName;                                                // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInventoryGridPair                                  GridLocation;                                            // 0x0298(0x0002) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7SY[0x6];                                   // 0x029A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEquipmentSlotWidget*                                ParentEquipWidget;                                       // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           ParentConWidget;                                         // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFakePredictItem;                                       // 0x02B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BSJ[0x17];                                  // 0x02B1(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASIGISInventoryItem*                                 Item;                                                    // 0x02C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WidgetLocked;                                            // 0x02D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlotType                                                  SlotMasterType;                                          // 0x02D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMAE[0x7];                                   // 0x02D2(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBlockedFromUseage;                                      // 0x02D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F192[0x6];                                   // 0x02DA(0x0006) MISSED OFFSET (PADDING)

	public:
		void WidgetsNewSize(const struct FVector2D& NewSize);
		void UnlockWidget();
		void UnHighLightWidget();
		void StaticImageLoaded();
		void StartWidgetBeingUnLocked();
		void StartDraggingEvent();
		void OnItemIconChange();
		bool IsShopOpen();
		bool IsItemAKeyCard();
		bool IsItemAbleToColour();
		bool IsAWeapon(EBulletType* AmmoType);
		bool IsArmour(int32_t* DamageMitagtionAmount);
		void IsALootWidgetandNeedsLocked();
		bool IsALootWidget();
		bool IsAContainerRig();
		void HighLightWidget();
		bool HasDuribility(float* Duribility, float* MaxDuribility);
		class FString GetStorageName();
		class FText GetStackText();
		void GetKeyCardInfo(class FString* CaptainsName, class FString* ShipName, class FString* ShipType);
		EItemType GetItemType();
		void EquipmentNewSize(const struct FVector2D& NewSize);
		void EndDraggingEvent();
		void EnableWidget();
		void DuribilityChanged();
		void DisableWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.DragWindowWidget
	 * Size -> 0x0038 (FullSize[0x0298] - InheritedSize[0x0260])
	 */
	class UDragWindowWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_GY9Q[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBorder*                                             DragBorder;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             CloseBtn;                                                // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           ConTainerPanel;                                          // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          ContainerName;                                           // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPB9[0x10];                                  // 0x0288(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetOverDragArea(bool OverArea);
		void SetClickStarted(const struct FVector2D& TouchedLoc, bool ClickStarted);
		void OnDragBorderMouseDown();
		void OnCloseButtonPressed();
		bool IsAScrapingWindow();
		bool IsALootBoxWindow();
		bool HasItemsLeftInScrap();
		void CloseScrapWindow();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.EquipmentSlotWidget
	 * Size -> 0x01D8 (FullSize[0x0438] - InheritedSize[0x0260])
	 */
	class UEquipmentSlotWidget : public UUserWidget
	{
	public:
		class UImage*                                              SlotBackground;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotHighlight;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotBorder;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultEquipmentImage;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DraggableEquipmentCanvas;                                // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEquipmentSlot                                             SlotType;                                                // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XJ28[0x7];                                   // 0x0289(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlotTypeID;                                              // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlotType                                                  SlotMasterType;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WW5A[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EEquipmentSlot, class UTexture2D*>                    EquipmentSlotTextures;                                   // 0x02A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentSlotSizes;                                      // 0x02F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentTextureSizes;                                   // 0x0348(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           BeginDragSound;                                          // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BindingRetryTime;                                        // 0x03A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanFitDraggedItem;                                      // 0x03A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C94Y[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderSize;                                              // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBorderColor;                                      // 0x03AC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x03BC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        HighlightColor;                                          // 0x03CC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidOverlapHighlightColor;                              // 0x03DC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidOverlapHighlightColor;                            // 0x03EC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        LockedSlotItemColor;                                     // 0x03FC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2WIK[0x14];                                  // 0x040C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDraggableItemWidget*                                EquippedItemWidget;                                      // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDraggableItemWidget*                                PredictedEquippedItemWidget;                             // 0x0428(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4V0[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEndItemDrag(class ASIGISInventoryItem* Item);
		void OnBeginItemDrag(class ASIGISInventoryItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.InGameOverlayWidget
	 * Size -> 0x0048 (FullSize[0x02A8] - InheritedSize[0x0260])
	 */
	class UInGameOverlayWidget : public UUserWidget
	{
	public:
		class UInventoryMenuWidget*                                InventoryMenu;                                           // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             DropItemScreenButton;                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBackgroundBlur*                                     GameBackgroundBlur;                                      // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GameBackgroundBlurStrength;                              // 0x0278(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GameBackgroundBlurTime;                                  // 0x027C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTooltipWidget*                                      HoveredItemTooltip;                                      // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             TransferItemTooltip;                                     // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1FKV[0x8];                                   // 0x0290(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDragAndDropItemWidget*                              DragAndDropItem;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        MainCanvas;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UnblurBackground();
		void StopDragAndDropOperation(bool WasCanceled);
		void StartDragAndDropOperation(class ASIGISInventoryItem* Item);
		void ShowTooltipAtLocation(const struct FVector2D& ScreenLocation, class ASIGISInventoryItem* Item, bool IsSplitMenu, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, const class FString& ToCon, ESlotType MovetypeFrom);
		void ShowInventoryMenu(ELootWindowState LootWinState);
		void OnDropItemScreenButtonUnhovered();
		void OnDropItemScreenButtonPressed();
		void OnDropItemScreenButtonHovered();
		void HideTooltip();
		void HideInventoryMenu();
		class UInventoryMenuWidget* GetInventoryMenu();
		void DragItemStopped();
		void DragItemStarted(ESlotType DraggedFrom);
		void CheckForItemDrop();
		void BlurBackground();
		bool AreMenusOpen();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.InventoryContainerWidget
	 * Size -> 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
	 */
	class UInventoryContainerWidget : public UUserWidget
	{
	public:
		struct FInventoryGridPair                                  InventoryGridSize;                                       // 0x0260(0x0002) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y4IM[0x6];                                   // 0x0262(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGridPanel*                                          InventoryGrid;                                           // 0x0268(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScrollBox*                                          StashScroll;                                             // 0x0270(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DraggableItemsCanvas;                                    // 0x0278(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              SlotWidgetClass;                                         // 0x0280(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UInventoryGridSlotWidget*>                    InventorySlots;                                          // 0x0288(0x0010) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LM8Y[0x50];                                  // 0x0298(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDraggableItemWidget*>                        PredictDraggableItemWidgets;                             // 0x02E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           BeginDragSound;                                          // 0x02F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5E0S[0x10];                                  // 0x0300(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FrigateConID;                                            // 0x0310(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInventoryGridPair                                  FrigateConSize;                                          // 0x0320(0x0002) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K8IZ[0x6];                                   // 0x0322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContainerID;                                             // 0x0328(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlotType                                                  SlotMasterType;                                          // 0x0338(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bARigCon;                                                // 0x0339(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8WB7[0x2];                                   // 0x033A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RigArraySlot;                                            // 0x033C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISInventoryItem*                                 RigMother;                                               // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CtrlPressed;                                             // 0x0348(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HW2E[0x7];                                   // 0x0349(0x0007) MISSED OFFSET (PADDING)

	public:
		void RemoveItem(class ASIGISInventoryItem* Item, const struct FInventoryGridPair& OriginGridSlot);
		void InitializeGrid();
		void AddItem(class ASIGISInventoryItem* Item, const struct FInventoryGridPair& OriginGridSlot);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.InventoryGridSlotWidget
	 * Size -> 0x0050 (FullSize[0x02B0] - InheritedSize[0x0260])
	 */
	class UInventoryGridSlotWidget : public UUserWidget
	{
	public:
		class UImage*                                              SlotBackground;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotHighlight;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x0270(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidOverlapHighlightColor;                              // 0x0280(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidOverlapHighlightColor;                            // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASIGISInventoryItem*                                 Item;                                                    // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              WasRotatedOnPlace;                                       // 0x02A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H61Q[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetItem(class ASIGISInventoryItem* NewItem);
		class ASIGISInventoryItem* GetItem();
		void EndItemOverlap();
		void BeginItemOverlap(bool IsOverlapValid);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.InventoryMenuWidget
	 * Size -> 0x0580 (FullSize[0x07E0] - InheritedSize[0x0260])
	 */
	class UInventoryMenuWidget : public UUserWidget
	{
	public:
		class UEquipmentSlotWidget*                                EquipmentSlotHead;                                       // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotChest;                                      // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotLegs;                                       // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotRig;                                        // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotPrim;                                       // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotSec;                                        // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotPistol;                                     // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotMelee;                                      // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentBagSlot;                                        // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentFrigateSlot;                                    // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEquipmentSlotWidget*                                EquipmentSlotKeycard;                                    // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class UEquipmentSlotWidget*>           EquipmentSlots;                                          // 0x02B8(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UEquipmentSlotWidget*>           LootEquipmentSlots;                                      // 0x0308(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UDragWindowWidget*>              WindowConSlots;                                          // 0x0358(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UWeaponWindowWidget*>            WeaponOpenSlots;                                         // 0x03A8(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class UCraftingSlotWidget*>            CraftingSlots;                                           // 0x03F8(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TMap<class FString, class URigWidget*>                     RigOpenSlots;                                            // 0x0448(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		class UInventoryContainerWidget*                           ScrapContainer;                                          // 0x0498(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           PocketRight;                                             // 0x04A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           PocketLeft;                                              // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           LootPocketRight;                                         // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           LootPocketLeft;                                          // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInMatch;                                              // 0x04C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TL0S[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UOverlay*                                            TrouserOverlay;                                          // 0x04C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            RigOverlay;                                              // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            BagOverlay;                                              // 0x04D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          BagName;                                                 // 0x04E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             EQUIPBTN;                                                // 0x04E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             SHOPBTN;                                                 // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             CRAFTBTN;                                                // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             HANGERBTN;                                               // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             SKILLTREEBTN;                                            // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             WeaponWorkbenchBTN;                                      // 0x0510(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             BACKBTN;                                                 // 0x0518(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        EQUIP;                                                   // 0x0520(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        STASH;                                                   // 0x0528(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        SHOP;                                                    // 0x0530(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        CRAFTING;                                                // 0x0538(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        HANGER;                                                  // 0x0540(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        SKILLTREE;                                               // 0x0548(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           SHOPMainCon;                                             // 0x0550(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           SHOPBuy;                                                 // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           SHOPSell;                                                // 0x0560(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        gifts;                                                   // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           GiftContainer;                                           // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingSlot1;                                           // 0x0578(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingSlot2;                                           // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingSlot3;                                           // 0x0588(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingSlot4;                                           // 0x0590(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingSlot5;                                           // 0x0598(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingSlot6;                                           // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingSlotWidget*                                 CraftingOutItem;                                         // 0x05A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScrollBox*                                          ScrollBox_RecipeResults;                                 // 0x05B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWrapBox*                                            WrapBox_RecipeResults;                                   // 0x05B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          RecipeTextName;                                          // 0x05C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          RecipeTextDescription;                                   // 0x05C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             CreateRecipe;                                            // 0x05D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5D5Z[0x10];                                  // 0x05D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UQuickSlotWidget*                                    QuickSlot1;                                              // 0x05E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuickSlotWidget*                                    QuickSlot2;                                              // 0x05F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuickSlotWidget*                                    QuickSlot3;                                              // 0x05F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuickSlotWidget*                                    QuickSlot4;                                              // 0x0600(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuickSlotWidget*                                    QuickSlot5;                                              // 0x0608(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuickSlotWidget*                                    QuickSlot6;                                              // 0x0610(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        PAPERDOLL;                                               // 0x0618(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class URenderTargetUMG*                                    CharacterRender;                                         // 0x0620(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        CONLOBBY;                                                // 0x0628(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           LobbyContainer;                                          // 0x0630(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        CONSHIPINVENTORY;                                        // 0x0638(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           FrigContainer01;                                         // 0x0640(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           FrigContainer02;                                         // 0x0648(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           FrigContainer03;                                         // 0x0650(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           FrigContainer04;                                         // 0x0658(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           FrigContainer05;                                         // 0x0660(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        CONLOOT;                                                 // 0x0668(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           LootContainer;                                           // 0x0670(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotHead;                                   // 0x0678(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotChest;                                  // 0x0680(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotLegs;                                   // 0x0688(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotRig;                                    // 0x0690(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotPrim;                                   // 0x0698(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotSec;                                    // 0x06A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotPistol;                                 // 0x06A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotMelee;                                  // 0x06B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentBagSlot;                                    // 0x06B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentFrigateSlot;                                // 0x06C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                LootEquipmentSlotKeycard;                                // 0x06C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            LootTrouserOverlay;                                      // 0x06D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            LootRigOverlay;                                          // 0x06D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UOverlay*                                            LootBagOverlay;                                          // 0x06E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCanvasPanel*                                        BODYLOOT;                                                // 0x06E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          CraftCollectTxt;                                         // 0x06F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBorder*                                             ReadyToCollectBorder;                                    // 0x06F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              OutPutItemImage;                                         // 0x0700(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          OutputName;                                              // 0x0708(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          OutputItemDescription;                                   // 0x0710(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          CraftingTimeLeft;                                        // 0x0718(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LII8[0x8];                                   // 0x0720(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextBlock*                                          SHOPBuyTotal;                                            // 0x0728(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          SHOPSellTotal;                                           // 0x0730(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          SHOPTotal;                                               // 0x0738(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             DealBtn;                                                 // 0x0740(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          MyGoldAmount;                                            // 0x0748(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          TraderGoldAmount;                                        // 0x0750(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OC7D[0x50];                                  // 0x0758(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EInventoryState                                            CurrentMenuState;                                        // 0x07A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERecipeFiltering                                           CurrentFilter;                                           // 0x07A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2XT[0x6];                                   // 0x07AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryContainerWidget*                           InventoryStashGrid;                                      // 0x07B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ContainerforShipMade;                                    // 0x07B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNV5[0x7];                                   // 0x07B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASIGISInventoryItem*                                 ActiveWeapon;                                            // 0x07C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISWorkbenchRenderActor*                          WorkbenchActor;                                          // 0x07C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISInventoryItem*                                 ActiveFrigate;                                           // 0x07D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISFrigateRenderActor*                            FrigateMenuActor;                                        // 0x07D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void WeaponWorkBenchRightClickPressed(const class FString& ItemUUID);
		void UpDatePaperDoll();
		void UpDateFactionsAndContracts();
		void UpdateChapterAndContracts();
		void UnlockCosmetic(const class FName& CosmeticToCheck);
		void UnlockActiveRecipe();
		void SuccessfulBoughtItem();
		bool StringToAttachmentArray(const class FString& inString, TArray<class FString>* OutArray);
		void StartedAContract();
		void StartedAChapterContract();
		void SoldItem();
		void SetRustbucketActive();
		void SetActiveWeapon(class ASIGISInventoryItem* NewActiveWeapon);
		void SetActiveFrigate(class ASIGISInventoryItem* NewActiveFrigate);
		void SelectShip(const class FString& UFrigID);
		void ReturnModToInventory(EAttachmentSlot ModSlotOnWepaon);
		void ReturnFrigateModToInventory(EShipAttachmentSlot ModSlotOnWepaon);
		void RemoveShip(const class FString& UFrigID);
		void RefreshWeaponModuleActor(EAttachmentSlot SlotIn);
		void RefreshWeaponActor();
		void RefreshMenuPlayerActor();
		void RefreshFrigateModuleActor(EShipAttachmentSlot SlotIn);
		void RefreshFrigateActor();
		void RecipeChagedEvent(const struct FCraftingRecipeList& RecipeDetails);
		void PrePrefreshMenuPlayerActor();
		void PlayerHealBodyHover(bool HoveredOver);
		void OverFrigateCapacity();
		void OnWorkBenchBTNPressed();
		void OnSKILLTREEBTNPressed();
		void OnSHOPBTNPressed();
		void OnItemBPLoaded(class AActor* ActorLoaded);
		void OnHANGERBTNPressed();
		void OnGIFTBTNPressed();
		void OnEQUIPBTNPressed();
		void OnDealBtnPressed();
		void OnCreateRecipePressed();
		void OnCRAFTBTNPressed();
		void OnBACKBTNPressed();
		void NotEnoughMoney();
		void MenuOpenStateChange(ELootWindowState NewState);
		void LeftCrewShowShipStash();
		void JoinedCrewHideShipStash();
		void ItemBPLoaded();
		bool IsCurrentlyCrafting();
		void InventoryStateChange(EInventoryState NewState);
		bool HasPendingGifts();
		void GiveTestStat(TArray<struct FPlayerStat> ToGive);
		void GiveDebugGift(TArray<class FString> ItemRowNames);
		void GiftsMenuClosed();
		struct FWeaponStats GetWeaponStats();
		TArray<class FString> GetUnlockedCosmetics();
		int32_t GetTraderMoney();
		int32_t GetTimeInSecondsTillCrafted();
		TArray<struct FHangerShipInfo> GetShips();
		int32_t GetSecondsTillShopRefresh();
		TArray<struct FPlayerStat> GetPlayersStats();
		struct FWeaponStats GetModuleModifiers();
		void GetMenuPlayerEquippedItems(struct FMenuPlayerLook* PlayerInfo);
		void GetItemBPForItem(const class FName& ItemRow);
		struct FFrigateStats GetFrigateStats();
		struct FFrigateStats GetFrigateModifiers();
		class FString GetCurrentRecipeCrafting();
		struct FCraftingQueInfo GetCraftingQueInfo(int32_t SlotFrom);
		TArray<class ASIGISInventoryItem*> GetAviableModsForSlot(EAttachmentSlot SlotIn);
		TArray<class ASIGISInventoryItem*> GetAviableFrigateModsForSlot(EShipAttachmentSlot SlotIn);
		TArray<EAttachmentSlot> GetAttachmentsSlotsAvialbleforCurrentWeapon();
		TArray<EShipAttachmentSlot> GetAttachmentsSlotsAvialbleforCurrentFrigate();
		TArray<struct FAttachmentItemData> GetAttachmentItemDataForWeapon(class ASIGISInventoryItem* WeaponIn);
		TArray<struct FFrigModItemData> GetAttachmentItemDataForShip(class ASIGISInventoryItem* FrigIn);
		TArray<struct FAttachmentItemData> GetAttachmentItemDataForCurrentWeapon();
		TArray<struct FFrigModItemData> GetAttachmentItemDataForCurrentFrigate();
		TArray<class ASIGISInventoryItem*> GetAllWeaponsInInventory();
		TArray<class ASIGISInventoryItem*> GetAllFrigateInInventory();
		class ASIGISWorkbenchRenderActor* GetActiveWorkbenchRenderActor();
		class ASIGISInventoryItem* GetActiveWeaponItem();
		class FString GetActiveShipID();
		class FName GetActiveShip();
		class ASIGISFrigateRenderActor* GetActiveFrigateRenderActor();
		class ASIGISInventoryItem* GetActiveFrigateItem();
		void FilterByRecipeType(const class FString& Craftingtype, bool AllRecipes);
		void EquipCosmetic(const class FName& CosmeticToEquip, ECosmeticSlot ToSlot);
		bool DoesShipHaveItemsinCargo(const class FString& UFrigID);
		void CraftingWidgetpressed(class UCraftingWidget* ActiveWid);
		void CollectedChapterContract();
		void CollectedAContract();
		void CollectCraftedItem(int32_t SlotFrom);
		void CloseInventory();
		void ChangeMenuState(EInventoryState StateTo);
		bool CanUnLockCosmetic(const class FName& CosmeticToCheck, bool* WasAStatFail);
		void CantCraftEvent(ERecipeFail Reason);
		bool CanCraftMore();
		void BP_UpDateCraftingInfo();
		void AssignWeaponModToSlot(class ASIGISInventoryItem* NewMod, EAttachmentSlot SlotIn);
		void AssignFrigateModToSlot(class ASIGISInventoryItem* NewMod, EShipAttachmentSlot SlotIn);
		void ApplyTransformToWeaponSocket(const struct FTransform& NewTransform, EAttachmentSlot SlotIn);
		void ApplyTransformToWeaponMesh(const struct FTransform& NewTransform);
		void ApplyTransformToFrigateMod(const struct FTransform& NewTransform, EShipAttachmentSlot SlotIn);
		void ApplyTransformToFrigate(const struct FTransform& NewTransform);
		void AddShip(const class FName& ShipTableRow);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.LoginSave
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class ULoginSave : public USaveGame
	{
	public:
		class FString                                              PlayerLogin;                                             // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerPassword;                                          // 0x0038(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SaveSlotName;                                            // 0x0048(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   UserIndex;                                               // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGIX[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.LoginWidget
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class ULoginWidget : public UUserWidget
	{
	public:
		class UEditableTextBox*                                    UserNameField;                                           // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditableTextBox*                                    PasswordField;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SQTA[0x18];                                  // 0x0270(0x0018) MISSED OFFSET (PADDING)

	public:
		void WaitingForLogIn();
		void ReturnedFromMatch();
		void OnSubmitBTNPressed();
		void OnRegisterBTNPressed();
		void LogInValid();
		void LoginSucces(bool failed);
		void LoginReturned(bool SuccessLogin);
		void LoginDiscordNotValid();
		void LoadAndTransitionToMainMenu();
		bool IsXBoxAppRunning();
		bool IsSteamRunning();
		bool IsGameAlreadyRunning();
		bool HasAuthToken();
		bool CheckVoidVersion();
		bool CheckOutDatedVersion();
		bool CheckDataConnection();
		void BackEndConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.MasterMenuWidget
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class UMasterMenuWidget : public UUserWidget
	{
	public:
		class UBackgroundBlur*                                     GameBackgroundBlur;                                      // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GameBackgroundBlurStrength;                              // 0x0268(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GameBackgroundBlurTime;                                  // 0x026C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HIZG[0x8];                                   // 0x0270(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULoginWidget*                                        LoginWidget;                                             // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMenuOptions*                                        MainMenuOptions;                                         // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMatchMakingMenu*                                    MatchMake;                                               // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UnblurBackground();
		void StartUpIssue();
		void ShowMatchMake();
		void ShowMainMenuOptions();
		void ShowLogInMenu();
		void HideAllMenus();
		void BlurBackground();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.MatchMakingMenu
	 * Size -> 0x0110 (FullSize[0x0370] - InheritedSize[0x0260])
	 */
	class UMatchMakingMenu : public UUserWidget
	{
	public:
		class UButton*                                             BACKBTN;                                                 // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCrewLobbyInfo>                              CrewHere;                                                // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCrewLobbyInfo                                      Captain;                                                 // 0x0278(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCrewLobbyInfo                                      CrewSlotOne;                                             // 0x02B0(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCrewLobbyInfo                                      CrewSlotTwo;                                             // 0x02E8(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCrewLobbyInfo                                      CrewSlotThree;                                           // 0x0320(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NP4C[0x18];                                  // 0x0358(0x0018) MISSED OFFSET (PADDING)

	public:
		void WaitingForMatch();
		void SetRegion(ERegionSig NewRegion);
		void SetCrewLobbyInformation(int32_t SlotNumber, const class FString& ZeuzIDIn, const class FString& DiscordIDIn, const class FString& CrewNameIn, class UTexture2DDynamic* ProfilePicIn);
		void RefreshCrew();
		void PurgeCrew();
		void PingPlayFabDataCenter(const class FString& Addrss);
		void OnBACKBTNPressed();
		void MatchMake();
		void MatchFound();
		void KickMemberfromCrew(int32_t numSlot);
		void KickCrewMember(const class FString& ToKickPlayerID, const class FString& MessageIn);
		void JoinCrew(const class FString& CrewName, const class FString& Password);
		bool ImIInACrew();
		bool ImIACaptian();
		struct FCrewLobbyInfo GetSlotCrewInfo(int32_t SlotNumber);
		class FString GetRegionAsString();
		class FString GetExtraOptions();
		class FName GetActiveShipRow();
		void FindServers();
		void CreateCrew(const class FString& CrewName, const class FString& PasswwordIn, int32_t CrewNumber);
		void CheckLobby();
		void ChangeCrewSettings(const class FString& PasswwordIn, int32_t CrewNumber, const class FString& CurrentCrewName);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.MenuOptions
	 * Size -> 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
	 */
	class UMenuOptions : public UUserWidget
	{
	public:
		class UButton*                                             CharacterBTN;                                            // 0x0260(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             OptionsBTN;                                              // 0x0268(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             MatchMakeBTN;                                            // 0x0270(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void TestStartMatchMake();
		void TestQueryTicket();
		void TestCancelTicket();
		void OnOptionsBTNPressed();
		void OnMatchMakeBTNPressed();
		void OnCharacterBTNPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.QuickSlotWidget
	 * Size -> 0x01C8 (FullSize[0x0428] - InheritedSize[0x0260])
	 */
	class UQuickSlotWidget : public UUserWidget
	{
	public:
		class UImage*                                              SlotBackground;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotHighlight;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotBorder;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultEquipmentImage;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DraggableEquipmentCanvas;                                // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsForWeaponDisplayOnly;                                  // 0x0288(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEquipmentSlot                                             SlotType;                                                // 0x0289(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TA99[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlotTypeID;                                              // 0x0290(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlotType                                                  SlotMasterType;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YSC1[0x3];                                   // 0x02A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SlotNumber;                                              // 0x02A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, class UTexture2D*>                    EquipmentSlotTextures;                                   // 0x02A8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentSlotSizes;                                      // 0x02F8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentTextureSizes;                                   // 0x0348(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           BeginDragSound;                                          // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BindingRetryTime;                                        // 0x03A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanFitDraggedItem;                                      // 0x03A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UW1V[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderSize;                                              // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBorderColor;                                      // 0x03AC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x03BC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        HighlightColor;                                          // 0x03CC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidOverlapHighlightColor;                              // 0x03DC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidOverlapHighlightColor;                            // 0x03EC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        LockedSlotItemColor;                                     // 0x03FC(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q7HH[0x14];                                  // 0x040C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDraggableItemWidget*                                EquippedItemWidget;                                      // 0x0420(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnEndItemDrag(class ASIGISInventoryItem* Item);
		void OnBeginItemDrag(class ASIGISInventoryItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.RenderTargetUMG
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class URenderTargetUMG : public UUserWidget
	{
	public:
		class ASIGISRenderActor*                                   TestActor;                                               // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              RenderActor;                                             // 0x0268(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpDateRenderActor();
		class UMaterialInstanceDynamic* GetRenderMat();
		class ASIGISRenderActor* GetRenderActor();
		void DestoryRenderActor();
		void CreateRenderActor();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.RigWidget
	 * Size -> 0x0080 (FullSize[0x02E0] - InheritedSize[0x0260])
	 */
	class URigWidget : public UUserWidget
	{
	public:
		class ASIGISInventoryItem*                                 MotherItem;                                              // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBorder*                                             DragBorder;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             CloseBtn;                                                // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          ContainerName;                                           // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot1;                                                // 0x0280(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot2;                                                // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot3;                                                // 0x0290(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot4;                                                // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot5;                                                // 0x02A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot6;                                                // 0x02A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot7;                                                // 0x02B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot8;                                                // 0x02B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot9;                                                // 0x02C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           RigSlot10;                                               // 0x02C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2TB[0x10];                                  // 0x02D0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetOverDragArea(bool OverArea);
		void SetClickStarted(const struct FVector2D& TouchedLoc, bool ClickStarted);
		void OnDragBorderMouseDown();
		void OnCloseButtonPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ShipConfigMenu
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class UShipConfigMenu : public UUserWidget
	{
	public:
		class URenderTargetUMG*                                    ShipRender;                                              // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ShipSlotWidget
	 * Size -> 0x01D0 (FullSize[0x0430] - InheritedSize[0x0260])
	 */
	class UShipSlotWidget : public UUserWidget
	{
	public:
		class UImage*                                              SlotBackground;                                          // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotHighlight;                                           // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              SlotBorder;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              DefaultEquipmentImage;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCanvasPanel*                                        DraggableEquipmentCanvas;                                // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDraggableItemWidget*                                EquippedItemWidget;                                      // 0x0288(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EEquipmentSlot                                             SlotType;                                                // 0x0290(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PSFY[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SlotTypeID;                                              // 0x0298(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESlotType                                                  SlotMasterType;                                          // 0x02A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q3CK[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EEquipmentSlot, class UTexture2D*>                    EquipmentSlotTextures;                                   // 0x02B0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentSlotSizes;                                      // 0x0300(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		TMap<EEquipmentSlot, struct FInventoryGridPair>            EquipmentTextureSizes;                                   // 0x0350(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		class USoundCue*                                           BeginDragSound;                                          // 0x03A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BindingRetryTime;                                        // 0x03A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCanFitDraggedItem;                                      // 0x03AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JNAZ[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderSize;                                              // 0x03B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBorderColor;                                      // 0x03B4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        DefaultBackgroundColor;                                  // 0x03C4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        HighlightColor;                                          // 0x03D4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        ValidOverlapHighlightColor;                              // 0x03E4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        InvalidOverlapHighlightColor;                            // 0x03F4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        LockedSlotItemColor;                                     // 0x0404(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5JL6[0x1C];                                  // 0x0414(0x001C) MISSED OFFSET (PADDING)

	public:
		void OnEndItemDrag(class ASIGISInventoryItem* Item);
		void OnBeginItemDrag(class ASIGISInventoryItem* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISBaseActor
	 * Size -> 0x0278 (FullSize[0x0498] - InheritedSize[0x0220])
	 */
	class ASIGISBaseActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_Z6SV[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInteractionInfo                                    ItemInfo;                                                // 0x0228(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLootItemStruct                                     PickupItemInfo;                                          // 0x0270(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                ItemId;                                                  // 0x0298(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Spawned;                                                 // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoesReplicatedActiveToggle;                              // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LEU7[0x2];                                   // 0x02A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SIGInteractDelyTime;                                     // 0x02A4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractionType                                           InteractionType;                                         // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInventoryGridPair                                  SizeOfContainer;                                         // 0x02A9(0x0002) Edit, BlueprintVisible, Net, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5CW[0x5];                                   // 0x02AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              debugAttachments;                                        // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemMoved;                                             // 0x02C0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAdded;                                             // 0x02D0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemRemove;                                            // 0x02E0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAmount;                                            // 0x02F0(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemPickedUp;                                          // 0x0300(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemBatchRemove;                                       // 0x0310(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAddStruct;                                         // 0x0320(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAddBatch;                                          // 0x0330(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		struct FDynamicShopInfo                                    CurrentShop;                                             // 0x0340(0x0018) NativeAccessSpecifierPublic
		bool                                                       HasBeenPlayerDropped;                                    // 0x0358(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsABagDrop;                                              // 0x0359(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPhysicsDisable;                                         // 0x035A(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsActive;                                               // 0x035B(0x0001) Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7LD[0x14];                                  // 0x035C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          LootTable;                                               // 0x0370(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q98Q[0xE8];                                  // 0x0378(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bVisiableToUse;                                          // 0x0460(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP0V[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                WorldMesh;                                               // 0x0468(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0X1W[0x10];                                  // 0x0470(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxItems;                                                // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1H0H[0x4];                                   // 0x0484(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASIGISInventoryItem*>                         ItemsInContainer;                                        // 0x0488(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic

	public:
		void OnRep_Mesh();
		void OnRep_IsActive();
		void Interact(class AActor* InteractingOwner);
		struct FInteractionInfo GetInteractionInfo();
		void FinishedInteract(class AActor* InteractingOwner);
		void DeActiveCalled();
		void ActiveCalled();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISBaseComponent
	 * Size -> 0x00F0 (FullSize[0x05C0] - InheritedSize[0x04D0])
	 */
	class USIGISBaseComponent : public UStaticMeshComponent
	{
	public:
		unsigned char                                              UnknownData_O4F9[0x8];                                   // 0x04D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EInteractionType                                           InteractionType;                                         // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VOR[0x7];                                   // 0x04D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInteractionInfo                                    ItemInfo;                                                // 0x04E0(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInventoryGridPair                                  SizeOfContainer;                                         // 0x0528(0x0002) Net, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5ZY[0x6];                                   // 0x052A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemMoved;                                             // 0x0530(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAdded;                                             // 0x0540(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAddedStruc;                                        // 0x0550(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemRemove;                                            // 0x0560(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemAmount;                                            // 0x0570(0x0010) ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic
		float                                                      SIGInteractDelyTime;                                     // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JHE8[0xC];                                   // 0x0584(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bVisiableToUse;                                          // 0x0590(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJ24[0x17];                                  // 0x0591(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    maxItems;                                                // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6DN[0x4];                                   // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASIGISInventoryItem*>                         ItemsInContainer;                                        // 0x05B0(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic

	public:
		void Interact(class AActor* InteractingOwner);
		struct FInteractionInfo GetInteractionInfo();
		void FinishedInteract(class AActor* InteractingOwner);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISCharacter
	 * Size -> 0x0068 (FullSize[0x0520] - InheritedSize[0x04B8])
	 */
	class ASIGISCharacter : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_5EXS[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_SVSE[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        InteractionDetectionTimer;                               // 0x04C8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        InteractionTimer;                                        // 0x04D0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        bagUseTimer;                                             // 0x04D8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4TXW[0x9];                                   // 0x04E0(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsCameraInputEnabled;                                   // 0x04E9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WSPY[0x2];                                   // 0x04EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BagHoldTimerAmount;                                      // 0x04EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USIGISEquipmentComponent*                            EquipmentComp;                                           // 0x04F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionProgress;                                     // 0x04F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionTime;                                         // 0x04FC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetInteractionTime;                                   // 0x0500(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFirstEquip;                                             // 0x0504(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NIQ[0x3];                                   // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LastInteractionActor;                                    // 0x0508(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 LastInteractionComp;                                     // 0x0510(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInteracting;                                           // 0x0518(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OQU[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (PADDING)

	public:
		void UseItem(class ASIGISInventoryItem* ItemToEquip, bool FromLoot);
		void UnEquipAttachmentItem(const class FString& ItemToEquip, class ASIGISInventoryItem* ItemToEquipFrom);
		void UnEquipActorItem(class ASIGISInventoryItem* ItemToEquip, EEquipmentSlot EqualSlot);
		void StopInteraction();
		void StartInteraction();
		void StartAbilityInteraction(EInteractionAbilityTypes AblityToUse);
		void SIGIS_InteractionResultComp(class UPrimitiveComponent* ActorToInteractWith);
		void SIGIS_InteractionResult(class AActor* ActorToInteractWith);
		void SetIsMovementInputEnabled(bool IsMovementInputEnabled);
		void ServerInteractComp(class UPrimitiveComponent* CompToInteractWith);
		void ServerInteract(class AActor* ActorToInteractWith);
		void ProcessInteraction();
		void PlaySoundOnAllClients(class USoundCue* Sound, const struct FVector& Location);
		void PlayReachOutAnim(const class FName& AnimToUse);
		void OnPlayReachOutAnim(const class FName& AnimToUse);
		void InteractionDetection();
		class UPrimitiveComponent* GetUsedLastInteractionCompInRange(class UClass* CompClass);
		class UPrimitiveComponent* GetUsedLastInteractionComp();
		class AActor* GetUsedLastInteractionActor();
		class UPrimitiveComponent* GetLastInteractionComp();
		class AActor* GetLastInteractionActor();
		bool GetIsMovementInputEnabled();
		class ASIGISHUD* GetHUD();
		void EquipAttachmentItem(const class FString& ItemToEquip, class ASIGISInventoryItem* ItemToEquipTo);
		void EquipActorItem(class ASIGISInventoryItem* ItemToEquip, EEquipmentSlot EqualSlot);
		void CheckLoadInventory();
		void BagUsed();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISContractActor
	 * Size -> 0x0008 (FullSize[0x04A0] - InheritedSize[0x0498])
	 */
	class ASIGISContractActor : public ASIGISBaseActor
	{
	public:
		bool                                                       bInteractionMission;                                     // 0x0498(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContractType                                              ContractType;                                            // 0x0499(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2RC[0x6];                                   // 0x049A(0x0006) MISSED OFFSET (PADDING)

	public:
		void CharacterOverlapped(class ASIGISCharacter* InteractingActor);
		void CharacterEndOverlapped(class ASIGISCharacter* InteractingActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISDeathActor
	 * Size -> 0x0198 (FullSize[0x0630] - InheritedSize[0x0498])
	 */
	class ASIGISDeathActor : public ASIGISBaseActor
	{
	public:
		unsigned char                                              UnknownData_NCY8[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_BodyMesh;                                              // 0x04A0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              R_BodPose;                                               // 0x04A8(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POC1[0x8];                                   // 0x04B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       R_HeadMesh;                                              // 0x04B8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBS5[0x8];                                   // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MainLoc;                                                 // 0x04C8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MeshLoc;                                                 // 0x04D4(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            MeshRot;                                                 // 0x04E0(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_497Y[0x4];                                   // 0x04EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            HiddenBones;                                             // 0x04F0(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  BoneTransforms;                                          // 0x0500(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              BackPack;                                                // 0x0510(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              Helmet;                                                  // 0x0518(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              ChestSlot;                                               // 0x0520(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              BasePoseMesh;                                            // 0x0528(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       R_BackPack;                                              // 0x0530(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       R_Helmet;                                                // 0x0538(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       R_ChestSlot;                                             // 0x0540(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DoRep_Equip;                                             // 0x0548(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DoRep_BothMesh;                                          // 0x0549(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1G59[0x6];                                   // 0x054A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USIGISPoseMesh*                                      MeshPose;                                                // 0x0550(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USIGISPoseMesh*                                      HeadPose;                                                // 0x0558(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBoxComponent*                                       MeshBounds;                                              // 0x0560(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ISaShip;                                                 // 0x0568(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3SAG[0x7];                                   // 0x0569(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCapsuleComponent*                                   PelvisCollision;                                         // 0x0570(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PelvisBoneName;                                          // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   Spine01Collision;                                        // 0x0580(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Spine01BoneName;                                         // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   Spine02Collision;                                        // 0x0590(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Spine02BoneName;                                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   upperarm_LCollision;                                     // 0x05A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                upperarm_LBoneName;                                      // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   lowerarm_LCollision;                                     // 0x05B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                lowerarm_LBoneName;                                      // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   upperarm_RCollision;                                     // 0x05C0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                upperarm_RBoneName;                                      // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   lowerarm_RCollision;                                     // 0x05D0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                lowerarm_RBoneName;                                      // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   HeadCollision;                                           // 0x05E0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HeadBoneName;                                            // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   thigh_LCollision;                                        // 0x05F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                thigh_LBoneName;                                         // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   calf_LCollision;                                         // 0x0600(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                calf_LBoneName;                                          // 0x0608(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   thigh_RCollision;                                        // 0x0610(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                thigh_RBoneName;                                         // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCapsuleComponent*                                   calf_RCollision;                                         // 0x0620(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                calf_RBoneName;                                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnRep_SetEquipment();
		void OnRep_SetBoth();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISEquipmentComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class USIGISEquipmentComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_FCCL[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EEquipmentSlot, class FString>                        EquipmentIDs;                                            // 0x00B8(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUnequipItem(const class FString& ItemId, EEquipmentSlot SlotChecked);
		void ServerUnequipAttachment(const class FString& ItemId, const class FString& ItemIDTo);
		void ServerEquipItemToSlot(const class FString& ItemId, EEquipmentSlot EquipmentSlote);
		void ServerEquipAttachment(const class FString& ItemId, const class FString& ItemIDTo);
		void Server_UsedDuribility(const class FString& ItemId);
		void Client_UsedDuribility(const class FString& ItemId);
		void Client_UnequipItem(const class FString& ItemId, EEquipmentSlot EquipmentSlote);
		void Client_UnequipAttachment(const class FString& ItemId, const class FString& ItemIDTo);
		void Client_EquipItemToSlot(const class FString& ItemId, EEquipmentSlot EquipmentSlote);
		void Client_EquipAttachment(const class FString& ItemId, const class FString& ItemIDTo);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISFrigateRenderActor
	 * Size -> 0x0040 (FullSize[0x0260] - InheritedSize[0x0220])
	 */
	class ASIGISFrigateRenderActor : public AActor
	{
	public:
		class USceneComponent*                                     RootScenceComp;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     MeshRoot;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              MainMesh;                                                // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                Gun_BowMesh;                                             // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                GunDeck01Mesh;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                GunDeck02Mesh;                                           // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                EngineMain_SternMesh;                                    // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                PlatingMesh;                                             // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameInstanceNakama
	 * Size -> 0x0A38 (FullSize[0x0CA0] - InheritedSize[0x0268])
	 */
	class USIGISGameInstanceNakama : public UGameLiftGameInstance
	{
	public:
		unsigned char                                              UnknownData_75NI[0x4F8];                                 // 0x0268(0x04F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NakamaPlayerID;                                          // 0x0760(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerLocation;                                          // 0x0770(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyCreate;                                           // 0x0780(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadedAccount;                                         // 0x0790(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bAuthTicketReady;                                        // 0x07A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VG5V[0x7];                                   // 0x07A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPermMessageRecv;                                       // 0x07A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FNakamaGift>                                 PendingGifts;                                            // 0x07B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInventoryItemStruct>                        DisconecttedLoot;                                        // 0x07C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInventoryItemStruct>                        ExtractedLoot;                                           // 0x07D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FChapterProgress>                            Chapaters;                                               // 0x07E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FChapterProgress                                    PrologueChapter;                                         // 0x07F8(0x0020) NativeAccessSpecifierPublic
		TArray<class FName>                                        TotalMissions;                                           // 0x0818(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionProgress>                            ActiveMissions;                                          // 0x0828(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CollectedMissions;                                       // 0x0838(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PendingFactionLevels;                                    // 0x0848(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CurrenSteamNakAuthTicket;                                // 0x0858(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamAuthString;                                         // 0x0868(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCaptain;                                                // 0x0878(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMA0[0x7];                                   // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TitleNews;                                               // 0x0880(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              titleType;                                               // 0x0890(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              titleVersion;                                            // 0x08A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              titleNewsImage;                                          // 0x08B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RegionArray;                                             // 0x08C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bTicketInProcess;                                        // 0x08D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWB9[0x7];                                   // 0x08D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNKErrorReturn;                                         // 0x08D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKConnected;                                           // 0x08E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKDisconnected;                                        // 0x08F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKGetAccount;                                          // 0x0908(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdatedPlayer;                                         // 0x0918(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKCrewSearchforFriendCrews;                            // 0x0928(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FNakamaNGroup>                               FriendGroups;                                            // 0x0938(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      FriendsIDsToCheck;                                       // 0x0948(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       CurrentlySearchingForFreindCrews;                        // 0x0958(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3P7[0x17];                                  // 0x0959(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNKCrewCreate;                                          // 0x0970(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKCrewSearch;                                          // 0x0980(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKCrewSearchforID;                                     // 0x0990(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKCrewSearchForMyCrews;                                // 0x09A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKCrewSearchfailForMyCrews;                            // 0x09B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKCrewSearchForMyfriendCrews;                          // 0x09C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNkMemeberReturn;                                       // 0x09D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetCrewMetaReturn;                                     // 0x09E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNkCrewDestroyed;                                       // 0x09F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNkUpdateCrew;                                          // 0x0A00(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNkJoinCrewChat;                                        // 0x0A10(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNkLeaveChat;                                           // 0x0A20(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKReceavedChatMsg;                                     // 0x0A30(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKJoinedCrew;                                          // 0x0A40(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKLeaveCrew;                                           // 0x0A50(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKKickedCrewMemeber;                                   // 0x0A60(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNKInvitedFriend;                                       // 0x0A70(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaderBoardReturn;                                     // 0x0A80(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLeaderBoardAroundMeReturn;                             // 0x0A90(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRecordedLeaderBoardScore;                              // 0x0AA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotification;                                          // 0x0AB0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNotificationdeleted;                                   // 0x0AC0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBackEndHealthy;                                        // 0x0AD0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStatusPresence;                                        // 0x0AE0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNewPresence;                                           // 0x0AF0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFriendsReturn;                                         // 0x0B00(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              CurrentNKCrewID;                                         // 0x0B10(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentCrewChatCannel;                                   // 0x0B20(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchMakeStart;                                        // 0x0B30(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchMakeQuery;                                        // 0x0B40(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStopMMResult;                                          // 0x0B50(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchMakeResult;                                       // 0x0B60(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStartNakMM;                                            // 0x0B70(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStopNakMM;                                             // 0x0B80(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              NakTicketID;                                             // 0x0B90(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLoadedStats;                                           // 0x0BA0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FPlayerStat>                                 LocalStats;                                              // 0x0BB0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPlayerStatString>                           LocalStringStats;                                        // 0x0BC0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJJL[0xD0];                                  // 0x0BD0(0x00D0) MISSED OFFSET (PADDING)

	public:
		bool Twitch_HasAppLink();
		void IsBackendHealthy();
		bool IsADevBuild();
		class FString GetMyNakamaID();
		class FString GetCrrentNakMatchmakingTicket();
		class UTexture2D* GenerateQrCode(class UObject* Parent, const class FString& String);
		void ClearNakMatchmakingTicket();
		void AwsN_WriteLeaderBoard(const class FString& LeaderboardId, int32_t numScore);
		void AwsN_UpdateCrewMetaArrayTravelToMatch(const class FString& CrewIDKey, TArray<struct FPlayerStatString> StatArray, const class FString& ServeripToJoin);
		void AwsN_UpdateCrewMetaArray(const class FString& CrewIDKey, TArray<struct FPlayerStatString> StatArray);
		void AwsN_UpdateCrewMeta(const class FString& CrewIDKey, const class FString& MetaKey, const class FString& MetaValue);
		void AwsN_UpdateCrew(const class FString& CrewName, bool PrivateCrew, const class FString& Description, const class FString& avatarUrl, const class FString& langTag);
		void AwsN_SetStatus(const class FString& myStatus);
		void AwsN_SetMetaStatString(const class FString& StatName, const class FString& StatAddion);
		void AwsN_SetMetaStat(const class FString& StatName, int32_t StatAddion);
		class FString AwsN_SetJsonPropMakeString(const class FString& KeyIn, const class FString& ValueIn);
		class FString AwsN_SetJsonPropArrayMakeString(TArray<struct FLobbyInfo> ArrayIn);
		void AwsN_SetCrewMyLook(const class FString& StatName, const class FString& StatAddion);
		void AwsN_SendCrewChat(const class FString& CrewChatMessage);
		void AwsN_NakStartSoloMM(const class FString& RegionCode, const class FString& FleetAlias);
		void AwsN_NakStartMM(const class FString& RegionCode, const class FString& FleetAlias, int32_t Minplayers, int32_t MaxPlayers);
		void AwsN_ListLeaderBoardAroundUser(const class FString& LeaderboardId, int32_t numAround);
		void AwsN_ListLeaderBoard(const class FString& LeaderboardId, const class FString& pageNum, int32_t AmountReturn, TArray<class FString> SpecificUserInAddition);
		void AwsN_ListFriends(const class FString& PageIn);
		void AwsN_LeaveParty(const class FString& PartyIDIn);
		void AwsN_LeaveCrewChat(const class FString& CrewID);
		void AwsN_LeaveCrew(const class FString& NCrewID);
		void AwsN_KickCrewMember(const class FString& NCrewID);
		void AwsN_JoingCrewChat(const class FString& CrewID);
		void AwsN_JoinCrew(const class FString& NCrewID);
		void AwsN_IncrementMetaStatArray(TArray<struct FPlayerStat> StatArray);
		void AwsN_IncrementMetaStat(const class FString& StatName, int32_t StatAddion);
		void AwsN_GetVersion();
		void AwsN_GetplayerNotice();
		void AwsN_GetplayerGifts();
		void AwsN_GetplayerCampaign();
		void AwsN_GetNotifications();
		void AwsN_GetMetaStats();
		class FString AwsN_GetJsonPropFromString(const class FString& KeyIn, const class FString& JsonStringIn);
		void AwsN_GetGroupInfo(const class FString& GroupIdIn);
		void AwsN_GetCrewMetaReturn(const class FString& Msg);
		void AwsN_GetCrewMeta(const class FString& CrewIDKey);
		void AwsN_GetAllFriendsGroups();
		void AwsN_GetAccount();
		void AwsN_DestroyCrew(const class FString& NCrewID);
		void AwsN_DeleteNofifications(TArray<class FString> IDsToRemove);
		void AwsN_CrewSearchMyGroups(const class FString& pageNum);
		void AwsN_CrewSearchFriendHasCrew(const class FString& pageNum, const class FString& UserUUID);
		void AwsN_CrewSearchFriend(const class FString& pageNum, const class FString& UserUUID);
		void AwsN_CrewSearchbyUser(const class FString& pageNum, const class FString& UserUUID);
		void AwsN_CrewSearchbySteamID(const class FString& pageNum, const class FString& steamId);
		void AwsN_CrewSearchbyName(const class FString& pageNum, const class FString& CrewName);
		void AwsN_CreateParty();
		void AwsN_CreateCrewRpcReceaved(const class FString& Msg);
		void AwsN_CreateCrewRpc(const class FString& CrewName, bool PrivateCrew, const class FString& Description, const class FString& avatarUrl, const class FString& CptName, const class FString& steamId, bool locked, const class FString& ship);
		void AwsN_CreateCrew(const class FString& CrewName, bool PrivateCrew, const class FString& Description, const class FString& avatarUrl, const class FString& langTag);
		void AwsN_CancelMM();
		void AwsN_BeenKicked();
		void AwsN_AddFriendToGroup(const class FString& NCrewID, const class FString& FriendID);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameInstanceGraphQL
	 * Size -> 0x0590 (FullSize[0x1230] - InheritedSize[0x0CA0])
	 */
	class USIGISGameInstanceGraphQL : public USIGISGameInstanceNakama
	{
	public:
		class FString                                              PlayerUserName;                                          // 0x0CA0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AwsPlayerID;                                             // 0x0CB0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6CG[0x60];                                  // 0x0CC0(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       keepAlive;                                               // 0x0D20(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1O2O[0x27];                                  // 0x0D21(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MotherRegionCode;                                        // 0x0D48(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JS7P[0x8];                                   // 0x0D58(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SIGToken;                                                // 0x0D60(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         QueryTemplates;                                          // 0x0D70(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FString                                              Currentt17osToken;                                       // 0x0DC0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN3M[0x8];                                   // 0x0DD0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMatchMakeFailed;                                       // 0x0DD8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<struct FDynamicRegions>                             PlayableRegions;                                         // 0x0DE8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPingIP*>                                     PingedRegions;                                           // 0x0DF8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDynamicRegions>                             MotherRegions;                                           // 0x0E08(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S4S1[0x8];                                   // 0x0E18(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AveragePingRound;                                        // 0x0E20(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6O8D[0x24];                                  // 0x0E24(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerHasBeenBanned;                                   // 0x0E48(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_12LZ[0x8];                                   // 0x0E58(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyID_EOS;                                             // 0x0E60(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWQH[0x48];                                  // 0x0E70(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSteamLobbyInfo                                     Info;                                                    // 0x0EB8(0x0038) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUBW[0x180];                                 // 0x0EF0(0x0180) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlatformInviteReceaved;                                // 0x1070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         ItemToBackEndID;                                         // 0x1080(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         GetOutItemToBackEndID;                                   // 0x10D0(0x0050) NativeAccessSpecifierPublic
		TArray<class FString>                                      FriendsList;                                             // 0x1120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2H6B[0x10];                                  // 0x1130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamoDBClientObject*                               CurrentDBObject;                                         // 0x1140(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULambdaClientObject*                                 CurrentLambdaObject;                                     // 0x1148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NextUUID;                                                // 0x1150(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP8Z[0x4];                                   // 0x1154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResultToken;                                             // 0x1158(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDynoGetAllplayers;                                     // 0x1168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDynoHasCharacter;                                      // 0x1178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDynoSetScore;                                          // 0x1188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDynoGetScore;                                          // 0x1198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDynoCreateChar;                                        // 0x11A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNaughtyReturn;                                         // 0x11B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPingIssues;                                            // 0x11C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKillBoardBack;                                         // 0x11D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKillBoardMeBack;                                       // 0x11E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              CogAccessKeyId;                                          // 0x11F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CogSecretKey;                                            // 0x1208(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CogSessionToken;                                         // 0x1218(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AG63[0x8];                                   // 0x1228(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetPlatformLobbyData(const class FString& Key, const class FString& Value);
		void SendDynamoScoreRequest(const struct FUpdateItemRequest& RequstOut, EDynamoLeaderBoardEvent RequestType);
		void SendDynamoRequest(const struct FQueryRequest& RequstOut, EDynamoLeaderBoardEvent RequestType);
		void ReturnQuery(bool DynoFailed, TArray<class FString> QueryBack, EDynamoLeaderBoardEvent RequestType);
		void Ping_OnFail(class UPingIP* PingOperation, const class FString& Hostname);
		void Ping_OnComplete(class UPingIP* PingOperation, const class FString& Hostname, int32_t TimeMS);
		void IsOnNaughtyList();
		bool IsASIGBuild();
		bool IsAnAlphaBuild();
		bool ISAMarauderAPP(const class FString& AppIDIn);
		bool IsAEXPOBuild();
		bool InviteFriendToCrew(const class FString& FriendID);
		void InviteFriendbyCrew(const class FString& CrewUniqieUserID);
		void InviteFriend(const class FString& FriendCode);
		void GetTitleInfo(class FString* TitleTypeOut, class FString* TitleNewsOut, class FString* titleNewsImageURLOut);
		TArray<struct FPlatformFriendInformationSteam> GetSteamFriendsForLobbySearch();
		void GetSteamAvatarURLandNick();
		class FString GetPlayerRegionPingsToString(TArray<struct FDynamicRegions> ArrayIn);
		TArray<struct FDynamicRegions> GetPlayerRegionPingsFromString(const class FString& ArrayIn);
		TArray<struct FDynamicRegions> GetPlayerRegionPings();
		class FString GetPlatformLobbyData(const class FString& Key);
		void GetMyLeaderBoardPos();
		class FString GetMyFriendCode();
		class ULambdaClientObject* GetLambdaObject();
		void GetKillsLeaderBoard();
		class UDynamoDBClientObject* GetDBObject();
		void GetAllFriendsInfo();
		void DynoLeaderBoardSetScore(int32_t ScoreIn, const class FString& PlayerName);
		void DynoHasUser(const class FString& PlayerName);
		void DynoGetMyScore(const class FString& PlayerName);
		void DynoGetAllLeaderBoard();
		void DynamoCreatePlayer(const class FString& PlayerName, const class FString& VersionString);
		void AwsWs_StartMatchMaking(TArray<struct FSIGGameLiftPlayer> players, const class FString& configurationName);
		void AwsWs_QueryMMTicket(const class FString& TicketID);
		void AwsWs_CancelMatchMaking(const class FString& TicketID);
		void AddKillToLeaderBoard(int32_t Kills);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameInstance
	 * Size -> 0x07E0 (FullSize[0x1A10] - InheritedSize[0x1230])
	 */
	class USIGISGameInstance : public USIGISGameInstanceGraphQL
	{
	public:
		unsigned char                                              UnknownData_W5ER[0xE0];                                  // 0x1230(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InventoryGridSlotSize;                                   // 0x1310(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InventoryGridSlotSizeX;                                  // 0x1314(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InventoryGridSlotSizeY;                                  // 0x1318(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7VI6[0x4];                                   // 0x131C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DragAndDropItemWidgetClass;                              // 0x1320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultContainerWidgetClass;                             // 0x1328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultWindowWidgetClass;                                // 0x1330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultWeaponWindowClass;                                // 0x1338(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              DefaultRecipeElement;                                    // 0x1340(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XI0N[0x10];                                  // 0x1348(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERegionSig                                                 CurrentRegion;                                           // 0x1358(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5GK[0x3];                                   // 0x1359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShopExtraPercentage;                                     // 0x135C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayerSellMinisPercentage;                               // 0x1360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQQX[0x4];                                   // 0x1364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DefaultRenderActor;                                      // 0x1368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultDropItem;                                         // 0x1370(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultWorkBenchGun;                                     // 0x1378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          WorkbenchGunSpawnLocation;                               // 0x1380(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      WeaponNames;                                             // 0x13B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              DefaultFrigateRenderActor;                               // 0x13C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0Z3[0x8];                                   // 0x13C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          FrigateRenderActorSpawnLocation;                         // 0x13D0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ApiUrl;                                                  // 0x1400(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FI3Z[0x18];                                  // 0x1410(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TestShopItems;                                           // 0x1428(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    TestShopCashAmount;                                      // 0x1438(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBGA[0x4];                                   // 0x143C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FShopArray>                                  ShopTables;                                              // 0x1440(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UDataTable*                                          NamesForShip;                                            // 0x1450(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          NamesForAI;                                              // 0x1458(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FProfanityWord>                              CachedWords;                                             // 0x1460(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UDataTable*                                          RudeboyWordList;                                         // 0x1470(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          WeaponStats;                                             // 0x1478(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          WeaponModuleStats;                                       // 0x1480(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ShipStats;                                               // 0x1488(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ShipModuleStats;                                         // 0x1490(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          CustomiseUnlocks;                                        // 0x1498(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ContractTable;                                           // 0x14A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          FactionsShopTable;                                       // 0x14A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          PrestigeUnlockTable;                                     // 0x14B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemColouringTable;                                      // 0x14B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ChapterMissionsTable;                                    // 0x14C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrentAuthToken;                                        // 0x14C8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlatformBuild                                             EditorDebugPlatform;                                     // 0x14D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9N5U[0x1];                                   // 0x14D9(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ERaidResult                                                LastMatchResult;                                         // 0x14DA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1JI5[0x1];                                   // 0x14DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    XPGainedInMatch;                                         // 0x14DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemDataTable;                                           // 0x14E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          RecepeDataTable;                                         // 0x14E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GameHasStarted;                                          // 0x14F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU8O[0x7];                                   // 0x14F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ConnectedPlayerPlayFabIDs;                               // 0x14F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOI9[0x20];                                  // 0x1508(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MyIp;                                                    // 0x1528(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJNP[0x48];                                  // 0x1538(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       PendingSavingRaidItems;                                  // 0x1580(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LWOW[0x17];                                  // 0x1581(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PendingUserName;                                         // 0x1598(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MasterPlayerName;                                        // 0x15A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MasterPlayerID;                                          // 0x15B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnShopChange;                                            // 0x15C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TArray<EFactionType>                                       ShopFactionInts;                                         // 0x15D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCraftingQueData>                            CurrentlyCraftingQue;                                    // 0x15E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              MyCrewID;                                                // 0x15F8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CrewNumberIn;                                            // 0x1608(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInMatch;                                               // 0x160C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9WC[0xB];                                   // 0x160D(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RegionNumber;                                            // 0x1618(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCBX[0x4];                                   // 0x161C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentPlayerEntityId;                                   // 0x1620(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6TI[0x30];                                  // 0x1630(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentTicket;                                           // 0x1660(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DroneCurrentTicket;                                      // 0x1670(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2RMQ[0x50];                                  // 0x1680(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ValidSearchReturn;                                       // 0x16D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             JoinedCrewReturn;                                        // 0x16E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ValidJoinReturn;                                         // 0x16F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyStateChange;                                      // 0x1700(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnLobbyRefreshed;                                        // 0x1710(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSanctionsReceaved;                                     // 0x1720(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKickedCrewMember;                                      // 0x1730(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S7Q6[0x8];                                   // 0x1740(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       UseDebugLogin;                                           // 0x1748(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5B6[0x7];                                   // 0x1749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DebugLogInId;                                            // 0x1750(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugZeuzSessionID;                                      // 0x1760(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugShipToUse;                                          // 0x1770(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugCrewNameToUse;                                      // 0x1780(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      StatNames;                                               // 0x1790(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        DebugMissionArray;                                       // 0x17A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       ShouldUseDebugMissions;                                  // 0x17B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4GLO[0x7];                                   // 0x17B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LobbyId;                                                 // 0x17B8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECrewState                                                 CurrentState;                                            // 0x17C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5BR[0x7];                                   // 0x17C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PendingPasswordForCreation;                              // 0x17D0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PendingCrewName;                                         // 0x17E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TeamLocked;                                              // 0x17F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReadyToGo;                                               // 0x17F1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OVP[0x1E];                                  // 0x17F2(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, int32_t>                               GetOutItemToBackEndVersion;                              // 0x1810(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OHR[0x28];                                  // 0x1860(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LastKilledEOS_ID;                                        // 0x1888(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastKilledbyPlatform_ID;                                 // 0x1898(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MyLastRoundTime;                                         // 0x18A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4N0[0x14];                                  // 0x18AC(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEOSStatsIngestData>                         PendingStats;                                            // 0x18C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZJF[0x18];                                  // 0x18D0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       isAFriendOnlyCrew;                                       // 0x18E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInventoryGridPair                                  StashSize;                                               // 0x18E9(0x0002) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JME[0x5];                                   // 0x18EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLobbySearchInfo>                            LobbySeachReturn;                                        // 0x18F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInventoryItemStruct>                        ItemsInCrew;                                             // 0x1900(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3UJE[0x20];                                  // 0x1910(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnEOSLobbySearchReturn;                                  // 0x1930(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMyLobbyInfoChange;                                     // 0x1940(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGDKInfoLoaded;                                         // 0x1950(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FEOSHLobbySearch                                    outLobbySearchHandle;                                    // 0x1960(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSHLobbySearch                                    outLobbySearchFriendHandle;                              // 0x1968(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEOSHLobbySearch                                    outLobbyCrewNameSearchHandle;                            // 0x1970(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnProcessedTicket;                                       // 0x1978(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAFI[0x18];                                  // 0x1988(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MyLogInToken;                                            // 0x19A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerPlatformNickName;                                  // 0x19B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerPlatformAvatarURL;                                 // 0x19C0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ1D[0x28];                                  // 0x19D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnalyticEvent>                              BatchedEvents;                                           // 0x19F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H89L[0x8];                                   // 0x1A08(0x0008) MISSED OFFSET (PADDING)

	public:
		bool StringToAttachmentArray(const class FString& inString, TArray<class FString>* OutArray);
		ECrewState StateFromString(const class FString& StateIn);
		void StartPlayFabLogin();
		void StartAndRefreshMatchmaking();
		void ShipChanged();
		void SetVoiceRoomID(const class FString& RoomIDOut);
		void SetProfileInBP(const class FString& IDOut);
		void SetPlayerSessionIDsAndSetTravelToMapIP(TArray<struct FGameliftSessionPlayerID> PlaySessions, const class FString& ConnectIP);
		void SetPlatfromNickNameandAvatar(const class FString& PlayerNick, const class FString& ImageURL);
		void SetMatchMakeDrone(const class FString& IDdrone, const class FString& QueMode);
		void SetEndMatchXP(int32_t AmountXP);
		void SetActiveShipConSize(const class FString& ShipDataIn);
		void ServerRefreshBackEnd();
		void SendTicket(const struct FTicketInfo& TicketInfo);
		void SendEndMatchInfo(TArray<class FName> ItemsHave, int32_t XPIn, int32_t KillsIn, bool DeathIn);
		void SearchingForMatch();
		void SearchForCrew(int32_t pageNum);
		void RefreshLobbyItems(const class FString& StringIn);
		bool ProfileGetPlayerReturnFromMatch();
		struct FMenuPlayerLook PlayerChangedDisplayStringToInfo(const class FString& StringIn);
		void OverrideKilledByName(const class FString& NewOverride);
		void LoadMainMenu();
		void LeaveCrew();
		void JoinACrew(const struct FEOSHLobbyDetails& LobbyToJoin);
		bool IsSteamRunning();
		bool IsInCrew();
		bool IsGDKRunning();
		bool IsDisCordRunning();
		bool IsATestBuild();
		bool ImIACaptian();
		int32_t GetServerPort();
		class FName GetRownameForFaction(EFactionType FactionIn);
		void GetRemoteDiscordUserInfo(const class FString& DiscordIDIn);
		class FString GetRegionNumberAsString();
		void GetPlatformNickAndAvater(class FString* PlayerNick, class FString* ImageURL);
		EPlatformBuild GetPlatformBuildType();
		void GetOSSPlayerInfo();
		int32_t GetNumberOfPlayersInMatch();
		class FString GetMyPlatformID();
		class FString GetMyLocalZeuzID();
		TArray<struct FLobbyInfo> GetMemberLobbyInformation(const struct FEOSProductUserId& userId);
		TArray<struct FLobbySearchInfo> GetLobbySeachInfo();
		TArray<struct FLobbyInfo> GetLobbyInformation();
		class FString GetLobbyIDAsString();
		float GetLastRoundTime();
		class FString GetLastKilledBy();
		float GetInventoryGridSlotSize();
		EFactionType GetFactionForShopInt(int32_t ShopInt);
		class FString GetExtraConnectionInfo();
		int32_t GetEndMatchXP();
		TArray<struct FPlayerStat> GetEndMatchStats();
		class UClass* GetDragAndDropItemWidgetClass();
		void GetDiscordUserInfo(const class FString& userId);
		void GetDisCordAvatarURLandNick();
		class UClass* GetDefaultContainerWidgetClass();
		EFactionType GetCurrentShopKeeperFaction();
		int32_t GetCurrentShopKeeper();
		TArray<struct FEOSProductUserId> GetCurrentLobbyMembers();
		class FString GetBuildNameType(bool isDev);
		class FString GetBuildIDTime();
		class FString GetBuildIDDate();
		class FString GetBuildID();
		class AActor* GetBpForSoftClass();
		bool GetAllCrewReady();
		void FoundMatch(const class FString& ConnectionString);
		void EOS_SetLobbyMyMemberAttributte(TArray<struct FLobbyInfo> InfoForLobby);
		void EOS_SetLobbyAttributte(TArray<struct FLobbyInfo> InfoForLobby);
		void EOS_ReportLastKilledBy(EEOSEPlayerReportsCategory TypeOf, const class FString& MessageIn);
		void EOS_QueryCachedStats();
		void EOS_OnSaveStats(const struct FEOSStatsIngestStatCompleteCallbackInfo& Data);
		void EOS_Onreported(const struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo& Data);
		void EOS_OnLobbyUpdate(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data);
		void EOS_OnLobbySearch(const struct FEOSLobbySearchFindCallbackInfo& Data);
		void EOS_OnLobbyLeave(const struct FEOSLobbyLeaveLobbyCallbackInfo& Data);
		void EOS_OnLobbyKickMember(const struct FEOSLobbyKickMemberCallbackInfo& Data);
		void EOS_OnLobbyJoin(const struct FEOSLobbyJoinLobbyCallbackInfo& Data);
		void EOS_OnLobbyFirstUpdate(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data);
		void EOS_OnLobbyDestroy(const struct FEOSLobbyDestroyLobbyCallbackInfo& Data);
		void EOS_OnLobbyCrewNameSearch(const struct FEOSLobbySearchFindCallbackInfo& Data);
		void EOS_OnLoadStats(const struct FEOSStatsOnQueryStatsCompleteCallbackInfo& Data);
		void EOS_OnGetDeviceID(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data);
		void EOS_OnFriendLobbySearch(const struct FEOSLobbySearchFindCallbackInfo& Data);
		void EOS_OnEOSGDK_LoginReturn(const struct FEOSConnectLoginCallbackInfo& Data);
		void EOS_OnEOS_LoginReturn(const struct FEOSConnectLoginCallbackInfo& Data);
		void EOS_OnEOS_GDKLoginReturn(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data);
		void EOS_OnEOS_GDKLogin(bool bWasSuccessful, const class FString& ErrorStr);
		void EOS_OnEOS_CreateUser(const struct FEOSConnectCreateUserCallbackInfo& Data);
		void EOS_OnCreateLobbyreturn(const struct FEOSLobbyCreateLobbyCallbackInfo& Data);
		void EOS_OnCheckSanctions(const struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo& Data);
		void EOS_Login();
		void EOS_LobbySearchByCrewName(const class FString& CrewNameIn);
		void EOS_LobbySearchByCrewID(const class FString& CrewIDIn);
		void EOS_LobbySearch();
		void EOS_LobbyLeave();
		void EOS_LobbyKickMember(const struct FEOSProductUserId& TargetUserId);
		void EOS_LobbyJoin(const struct FEOSHLobbyDetails& LobbyToJoin);
		void EOS_LobbyDestroy();
		void EOS_JoinFriendLobbySearch(const struct FEOSLobbySearchFindCallbackInfo& Data);
		void EOS_GetStatsFromBackEnd();
		void EOS_GetPlayerSanctions();
		TArray<struct FPlayerStat> EOS_GetCachedStats();
		void EOS_GetAllFriendLobbySearch();
		void EOS_DeviceIDReturn(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data);
		void EOS_CreateLobby();
		void EOS_CreateFriendLobby();
		void EOS_AuthExpiCallaback(const struct FEOSConnectAuthExpirationCallbackInfo& Data);
		void EOS_AlterLeaderBoardStat(const class FString& LeaderboardStat, const struct FEOSProductUserId& TargetProductID, int32_t AmountTO);
		void EndServerhMatchmaking();
		void DisbandCrew();
		void DestroyServerMatchmaking();
		void CrewUnLocked();
		void CrewMemberUnready();
		void CrewMemberReady();
		void CrewLocked();
		void CrewGetSessionIDAndServerIP(class FString* MyGameLiftSessionID, class FString* ServerConnectIP);
		void CptKickCrewMember(const class FString& ToKickPlayerID, const class FString& MessageIn);
		bool ContainsRudeWord(const class FString& Word);
		void ClientHasnotGotOnlinePrivalige();
		void ClientHasBeenDisconectedEvent(const class FString& Reason);
		void ClearKilledByName();
		void ChangeLobbyState(ECrewState NewState);
		void CaptainCrewCreation(const class FString& CrewName, const class FString& Password);
		void CancelSearch();
		void BeenKickedFromLobby();
		void BatchEvent(const struct FAnalyticEvent& NewEventIn, bool Urgent);
		void AuthDiscord(const class FString& AutBackIn);
		class FString AskForIP();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameInstanceSocket
	 * Size -> 0x0268 (FullSize[0x04D0] - InheritedSize[0x0268])
	 */
	class USIGISGameInstanceSocket : public UGameLiftGameInstance
	{
	public:
		class FString                                              PlayerUserName;                                          // 0x0268(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AwsPlayerID;                                             // 0x0278(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SN78[0x28];                                  // 0x0288(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMatchMakeStart;                                        // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchMakeQuery;                                        // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3ZU[0x40];                                  // 0x02D0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLoadedAccount;                                         // 0x0310(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUPY[0xD0];                                  // 0x0320(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TotalMissions;                                           // 0x03F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionProgress>                            ActiveMissions;                                          // 0x0400(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        CollectedMissions;                                       // 0x0410(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            PendingFactionLevels;                                    // 0x0420(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         ItemToBackEndID;                                         // 0x0430(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         GetOutItemToBackEndID;                                   // 0x0480(0x0050) NativeAccessSpecifierPublic

	public:
		void AwsWs_StartMatchMaking(TArray<struct FGameLiftPlayer> players, const class FString& configurationName);
		void AwsWs_QueryMMTicket(const class FString& TicketID);
		void AwsWs_CancelMatchMaking(const class FString& TicketID);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameMode
	 * Size -> 0x0078 (FullSize[0x0380] - InheritedSize[0x0308])
	 */
	class ASIGISGameMode : public AGameMode
	{
	public:
		class FString                                              FrigateDefaultName;                                      // 0x0308(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          FrigateDataTable;                                        // 0x0318(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ConnectedPlayerIds;                                      // 0x0320(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              PlayerPawnClass;                                         // 0x0330(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAMenuGame;                                              // 0x0338(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S0T9[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlayers;                                              // 0x033C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaitingTimeLimit;                                        // 0x0340(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZHX[0x3C];                                  // 0x0344(0x003C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameSettings
	 * Size -> 0x0648 (FullSize[0x0680] - InheritedSize[0x0038])
	 */
	class USIGISGameSettings : public UDeveloperSettings
	{
	public:
		struct FSoftObjectPath                                     ItemDataTable;                                           // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InventoryGridSlotSize;                                   // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Gamesetting;                                             // 0x0054(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ9G[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FThumbnailSettingsOptions                           ThumbnailSettings;                                       // 0x0060(0x0610) Edit, Config, NativeAccessSpecifierPublic
		float                                                      ThumbNailMultiplier;                                     // 0x0670(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M19B[0xC];                                   // 0x0674(0x000C) MISSED OFFSET (PADDING)

	public:
		int32_t GetDBuildType();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameState
	 * Size -> 0x0000 (FullSize[0x0290] - InheritedSize[0x0290])
	 */
	class ASIGISGameState : public AGameState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISGameViewportClient
	 * Size -> 0x0020 (FullSize[0x0380] - InheritedSize[0x0360])
	 */
	class USIGISGameViewportClient : public UGameViewportClient
	{
	public:
		unsigned char                                              UnknownData_M36I[0x20];                                  // 0x0360(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISHUD
	 * Size -> 0x0120 (FullSize[0x0430] - InheritedSize[0x0310])
	 */
	class ASIGISHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_FAE4[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InGameOverlayClass;                                      // 0x0320(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InMatchOverlayClass;                                     // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MasterMenuClass;                                         // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UInGameOverlayWidget*                                InGameOverlay;                                           // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMasterMenuWidget*                                   MasterMenu;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YKYQ[0x30];                                  // 0x0348(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               BigFont;                                                 // 0x0378(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFont*                                               NormalFont;                                              // 0x0380(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           InventoryOpenSound;                                      // 0x0388(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundCue*                                           InventoryCloseSound;                                     // 0x0390(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsMatchHud;                                              // 0x0398(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBL2[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrentActorLookingAtName;                               // 0x03A0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3O6A[0x8];                                   // 0x03B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             RecommendedRegionReturn;                                 // 0x03B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y1FA[0x18];                                  // 0x03C8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRegionCheck>                                RegionPingChecks;                                        // 0x03E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSIL[0x20];                                  // 0x03F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AveragePlayerLatency;                                    // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1VA[0x4];                                   // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RegionCode;                                              // 0x0418(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        GetResponseTimeHandle;                                   // 0x0428(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StartedHold();
		void ShowReticle(const class FString& ItemNameIn, bool HasHold);
		void ShowInventoryMenu(ELootWindowState LootWinState);
		void SetRegionToPing(EAmazonRegions RegionToSet);
		void ResetMatchResult();
		void PostLoginLoad();
		void PlayerReadyToDeploy();
		void OnKilledEvent();
		void MenuStateChanged(EMenuState NewState);
		void InventoryOpen();
		void InventoryClosed();
		void HideReticle();
		void HideInventoryMenu();
		void GetRecommendendRegion();
		class UMasterMenuWidget* GetMasterMenu();
		int32_t GetLastMatchXP();
		ERaidResult GetLastMatchResult();
		class UInGameOverlayWidget* GetInGameOverlay();
		class FString GetBuildID();
		class FString GetAveragePlayerLatency();
		void EndedHold();
		void ChangeMainMenu(EMenuState NewState);
		void BP_ShowInfoEvent(const class FString& KeyAndItemType, bool HasHold);
		void BP_NoSpaceForItem();
		void BP_HideInfoEvent();
		void BP_CantSellItemsInside();
		void BP_CantScrapItemsInside();
		bool AreMenusVisible();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISInteractionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USIGISInteractionInterface : public UInterface
	{
	public:
		void Interact(class AActor* InteractingOwner);
		struct FInteractionInfo GetInteractionInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISInventoryComponent
	 * Size -> 0x0180 (FullSize[0x0230] - InheritedSize[0x00B0])
	 */
	class USIGISInventoryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MVA0[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASIGISInventoryItem*>                         EquippedItems;                                           // 0x00B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ASIGISInventoryItem*>                         StashedItems;                                            // 0x00C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ASIGISInventoryItem*>                         LootsItems;                                              // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ASIGISInventoryItem*>                         ShopItems;                                               // 0x00E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ASIGISInventoryItem*>                         ShipItems;                                               // 0x00F8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ASIGISInventoryItem*>                         GiftItems;                                               // 0x0108(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<class ASIGISInventoryItem*>                         LobbyItems;                                              // 0x0118(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TMap<class FString, struct FInventoryGridPair>             InventoryContainerSizes;                                 // 0x0128(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		struct FVector                                             ItemDropRelativeLocation;                                // 0x0178(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEJI[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnItemAdded;                                             // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnItemRemoved;                                           // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USIGISBaseComponent*                                 CurrentComponentLooting;                                 // 0x01A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISBaseActor*                                     CurrentActorLooting;                                     // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISBaseActor*                                     PrevActorLooting;                                        // 0x01B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASIGISInventoryItem*                                 PendingAccessCardShipInfo;                               // 0x01C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7R1I[0x4];                                   // 0x01C8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DebugShopInt;                                            // 0x01CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        maxItems;                                                // 0x01D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FDynamicShopInfo                                    CurrentShop;                                             // 0x01E0(0x0018) NativeAccessSpecifierPublic
		class FName                                                CurrentRecipeBeingCrafted;                               // 0x01F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentRecipeBeingCraftedTime;                           // 0x0200(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AA6U[0x4];                                   // 0x0204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInventoryItemStruct>                        DisconecttedLoot;                                        // 0x0208(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BFT[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        RecipesUnlocked;                                         // 0x0220(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void Server_ValidateStashInventory();
		void Server_ValidateInvCon(const class FString& ToCon);
		void Server_ValidateEquippedInventory();
		void Server_UseItem(const class FString& UniqueItemGUID, bool FromLoot);
		void Server_UnEquipItem(const class FString& UniqueItemGUID, EEquipmentSlot SlotTo);
		void Server_UnEquipAttachment(const class FString& UniqueItemGUID, const class FString& UniqueItemGUIDAttachedTo);
		void Server_SwapItem(const class FString& UniqueItemGUIDFrom, const class FString& UniqueItemGUIDTo, ESlotType MovetypeTo, ESlotType MovetypeFrom, bool RequiresMove);
		void Server_StartLooting(class ASIGISBaseActor* LootItem);
		void Server_SplitStack(const class FString& UniqueItemGUID, const struct FInventoryGridPair& ToSlot, const class FString& ToCon, int32_t AmountToSplit, unsigned char FromLoot, unsigned char ToLoot);
		void Server_SetItemRotated(const class FString& UniqueItemGUID, int32_t bRotate);
		void Server_SellItem(const class FString& UniqueItemGUID);
		void Server_RemoveItem(const class FString& UniqueItemGUID);
		void Server_ProcessRightClickOption(EItemOptions OptionToUse, const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo);
		void Server_PredictUseAmmo(const class FString& UniqueItemGUID, int32_t AmountNew);
		void Server_MoveLobbyItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate);
		void Server_MoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate);
		void Server_MergeStack(const class FString& UniqueItemGUID, const class FString& UniqueItemGUIDMerge, unsigned char FromLoot, unsigned char ToLoot);
		void Server_MenuMoveLobbyItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate);
		void Server_FoldBag(const class FString& UniqueItemGUID, ESlotType MovetypeTo);
		void Server_EquipItem(const class FString& UniqueItemGUID, EEquipmentSlot SlotTo);
		void Server_EquipAttachment(const class FString& UniqueItemGUID, const class FString& UniqueItemGUIDAttachedTo);
		void Server_DropItem(class ASIGISInventoryItem* IteToDrop);
		void Server_DropInHud(const class FString& UniqueItemGUID);
		void Server_DestoryEquippedItem(const class FString& UniqueItemGUID);
		void Server_CtrlClickItem(const class FString& UniqueItemGUID, const class FString& ToCon, ESlotType MovetypeFrom);
		void Server_ColourItem(const class FString& UniqueItemGUID, const class FName& NewItem);
		void Server_CloseInventory();
		void Server_ChangeItemAmount(const class FString& UniqueItemGUID, int32_t AmountNew, unsigned char Inloot);
		void Server_BuyItem(const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& OriginSlot, int32_t ShouldRotate);
		void Server_BatchAddItems(TArray<struct FInventoryItemStruct> ItemsIn);
		void Server_AssignToQuickSlot(const class FString& UniqueItemGUID, int32_t SlotNumber, bool ClearSlot);
		void Server_AdjustShopInventory(const class FName& ItemToRemove);
		void Server_AdjustMoney(int32_t amount);
		void Server_AddItem(const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& OriginSlot, bool IsALoad, const class FString& SpecificUUID, int32_t bRotate, const class FString& AttachmentsOn, int32_t MaxDuribilityIn);
		void LootRemoveItem(const class FString& UniqueItemGUID);
		void LootRemoveBatchItems(TArray<class FString> UniqueItemGUIDs);
		void LootMoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, int32_t bRotate);
		void LootCompRemoveItem(const class FString& UniqueItemGUID);
		void LootCompMoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, int32_t bRotate);
		void LootCompAmountItem(const class FString& UniqueItemGUID, int32_t NewAmount);
		void LootCompAddItem(const struct FInventoryItemStruct& ItemAdded);
		void LootAmountItem(const class FString& UniqueItemGUID, int32_t NewAmount);
		void LootAddItemStruct(const struct FInventoryItemStruct& ItemIn);
		void LootAddItem(const struct FInventoryItemStruct& ItemAdded);
		void LootAddBatchItemStruct(TArray<struct FInventoryItemStruct> ItemIn);
		void LootActorPickedup(class ASIGISBaseActor* Actorpicked);
		void Client_ValidateStashInventory(TArray<struct FInventoryItemStruct> ItemsToAdd);
		void Client_ValidateInvCon(const class FString& ToCon, TArray<struct FInventoryItemStruct> ItemsToAdd);
		void Client_ValidateEquippedInventory(TArray<struct FInventoryItemStruct> ItemsToAdd);
		void Client_UnlockLootItem(const class FString& UniqueItemGUID);
		void Client_SwapItem(const class FString& UniqueItemGUIDFrom, const class FString& UniqueItemGUIDTo, ESlotType MovetypeTo, ESlotType MovetypeFrom, const struct FInventoryGridPair& MovedToSlot);
		void Client_StoreDisconnectItems(TArray<struct FInventoryItemStruct> ItemsIn);
		void Client_StartShoppingMenu();
		void Client_SetItemRotated(const class FString& UniqueItemGUID, int32_t bRotate);
		void Client_RemoveShopItem(const class FString& UniqueItemGUID);
		void Client_RemoveLootItem(const class FString& UniqueItemGUID);
		void Client_RemoveLootBatchItems(TArray<class FString> UniqueItemGUIDs);
		void Client_RemoveLobbyItem(const class FString& UniqueItemGUID);
		void Client_RemoveItem(const class FString& UniqueItemGUID);
		void Client_RemoveGiftItem(const class FString& UniqueItemGUID);
		void Client_OpenInventory(ELootWindowState LootWinState, class AActor* ConActor);
		void Client_NoSpaceInInventory();
		void Client_MoveItem(const class FString& UniqueItemGUID, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, ESlotType MovetypeFrom, int32_t bRotate);
		void Client_LootActorPickedup();
		void Client_Loaded();
		void Client_GetOutWithLootAndShip(TArray<struct FInventoryItemStruct> ShipsItem, const struct FInventoryItemStruct& ship);
		void Client_GetOutWithLoot();
		void Client_FoldBag(const class FString& UniqueItemGUID, ESlotType MovetypeTo);
		void Client_EndLooting();
		void Client_ColourItem(const class FString& UniqueItemGUID, const class FName& NewItem);
		void Client_ChangeItemAmount(const class FString& UniqueItemGUID, int32_t AmountNew);
		void Client_BatchAddLootItems(TArray<struct FInventoryItemStruct> ItemsIn);
		void Client_BatchAddItems(TArray<struct FInventoryItemStruct> ItemsIn);
		void Client_AssignToQuickSlot(const class FString& UniqueItemGUID, int32_t SlotNumber, bool ClearSlot);
		void Client_AddShopItem(const class FString& UniqueItemGUID, const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& ToSlot);
		void Client_AddLootItemStruct(const struct FInventoryItemStruct& ItemIn);
		void Client_AddLootItemsStruct(TArray<struct FInventoryItemStruct> ItemsIn);
		void Client_AddLootItem(const struct FInventoryItemStruct& ItemIn);
		void Client_AddLobbyItem(const struct FInventoryItemStruct& ItemIn);
		void Client_AddItem(const class FString& UniqueItemGUID, const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& ToSlot, int32_t bRotate, const class FString& AttachmentsOn);
		void Client_AddGiftItem(const class FString& UniqueItemGUID, const class FName& ItemData, int32_t StackAmount, int32_t Condition, const class FString& ToCon, const struct FInventoryGridPair& ToSlot);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISInventoryItem
	 * Size -> 0x00C0 (FullSize[0x02E0] - InheritedSize[0x0220])
	 */
	class ASIGISInventoryItem : public AActor
	{
	public:
		unsigned char                                              UnknownData_J95D[0x20];                                  // 0x0220(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueItemGUID;                                          // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ItemData;                                                // 0x0250(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Attachments;                                             // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackAmount;                                             // 0x0268(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Condition;                                               // 0x026C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInventoryGridPair                                  ItemInSlot;                                              // 0x0270(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R5W0[0x2];                                   // 0x0272(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    bRotated;                                                // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MotherItemGUID;                                          // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackEndID;                                               // 0x0288(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCondition;                                            // 0x0298(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QOMY[0x4];                                   // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          IconTexture;                                             // 0x02A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SquareIconTexture;                                       // 0x02A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemObject;                                              // 0x02B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ItemMesh;                                                // 0x02B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPendingDrop;                                            // 0x02C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isShopMaxFactionItem;                                    // 0x02C1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJ2T[0xE];                                   // 0x02C2(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 MyData;                                                  // 0x02D0(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		bool IsALootBox();
		class UTexture2D* GetSquareIcon();
		struct FLinearColor GetQualityTierTextColor();
		struct FLinearColor GetQualityTierColor();
		class FText GetItemName();
		class FText GetInventoryUseTooltipText();
		class USoundCue* GetInteractionSound();
		class UTexture2D* GetIcon();
		struct FVector2D GetGridSizeVector();
		class FText GetFlavorText();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISLootSingleSpawner
	 * Size -> 0x0050 (FullSize[0x0298] - InheritedSize[0x0248])
	 */
	class ASIGISLootSingleSpawner : public ANavigationObjectBase
	{
	public:
		unsigned char                                              UnknownData_8N32[0x10];                                  // 0x0248(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASIGISResourceManager*                               Manager;                                                 // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OneTimeSpawn;                                            // 0x0260(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4E1[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenSpawnShifting;                                // 0x0264(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeBetweenSpawnShiftingRange;                           // 0x0268(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeForDormacyChecks;                                    // 0x026C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceTOCheckForPlayers;                               // 0x0270(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QO2[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          LootTable;                                               // 0x0278(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisablePhysicsOnPickups;                                 // 0x0280(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ActivatedVolume;                                         // 0x0281(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInCoolDown;                                             // 0x0282(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCompletedASpawn;                                      // 0x0283(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZR7O[0xC];                                   // 0x0284(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASIGISBaseActor*                                     ActiveActorHere;                                         // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void TriggerSpawn();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISNak_GetAccount
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class USIGISNak_GetAccount : public UOnlineBlueprintCallProxyBase
	{
	public:
		unsigned char                                              UnknownData_KBDI[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              userId;                                                  // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USIGISGameInstance*                                  SigGameInstance;                                         // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnError;                                                 // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		class USIGISNak_GetAccount* GetUserAccount(class UObject* WorldContextObject, const class FString& userId, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISNak_GetGroupInfo
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class USIGISNak_GetGroupInfo : public UOnlineBlueprintCallProxyBase
	{
	public:
		unsigned char                                              UnknownData_O8DZ[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              groupId;                                                 // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USIGISGameInstance*                                  SigGameInstance;                                         // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnError;                                                 // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		class USIGISNak_GetGroupInfo* GetGroupMembers(class UObject* WorldContextObject, const class FString& GroupIdIn, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISNak_GetMyCrews
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class USIGISNak_GetMyCrews : public UOnlineBlueprintCallProxyBase
	{
	public:
		unsigned char                                              UnknownData_VSSU[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USIGISGameInstance*                                  SigGameInstance;                                         // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnError;                                                 // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		class USIGISNak_GetMyCrews* GetMyGroups(class UObject* WorldContextObject, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISNak_Rpc
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class USIGISNak_Rpc : public UOnlineBlueprintCallProxyBase
	{
	public:
		unsigned char                                              UnknownData_10ML[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RpcID;                                                   // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Payload;                                                 // 0x0060(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USIGISGameInstance*                                  SigGameInstance;                                         // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnError;                                                 // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		class USIGISNak_Rpc* SigNak_RPC(class UObject* WorldContextObject, const class FString& RpcFunctionName, const class FString& JsonMsgBody, const class FScriptDelegate& SuccessDelegate, const class FScriptDelegate& ErrorDelegate);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISOnlineSessionClient
	 * Size -> 0x0000 (FullSize[0x01E0] - InheritedSize[0x01E0])
	 */
	class USIGISOnlineSessionClient : public UOnlineSessionClient
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISPlatformLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USIGISPlatformLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetTypeShape();
		bool IsPendingInfoOnUser(const class FString& SteamIDIn);
		void InvitePlatformFriends();
		bool HasSteamDLC(const class FString& AppIDIn);
		bool GetSteamIsRunning();
		class UTexture2D* GetSteamFriendAvatar(const class FString& SteamIDIn, EBlueprintAsyncResultSwitch* Result, ESteamAvatarSize AvatarSize);
		class FString GetSteamActivatedLanguage();
		class FString GetPlatformPlayerNameFromSteamID(const class FString& SteamIDIn);
		class FString GetPlatformPlayerName();
		class FString GetPlatformPlayerID();
		class UTexture2D* GetPlatformFriendAvatar(const class FString& SteamIDIn);
		EPlatformBuild GetPlatformBuildType();
		class UTexture2D* GetPlatformAvatar();
		class FString GetPlatformAppID();
		bool GetIsBuildDebugBuild();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISPlayerController
	 * Size -> 0x0360 (FullSize[0x08D0] - InheritedSize[0x0570])
	 */
	class ASIGISPlayerController : public AGameLiftPlayerController
	{
	public:
		unsigned char                                              UnknownData_SLPV[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBeginItemDrag;                                         // 0x0578(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndItemDrag;                                           // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UDraggableItemWidget*                                DraggedItem;                                             // 0x0598(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDraggableItemWidget*                                SelectedItem;                                            // 0x05A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDraggableItemWidget*                                ClickedItem;                                             // 0x05A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCraftingWidget*                                     ClickedRecipe;                                           // 0x05B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             LoginReturned;                                           // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UEquipmentSlotWidget*                                SelectedEquipment;                                       // 0x05C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryContainerWidget*                           SelectedContainerWidget;                                 // 0x05D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickSwapInputDown;                                     // 0x05D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickDiscardInputDown;                                  // 0x05D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickUseInputDown;                                      // 0x05DA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScrapHovered;                                           // 0x05DB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bColouringHovered;                                       // 0x05DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlockHovered;                                          // 0x05DD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRepairHovered;                                          // 0x05DE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bControlDown;                                            // 0x05DF(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        StartingItems;                                           // 0x05E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    StartingCash;                                            // 0x05F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QYDQ[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        VIPStartingItems;                                        // 0x05F8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    VIPStartingCash;                                         // 0x0608(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StartingPrimWeapon;                                      // 0x060C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StartingArmour;                                          // 0x0614(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StartingHelmet;                                          // 0x061C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StartingPocketItem;                                      // 0x0624(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleCrouch;                                           // 0x062C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bToggleADS;                                              // 0x062D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QI1T[0x2];                                   // 0x062E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USIGISInventoryComponent*                            InventoryComp;                                           // 0x0630(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugInEditorID;                                         // 0x0638(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HadFadenBlue;                                            // 0x0648(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZHG[0x3];                                   // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TravelTimeout;                                           // 0x064C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerProfileID;                                         // 0x0650(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerUniqueName;                                        // 0x0660(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OU7Q[0x28];                                  // 0x0670(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ShopsBeenUsed;                                           // 0x0698(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanCraft;                                                // 0x0699(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6D8[0x6];                                   // 0x069A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       PlayerLoggedInandLoaded;                                 // 0x06A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugStarterItems;                                       // 0x06A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReceavedRequestForGetInventory;                         // 0x06A2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS27[0x5];                                   // 0x06A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NamPlayerPID;                                            // 0x06A8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D30K[0x38];                                  // 0x06B8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class FString>                         ItemToBackEndID;                                         // 0x06F0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               ItemToBackEndVersion;                                    // 0x0740(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    cash;                                                    // 0x0790(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    XP;                                                      // 0x0794(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Points;                                                  // 0x0798(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    prestige;                                                // 0x079C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            skillsunlocked;                                          // 0x07A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            shopitemsbought;                                         // 0x07B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              EquippedHead;                                            // 0x07C0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EquippedBody;                                            // 0x07D0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      GiftItems;                                               // 0x07E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      UnlockedCustomisations;                                  // 0x07F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CurrentlyCrafting;                                       // 0x0800(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           CraftingFinishedTime;                                    // 0x0810(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondsTillCraftingDone;                                 // 0x0818(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondsTillShopRefresh;                                  // 0x081C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           ShopBoughtStartTime;                                     // 0x0820(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFJG[0x10];                                  // 0x0828(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         XpLevelCurve;                                            // 0x0838(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LevelXPCurve;                                            // 0x0840(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         LevelToPointsGained;                                     // 0x0848(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UUIDSeenItems;                                           // 0x0850(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      PrestigeUnlocks;                                         // 0x0860(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FFactionLevel>                               Factions;                                                // 0x0870(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UCurveFloat*                                         FactionXpLevelCurve;                                     // 0x0880(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         FactionXPCurve;                                          // 0x0888(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           MissionSwapTime;                                         // 0x0890(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInMissionVolume;                                        // 0x0898(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83UT[0x3];                                   // 0x0899(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                CurrentTimedMission;                                     // 0x089C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5AD[0x14];                                  // 0x08A4(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bInChapterVolume;                                        // 0x08B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1C8C[0x17];                                  // 0x08B9(0x0017) MISSED OFFSET (PADDING)

	public:
		void World_PickedUpItem(const class FName& ItemRowName);
		void World_DroppedItem(const class FName& ItemRowName);
		void WipePlayerShips();
		void UnlockPrestigeUnlock(const class FString& PresTOUnlock);
		void UnlockedSkill(int32_t SKillNumber);
		void UILeveledUP();
		void UI_StartedDrag(const class FName& ItemRowName);
		void UI_EndedDrag(const class FName& ItemRowName);
		void TravelToMap(const class FString& URL);
		void testUserIn();
		void TestSocketMessage();
		void TestSocket();
		void TestNewMMCancel();
		void TestNewMM();
		void TestNaughtyList();
		void TestNakama();
		void TestJoinServerMitchell();
		void TestJoinServerLocal();
		void TestGetMyLB();
		void TestGetAllLB();
		void TestAddKillLB();
		void StopQuickUse();
		void StopQuickInput();
		void StopDiscardInputDown();
		void StartQuickUse();
		void StartQuickInput();
		bool StartMission(const class FName& MissionRow);
		void StartDiscardInputDown();
		void StartColouringOptions(const struct FColouringInfo& COptions);
		void SIGWipePlayerInventory();
		void SIGWipePlayerData();
		void SIGUnlockRecipe(unsigned char recipenum);
		void SIGTestSteamFriends();
		void SIGTestDynamoDB();
		void SIGTestClose();
		void SIGGiveStartingItems(bool VIP);
		void SIGClearOldLobbyItems();
		void SIGAddXp(int32_t amount);
		void SIGAddTestItem(const class FString& ItemToAdd);
		void SIGAddShip(const class FName& ShipToAdd);
		void SIGAddPoints(int32_t amount);
		void SIGAddCash(int32_t amount);
		void SIG_ToggleSnap();
		void SIG_TetstCall(int32_t callID);
		void SIG_TesttOS();
		void SIG_TestGDKSessionStart();
		void SIG_TestGDKSessionInfo();
		void SIG_TestGDKSessionEnd();
		void SIG_TestGDKFriends();
		void SIG_TestGDKExternalInvite();
		void SIG_StartLag();
		void SIG_StartEOS();
		void SIG_StartCreateLobby();
		void SIG_SetDebugReport(const class FString& EOSIdToReport);
		void SIG_Relog();
		void SIG_PushIntCommandToServer(int32_t CommandInt);
		void SIG_PushCommandToServer(const class FString& CommandString);
		void SIG_GetEOSAUTH();
		void SIG_FindServer();
		void SIG_CreateFakePLayers(int32_t NumPlayers);
		void SIG_ClearDeviceID();
		void SIG_CancelFind();
		void SetUnlockingHovered(bool OverScrapping);
		void SetToggleCrouch(bool ShouldToggle);
		void SetToggleADS(bool ShouldToggle);
		void SetScrappingHovered(bool OverScrapping);
		void SetRepairHovered(bool OverRepairing);
		void SetPlayerUnlockCos(const class FName& Cosmetic);
		void SetPlayerCosHead(const class FName& head);
		void SetPlayerCosBody(const class FName& Body);
		void SetColouringHovered(bool OverColouring);
		void Server_StartLag();
		void Server_SIGPushCommandToServer(const class FString& CommandString);
		void Server_SIGCreateFakePLayers(int32_t NumPlayers);
		void Server_SIG_PushIntCommandToServer(int32_t CommandString);
		void Server_SendShipItems(TArray<struct FInventoryItemStruct> LobbyItemsIn);
		void Server_CashChange(int32_t ChangeAmount);
		void Server_AwsN_EquippedplayerCosmeticsReturned(const class FString& returnedItems);
		void Server_AwsN_EquippedItemsReturned(const class FString& returnedItems);
		void SeclickPressed();
		void SecClickUnPressed();
		void RemovePrestigeUnlock(const class FString& RemovedPres);
		void RemoveGiftItem(const class FString& ItemToRemove);
		void RefreshActiveRecipeInfo();
		void PrimClickUnPressed();
		void PrimClickPressed();
		void PrestigeWipeItems();
		void PresteigeZeroOutPlayerCashCraftingSkills();
		bool PlayerHasNoWeaponEquipped();
		void OnUsedItemEvent(const class FName& ItemName);
		void OnUpDateMission(const class FName& MissionRowUpdated);
		void OnUpDateChapterMission(bool bCompleted, const class FName& RowName);
		void OnShowUIDestroyPrompt(const class FString& ItemUID, const class FName& ItemData);
		void OnMutatedItem(const class FName& ItemRowName);
		void OnItemRepaired(const class FName& ItemData);
		void OnInventoryKeyPressed();
		void OnHealingAnimStopped();
		void OnHealingAnimStarted(const class FName& ItemRow, float HealingTime);
		void OnEscapeKeyPressed();
		void OnAntiCheatCheck(bool HasAntiCheat, EEOSEAntiCheatClientViolationType ViolationOut, const class FString& ViolationDetails);
		void OfficeTravelToMap();
		void MenuOpenMouseInput();
		class UTexture2D* LoadTextureReference(const class FString& TexturePath);
		void ItemAttemptedToScrap(const class FName& ItemData, bool ScrapSuccesful);
		bool IsMissionReadyToCollect(const class FName& MissionRow);
		bool IsEditorInstance();
		bool IsChapterMissionReadyToCollect();
		bool ISaVIPPlayer();
		bool IsATestBuild();
		bool IsADevBuild();
		bool IncrementMission(const class FName& MissionRow);
		bool IncrementChapterMission();
		void IncreaseShipSize(int32_t Shipslots);
		void HealingEvent(EHealingOptions HealEvent);
		bool HasRecipeUnlocked(int32_t skillrecipnum);
		bool HasPlayerLoaded();
		int32_t GetXPTillNextLevel();
		int32_t GetXPForLevel(int32_t LvlToCheck);
		int32_t GetXP();
		struct FInventoryGridPair GetTotalInventoryIncrease();
		struct FRepairInfo GetRepairInfo();
		TArray<class FString> GetPrestigeCusomitations();
		int32_t GetPrestige();
		int32_t GetPresigeShipSizeIncrease();
		TArray<int32_t> GetPresigeRecipes();
		int32_t GetPlayersLevel();
		int32_t GetPlayerPoints();
		int32_t GetMissionProgression(const class FName& MissionToCheck);
		void GetMissionInfo(TArray<class FName>* AvailableMissions, TArray<class FName>* MissionsInProgress, TArray<class FName>* MissionsCollected);
		class UStaticMesh* GetMeshForModule(const class FName& ModuleItemData);
		TArray<struct FInputActionKeyMapping> GetKeyForAction(const class FName& ActionName);
		float GetItemArmourValue(class ASIGISInventoryItem* ItemFrom);
		int32_t GetFactionXPtoLevel(int32_t XPIn);
		int32_t GetFactionXPTillNextLevel(EFactionType FactionIn);
		int32_t GetFactionXPForLevel(int32_t LvlToCheck);
		int32_t GetFactionLevel(EFactionType FactionIn);
		int32_t GetDeliverMissionAmount(const class FName& MissionRow);
		int32_t GetCurrentShopNumber();
		float GetCurrentFactionShopDiscount();
		struct FChapterMissionUI GetCurrentChapterMission(int32_t* Progress);
		class FString GetConnectionExtraOptions();
		struct FColouringInfo GetColouringInfo();
		int32_t GetChapterMissionAmount();
		int32_t GetCash();
		TArray<class FString> GetAllPrestigeUnlocks();
		TArray<struct FChapterMissionUI> GetAllMissionsForChapters(const class FString& ChapterPrefix);
		class FName GetActiveFrigate();
		void FocusUIAndGame();
		void FocusGame();
		void FadeOut(float Duration);
		void FadeIn(float Duration);
		void DynamoTestSet();
		void DynamoTesthasUserTrue();
		void DynamoTesthasUserFalse();
		void DynamoTestGetUserScore();
		void DynamoTestGet();
		void DynamoTestCreateUser();
		void DitchAllItemsFromDataBase();
		void DebugRestartChapterMissions();
		void DebugIncremmentChapterMissions();
		void DebugIncremmentChapterMissionProgress();
		void DebugGiveActiveTestQuest(const class FString& MissonRow);
		void Debug_SetShopStage(int32_t ShopKeeper);
		void ConfirmDestroyItem(const class FString& ItemUID);
		void ColourItem(const class FString& UColourID, const class FName& ColourToUse);
		void CollectMissionReward(const class FName& MissionRow);
		void CollectChapterMission();
		void CloseInventory();
		void Client_UsedItemEvent(const class FName& ItemName);
		void Client_UIPromt(const class FString& MessageIn);
		void Client_StopHealingAnim();
		void Client_ShowLevel(const class FString& LevelIn, bool LevelShow);
		void Client_ReturnPushMessage(const class FString& MessageIn);
		void Client_RemoveEquippedItems(TArray<class FString> ItemIds);
		void Client_PickedUpItem(const class FName& ItemRowName);
		void Client_MutateItem(const class FName& ItemRowName);
		void Client_HealingEvent(EHealingOptions HealEvent);
		void Client_HealingAnim(const class FName& ItemRow, float HealingTime);
		void Client_GetShipLobbyStash();
		void Client_GetEquippedItems();
		void Client_DroppedItem(const class FName& ItemRowName);
		void Client_DestroyPrompt(const class FString& ItemUID, const class FName& ItemData);
		void Client_CheckMissionEvent(const class FName& MessageIn, EContractType ContracyType);
		void ClearXP();
		void ClearPresigeUnlocks();
		void ClearDailyMissions();
		void CantUnFoldNoSpace();
		void CantFoldItemsInside();
		bool CanCollectCurrentMissionLoot();
		bool CanCollectCurrentContractLoot(const class FName& MissionRow);
		void BrokeItem(const class FName& ItemRowName);
		void BP_CloseEvenventory();
		void AddXpToFaction(EFactionType FactionIn, int32_t XpAmount);
		void AddXP(int32_t XPIn);
		void AddPrestige(int32_t amount);
		void AddPoints(int32_t amount);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISPlayerState
	 * Size -> 0x00D0 (FullSize[0x0400] - InheritedSize[0x0330])
	 */
	class ASIGISPlayerState : public AGameLiftPlayerState
	{
	public:
		class FString                                              UserSessionNakama;                                       // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserSessionGUID;                                         // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FrigateClass;                                            // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Crew;                                                    // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Captain;                                                 // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShipHasSpawned;                                         // 0x0380(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YWD[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabID;                                               // 0x0388(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FrigateCardID;                                           // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ8K[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueUserName;                                          // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EOS_ID;                                                  // 0x03B0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastKilledByID;                                          // 0x03C0(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastKilledByPlatformID;                                  // 0x03D0(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerNickName;                                          // 0x03E0(0x0010) Net, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPlayerStat>                                 InMatchStats;                                            // 0x03F0(0x0010) Net, ZeroConstructor, Transient, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISPoseMesh
	 * Size -> 0x0000 (FullSize[0x07F0] - InheritedSize[0x07F0])
	 */
	class USIGISPoseMesh : public UPoseableMeshComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISRenderActor
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class ASIGISRenderActor : public AActor
	{
	public:
		class USceneComponent*                                     RootScenceComp;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneCaptureComponent2D*                            CaptureComp;                                             // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     MeshRoot;                                                // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            DynMaterial;                                             // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Material;                                                // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UMaterialInstanceDynamic* GetRenderMat();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISResourceManager
	 * Size -> 0x0108 (FullSize[0x0328] - InheritedSize[0x0220])
	 */
	class ASIGISResourceManager : public AActor
	{
	public:
		class UClass*                                              ActorForSingleSpawns;                                    // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberInPoolOfSingleSpawns;                              // 0x0228(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OSX9[0x4];                                   // 0x022C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASIGISBaseActor*>                             LoadedSingleSpawnsResources;                             // 0x0230(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q14G[0xE8];                                  // 0x0240(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISShipModActor
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class ASIGISShipModActor : public AActor
	{
	public:
		class UStaticMesh*                                         MenuDisplayMesh;                                         // 0x0220(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         ModMesh;                                                 // 0x0228(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EShipModuleType                                            FrigateModType;                                          // 0x0230(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOI1[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InGameFrigateSpawnedActor;                               // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           ReplacementMaterial;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USIGISLibrary : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SIGISWorkbenchRenderActor
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ASIGISWorkbenchRenderActor : public AActor
	{
	public:
		class USceneComponent*                                     RootScenceComp;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     MeshRoot;                                                // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              MainMesh;                                                // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                MuzzleMesh;                                              // 0x0238(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                LowerRailMesh;                                           // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                UpperRailMesh;                                           // 0x0248(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                MagMesh;                                                 // 0x0250(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StockMesh;                                               // 0x0258(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SpecialMesh;                                             // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SightMesh;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SkillTreeWidget
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class USkillTreeWidget : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SkillTreeWidgetItem
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class USkillTreeWidgetItem : public UUserWidget
	{
	public:
		unsigned char                                              SKillNumber;                                             // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCWG[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      RequiredSkills;                                          // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PointCosts;                                              // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8P3[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (PADDING)

	public:
		void UnlockSkill();
		bool IsSkillUnlocked();
		bool CanUnlock();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.SortingIconWidget
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class USortingIconWidget : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class AThumbnailActor : public AActor
	{
	public:
		class USceneComponent*                                     RootScenceComp;                                          // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SkelMesh;                                                // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailGenerator
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UThumbnailGenerator : public UObject
	{
	public:
		unsigned char                                              UnknownData_2T4W[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UClass*, class UTexture2D*>                     ThumbnailCacheTable;                                     // 0x0060(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C2MZ[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint32_t, class UTextureRenderTarget2D*>              RenderTargetCacheTable;                                  // 0x00C0(0x0050) NativeAccessSpecifierPrivate
		TArray<class UThumbnailGeneratorScript*>                   ThumbnailGeneratorScripts;                               // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailGenerationProxy
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UThumbnailGenerationProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             Callback;                                                // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailGeneration
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UThumbnailGeneration : public UObject
	{
	public:
		void SaveThumbnail(class UTexture2D* Thumbnail, const struct FDirectoryPath& Directory);
		void InitializeThumbnailWorld();
		class UWorld* GetThumbnailWorld();
		class USceneCaptureComponent2D* GetThumbnailCaptureComponent();
		class UTexture2D* GenerateThumbnail_Synchronous(class UClass* ActorClass, ECacheMethod CacheMethod, const struct FThumbnailSettings& ThumbnailSettings);
		class UThumbnailGenerationProxy* CreateThumbnailGenerationProxyObject(class UObject* WorldContextObject, class UClass* ActorClass, ECacheMethod CacheMethod, const struct FThumbnailSettings& ThumbnailSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailSceneInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UThumbnailSceneInterface : public UInterface
	{
	public:
		void OnUpdateThumbnailScene(const struct FThumbnailSettings& ThumbnailSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UThumbnailActorInterface : public UInterface
	{
	public:
		void PreCaptureActorThumbnail();
		struct FTransform GetThumbnailTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailGeneratorScript
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UThumbnailGeneratorScript : public UObject
	{
	public:
		void PreCaptureActorThumbnail(class AActor* ThumbnailActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.ThumbnailGeneratorSettings
	 * Size -> 0x0668 (FullSize[0x0690] - InheritedSize[0x0028])
	 */
	class UThumbnailGeneratorSettings : public UObject
	{
	public:
		unsigned char                                              UnknownData_E0LY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FThumbnailSettings                                  DefaultThumbnailSettings;                                // 0x0030(0x0650) Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic
		int32_t                                                    MaxThumbnailCacheSize;                                   // 0x0680(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRenderTargetCacheSize;                                // 0x0684(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWAP[0x8];                                   // 0x0688(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.TooltipWidget
	 * Size -> 0x00E8 (FullSize[0x0348] - InheritedSize[0x0260])
	 */
	class UTooltipWidget : public UUserWidget
	{
	public:
		class UTextBlock*                                          ItemName;                                                // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             Option1BTN;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Option1Txt;                                              // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             Option2BTN;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Option2Txt;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             Option3BTN;                                              // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Option3Txt;                                              // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             Option4BTN;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Option4Txt;                                              // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             Option5BTN;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Option5Txt;                                              // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBorder*                                             RightClickOptions;                                       // 0x02B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBorder*                                             StackSplit;                                              // 0x02C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USlider*                                             AmountSlider;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UButton*                                             SplitStackBTN;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          MaxAmountTxt;                                            // 0x02D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          SplitAmountTxt;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Txt_SplitItemName;                                       // 0x02E8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextBlock*                                          Txt_ItemDescription;                                     // 0x02F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5T24[0x20];                                  // 0x02F8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASIGISInventoryItem*                                 Item;                                                    // 0x0318(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NETN[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EItemOptions>                                       CurrentOptions;                                          // 0x0328(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMI0[0x10];                                  // 0x0338(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetOptionArray(TArray<EItemOptions> SentItems);
		void SetItem(class ASIGISInventoryItem* NewItem, bool IsSplitMenu, const struct FInventoryGridPair& ToSlot, ESlotType MovetypeTo, const class FString& ToCon, ESlotType MovetypeFrom);
		void SetButtonOptions(int32_t Button, EItemOptions OptionToSet);
		void ProcessBtnPress(EItemOptions OptionIn);
		void OpenWeaponWindow();
		void OpenRig();
		void OpenBag();
		void OnSplitStackBTNPressed();
		void OnRightClickOpen();
		void OnOption5BTNPressed();
		void OnOption4BTNPressed();
		void OnOption3BTNPressed();
		void OnOption2BTNPressed();
		void OnOption1BTNPressed();
		void OnAmountSliderValueChanged(float ValueChange);
		void NameStorageCon(const class FString& NewName);
		bool IsItemRepairable();
		bool IsItemColourable();
		bool IsItemAKeyCard();
		bool IsALockBox();
		int32_t GetRepairCost();
		TArray<struct FScrapItemRNG> GetPotentialScrapItems();
		class FString GetNameStorageCon();
		void GetKeyCardInfo(class FString* CaptainsName, class FString* ShipName, class FString* ShipType);
		void Debug_DamageItem(float amountDamge);
		bool CanItemBeScrapped();
		static UClass* StaticClass();
	};

	/**
	 * Class SIGISPlugin.WeaponWindowWidget
	 * Size -> 0x0068 (FullSize[0x02C8] - InheritedSize[0x0260])
	 */
	class UWeaponWindowWidget : public UUserWidget
	{
	public:
		class ASIGISInventoryItem*                                 MotherItem;                                              // 0x0260(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBorder*                                             DragBorder;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UButton*                                             CloseBtn;                                                // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              SlotBackground;                                          // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               MuzzleSlot;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               LowerRailSlot;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               UpperRailSlot;                                           // 0x0290(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               MagSlot;                                                 // 0x0298(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               StockSlot;                                               // 0x02A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               SightSlot;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttachmentSlotWidget*                               SpecialSlot;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XG9X[0x10];                                  // 0x02B8(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnDragBorderMouseDown();
		void OnCloseButtonPressed();
		class AActor* GetWeaponActor();
		class ASIGISInventoryItem* GetCurrentItem();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
