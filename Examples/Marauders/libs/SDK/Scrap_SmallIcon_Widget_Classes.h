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
	 * WidgetBlueprintGeneratedClass Scrap_SmallIcon_Widget.Scrap_SmallIcon_Widget_C
	 * Size -> 0x002C (FullSize[0x028C] - InheritedSize[0x0260])
	 */
	class UScrap_SmallIcon_Widget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              img_ScrapRewardIcon;                                     // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_scrapRewardChance;                                   // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_scrapRewardName;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FScrapItemRNG                                       ScrapItemName;                                           // 0x0280(0x000C) Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn

	public:
		void OnLoaded_5FCAA87D42375C106FB93AAF652D6513(class UObject* Loaded);
		void Construct();
		void ExecuteUbergraph_Scrap_SmallIcon_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
