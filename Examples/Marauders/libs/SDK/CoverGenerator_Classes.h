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
	 * Class CoverGenerator.CoverActor
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ACoverActor : public AActor
	{
	public:
		bool                                                       bLeftCoverStanding;                                      // 0x0220(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRightCoverStanding;                                     // 0x0221(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeftCoverCrouched;                                      // 0x0222(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRightCoverCrouched;                                     // 0x0223(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFrontCoverCrouched;                                     // 0x0224(0x0001) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3EN4[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.CoverGenerator
	 * Size -> 0x00A8 (FullSize[0x02C8] - InheritedSize[0x0220])
	 */
	class ACoverGenerator : public AActor
	{
	public:
		bool                                                       ForceRefresh;                                            // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRegenerateAtBeginPlay;                                  // 0x0221(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRegenerateAtNavigationRebuilt;                          // 0x0222(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AQ6C[0x1];                                   // 0x0223(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SegmentLength;                                           // 0x0224(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSegDist;                                              // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CharHeight;                                              // 0x022C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StepDistTrace;                                           // 0x0230(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TraceLength;                                             // 0x0234(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSpaceBetweenValidPoints;                              // 0x0238(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SphereSize;                                              // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WidthMaxAgent;                                           // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeightMaxCrouching;                                      // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HeightMaxStanding;                                       // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OffsetWhenLeaningSides;                                  // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OffsetFrontAim;                                          // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    totalOfPointsGenerated;                                  // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDraw1AllSegmentPointsTested;                            // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDraw2SegmentPointsWithinBounds;                         // 0x0259(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDraw3SimpleCoverGeometryTest;                           // 0x025A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDraw4SecondPassTracesSides;                             // 0x025B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDraw4SecondPassTracesSidesFrontAndBottom;               // 0x025C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDraw5SecondPassArrows;                                  // 0x025D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugDrawAllPoints;                                      // 0x025E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugDrawAllBusyPoints;                                  // 0x025F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugDisplayLog;                                         // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XH6Z[0x3];                                   // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugDistance;                                           // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawOctreeBounds;                                       // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WF62[0xF];                                   // 0x0269(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBoxComponent*>                               AllCoverGenVolumes;                                      // 0x0278(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UCoverPoint*>                                 CoverPointsCurrentlyUsed;                                // 0x0288(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4DRE[0x8];                                   // 0x0298(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverPoint*>                                 AllCoverPoints;                                          // 0x02A0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<struct FCoverConverter>                             AllCoverPointsSaved;                                     // 0x02B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OO5N[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void ReleaseCover(class UCoverPoint* CoverPoint);
		void OnNavigationGenerationFinished(class ANavigationData* NavData);
		bool OccupyCover(class UCoverPoint* CoverPoint, class AController* Controller);
		bool IsFreeCoverPoint(class UCoverPoint* CoverPoint);
		TArray<class UCoverPoint*> GetCoverWithinBox(const struct FBox& BoxIn);
		class ACoverGenerator* GetCoverGenerator(class UObject* WorldContextObject);
		bool CoverExistWithinBox(const struct FBox& BoxIn);
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.CoverPoint
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCoverPoint : public UObject
	{
	public:
		struct FVector                                             Location;                                                // 0x0028(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             _DirectionToWall;                                        // 0x0034(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotatorXToWall;                                          // 0x0040(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLeftCoverStanding;                                      // 0x004C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRightCoverStanding;                                     // 0x004D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLeftCoverCrouched;                                      // 0x004E(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRightCoverCrouched;                                     // 0x004F(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFrontCoverCrouched;                                     // 0x0050(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrouchedCover;                                          // 0x0051(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0KM[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryGenerator_CoverFMemory
	 * Size -> 0x0078 (FullSize[0x00C8] - InheritedSize[0x0050])
	 */
	class UEnvQueryGenerator_CoverFMemory : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderFloatValue                           SquareExtent;                                            // 0x0050(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           BoxHeight;                                               // 0x0088(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UClass*                                              GenerateAround;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryInstanceRaidWrapper
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UEnvQueryInstanceRaidWrapper : public UEnvQueryInstanceBlueprintWrapper
	{
	public:
		TArray<class UCoverPoint*> GetResultsAsCoverPoints();
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryItemType_Cover
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_Cover : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_CoverPointFree
	 * Size -> 0x0000 (FullSize[0x01F8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_CoverPointFree : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_IsContextShootableFromCoverPoint
	 * Size -> 0x0008 (FullSize[0x0200] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_IsContextShootableFromCoverPoint : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_IsCoverPosition
	 * Size -> 0x00E0 (FullSize[0x02D8] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_IsCoverPosition : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x01F8(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ContextHorizontalDistanceOffset;                         // 0x0230(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ContextVerticalDistanceOffset;                           // 0x0268(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FAIDataProviderBoolValue                            DebugData;                                               // 0x02A0(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_ParallelToCoverDirection
	 * Size -> 0x0040 (FullSize[0x0238] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_ParallelToCoverDirection : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           MaxEpsilon;                                              // 0x0200(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoverGenerator.EnvQueryTest_TraceDistance
	 * Size -> 0x00A8 (FullSize[0x02A0] - InheritedSize[0x01F8])
	 */
	class UEnvQueryTest_TraceDistance : public UEnvQueryTest
	{
	public:
		struct FEnvTraceData                                       TraceData;                                               // 0x01F8(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              Context;                                                 // 0x0228(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           MaxTraceDistance;                                        // 0x0230(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           VerticalOffset;                                          // 0x0268(0x0038) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
