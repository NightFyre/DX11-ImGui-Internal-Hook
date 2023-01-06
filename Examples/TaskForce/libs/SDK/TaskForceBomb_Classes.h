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
	 * BlueprintGeneratedClass TaskForceBomb.TaskForceBomb_C
	 * Size -> 0x0070 (FullSize[0x02B0] - InheritedSize[0x0240])
	 */
	class ATaskForceBomb_C : public AActor
	{
	public:
		class UBillboardComponent*                                 BombSprite;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                BombMesh;                                                // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTaskForceIcon                                      Icon;                                                    // 0x0250(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Mesh;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CustomAttachment;                                        // 0x0270(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ETaskForceBone                                             AttachBone;                                              // 0x0271(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash
		unsigned char                                              UnknownData_1KWQ[0xE];                                   // 0x0272(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          AttachTransform;                                         // 0x0280(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
