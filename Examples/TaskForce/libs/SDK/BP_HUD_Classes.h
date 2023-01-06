#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * BlueprintGeneratedClass BP_HUD.BP_HUD_C
	 * Size -> 0x001C (FullSize[0x0774] - InheritedSize[0x0758])
	 */
	class ABP_HUD_C : public ATaskForceHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0758(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      LoadTime;                                                // 0x0768(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PlayerTextOffset;                                        // 0x076C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PlayerBotCount;                                          // 0x0770(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnFailure_7FB740D746036AAF99AF80B3BF2FE39D(TArray<int64_t> SteamIDs);
		void OnSuccess_7FB740D746036AAF99AF80B3BF2FE39D(TArray<int64_t> SteamIDs);
		void ReceiveBeginPlay();
		void OnVoiceStart();
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void ExecuteUbergraph_BP_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
