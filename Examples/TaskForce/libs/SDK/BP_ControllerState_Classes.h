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
	 * BlueprintGeneratedClass BP_ControllerState.BP_ControllerState_C
	 * Size -> 0x0008 (FullSize[0x03E8] - InheritedSize[0x03E0])
	 */
	class ABP_ControllerState_C : public ATaskForcePlayerState
	{
	public:
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetTeam(int32_t* Team);
		void GetSeed(int32_t* Seed);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
