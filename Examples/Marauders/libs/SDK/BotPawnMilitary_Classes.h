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
	 * BlueprintGeneratedClass BotPawnMilitary.BotPawnMilitary_C
	 * Size -> 0x0018 (FullSize[0x0C48] - InheritedSize[0x0C30])
	 */
	class ABotPawnMilitary_C : public ARaidBot
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       NPCWasActivated;                                         // 0x0C38(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S38Y[0x7];                                   // 0x0C39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       NPCController;                                           // 0x0C40(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartActiveEvent();
		void StartDeactiveEvent();
		void DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BotPawnMilitary(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
