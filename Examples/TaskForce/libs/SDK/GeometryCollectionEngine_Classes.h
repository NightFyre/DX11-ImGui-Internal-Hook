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
	 * Class GeometryCollectionEngine.ChaosDestructionListener
	 * Size -> 0x0168 (FullSize[0x0380] - InheritedSize[0x0218])
	 */
	class UChaosDestructionListener : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_POM4[0x4];                                   // 0x0218(0x0004) Fix Super Size
		struct FChaosCollisionEventRequestSettings                 CollisionEventRequestSettings;                           // 0x021C(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosBreakingEventRequestSettings                  BreakingEventRequestSettings;                            // 0x0234(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosTrailingEventRequestSettings                  TrailingEventRequestSettings;                            // 0x024C(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1J5Z[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ChaosSolverActors[0x50];                                 // 0x0268(0x0050) UNKNOWN PROPERTY: SetProperty GeometryCollectionEngine.ChaosDestructionListener.ChaosSolverActors
		unsigned char                                              GeometryCollectionActors[0x50];                          // 0x02B8(0x0050) UNKNOWN PROPERTY: SetProperty GeometryCollectionEngine.ChaosDestructionListener.GeometryCollectionActors
		class FScriptMulticastDelegate                             OnCollisionEvents;                                       // 0x0308(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBreakingEvents;                                        // 0x0318(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTrailingEvents;                                        // 0x0328(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LBVX[0x48];                                  // 0x0338(0x0048) MISSED OFFSET (PADDING)

	public:
		void SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, EChaosTrailingSortMethod SortMethod);
		void SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, EChaosCollisionSortMethod SortMethod);
		void SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, EChaosBreakingSortMethod SortMethod);
		void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
		void SetTrailingEventEnabled(bool bIsEnabled);
		void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
		void SetCollisionEventEnabled(bool bIsEnabled);
		void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
		void SetBreakingEventEnabled(bool bIsEnabled);
		void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
		void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
		bool IsEventListening();
		void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
		void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionActor
	 * Size -> 0x01F0 (FullSize[0x0430] - InheritedSize[0x0240])
	 */
	class AGeometryCollectionActor : public AActor
	{
	public:
		class UGeometryCollectionComponent*                        GeometryCollectionComponent;                             // 0x0240(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGeometryCollectionDebugDrawComponent*               GeometryCollectionDebugDrawComponent;                    // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5M8[0x1E0];                                 // 0x0250(0x01E0) MISSED OFFSET (PADDING)

	public:
		bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionCache
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UGeometryCollectionCache : public UObject
	{
	public:
		struct FRecordedTransformTrack                             RecordedData;                                            // 0x0028(0x0010) NativeAccessSpecifierPrivate
		class UGeometryCollection*                                 SupportedCollection;                                     // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               CompatibleCollectionState;                               // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionComponent
	 * Size -> 0x0400 (FullSize[0x0830] - InheritedSize[0x0430])
	 */
	class UGeometryCollectionComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_6IY0[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6PI[0xE0];                                  // 0x0440(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeometryCollection*                                 RestCollection;                                          // 0x0520(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AFieldSystemActor*>                           InitializationFields;                                    // 0x0528(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic
		bool                                                       Simulating;                                              // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RKBH[0x7];                                   // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EObjectStateTypeEnum                                       ObjectType;                                              // 0x0540(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableClustering;                                        // 0x0541(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QKIR[0x2];                                   // 0x0542(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClusterGroupIndex;                                       // 0x0544(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxClusterLevel;                                         // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFUH[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              DamageThreshold;                                         // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterConnectionType;                                   // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIO4[0x3];                                   // 0x0561(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CollisionGroup;                                          // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionSampleFraction;                                 // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE53[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosPhysicalMaterial*                              PhysicalMaterial;                                        // 0x0570(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialVelocityTypeEnum                                   InitialVelocityType;                                     // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OOZJ[0x3];                                   // 0x0579(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialLinearVelocity;                                   // 0x057C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialAngularVelocity;                                  // 0x0588(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C1HW[0x4];                                   // 0x0594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeomComponentCacheParameters                       CacheParameters;                                         // 0x0598(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyGeometryCollectionPhysicsStateChange;              // 0x05E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyGeometryCollectionPhysicsLoadingStateChange;       // 0x05F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUU6[0x30];                                  // 0x0608(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChaosBreakEvent;                                       // 0x0638(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      DesiredCacheTime;                                        // 0x0648(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CachePlayback;                                           // 0x064C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BNG[0x3];                                   // 0x064D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChaosPhysicsCollision;                                 // 0x0650(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bNotifyBreaks;                                           // 0x0660(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bNotifyCollisions;                                       // 0x0661(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D0Y7[0x1AE];                                 // 0x0662(0x01AE) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          DummyBodySetup;                                          // 0x0810(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9B7G[0x18];                                  // 0x0818(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetNotifyBreaks(bool bNewNotifyBreaks);
		void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
		void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
		void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
		void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		void ApplyKinematicField(float Radius, const struct FVector& Position);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
	 * Size -> 0x00E8 (FullSize[0x0328] - InheritedSize[0x0240])
	 */
	class AGeometryCollectionDebugDrawActor : public AActor
	{
	public:
		struct FGeometryCollectionDebugDrawWarningMessage          WarningMessage;                                          // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q3IX[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryCollectionDebugDrawActorSelectedRigidBody  SelectedRigidBody;                                       // 0x0248(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawWholeCollection;                               // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawHierarchy;                                     // 0x0261(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawClustering;                                    // 0x0262(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryCollectionDebugDrawActorHideGeometry              HideGeometry;                                            // 0x0263(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyId;                                        // 0x0264(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyCollision;                                 // 0x0265(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollisionAtOrigin;                                      // 0x0266(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyTransform;                                 // 0x0267(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyInertia;                                   // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyVelocity;                                  // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyForce;                                     // 0x026A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyInfos;                                     // 0x026B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTransformIndex;                                     // 0x026C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTransform;                                          // 0x026D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowParent;                                             // 0x026E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLevel;                                              // 0x026F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowConnectivityEdges;                                  // 0x0270(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGeometryIndex;                                      // 0x0271(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGeometryTransform;                                  // 0x0272(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBoundingBox;                                        // 0x0273(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFaces;                                              // 0x0274(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFaceIndices;                                        // 0x0275(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFaceNormals;                                        // 0x0276(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSingleFace;                                         // 0x0277(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SingleFaceIndex;                                         // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVertices;                                           // 0x027C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVertexIndices;                                      // 0x027D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVertexNormals;                                      // 0x027E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseActiveVisualization;                                 // 0x027F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointThickness;                                          // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x0284(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTextShadow;                                             // 0x0288(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E95F[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TextScale;                                               // 0x028C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalScale;                                             // 0x0290(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x0294(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrowScale;                                              // 0x0298(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyIdColor;                                        // 0x029C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RigidBodyTransformScale;                                 // 0x02A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyCollisionColor;                                 // 0x02A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyInertiaColor;                                   // 0x02A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyVelocityColor;                                  // 0x02AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyForceColor;                                     // 0x02B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyInfoColor;                                      // 0x02B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              TransformIndexColor;                                     // 0x02B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransformScale;                                          // 0x02BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              LevelColor;                                              // 0x02C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ParentColor;                                             // 0x02C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConnectivityEdgeThickness;                               // 0x02C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              GeometryIndexColor;                                      // 0x02CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeometryTransformScale;                                  // 0x02D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              BoundingBoxColor;                                        // 0x02D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FaceColor;                                               // 0x02D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FaceIndexColor;                                          // 0x02DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FaceNormalColor;                                         // 0x02E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              SingleFaceColor;                                         // 0x02E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexColor;                                             // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexIndexColor;                                        // 0x02EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexNormalColor;                                       // 0x02F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBZM[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x02F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_96CZ[0x28];                                  // 0x0300(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
	 * Size -> 0x0018 (FullSize[0x00F0] - InheritedSize[0x00D8])
	 */
	class UGeometryCollectionDebugDrawComponent : public UActorComponent
	{
	public:
		class AGeometryCollectionDebugDrawActor*                   GeometryCollectionDebugDrawActor;                        // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGeometryCollectionRenderLevelSetActor*              GeometryCollectionRenderLevelSetActor;                   // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WFJ[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollection
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UGeometryCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_E1V2[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		ECollisionTypeEnum                                         CollisionType;                                           // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EImplicitTypeEnum                                          ImplicitType;                                            // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OF9H[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLevelSetResolution;                                   // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelSetResolution;                                   // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinClusterLevelSetResolution;                            // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxClusterLevelSetResolution;                            // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionObjectReductionPercentage;                      // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMassAsDensity;                                          // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUB4[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mass;                                                    // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumMassClamp;                                        // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionParticlesFraction;                              // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumCollisionParticles;                               // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVY9[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGeometryCollectionSizeSpecificData>         SizeSpecificData;                                        // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       EnableRemovePiecesOnFracture;                            // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K6D4[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          RemoveOnFractureMaterials;                               // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               PersistentGuid;                                          // 0x0098(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               StateGuid;                                               // 0x00A8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BoneSelectedMaterialIndex;                               // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5FKK[0x14];                                  // 0x00BC(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
	 * Size -> 0x00A0 (FullSize[0x02E0] - InheritedSize[0x0240])
	 */
	class AGeometryCollectionRenderLevelSetActor : public AActor
	{
	public:
		class UVolumeTexture*                                      TargetVolumeTexture;                                     // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           RayMarchMaterial;                                        // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceTolerance;                                        // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Isovalue;                                                // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0258(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RenderVolumeBoundingBox;                                 // 0x0259(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SAC[0x86];                                  // 0x025A(0x0086) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
	 * Size -> 0x0078 (FullSize[0x0150] - InheritedSize[0x00D8])
	 */
	class USkeletalMeshSimulationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_09X6[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosPhysicalMaterial*                              PhysicalMaterial;                                        // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulating;                                             // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyCollisions;                                       // 0x00F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectStateTypeEnum                                       ObjectType;                                              // 0x00FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSIB[0x1];                                   // 0x00FB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Density;                                                 // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinMass;                                                 // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMass;                                                 // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionTypeEnum                                         CollisionType;                                           // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_559J[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ImplicitShapeParticlesPerUnitArea;                       // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImplicitShapeMinNumParticles;                            // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ImplicitShapeMaxNumParticles;                            // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLevelSetResolution;                                   // 0x0118(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelSetResolution;                                   // 0x011C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionGroup;                                          // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialVelocityTypeEnum                                   InitialVelocityType;                                     // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC3A[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialLinearVelocity;                                   // 0x0128(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialAngularVelocity;                                  // 0x0134(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChaosPhysicsCollision;                                 // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.StaticMeshSimulationComponent
	 * Size -> 0x0088 (FullSize[0x0160] - InheritedSize[0x00D8])
	 */
	class UStaticMeshSimulationComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_OWD3[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Simulating;                                              // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyCollisions;                                       // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EObjectStateTypeEnum                                       ObjectType;                                              // 0x00E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGIO[0x1];                                   // 0x00E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mass;                                                    // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionTypeEnum                                         CollisionType;                                           // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EImplicitTypeEnum                                          ImplicitType;                                            // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZNL[0x2];                                   // 0x00EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinLevelSetResolution;                                   // 0x00EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevelSetResolution;                                   // 0x00F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialVelocityTypeEnum                                   InitialVelocityType;                                     // 0x00F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1OT[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialLinearVelocity;                                   // 0x00F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialAngularVelocity;                                  // 0x0104(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageThreshold;                                         // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WJ98[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosPhysicalMaterial*                              PhysicalMaterial;                                        // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChaosPhysicsCollision;                                 // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K43[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimitiveComponent*>                         SimulatedComponents;                                     // 0x0148(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_49CM[0x8];                                   // 0x0158(0x0008) MISSED OFFSET (PADDING)

	public:
		void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
		void ForceRecreatePhysicsState();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
