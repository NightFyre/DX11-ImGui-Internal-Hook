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
	 * Class Niagara.NiagaraDataInterface
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
	{
	public:
		unsigned char                                              UnknownData_DQTD[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraTrack
	 * Size -> 0x0010 (FullSize[0x0088] - InheritedSize[0x0078])
	 */
	class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
	{
	public:
		TArray<class UMovieSceneSection*>                          Sections;                                                // 0x0078(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraParameterTrack
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
	{
	public:
		struct FNiagaraVariable                                    Parameter;                                               // 0x0088(0x0020) HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraBoolParameterTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_UJPB[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraColorParameterTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_R4EY[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraFloatParameterTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_DJQX[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraIntegerParameterTrack
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_CUBK[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraSystemSpawnSection
	 * Size -> 0x0010 (FullSize[0x00F8] - InheritedSize[0x00E8])
	 */
	class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
	{
	public:
		ENiagaraSystemSpawnSectionStartBehavior                    SectionStartBehavior;                                    // 0x00E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZD6F[0x3];                                   // 0x00E9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEvaluateBehavior                 SectionEvaluateBehavior;                                 // 0x00EC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TC81[0x3];                                   // 0x00ED(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraSystemSpawnSectionEndBehavior                      SectionEndBehavior;                                      // 0x00F0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XUM2[0x3];                                   // 0x00F1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraAgeUpdateMode                                      AgeUpdateMode;                                           // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y0BG[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraSystemTrack
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
	{
	public:
		unsigned char                                              UnknownData_C17N[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.MovieSceneNiagaraVectorParameterTrack
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
	{
	public:
		unsigned char                                              UnknownData_9HCR[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChannelsUsed;                                            // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_723W[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraActor
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class ANiagaraActor : public AActor
	{
	public:
		class UNiagaraComponent*                                   NiagaraComponent;                                        // 0x0220(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bDestroyOnSystemFinish : 1;                              // 0x0228(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JMAG[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
		void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponent
	 * Size -> 0x01B0 (FullSize[0x05F0] - InheritedSize[0x0440])
	 */
	class UNiagaraComponent : public UFXSystemComponent
	{
	public:
		class UNiagaraSystem*                                      Asset;                                                   // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ENiagaraTickBehavior                                       TickBehavior;                                            // 0x0448(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XGJD[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserRedirectionParameterStore               OverrideParameters;                                      // 0x0450(0x00C8) NativeAccessSpecifierPrivate
		unsigned char                                              bForceSolo : 1;                                          // 0x0518(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bEnableGpuComputeDebug : 1;                              // 0x0518(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0CPQ[0x2B];                                  // 0x0519(0x002B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAutoDestroy : 1;                                        // 0x0544(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bRenderingEnabled : 1;                                   // 0x0544(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAutoManageAttachment : 1;                               // 0x0544(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAutoAttachWeldSimulatedBodies : 1;                      // 0x0544(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J7ZI[0x3];                                   // 0x0545(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTimeBeforeForceUpdateTransform;                       // 0x0548(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RBB0[0x4];                                   // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraMaterialOverride>                    EmitterMaterials;                                        // 0x0550(0x0010) ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PRT[0x8];                                   // 0x0560(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSystemFinished;                                        // 0x0568(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      AutoAttachParent;                                        // 0x0578(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AutoAttachSocketName;                                    // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachLocationRule;                                  // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachRotationRule;                                  // 0x0589(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttachmentRule                                            AutoAttachScaleRule;                                     // 0x058A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0V4J[0x65];                                  // 0x058B(0x0065) MISSED OFFSET (PADDING)

	public:
		void SetVariableVec4(const class FName& InVariableName, const struct FVector4& InValue);
		void SetVariableVec3(const class FName& InVariableName, const struct FVector& InValue);
		void SetVariableVec2(const class FName& InVariableName, const struct FVector2D& InValue);
		void SetVariableTextureRenderTarget(const class FName& InVariableName, class UTextureRenderTarget* TextureRenderTarget);
		void SetVariableQuat(const class FName& InVariableName, const struct FQuat& InValue);
		void SetVariableObject(const class FName& InVariableName, class UObject* Object);
		void SetVariableMaterial(const class FName& InVariableName, class UMaterialInterface* Object);
		void SetVariableLinearColor(const class FName& InVariableName, const struct FLinearColor& InValue);
		void SetVariableInt(const class FName& InVariableName, int32_t InValue);
		void SetVariableFloat(const class FName& InVariableName, float InValue);
		void SetVariableBool(const class FName& InVariableName, bool InValue);
		void SetVariableActor(const class FName& InVariableName, class AActor* Actor);
		void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
		void SetSeekDelta(float InSeekDelta);
		void SetRenderingEnabled(bool bInRenderingEnabled);
		void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
		void SetPaused(bool bInPaused);
		void SetNiagaraVariableVec4(const class FString& InVariableName, const struct FVector4& InValue);
		void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
		void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
		void SetNiagaraVariableQuat(const class FString& InVariableName, const struct FQuat& InValue);
		void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
		void SetNiagaraVariableLinearColor(const class FString& InVariableName, const struct FLinearColor& InValue);
		void SetNiagaraVariableInt(const class FString& InVariableName, int32_t InValue);
		void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
		void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
		void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
		void SetMaxSimTime(float InMaxTime);
		void SetGpuComputeDebug(bool bEnableDebug);
		void SetForceSolo(bool bInForceSolo);
		void SetDesiredAge(float InDesiredAge);
		void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
		void SetAutoDestroy(bool bInAutoDestroy);
		void SetAsset(class UNiagaraSystem* InAsset);
		void SetAllowScalability(bool bAllow);
		void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
		void SeekToDesiredAge(float InDesiredAge);
		void ResetSystem();
		void ReinitializeSystem();
		bool IsPaused();
		ENiagaraTickBehavior GetTickBehavior();
		float GetSeekDelta();
		bool GetPreviewLODDistanceEnabled();
		int32_t GetPreviewLODDistance();
		TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
		TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
		TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
		float GetMaxSimTime();
		bool GetForceSolo();
		float GetDesiredAge();
		class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
		class UNiagaraSystem* GetAsset();
		ENiagaraAgeUpdateMode GetAgeUpdateMode();
		void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
		void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentPool
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UNiagaraComponentPool : public UObject
	{
	public:
		TMap<class UNiagaraSystem*, struct FNCPool>                WorldParticleSystemPools;                                // 0x0028(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U7SR[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRendererProperties
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UNiagaraRendererProperties : public UNiagaraMergeable
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0028(0x0030) Edit, NativeAccessSpecifierPublic
		int32_t                                                    SortOrderHint;                                           // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMotionBlurEnabled;                                      // 0x005D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7F2[0x22];                                  // 0x005E(0x0022) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentRendererProperties
	 * Size -> 0x00E0 (FullSize[0x0160] - InheritedSize[0x0080])
	 */
	class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UClass*                                              ComponentType;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ComponentCountLimit;                                     // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UQW[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    EnabledBinding;                                          // 0x0090(0x0058) Edit, NativeAccessSpecifierPublic
		bool                                                       bAssignComponentsOnParticleID;                           // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyCreateComponentsOnParticleSpawn;                    // 0x00E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_484M[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TemplateComponent;                                       // 0x00F0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraComponentPropertyBinding>            PropertyBindings;                                        // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0XM[0x58];                                  // 0x0108(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraComponentSettings
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UNiagaraComponentSettings : public UObject
	{
	public:
		unsigned char                                              SuppressActivationList[0x50];                            // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ForceAutoPooolingList[0x50];                             // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              SuppressEmitterList[0x50];                               // 0x00C8(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraConvertInPlaceUtilityBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraConvertInPlaceUtilityBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterface2DArrayTexture
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture2DArray*                                     Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArray
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_0SQF[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxElements;                                             // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTA1[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<float>                                              FloatData;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat2
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector2D>                                   FloatData;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat3
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector>                                     FloatData;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFloat4
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FVector4>                                    FloatData;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayColor
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FLinearColor>                                ColorData;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayQuat
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<struct FQuat>                                       QuatData;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector4> ArrayData);
		void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector2D> ArrayData);
		void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FVector> ArrayData);
		void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FQuat> ArrayData);
		void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<int32_t> ArrayData);
		void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<float> ArrayData);
		void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<struct FLinearColor> ArrayData);
		void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName, TArray<bool> ArrayData);
		TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, const class FName& OverrideName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayInt32
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<int32_t>                                            IntData;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceArrayBool
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
	{
	public:
		TArray<bool>                                               BoolData;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioSubmix
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioOscilloscope
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
	{
	public:
		class USoundSubmix*                                        Submix;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Resolution;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScopeInMilliseconds;                                     // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioPlayer
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   Attenuation;                                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundConcurrency*                                   Concurrency;                                             // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ParameterNames;                                          // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLimitPlaysPerTick;                                      // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ON5Z[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxPlaysPerTick;                                         // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopWhenComponentIsDestroyed;                           // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I06[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceAudioSpectrum
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
	{
	public:
		int32_t                                                    Resolution;                                              // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumFrequency;                                        // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumFrequency;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoiseFloorDb;                                            // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCamera
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
	{
	public:
		int32_t                                                    PlayerControllerIndex;                                   // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAKS[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCollisionQuery
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              UnknownData_OD87[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurveBase
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
	{
	public:
		TArray<float>                                              ShaderLUT;                                               // 0x0038(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      LUTMinTime;                                              // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTMaxTime;                                              // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTInvTimeRange;                                         // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LUTNumSamplesMinusOne;                                   // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bUseLUT : 1;                                             // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExposeCurve : 1;                                        // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SI1A[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ExposedName;                                             // 0x005C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU31[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          ExposedTexture;                                          // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceColorCurve
	 * Size -> 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          RedCurve;                                                // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          GreenCurve;                                              // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          BlueCurve;                                               // 0x0170(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          AlphaCurve;                                              // 0x01F0(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurlNoise
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
	{
	public:
		uint32_t                                                   Seed;                                                    // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLPC[0xC];                                   // 0x003C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceCurve
	 * Size -> 0x0080 (FullSize[0x00F0] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          Curve;                                                   // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParticleCallbackHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraParticleCallbackHandler : public UInterface
	{
	public:
		void ReceiveParticleData(TArray<struct FBasicParticleData> Data, class UNiagaraSystem* NiagaraSystem);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceExport
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraUserParameterBinding                        CallbackHandlerParameter;                                // 0x0038(0x0020) Edit, NativeAccessSpecifierPublic
		ENDIExport_GPUAllocationMode                               GPUAllocationMode;                                       // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_355Q[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GPUAllocationFixedSize;                                  // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GPUAllocationPerParticleSize;                            // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8EW[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGBuffer
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRWBase
	 * Size -> 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
	{
	public:
		unsigned char                                              OutputShaderStages[0x50];                                // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              IterationShaderStages[0x50];                             // 0x0088(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2D
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		int32_t                                                    NumCellsX;                                               // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsY;                                               // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsMaxAxis;                                         // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAttributes;                                           // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetGridFromMaxAxis;                                      // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BCF[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           WorldBBoxSize;                                           // 0x00EC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0EL[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2DCollection
	 * Size -> 0x00C8 (FullSize[0x01C0] - InheritedSize[0x00F8])
	 */
	class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
	{
	public:
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00F8(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    OverrideBufferFormat;                                    // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x0119(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOPE[0x56];                                  // 0x011A(0x0056) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<uint64_t, class UTextureRenderTarget2DArray*>         ManagedRenderTargets;                                    // 0x0170(0x0050) Transient, Protected, NativeAccessSpecifierProtected

	public:
		void GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY);
		void GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY);
		bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);
		bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t* TilesX, int32_t* TilesY);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
	 * Size -> 0x0070 (FullSize[0x0168] - InheritedSize[0x00F8])
	 */
	class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
	{
	public:
		class FString                                              EmitterName;                                             // 0x00F8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DIName;                                                  // 0x0108(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPGR[0x50];                                  // 0x0118(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3D
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          NumCells;                                                // 0x00D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumCellsMaxAxis;                                         // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESetResolutionMethod                                       SetResolutionMethod;                                     // 0x00EC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1V9D[0x3];                                   // 0x00ED(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             WorldBBoxSize;                                           // 0x00F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJ9O[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceGrid3DCollection
	 * Size -> 0x0080 (FullSize[0x0180] - InheritedSize[0x0100])
	 */
	class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
	{
	public:
		int32_t                                                    NumAttributes;                                           // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NKLV[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x0108(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    BufferFormat;                                            // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6L1[0x57];                                  // 0x0129(0x0057) MISSED OFFSET (PADDING)

	public:
		void GetTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ);
		void GetRawTextureSize(class UNiagaraComponent* Component, int32_t* SizeX, int32_t* SizeY, int32_t* SizeZ);
		bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);
		bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t* TilesX, int32_t* TilesY, int32_t* TileZ);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceLandscape
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
	{
	public:
		class AActor*                                              SourceLandscape;                                         // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceNeighborGrid3D
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
	{
	public:
		uint32_t                                                   MaxNeighborsPerCell;                                     // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCS1[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceOcclusion
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceParticleRead
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
	{
	public:
		class FString                                              EmitterName;                                             // 0x00D8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfacePlatformSet
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
	{
	public:
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x0038(0x0030) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTarget2D
	 * Size -> 0x0080 (FullSize[0x0158] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntPoint                                           Size;                                                    // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00E1(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ERD[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00E8(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTarget2D*>              ManagedRenderTargets;                                    // 0x0108(0x0050) Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
	 * Size -> 0x0080 (FullSize[0x0158] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          Size;                                                    // 0x00D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00E5(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5PV[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00E8(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTarget2DArray*>         ManagedRenderTargets;                                    // 0x0108(0x0050) Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceRenderTargetVolume
	 * Size -> 0x0080 (FullSize[0x0158] - InheritedSize[0x00D8])
	 */
	class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
	{
	public:
		struct FIntVector                                          Size;                                                    // 0x00D8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 OverrideRenderTargetFormat;                              // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideFormat : 1;                                     // 0x00E5(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08IP[0x2];                                   // 0x00E6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        RenderTargetUserParameter;                               // 0x00E8(0x0020) Edit, NativeAccessSpecifierPublic
		TMap<uint64_t, class UTextureRenderTargetVolume*>          ManagedRenderTargets;                                    // 0x0108(0x0050) Transient, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSimpleCounter
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSkeletalMesh
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
	{
	public:
		ENDISkeletalMesh_SourceMode                                SourceMode;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0O1I[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Source;                                                  // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        MeshUserParameter;                                       // 0x0048(0x0020) Edit, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SourceComponent;                                         // 0x0068(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENDISkeletalMesh_SkinningMode                              SkinningMode;                                            // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0L4B[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SamplingRegions;                                         // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    WholeMeshLOD;                                            // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYWV[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FilteredBones;                                           // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        FilteredSockets;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ExcludeBoneName;                                         // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bExcludeBone : 1;                                        // 0x00B8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABIR[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceSpline
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
	{
	public:
		class AActor*                                              Source;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceStaticMesh
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
	{
	public:
		ENDIStaticMesh_SourceMode                                  SourceMode;                                              // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCLZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         DefaultMesh;                                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Source;                                                  // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                SourceComponent;                                         // 0x0050(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNDIStaticMeshSectionFilter                         SectionFilter;                                           // 0x0058(0x0010) Edit, NativeAccessSpecifierPublic
		bool                                                       bUsePhysicsBodyVelocity;                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QH8O[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        FilteredSockets;                                         // 0x0070(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UP7Q[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceTexture
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
	{
	public:
		class UTexture*                                            Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVector2DCurve
	 * Size -> 0x0100 (FullSize[0x0170] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVector4Curve
	 * Size -> 0x0200 (FullSize[0x0270] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          ZCurve;                                                  // 0x0170(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          WCurve;                                                  // 0x01F0(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVectorCurve
	 * Size -> 0x0180 (FullSize[0x01F0] - InheritedSize[0x0070])
	 */
	class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
	{
	public:
		struct FRichCurve                                          XCurve;                                                  // 0x0070(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          YCurve;                                                  // 0x00F0(0x0080) Edit, NativeAccessSpecifierPublic
		struct FRichCurve                                          ZCurve;                                                  // 0x0170(0x0080) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVectorField
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
	{
	public:
		class UVectorField*                                        Field;                                                   // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileX;                                                  // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileY;                                                  // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTileZ;                                                  // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_844M[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraDataInterfaceVolumeTexture
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
	{
	public:
		class UVolumeTexture*                                      Texture;                                                 // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEditorDataBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraEditorDataBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSignificanceHandler : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandlerDistance
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSignificanceHandlerAge
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEffectType
	 * Size -> 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
	 */
	class UNiagaraEffectType : public UObject
	{
	public:
		ENiagaraScalabilityUpdateFrequency                         UpdateFrequency;                                         // 0x0028(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E8Q[0x3];                                   // 0x0029(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ENiagaraCullReaction                                       CullReaction;                                            // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_422E[0x3];                                   // 0x002D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class UNiagaraSignificanceHandler*                         SignificanceHandler;                                     // 0x0030(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraSystemScalabilitySettings>           DetailLevelScalabilitySettings;                          // 0x0038(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		struct FNiagaraSystemScalabilitySettingsArray              SystemScalabilitySettings;                               // 0x0048(0x0010) Edit, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScalabilitySettingsArray             EmitterScalabilitySettings;                              // 0x0058(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYWS[0xA8];                                  // 0x0068(0x00A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEmitter
	 * Size -> 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
	 */
	class UNiagaraEmitter : public UObject
	{
	public:
		bool                                                       bLocalSpace;                                             // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeterminism;                                            // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KE9P[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RandomSeed;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EParticleAllocationMode                                    AllocationMode;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRRQ[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PreAllocationCount;                                      // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScriptProperties                     UpdateScriptProps;                                       // 0x0038(0x0028) NativeAccessSpecifierPublic
		struct FNiagaraEmitterScriptProperties                     SpawnScriptProps;                                        // 0x0060(0x0028) NativeAccessSpecifierPublic
		ENiagaraSimTarget                                          SimTarget;                                               // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DT0Z[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                FixedBounds;                                             // 0x008C(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinDetailLevel;                                          // 0x00A8(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDetailLevel;                                          // 0x00AC(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraDetailsLevelScaleOverrides                  GlobalSpawnCountScaleOverrides;                          // 0x00B0(0x0014) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TE1T[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraPlatformSet                                 Platforms;                                               // 0x00C8(0x0030) Edit, NativeAccessSpecifierPublic
		struct FNiagaraEmitterScalabilityOverrides                 ScalabilityOverrides;                                    // 0x00F8(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              bInterpolatedSpawning : 1;                               // 0x0108(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedBounds : 1;                                        // 0x0108(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMinDetailLevel : 1;                                  // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseMaxDetailLevel : 1;                                  // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverrideGlobalSpawnCountScale : 1;                      // 0x0108(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRequiresPersistentIDs : 1;                              // 0x0108(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCombineEventSpawn : 1;                                  // 0x0108(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEQH[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDeltaTimePerTick;                                     // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DefaultShaderStageIndex;                                 // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaxUpdateIterations;                                     // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpawnStages[0x50];                                       // 0x0118(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              bSimulationStagesEnabled : 1;                            // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDeprecatedShaderStagesEnabled : 1;                      // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bLimitDeltaTime : 1;                                     // 0x0168(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SKCM[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueEmitterName;                                       // 0x0170(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UNiagaraRendererProperties*>                  RendererProperties;                                      // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraEventScriptProperties>               EventHandlerScriptProps;                                 // 0x0190(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UNiagaraSimulationStageBase*>                 SimulationStages;                                        // 0x01A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UNiagaraScript*                                      GPUComputeScript;                                        // 0x01B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FName>                                        SharedEventGeneratorIds;                                 // 0x01B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JS86[0xD8];                                  // 0x01C8(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEventReceiverEmitterAction
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraEventReceiverEmitterAction : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
	{
	public:
		uint32_t                                                   NumParticles;                                            // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0GH[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, const class FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
		class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
		void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
		void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
		void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName> SamplingRegions);
		void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
		void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
		void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
		class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraLightRendererProperties
	 * Size -> 0x0258 (FullSize[0x02D8] - InheritedSize[0x0080])
	 */
	class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
	{
	public:
		unsigned char                                              bUseInverseSquaredFalloff : 1;                           // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAffectsTranslucency : 1;                                // 0x0080(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04KW[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusScale;                                             // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ColorAdd;                                                // 0x0088(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DA88[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    LightRenderingEnabledBinding;                            // 0x0098(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    LightExponentBinding;                                    // 0x00F0(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0148(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x01A0(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RadiusBinding;                                           // 0x01F8(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VolumetricScatteringBinding;                             // 0x0250(0x0058) Edit, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVZN[0x30];                                  // 0x02A8(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraMeshRendererProperties
	 * Size -> 0x05F8 (FullSize[0x0678] - InheritedSize[0x0080])
	 */
	class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UStaticMesh*                                         ParticleMesh;                                            // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSortMode                                           SortMode;                                                // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5DL[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bOverrideMaterials : 1;                                  // 0x008C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortOnlyWhenTranslucent : 1;                            // 0x008C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NGR6[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraMeshMaterialOverride>                OverrideMaterials;                                       // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           SubImageSize;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSubImageBlend : 1;                                      // 0x00A8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3G8Y[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ENiagaraMeshFacingMode                                     FacingMode;                                              // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6C5[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bLockedAxisEnable : 1;                                   // 0x00B0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FA4[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LockedAxis;                                              // 0x00B4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshLockedAxisSpace                                LockedAxisSpace;                                         // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAF1[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PivotOffset;                                             // 0x00C4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraMeshPivotOffsetSpace                               PivotOffsetSpace;                                        // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6BX[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bEnableFrustumCulling : 1;                               // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableCameraDistanceCulling : 1;                        // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOXE[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCameraDistance;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RendererVisibility;                                      // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJY6[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x00E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0140(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0198(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MeshOrientationBinding;                                  // 0x01F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ScaleBinding;                                            // 0x0248(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SubImageIndexBinding;                                    // 0x02A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x02F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x0350(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x03A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x0400(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x0458(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CustomSortingBinding;                                    // 0x04B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x0508(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CameraOffsetBinding;                                     // 0x0560(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x05B8(0x0058) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CGTL[0x68];                                  // 0x0610(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraMessageDataBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraMessageDataBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterCollectionInstance
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UNiagaraParameterCollectionInstance : public UObject
	{
	public:
		class UNiagaraParameterCollection*                         Collection;                                              // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNiagaraVariable>                            OverridenParameters;                                     // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FNiagaraParameterStore                              ParameterStorage;                                        // 0x0040(0x0078) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IUAI[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
		void SetVector4Parameter(const class FString& InVariableName, const struct FVector4& InValue);
		void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
		void SetQuatParameter(const class FString& InVariableName, const struct FQuat& InValue);
		void SetIntParameter(const class FString& InVariableName, int32_t InValue);
		void SetFloatParameter(const class FString& InVariableName, float InValue);
		void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
		void SetBoolParameter(const class FString& InVariableName, bool InValue);
		struct FVector GetVectorParameter(const class FString& InVariableName);
		struct FVector4 GetVector4Parameter(const class FString& InVariableName);
		struct FVector2D GetVector2DParameter(const class FString& InVariableName);
		struct FQuat GetQuatParameter(const class FString& InVariableName);
		int32_t GetIntParameter(const class FString& InVariableName);
		float GetFloatParameter(const class FString& InVariableName);
		struct FLinearColor GetColorParameter(const class FString& InVariableName);
		bool GetBoolParameter(const class FString& InVariableName);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraParameterCollection
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UNiagaraParameterCollection : public UObject
	{
	public:
		class FName                                                Namespace;                                               // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FNiagaraVariable>                            Parameters;                                              // 0x0030(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UMaterialParameterCollection*                        SourceMaterialCollection;                                // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraParameterCollectionInstance*                 DefaultInstance;                                         // 0x0048(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               CompileId;                                               // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPrecompileContainer
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNiagaraPrecompileContainer : public UObject
	{
	public:
		TArray<class UNiagaraScript*>                              scripts;                                                 // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class UNiagaraSystem*                                      System;                                                  // 0x0038(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewBase
	 * Size -> 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
	 */
	class ANiagaraPreviewBase : public AActor
	{
	public:
		void SetSystem(class UNiagaraSystem* InSystem);
		void SetLabelText(const class FText& InXAxisText, const class FText& InYAxisText);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNiagaraPreviewAxis : public UObject
	{
	public:
		int32_t Num();
		void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamBase
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
	{
	public:
		class FName                                                Param;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Count;                                                   // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ODWD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamInt32
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		int32_t                                                    Min;                                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    Max;                                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamFloat
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		float                                                      Min;                                                     // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Max;                                                     // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector2D                                           Min;                                                     // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           Max;                                                     // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FVector                                             Min;                                                     // 0x0038(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Max;                                                     // 0x0044(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamVector4
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		unsigned char                                              UnknownData_NPRK[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            Min;                                                     // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector4                                            Max;                                                     // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
	{
	public:
		struct FLinearColor                                        Min;                                                     // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FLinearColor                                        Max;                                                     // 0x0048(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraPreviewGrid
	 * Size -> 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
	 */
	class ANiagaraPreviewGrid : public AActor
	{
	public:
		class UNiagaraSystem*                                      System;                                                  // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraPreviewGridResetMode                               ResetMode;                                               // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PK2[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraPreviewAxis*                                 PreviewAxisX;                                            // 0x0230(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNiagaraPreviewAxis*                                 PreviewAxisY;                                            // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PreviewClass;                                            // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingX;                                                // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpacingY;                                                // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumX;                                                    // 0x0250(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    NumY;                                                    // 0x0254(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UChildActorComponent*>                        PreviewComponents;                                       // 0x0258(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UH3I[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetPaused(bool bPaused);
		void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
		void DeactivatePreviews();
		void ActivatePreviews(bool bReset);
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraRibbonRendererProperties
	 * Size -> 0x0758 (FullSize[0x07D8] - InheritedSize[0x0080])
	 */
	class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x0088(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraRibbonFacingMode                                   FacingMode;                                              // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85S2[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraRibbonUVSettings                            UV0Settings;                                             // 0x00AC(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FNiagaraRibbonUVSettings                            UV1Settings;                                             // 0x00D0(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		ENiagaraRibbonDrawDirection                                DrawDirection;                                           // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_817T[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurveTension;                                            // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRibbonTessellationMode                             TessellationMode;                                        // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKK2[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TessellationFactor;                                      // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseConstantFactor;                                      // 0x0104(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5AS[0x3];                                   // 0x0105(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TessellationAngle;                                       // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScreenSpaceTessellation;                                // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UD8[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x0110(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0168(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x01C0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x0218(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonTwistBinding;                                      // 0x0270(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonWidthBinding;                                      // 0x02C8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonFacingBinding;                                     // 0x0320(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonIdBinding;                                         // 0x0378(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RibbonLinkOrderBinding;                                  // 0x03D0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x0428(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x0480(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x04D8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x0530(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x0588(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    U0OverrideBinding;                                       // 0x05E0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    V0RangeOverrideBinding;                                  // 0x0638(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    U1OverrideBinding;                                       // 0x0690(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    V1RangeOverrideBinding;                                  // 0x06E8(0x0058) Edit, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8FN[0x98];                                  // 0x0740(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScript
	 * Size -> 0x0298 (FullSize[0x02C0] - InheritedSize[0x0028])
	 */
	class UNiagaraScript : public UNiagaraScriptBase
	{
	public:
		ENiagaraScriptUsage                                        Usage;                                                   // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKGT[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UsageIndex;                                              // 0x002C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               UsageId;                                                 // 0x0030(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FNiagaraParameterStore                              RapidIterationParameters;                                // 0x0040(0x0078) NativeAccessSpecifierPublic
		struct FNiagaraScriptExecutionParameterStore               ScriptExecutionParamStore;                               // 0x00B8(0x0098) NativeAccessSpecifierPrivate
		TArray<struct FNiagaraBoundParameter>                      ScriptExecutionBoundParameters;                          // 0x0150(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FNiagaraVMExecutableDataId                          CachedScriptVMId;                                        // 0x0160(0x0048) HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YP2Y[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVMExecutableData                            CachedScriptVM;                                          // 0x01B8(0x00E0) NativeAccessSpecifierPrivate
		TArray<class UNiagaraParameterCollection*>                 CachedParameterCollectionReferences;                     // 0x0298(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNiagaraScriptDataInterfaceInfo>             CachedDefaultDataInterfaces;                             // 0x02A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LGFX[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void RaiseOnGPUCompilationComplete();
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraScriptSourceBase
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UNiagaraScriptSourceBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_HA0P[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSettings
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UNiagaraSettings : public UDeveloperSettings
	{
	public:
		struct FSoftObjectPath                                     DefaultEffectType;                                       // 0x0038(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FText>                                        QualityLevels;                                           // 0x0050(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TMap<class FString, class FText>                           ComponentRendererWarningsPerClass;                       // 0x0060(0x0050) Edit, Config, NativeAccessSpecifierPublic
		ETextureRenderTargetFormat                                 DefaultRenderTargetFormat;                               // 0x00B0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraGpuBufferFormat                                    DefaultGridFormat;                                       // 0x00B1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPU4[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  DefaultEffectTypePtr;                                    // 0x00B8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimulationStageBase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UNiagaraSimulationStageBase : public UNiagaraMergeable
	{
	public:
		class UNiagaraScript*                                      Script;                                                  // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SimulationStageName;                                     // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnabled : 1;                                            // 0x0038(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QN63[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSimulationStageGeneric
	 * Size -> 0x0030 (FullSize[0x0070] - InheritedSize[0x0040])
	 */
	class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
	{
	public:
		ENiagaraIterationSource                                    IterationSource;                                         // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0KBS[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Iterations;                                              // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpawnOnly : 1;                                          // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDisablePartialParticleUpdate : 1;                       // 0x0048(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7WJ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableDataInterfaceBinding                DataInterface;                                           // 0x0050(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSpriteRendererProperties
	 * Size -> 0x0720 (FullSize[0x07A0] - InheritedSize[0x0080])
	 */
	class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraRendererSourceDataMode                             SourceMode;                                              // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q6HC[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraUserParameterBinding                        MaterialUserParamBinding;                                // 0x0090(0x0020) Edit, NativeAccessSpecifierPublic
		ENiagaraSpriteAlignment                                    Alignment;                                               // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSpriteFacingMode                                   FacingMode;                                              // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA2B[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PivotInUVSpace;                                          // 0x00B4(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENiagaraSortMode                                           SortMode;                                                // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CEM3[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           SubImageSize;                                            // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSubImageBlend : 1;                                      // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRemoveHMDRollInVR : 1;                                  // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSortOnlyWhenTranslucent : 1;                            // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGpuLowLatencyTranslucency : 1;                          // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JFFU[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFacingCameraBlendDistance;                            // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFacingCameraBlendDistance;                            // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableCameraDistanceCulling : 1;                        // 0x00D4(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSR6[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinCameraDistance;                                       // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCameraDistance;                                       // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   RendererVisibility;                                      // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X337[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraVariableAttributeBinding                    PositionBinding;                                         // 0x00E8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    ColorBinding;                                            // 0x0140(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    VelocityBinding;                                         // 0x0198(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteRotationBinding;                                   // 0x01F0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteSizeBinding;                                       // 0x0248(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteFacingBinding;                                     // 0x02A0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SpriteAlignmentBinding;                                  // 0x02F8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    SubImageIndexBinding;                                    // 0x0350(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterialBinding;                                  // 0x03A8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial1Binding;                                 // 0x0400(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial2Binding;                                 // 0x0458(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    DynamicMaterial3Binding;                                 // 0x04B0(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CameraOffsetBinding;                                     // 0x0508(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    UVScaleBinding;                                          // 0x0560(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    MaterialRandomBinding;                                   // 0x05B8(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    CustomSortingBinding;                                    // 0x0610(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    NormalizedAgeBinding;                                    // 0x0668(0x0058) Edit, NativeAccessSpecifierPublic
		struct FNiagaraVariableAttributeBinding                    RendererVisibilityTagBinding;                            // 0x06C0(0x0058) Edit, NativeAccessSpecifierPublic
		TArray<struct FNiagaraMaterialAttributeBinding>            MaterialParameterBindings;                               // 0x0718(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L908[0x78];                                  // 0x0728(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Niagara.NiagaraSystem
	 * Size -> 0x0450 (FullSize[0x0480] - InheritedSize[0x0030])
	 */
	class UNiagaraSystem : public UFXSystemAsset
	{
	public:
		bool                                                       bDumpDebugSystemInfo;                                    // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDumpDebugEmitterInfo;                                   // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireCurrentFrameData;                                // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_586E[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bFixedBounds : 1;                                        // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANXH[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraEffectType*                                  EffectType;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideScalabilitySettings;                            // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9G3H[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNiagaraSystemScalabilityOverride>           ScalabilityOverrides;                                    // 0x0048(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		struct FNiagaraSystemScalabilityOverrides                  SystemScalabilityOverrides;                              // 0x0058(0x0010) Edit, Protected, NativeAccessSpecifierProtected
		TArray<struct FNiagaraEmitterHandle>                       EmitterHandles;                                          // 0x0068(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UNiagaraParameterCollectionInstance*>         ParameterCollectionOverrides;                            // 0x0078(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UNiagaraScript*                                      SystemSpawnScript;                                       // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNiagaraScript*                                      SystemUpdateScript;                                      // 0x0090(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QD4J[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNiagaraSystemCompiledData                          SystemCompiledData;                                      // 0x00A8(0x0218) Protected, NativeAccessSpecifierProtected
		struct FNiagaraUserRedirectionParameterStore               ExposedParameters;                                       // 0x02C0(0x00C8) Protected, NativeAccessSpecifierProtected
		struct FBox                                                FixedBounds;                                             // 0x0388(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAutoDeactivate;                                         // 0x03A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8BIR[0x3];                                   // 0x03A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarmupTime;                                              // 0x03A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    WarmupTickCount;                                         // 0x03AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WarmupTickDelta;                                         // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasSystemScriptDIsWithPerInstanceData;                  // 0x03B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4KIY[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        UserDINamesReadInSystemScripts;                          // 0x03B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_86EE[0xB8];                                  // 0x03C8(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
