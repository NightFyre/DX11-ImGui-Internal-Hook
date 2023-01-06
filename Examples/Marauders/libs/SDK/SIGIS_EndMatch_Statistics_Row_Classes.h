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
	 * WidgetBlueprintGeneratedClass SIGIS_EndMatch_Statistics_Row.SIGIS_EndMatch_Statistics_Row_C
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class USIGIS_EndMatch_Statistics_Row_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UTextBlock*                                          Txt_StatName;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_StatNumber;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                GamePlayStatName;                                        // 0x0278(0x0018) Edit, BlueprintVisible

	public:
		void Set_StatAmount(const class FText& InText);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_SIGIS_EndMatch_Statistics_Row(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
