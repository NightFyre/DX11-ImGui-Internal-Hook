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
	 * WidgetBlueprintGeneratedClass SIGIS_RewardPannel.SIGIS_RewardPannel_C
	 * Size -> 0x0020 (FullSize[0x0280] - InheritedSize[0x0260])
	 */
	class USIGIS_RewardPannel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVerticalBox*                                        VerticalBox_List;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FName>                                        Array_Of_Item_DTRow_Rewards;                             // 0x0270(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Run_LinearMissions_RewardsPannel(const struct FChapterMissionUI& ChapterMissionRewards, TArray<class FName> ArrayOfItemDTRow_Rewards);
		void ExecuteUbergraph_SIGIS_RewardPannel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
