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
	 * BlueprintGeneratedClass Weap_Knife.Weap_Knife_C
	 * Size -> 0x003C (FullSize[0x0988] - InheritedSize[0x094C])
	 */
	class AWeap_Knife_C : public ARaidWeapon_Instant
	{
	public:
		unsigned char                                              UnknownData_Q53I[0x4];                                   // 0x094C(0x0004) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0950(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBoxComponent*                                       DamageBox;                                               // 0x0958(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                WeaponDataTableName;                                     // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnOffTheIKHands;                                       // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LUBV[0x7];                                   // 0x0969(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       WpnBreakSkelMeshChange;                                  // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WpnBreakParticleToUse;                                   // 0x0978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          WpnBreakSoundToUse;                                      // 0x0980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMeleeWpnSkelMesh(class USkeletalMeshComponent** SkelMesh);
		void StartDamageTrace();
		void StopDamageTrace();
		void BndEvt__DamageBox_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ReceiveBeginPlay();
		void BrokenWeaponEvent();
		void ExecuteUbergraph_Weap_Knife(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
