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
	 * BlueprintGeneratedClass BotPawnGuard.BotPawnGuard_C
	 * Size -> 0x0011 (FullSize[0x0C41] - InheritedSize[0x0C30])
	 */
	class ABotPawnGuard_C : public ARaidBot
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AAIController*                                       NPCController;                                           // 0x0C38(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NPCWasActivated;                                         // 0x0C40(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ReceiveTick(float DeltaSeconds);
		void DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass);
		void StartActiveEvent();
		void StartDeactiveEvent();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BotPawnGuard(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
