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
	 * BlueprintGeneratedClass BP_Ladder.BP_Ladder_C
	 * Size -> 0x0018 (FullSize[0x0260] - InheritedSize[0x0248])
	 */
	class ABP_Ladder_C : public ATriggerBox
	{
	public:
		class UArrowComponent*                                     Spin;                                                    // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     Step;                                                    // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Width;                                                   // 0x0258(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		float                                                      Height;                                                  // 0x025C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void ForceEditor();
		void OnRep_Height();
		void OnRep_Width();
		void ForceUpdate();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
