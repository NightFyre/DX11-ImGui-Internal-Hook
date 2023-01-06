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
	 * BlueprintGeneratedClass BP_FindCoverPoint.BP_FindCoverPoint_C
	 * Size -> 0x0088 (FullSize[0x0130] - InheritedSize[0x00A8])
	 */
	class UBP_FindCoverPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              EqsCoverObject;                                          // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              ResultLocation;                                          // 0x00D8(0x0028) Edit, BlueprintVisible
		class UEnvQueryInstanceRaidWrapper*                        CachedQueryInstance;                                     // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              InCoverBB;                                               // 0x0108(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void QueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
		void ExecuteUbergraph_BP_FindCoverPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
