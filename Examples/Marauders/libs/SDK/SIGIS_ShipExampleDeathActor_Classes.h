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
	 * BlueprintGeneratedClass SIGIS_ShipExampleDeathActor.SIGIS_ShipExampleDeathActor_C
	 * Size -> 0x0010 (FullSize[0x0640] - InheritedSize[0x0630])
	 */
	class ASIGIS_ShipExampleDeathActor_C : public ASIGISDeathActor
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ShipMesh;                                                // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
