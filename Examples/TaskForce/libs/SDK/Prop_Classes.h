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
	 * BlueprintGeneratedClass Prop.Prop_C
	 * Size -> 0x0120 (FullSize[0x0360] - InheritedSize[0x0240])
	 */
	class AProp_C : public AActor
	{
	public:
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         Mesh;                                                    // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FName, class UMaterialInterface*>               Overrides;                                               // 0x0250(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor
		bool                                                       NoCollision;                                             // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       NoShadow;                                                // 0x02A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VVWY[0x6];                                   // 0x02A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   Scalars;                                                 // 0x02A8(0x0050) Edit, BlueprintVisible, ZeroConstructor
		TMap<class FName, struct FVector>                          Vectors;                                                 // 0x02F8(0x0050) Edit, BlueprintVisible, ZeroConstructor
		class UStaticMesh*                                         DefaultMesh;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceDynamic*>                    DynamicMaterials;                                        // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void OverrideMaterials(bool Dynamic);
		void SetVectorParameters(TArray<class UMaterialInstanceDynamic*>* Materials);
		void SetScalarParameters(TArray<class UMaterialInstanceDynamic*>* Materials);
		void InitializeComponents();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
