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
	 * WidgetBlueprintGeneratedClass SIGIS_DragWidow.SIGIS_DragWidow_C
	 * Size -> 0x0058 (FullSize[0x02F0] - InheritedSize[0x0298])
	 */
	class USIGIS_DragWidow_C : public UDragWindowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    Anim_Open;                                               // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBorder*                                             Border_WarningMessage;                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CloseBtn_Blueprint;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             DragDetection;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_CancelExit;                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_DestroyItems;                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_BPCloseButton;                                   // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_CodeCloseButton;                                 // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Type;                                                // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__SIGIS_DragWidow_CloseBtn_Blueprint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_DragWidow_MM_GenericSmallBtn01_K2Node_ComponentBoundEvent_1_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_DragWidow_MM_GenericSmallBtn01_76_K2Node_ComponentBoundEvent_2_GenericSmallBtnPressed__DelegateSignature();
		void BndEvt__SIGIS_DragWidow_DragDetection_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SIGIS_DragWidow_DragDetection_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__SIGIS_DragWidow_DragDetection_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__SIGIS_DragWidow_DragDetection_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_SIGIS_DragWidow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
