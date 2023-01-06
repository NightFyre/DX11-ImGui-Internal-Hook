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
	 * WidgetBlueprintGeneratedClass SkillGenericIcon_Widget.SkillGenericIcon_Widget_C
	 * Size -> 0x0140 (FullSize[0x03A0] - InheritedSize[0x0260])
	 */
	class USkillGenericIcon_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Icon_BG;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_41;                                                // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMM_SecondaryOptionsBtns_C*                          MM_SecondaryOptionsBtn_MyPlayerInfo;                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_79;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTexture2D*                                          TextureToShow;                                           // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCraftingRecipeList                                 CraftInfo;                                               // 0x0290(0x0100) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             Pressed_SkillsRequiredForUnlock;                         // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Set_RecipeReqIcon(class UTexture2D* Texture);
		void BndEvt__MM_SecondaryOptionsBtn_MyPlayerInfo_K2Node_ComponentBoundEvent_1_SecondaryButtonHasBeenPressed__DelegateSignature(E_MM_SecondaryOptions WhichButtonPressed);
		void ExecuteUbergraph_SkillGenericIcon_Widget(int32_t EntryPoint);
		void Pressed_SkillsRequiredForUnlock__DelegateSignature(const class FString& CraftType, int32_t Craft_ID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
