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
	 * Class AugmentedReality.ARActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AARActor : public AActor
	{
	public:
		class UARComponent* AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UnpinComponent(class USceneComponent* ComponentToUnpin);
		bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);
		void StopARSession();
		void StartARSession(class UARSessionConfig* SessionConfig);
		void SetEnabledXRCamera(bool bOnOff);
		void SetARWorldScale(float InWorldScale);
		void SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
		void SetAlignmentTransform(const struct FTransform& InAlignmentTransform);
		bool SaveARPinToLocalStore(const class FName& InSaveName, class UARPin* InPin);
		struct FIntPoint ResizeXRCamera(const struct FIntPoint& InSize);
		void RemovePin(class UARPin* PinToRemove);
		void RemoveARPinFromLocalStore(const class FName& InSaveName);
		void RemoveAllARPinsFromLocalStore();
		class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const class FName& DebugName);
		bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);
		class UARPin* PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const class FName& DebugName);
		void PauseARSession();
		TMap<class FName, class UARPin*> LoadARPinsFromLocalStore();
		TArray<struct FARTraceResult> LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		TArray<struct FARTraceResult> LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
		bool IsSessionTypeSupported(EARSessionType SessionType);
		bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);
		bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);
		bool IsARSupported();
		bool IsARPinLocalStoreSupported();
		bool IsARPinLocalStoreReady();
		EARWorldMappingState GetWorldMappingStatus();
		EARTrackingQualityReason GetTrackingQualityReason();
		EARTrackingQuality GetTrackingQuality();
		TArray<struct FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);
		class UARSessionConfig* GetSessionConfig();
		TArray<struct FVector> GetPointCloud();
		class UARTexture* GetPersonSegmentationImage();
		class UARTexture* GetPersonSegmentationDepthImage();
		bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff);
		int32_t GetNumberOfTrackedFacesSupported();
		class UARLightEstimate* GetCurrentLightEstimate();
		bool GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics);
		class UARTextureCameraImage* GetCameraImage();
		class UARTextureCameraDepth* GetCameraDepth();
		float GetARWorldScale();
		class UARTexture* GetARTexture(EARTextureType TextureType);
		struct FARSessionStatus GetARSessionStatus();
		TArray<class UARTrackedPose*> GetAllTrackedPoses();
		TArray<class UARTrackedPoint*> GetAllTrackedPoints();
		TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
		TArray<class UARTrackedImage*> GetAllTrackedImages();
		TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
		TArray<struct FARPose2D> GetAllTracked2DPoses();
		TArray<class UARPin*> GetAllPins();
		TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(class UClass* GeometryClass);
		TArray<class UARTrackedGeometry*> GetAllGeometries();
		struct FTransform GetAlignmentTransform();
		TArray<class UARTrackedPoint*> FindTrackedPointsByName(const class FString& PointName);
		void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
		void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		void CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> endpoints, struct FVector* ClosestIntersection);
		void CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform);
		bool AddTrackedPointWithName(const struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName);
		class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth);
		bool AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UARTrackedGeometry* GetTrackedGeometry(const struct FARTraceResult& TraceResult);
		EARLineTraceChannels GetTraceChannel(const struct FARTraceResult& TraceResult);
		struct FTransform GetLocalTransform(const struct FARTraceResult& TraceResult);
		struct FTransform GetLocalToWorldTransform(const struct FARTraceResult& TraceResult);
		struct FTransform GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult);
		float GetDistanceFromCamera(const struct FARTraceResult& TraceResult);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_56G3[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYJ2[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
	 * Size -> 0x0048 (FullSize[0x0098] - InheritedSize[0x0050])
	 */
	class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPJ9[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARComponent
	 * Size -> 0x0088 (FullSize[0x0280] - InheritedSize[0x01F8])
	 */
	class UARComponent : public USceneComponent
	{
	public:
		struct FGuid                                               NativeID;                                                // 0x01F8(0x0010) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36VI[0x30];                                  // 0x0208(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseDefaultReplication;                                  // 0x0238(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BP6V[0x7];                                   // 0x0239(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  DefaultMeshMaterial;                                     // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMRMeshComponent*                                    MRMeshComponent;                                         // 0x0250(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UARTrackedGeometry*                                  MyTrackedGeometry;                                       // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PMV6[0x20];                                  // 0x0260(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateVisualization();
		void SetNativeID(const struct FGuid& NativeID);
		void ReceiveRemove();
		void OnRep_Payload();
		class UMRMeshComponent* GetMRMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPlaneComponent
	 * Size -> 0x0080 (FullSize[0x0300] - InheritedSize[0x0280])
	 */
	class UARPlaneComponent : public UARComponent
	{
	public:
		struct FARPlaneUpdatePayload                               ReplicatedPayload;                                       // 0x0280(0x0080) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);
		void SetObjectClassificationDebugColors(TMap<EARObjectClassification, struct FLinearColor> InColors);
		void ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload);
		void ReceiveAdd(const struct FARPlaneUpdatePayload& Payload);
		TMap<EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPointComponent
	 * Size -> 0x0000 (FullSize[0x0280] - InheritedSize[0x0280])
	 */
	class UARPointComponent : public UARComponent
	{
	public:
		void ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARPointUpdatePayload& Payload);
		void ReceiveAdd(const struct FARPointUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARFaceComponent
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class UARFaceComponent : public UARComponent
	{
	public:
		struct FARFaceUpdatePayload                                ReplicatedPayload;                                       // 0x0280(0x0040) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EPOK[0x20];                                  // 0x02C0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARFaceUpdatePayload& Payload);
		void ReceiveAdd(const struct FARFaceUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARImageComponent
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class UARImageComponent : public UARComponent
	{
	public:
		struct FARImageUpdatePayload                               ReplicatedPayload;                                       // 0x0280(0x0060) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARImageUpdatePayload& Payload);
		void ReceiveAdd(const struct FARImageUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARQRCodeComponent
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class UARQRCodeComponent : public UARComponent
	{
	public:
		struct FARQRCodeUpdatePayload                              ReplicatedPayload;                                       // 0x0280(0x0070) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload);
		void ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPoseComponent
	 * Size -> 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
	 */
	class UARPoseComponent : public UARComponent
	{
	public:
		struct FARPoseUpdatePayload                                ReplicatedPayload;                                       // 0x0280(0x0040) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARPoseUpdatePayload& Payload);
		void ReceiveAdd(const struct FARPoseUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentProbeComponent
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UAREnvironmentProbeComponent : public UARComponent
	{
	public:
		struct FAREnvironmentProbeUpdatePayload                    ReplicatedPayload;                                       // 0x0280(0x0030) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload);
		void ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARObjectComponent
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UARObjectComponent : public UARComponent
	{
	public:
		struct FARObjectUpdatePayload                              ReplicatedPayload;                                       // 0x0280(0x0030) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARObjectUpdatePayload& Payload);
		void ReceiveAdd(const struct FARObjectUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARMeshComponent
	 * Size -> 0x0060 (FullSize[0x02E0] - InheritedSize[0x0280])
	 */
	class UARMeshComponent : public UARComponent
	{
	public:
		struct FARMeshUpdatePayload                                ReplicatedPayload;                                       // 0x0280(0x0060) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARMeshUpdatePayload& Payload);
		void ReceiveAdd(const struct FARMeshUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGeoAnchorComponent
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class UARGeoAnchorComponent : public UARComponent
	{
	public:
		struct FARGeoAnchorUpdatePayload                           ReplicatedPayload;                                       // 0x0280(0x0070) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected

	public:
		void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
		void ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload);
		void ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload);
		void ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARDependencyHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARDependencyHandler : public UObject
	{
	public:
		void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo);
		void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, EARServicePermissionRequestResult* OutPermissionResult);
		void InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceInstallRequestResult* OutInstallResult);
		class UARDependencyHandler* GetARDependencyHandler();
		void CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EARServiceAvailability* OutAvailability);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGeoTrackingSupport
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARGeoTrackingSupport : public UObject
	{
	public:
		class UARGeoTrackingSupport* GetGeoTrackingSupport();
		EARGeoTrackingStateReason GetGeoTrackingStateReason();
		EARGeoTrackingState GetGeoTrackingState();
		EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
		bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName);
		bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EVA[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)

	public:
		void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error);
		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);
		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
	 * Size -> 0x0050 (FullSize[0x00A0] - InheritedSize[0x0050])
	 */
	class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y89K[0x30];                                  // 0x0070(0x0030) MISSED OFFSET (PADDING)

	public:
		void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error);
		class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARLifeCycleComponent
	 * Size -> 0x0038 (FullSize[0x0230] - InheritedSize[0x01F8])
	 */
	class UARLifeCycleComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnARActorSpawnedDelegate;                                // 0x01F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnARActorToBeDestroyedDelegate;                          // 0x0208(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEMJ[0x18];                                  // 0x0218(0x0018) MISSED OFFSET (PADDING)

	public:
		void ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID);
		void ServerDestroyARActor(class AARActor* Actor);
		void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);
		void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARLightEstimate
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARLightEstimate : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARBasicLightEstimate
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UARBasicLightEstimate : public UARLightEstimate
	{
	public:
		float                                                      AmbientIntensityLumens;                                  // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AmbientColorTemperatureKelvin;                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        AmbientColor;                                            // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetAmbientIntensityLumens();
		float GetAmbientColorTemperatureKelvin();
		struct FLinearColor GetAmbientColor();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AROriginActor
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class AAROriginActor : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPin
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UARPin : public UObject
	{
	public:
		class UARTrackedGeometry*                                  TrackedGeometry;                                         // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     PinnedComponent;                                         // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LACH[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x0070(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		EARTrackingState                                           TrackingState;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IE84[0x1F];                                  // 0x00A1(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnARTrackingStateChanged;                                // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnARTransformUpdated;                                    // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VI8U[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)

	public:
		EARTrackingState GetTrackingState();
		class UARTrackedGeometry* GetTrackedGeometry();
		class USceneComponent* GetPinnedComponent();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		class FName GetDebugName();
		void DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSessionConfig
	 * Size -> 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
	 */
	class UARSessionConfig : public UDataAsset
	{
	public:
		bool                                                       bGenerateMeshDataFromTrackedGeometry;                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateCollisionForMeshData;                           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateNavMeshForMeshData;                             // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMeshDataForOcclusion;                                // 0x0033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderMeshDataInWireframe;                              // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTrackSceneObjects;                                      // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePersonSegmentationForOcclusion;                      // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSceneDepthForOcclusion;                              // 0x0037(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAutomaticImageScaleEstimation;                       // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStandardOnboardingUX;                                // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARWorldAlignment                                          WorldAlignment;                                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARSessionType                                             SessionType;                                             // 0x003B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARPlaneDetectionMode                                      PlaneDetectionMode;                                      // 0x003C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHorizontalPlaneDetection;                               // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVerticalPlaneDetection;                                 // 0x003E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutoFocus;                                        // 0x003F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARLightEstimationMode                                     LightEstimationMode;                                     // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFrameSyncMode                                           FrameSyncMode;                                           // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraOverlay;                           // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAutomaticCameraTracking;                          // 0x0043(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetCameraTracking;                                    // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetTrackedObjects;                                    // 0x0045(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_88KR[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UARCandidateImage*>                           CandidateImages;                                         // 0x0048(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    MaxNumSimultaneousImagesTracked;                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAREnvironmentCaptureProbeType                             EnvironmentCaptureProbeType;                             // 0x005C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7QJ8[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      WorldMapData;                                            // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
		TArray<class UARCandidateObject*>                          CandidateObjects;                                        // 0x0070(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FARVideoFormat                                      DesiredVideoFormat;                                      // 0x0080(0x000C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseOptimalVideoFormat;                                  // 0x008C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFaceTrackingDirection                                   FaceTrackingDirection;                                   // 0x008D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARFaceTrackingUpdate                                      FaceTrackingUpdate;                                      // 0x008E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YWV7[0x1];                                   // 0x008F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfTrackedFaces;                                 // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OUVQ[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      SerializedARCandidateImageDatabase;                      // 0x0098(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EARSessionTrackingFeature                                  EnabledSessionTrackingFeature;                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARSceneReconstruction                                     SceneReconstructionMethod;                               // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S8IG[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PlaneComponentClass;                                     // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PointComponentClass;                                     // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              FaceComponentClass;                                      // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ImageComponentClass;                                     // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              QRCodeComponentClass;                                    // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              PoseComponentClass;                                      // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              EnvironmentProbeComponentClass;                          // 0x00E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ObjectComponentClass;                                    // 0x00E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MeshComponentClass;                                      // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              GeoAnchorComponentClass;                                 // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMeshMaterial;                                     // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultWireframeMeshMaterial;                            // 0x0108(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool ShouldResetTrackedObjects();
		bool ShouldResetCameraTracking();
		bool ShouldRenderCameraOverlay();
		bool ShouldEnableCameraTracking();
		bool ShouldEnableAutoFocus();
		void SetWorldMapData(TArray<unsigned char> WorldMapData);
		void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);
		void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);
		void SetResetTrackedObjects(bool bNewValue);
		void SetResetCameraTracking(bool bNewValue);
		void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);
		void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);
		void SetEnableAutoFocus(bool bNewValue);
		void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
		void SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects);
		TArray<unsigned char> GetWorldMapData();
		EARWorldAlignment GetWorldAlignment();
		EARSessionType GetSessionType();
		EARSceneReconstruction GetSceneReconstructionMethod();
		EARPlaneDetectionMode GetPlaneDetectionMode();
		int32_t GetMaxNumSimultaneousImagesTracked();
		EARLightEstimationMode GetLightEstimationMode();
		EARFrameSyncMode GetFrameSyncMode();
		EARFaceTrackingUpdate GetFaceTrackingUpdate();
		EARFaceTrackingDirection GetFaceTrackingDirection();
		EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
		EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
		struct FARVideoFormat GetDesiredVideoFormat();
		TArray<class UARCandidateObject*> GetCandidateObjectList();
		TArray<class UARCandidateImage*> GetCandidateImageList();
		void AddCandidateObject(class UARCandidateObject* CandidateObject);
		void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameMode
	 * Size -> 0x0068 (FullSize[0x0370] - InheritedSize[0x0308])
	 */
	class AARSharedWorldGameMode : public AGameMode
	{
	public:
		int32_t                                                    BufferSizePerChunk;                                      // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1M3M[0x64];                                  // 0x030C(0x0064) MISSED OFFSET (PADDING)

	public:
		void SetPreviewImageData(TArray<unsigned char> ImageData);
		void SetARWorldSharingIsReady();
		void SetARSharedWorldData(TArray<unsigned char> ARWorldData);
		class AARSharedWorldGameState* GetARSharedWorldGameState();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldGameState
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class AARSharedWorldGameState : public AGameState
	{
	public:
		TArray<unsigned char>                                      PreviewImageData;                                        // 0x0290(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ARWorldData;                                             // 0x02A0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PreviewImageBytesTotal;                                  // 0x02B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldBytesTotal;                                       // 0x02B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviewImageBytesDelivered;                              // 0x02B8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ARWorldBytesDelivered;                                   // 0x02BC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQT5[0x8];                                   // 0x02C0(0x0008) MISSED OFFSET (PADDING)

	public:
		void K2_OnARWorldMapIsReady();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSharedWorldPlayerController
	 * Size -> 0x0008 (FullSize[0x0578] - InheritedSize[0x0570])
	 */
	class AARSharedWorldPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_95NK[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (PADDING)

	public:
		void ServerMarkReadyForReceiving();
		void ClientUpdatePreviewImageData(int32_t Offset, TArray<unsigned char> Buffer);
		void ClientUpdateARWorldData(int32_t Offset, TArray<unsigned char> Buffer);
		void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARSkyLight
	 * Size -> 0x0010 (FullSize[0x0240] - InheritedSize[0x0230])
	 */
	class AARSkyLight : public ASkyLight
	{
	public:
		class UAREnvironmentCaptureProbe*                          CaptureProbe;                                            // 0x0230(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QNNI[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTexture
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class UARTexture : public UTexture
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x00D8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9O0[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x00DC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x00F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraImage
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UARTextureCameraImage : public UARTexture
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTextureCameraDepth
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UARTextureCameraDepth : public UARTexture
	{
	public:
		EARDepthQuality                                            DepthQuality;                                            // 0x00F8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EARDepthAccuracy                                           DepthAccuracy;                                           // 0x00F9(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTemporallySmoothed;                                   // 0x00FA(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_89TM[0x5];                                   // 0x00FB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbeTexture
	 * Size -> 0x0020 (FullSize[0x0150] - InheritedSize[0x0130])
	 */
	class UAREnvironmentCaptureProbeTexture : public UTextureCube
	{
	public:
		EARTextureType                                             TextureType;                                             // 0x0130(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WD3H[0x3];                                   // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Timestamp;                                               // 0x0134(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ExternalTextureGuid;                                     // 0x0138(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x0148(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTraceResultDummy
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTraceResultDummy : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedGeometry
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UARTrackedGeometry : public UObject
	{
	public:
		struct FGuid                                               UniqueId;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XG6[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LocalToTrackingTransform;                                // 0x0040(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LocalToAlignedTrackingTransform;                         // 0x0070(0x0030) IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EARTrackingState                                           TrackingState;                                           // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_86Z9[0xF];                                   // 0x00A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    UnderlyingMesh;                                          // 0x00B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARObjectClassification                                    ObjectClassification;                                    // 0x00B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AT8W[0x17];                                  // 0x00B9(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastUpdateFrameNumber;                                   // 0x00D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_36LT[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                DebugName;                                               // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_071D[0x10];                                  // 0x00E8(0x0010) Fix size for supers

	public:
		bool IsTracked();
		class UMRMeshComponent* GetUnderlyingMesh();
		EARTrackingState GetTrackingState();
		EARObjectClassification GetObjectClassification();
		class FString GetName();
		struct FTransform GetLocalToWorldTransform();
		struct FTransform GetLocalToTrackingTransform();
		float GetLastUpdateTimestamp();
		int32_t GetLastUpdateFrameNumber();
		class FName GetDebugName();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARPlaneGeometry
	 * Size -> 0x0038 (FullSize[0x0130] - InheritedSize[0x00F8])
	 */
	class UARPlaneGeometry : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_CS5I[0x4];                                   // 0x00F8(0x0004) Fix Super Size
		struct FVector                                             Center;                                                  // 0x00FC(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Extent;                                                  // 0x0108(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DARS[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector>                                     BoundaryPolygon;                                         // 0x0118(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UARPlaneGeometry*                                    SubsumedBy;                                              // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARPlaneGeometry* GetSubsumedBy();
		EARPlaneOrientation GetOrientation();
		struct FVector GetExtent();
		struct FVector GetCenter();
		TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPoint
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UARTrackedPoint : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_5X5U[0x8];                                   // 0x00F8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedImage
	 * Size -> 0x0010 (FullSize[0x0108] - InheritedSize[0x00F8])
	 */
	class UARTrackedImage : public UARTrackedGeometry
	{
	public:
		class UARCandidateImage*                                   DetectedImage;                                           // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           EstimatedSize;                                           // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector2D GetEstimateSize();
		class UARCandidateImage* GetDetectedImage();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedQRCode
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UARTrackedQRCode : public UARTrackedImage
	{
	public:
		class FString                                              QRCode;                                                  // 0x0108(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0118(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W5YO[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARFaceGeometry
	 * Size -> 0x00F8 (FullSize[0x01F0] - InheritedSize[0x00F8])
	 */
	class UARFaceGeometry : public UARTrackedGeometry
	{
	public:
		struct FVector                                             LookAtTarget;                                            // 0x00F8(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTracked;                                              // 0x0104(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM40[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EARFaceBlendShape, float>                             BlendShapes;                                             // 0x0108(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5IXI[0x38];                                  // 0x0158(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftEyeTransform;                                        // 0x0190(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FTransform                                          RightEyeTransform;                                       // 0x01C0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate

	public:
		struct FTransform GetWorldSpaceEyeTransform(EAREye eye);
		struct FTransform GetLocalSpaceEyeTransform(EAREye eye);
		float GetBlendShapeValue(EARFaceBlendShape BlendShape);
		TMap<EARFaceBlendShape, float> GetBlendShapes();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.AREnvironmentCaptureProbe
	 * Size -> 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
	 */
	class UAREnvironmentCaptureProbe : public UARTrackedGeometry
	{
	public:
		struct FVector                                             Extent;                                                  // 0x00F8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NQ0D[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAREnvironmentCaptureProbeTexture*                   EnvironmentCaptureTexture;                               // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		struct FVector GetExtent();
		class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedObject
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UARTrackedObject : public UARTrackedGeometry
	{
	public:
		class UARCandidateObject*                                  DetectedObject;                                          // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UARCandidateObject* GetDetectedObject();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackedPose
	 * Size -> 0x0058 (FullSize[0x0150] - InheritedSize[0x00F8])
	 */
	class UARTrackedPose : public UARTrackedGeometry
	{
	public:
		struct FARPose3D                                           TrackedPose;                                             // 0x00F8(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FDKU[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FARPose3D GetTrackedPoseData();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARMeshGeometry
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UARMeshGeometry : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_UKGQ[0x8];                                   // 0x00F8(0x0008) Fix Super Size

	public:
		bool GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff);
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARGeoAnchor
	 * Size -> 0x0018 (FullSize[0x0110] - InheritedSize[0x00F8])
	 */
	class UARGeoAnchor : public UARTrackedGeometry
	{
	public:
		unsigned char                                              UnknownData_VU7P[0x8];                                   // 0x00F8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_MPPT[0x10];                                  // 0x0100(0x0010) MISSED OFFSET (PADDING)

	public:
		float GetLongitude();
		float GetLatitude();
		EARAltitudeSource GetAltitudeSource();
		float GetAltitudeMeters();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTrackableNotifyComponent
	 * Size -> 0x0150 (FullSize[0x0200] - InheritedSize[0x00B0])
	 */
	class UARTrackableNotifyComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnAddTrackedGeometry;                                    // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedGeometry;                                 // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedGeometry;                                 // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPlane;                                       // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPlane;                                    // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPlane;                                    // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedPoint;                                       // 0x0110(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedPoint;                                    // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedPoint;                                    // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedImage;                                       // 0x0140(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedImage;                                    // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedImage;                                    // 0x0160(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedFace;                                        // 0x0170(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedFace;                                     // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedFace;                                     // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedEnvProbe;                                    // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedEnvProbe;                                 // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedEnvProbe;                                 // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAddTrackedObject;                                      // 0x01D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUpdateTrackedObject;                                   // 0x01E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemoveTrackedObject;                                   // 0x01F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARTypesDummyClass
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UARTypesDummyClass : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateImage
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UARCandidateImage : public UDataAsset
	{
	public:
		class UTexture2D*                                          CandidateTexture;                                        // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              FriendlyName;                                            // 0x0038(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Width;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Height;                                                  // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EARCandidateImageOrientation                               Orientation;                                             // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J3W0[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		float GetPhysicalWidth();
		float GetPhysicalHeight();
		EARCandidateImageOrientation GetOrientation();
		class FString GetFriendlyName();
		class UTexture2D* GetCandidateTexture();
		static UClass* StaticClass();
	};

	/**
	 * Class AugmentedReality.ARCandidateObject
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UARCandidateObject : public UDataAsset
	{
	public:
		TArray<unsigned char>                                      CandidateObjectData;                                     // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              FriendlyName;                                            // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBox                                                BoundingBox;                                             // 0x0050(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RSZ0[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetFriendlyName(const class FString& NewName);
		void SetCandidateObjectData(TArray<unsigned char> InCandidateObject);
		void SetBoundingBox(const struct FBox& InBoundingBox);
		class FString GetFriendlyName();
		TArray<unsigned char> GetCandidateObjectData();
		struct FBox GetBoundingBox();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
