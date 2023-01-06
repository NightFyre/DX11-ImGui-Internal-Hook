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
	 * BlueprintGeneratedClass BotPawn.BotPawn_C
	 * Size -> 0x0018 (FullSize[0x0C48] - InheritedSize[0x0C30])
	 */
	class ABotPawn_C : public ARaidBot
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0C38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     HiddenActorComponent;                                    // 0x0C40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void DismemberEvent(const class FName& BoneHit, const struct FVector_NetQuantize& ImpactNorm, class UClass* DamageTypeClass);
		void StartActiveEvent();
		void StartDeactiveEvent();
		void ReceiveBeginPlay();
		void OnProxyHitReact(const struct FHitResult& Impact);
		void ExecuteUbergraph_BotPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
