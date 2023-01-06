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
	 * BlueprintGeneratedClass PilotSeat.PilotSeat_C
	 * Size -> 0x0079 (FullSize[0x0299] - InheritedSize[0x0220])
	 */
	class APilotSeat_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0220(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPointLightComponent*                                PointLight1;                                             // 0x0228(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget_PilotScreen;                                      // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow_Left;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow_Rear;                                              // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UArrowComponent*                                     Arrow_Right;                                             // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_Shell;                                                // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_E88404FB46CEFD69EECFFAACA4B2CA17;  // 0x0278(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_E88404FB46CEFD69EECFFAACA4B2CA17;  // 0x027C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_9ODP[0x3];                                   // 0x027D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightsDefaultIntensity;                                  // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KS60[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerPawn_C*                                       Ref_TempPlayer;                                          // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       b_IsInUse;                                               // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void OnNotifyEnd_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName);
		void OnNotifyBegin_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName);
		void OnInterrupted_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName);
		void OnBlendOut_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName);
		void OnCompleted_6FF6875B47FBF07F66BFCBA3D67FBD06(const class FName& NotifyName);
		void OnNotifyEnd_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName);
		void OnNotifyBegin_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName);
		void OnInterrupted_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName);
		void OnBlendOut_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName);
		void OnCompleted_C233401344CFE3954880C4841B30EAA4(const class FName& NotifyName);
		void Reset_CinematicPilotChair();
		void ReceiveBeginPlay();
		void Trigger_CinematicPilotChair();
		void ReceiveTick(float DeltaSeconds);
		void LightFadeIn();
		void LightFadeOut();
		void ExecuteUbergraph_PilotSeat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
