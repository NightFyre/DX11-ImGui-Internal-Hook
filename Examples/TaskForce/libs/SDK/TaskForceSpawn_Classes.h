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
	 * BlueprintGeneratedClass TaskForceSpawn.TaskForceSpawn_C
	 * Size -> 0x0020 (FullSize[0x0290] - InheritedSize[0x0270])
	 */
	class ATaskForceSpawn_C : public APlayerStart
	{
	public:
		class UBillboardComponent*                                 SpawnSprite;                                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TeamID;                                                  // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MCD7[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETaskForceModes>                                    Modes;                                                   // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
