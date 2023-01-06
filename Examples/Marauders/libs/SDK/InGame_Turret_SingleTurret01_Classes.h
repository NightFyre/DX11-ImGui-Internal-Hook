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
	 * BlueprintGeneratedClass InGame_Turret_SingleTurret01.InGame_Turret_SingleTurret01_C
	 * Size -> 0x0020 (FullSize[0x0478] - InheritedSize[0x0458])
	 */
	class AInGame_Turret_SingleTurret01_C : public ATurret_LargeTurret01_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0458(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPointLightComponent*                                Light_Shooting01;                                        // 0x0460(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_LightStrength_AA67D2D247F2DFC2A55E6780F00666A3; // 0x0468(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_AA67D2D247F2DFC2A55E6780F00666A3;  // 0x046C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z6EY[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveBeginPlay();
		void FiredTurrentEvent(int32_t SocketArrayNum);
		void ExecuteUbergraph_InGame_Turret_SingleTurret01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
