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
	 * WidgetBlueprintGeneratedClass FullScreenError_Widget.FullScreenError_Widget_C
	 * Size -> 0x0040 (FullSize[0x02A0] - InheritedSize[0x0260])
	 */
	class UFullScreenError_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UWidgetAnimation*                                    OpenAnim;                                                // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMM_Core_BG_Widget_C*                                MM_Core_BG_Widget;                                       // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_GenericSmallBtn01_C*                             MM_GenericSmallBtn01_Accept;                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_TextTitle;                                           // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_WarningDescription;                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              ErrorMessage;                                            // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void BndEvt__FullScreenError_Widget_MM_GenericSmallBtn01_Accept_K2Node_ComponentBoundEvent_0_GenericSmallBtnPressed__DelegateSignature();
		void RunPopup(const class FText& Popup_Title, const class FText& Popup_Desc, class USoundCue* SoundToPlay, const class FText& RightButtonText, bool OnlyShowOneButton);
		void Construct();
		void ExecuteUbergraph_FullScreenError_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
