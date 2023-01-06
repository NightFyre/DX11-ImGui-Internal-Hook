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
	 * WidgetBlueprintGeneratedClass SIGIS_GamePlay_Statistic_Row.SIGIS_GamePlay_Statistic_Row_C
	 * Size -> 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
	 */
	class USIGIS_GamePlay_Statistic_Row_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UGenericBackground_Widget_C*                         GenericBackground_Widget;                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_StatAmount;                                          // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_StatName;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_StatSymbol;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                GamePlayStatName;                                        // 0x0288(0x0018) Edit, BlueprintVisible
		class FString                                              BackendName;                                             // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		float                                                      StatValue;                                               // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K6E6[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                SuffixMessage;                                           // 0x02B8(0x0018) Edit, BlueprintVisible

	public:
		void PreConstruct(bool IsDesignTime);
		void SetStatValue(float Value);
		void ExecuteUbergraph_SIGIS_GamePlay_Statistic_Row(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
