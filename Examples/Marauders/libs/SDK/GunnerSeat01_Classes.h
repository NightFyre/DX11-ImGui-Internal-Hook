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
	 * BlueprintGeneratedClass GunnerSeat01.GunnerSeat01_C
	 * Size -> 0x0064 (FullSize[0x0284] - InheritedSize[0x0220])
	 */
	class AGunnerSeat01_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPointLightComponent*                                PointLight;                                              // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow_Rear;                                              // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow_Left;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow_Right;                                             // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_5DBB4DB94DE3A3833E605CB50496D95C;  // 0x0260(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_5DBB4DB94DE3A3833E605CB50496D95C;  // 0x0264(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_SL2V[0x3];                                   // 0x0265(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_IsInUse;                                               // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E7WK[0x7];                                   // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerPawn_C*                                       Ref_TempPlayer;                                          // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightsDefaultIntensity;                                  // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnNotifyEnd_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName);
		void OnNotifyBegin_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName);
		void OnInterrupted_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName);
		void OnBlendOut_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName);
		void OnCompleted_38F1C74B409C46FCBA27488DC1958AD7(const class FName& NotifyName);
		void OnNotifyEnd_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName);
		void OnNotifyBegin_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName);
		void OnInterrupted_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName);
		void OnBlendOut_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName);
		void OnCompleted_3377FEE444454B6BC151EBAF86399E05(const class FName& NotifyName);
		void ReceiveBeginPlay();
		void Trigger_GunnerSeat();
		void ReceiveTick(float DeltaSeconds);
		void LightFadeIn();
		void LightFadeOut();
		void ExecuteUbergraph_GunnerSeat01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
