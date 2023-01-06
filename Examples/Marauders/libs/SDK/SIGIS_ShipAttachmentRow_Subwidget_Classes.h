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
	 * WidgetBlueprintGeneratedClass SIGIS_ShipAttachmentRow_Subwidget.SIGIS_ShipAttachmentRow_Subwidget_C
	 * Size -> 0x019A (FullSize[0x03FA] - InheritedSize[0x0260])
	 */
	class USIGIS_ShipAttachmentRow_Subwidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Hover;                                              // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             Btn_ShipAttachment;                                      // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_IsActiveMarker;                                  // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_IsActive;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_weaponName;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                AttachmentDTName;                                        // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class ASIGISInventoryItem*                                 WpnObjectRef;                                            // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              FrigID;                                                  // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsSetAsActive;                                           // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YQNX[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FrigateName;                                             // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsStarterShip;                                           // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OHSN[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ShipAttachmentPressed;                                   // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EShipAttachmentSlot                                        WhichAttachSlotFor;                                      // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IsARemoveVersion;                                        // 0x02E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_UW9O[0x6];                                   // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ShipAttachPressed_RemoveAttach;                          // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateFontInfo                                      SelectedFontToUse;                                       // 0x02F8(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateFontInfo                                      NormalFontToUse;                                         // 0x0350(0x0058) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FSlateColor                                         SelectedFontColour;                                      // 0x03A8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         UnselectedFontColour;                                    // 0x03D0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       b_isEquipped;                                            // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       b_isEquipped_1;                                          // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void AttachmentRow_SetupInfo();
		void IsSelectedLook(bool isSelected);
		void Construct();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_ShipAttachment_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Btn_ShipAttachment_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void ForceUnselectedColour();
		void ExecuteUbergraph_SIGIS_ShipAttachmentRow_Subwidget(int32_t EntryPoint);
		void ShipAttachPressed_RemoveAttach__DelegateSignature(EShipAttachmentSlot RemoveWhichSlot);
		void ShipAttachmentPressed__DelegateSignature(class ASIGISInventoryItem* WpnObjectRef, const class FName& ItemDTrowName, EShipAttachmentSlot WhichAttachSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
