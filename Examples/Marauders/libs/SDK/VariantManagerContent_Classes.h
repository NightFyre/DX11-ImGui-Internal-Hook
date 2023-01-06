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
	 * Class VariantManagerContent.LevelVariantSets
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class ULevelVariantSets : public UObject
	{
	public:
		class UBlueprintGeneratedClass*                            DirectorClass;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UVariantSet*>                                 VariantSets;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J5JJ[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		class UVariantSet* GetVariantSetByName(const class FString& VariantSetName);
		class UVariantSet* GetVariantSet(int32_t VariantSetIndex);
		int32_t GetNumVariantSets();
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.LevelVariantSetsActor
	 * Size -> 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
	 */
	class ALevelVariantSetsActor : public AActor
	{
	public:
		struct FSoftObjectPath                                     LevelVariantSets;                                        // 0x0220(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName);
		bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);
		void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
		class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.LevelVariantSetsFunctionDirector
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULevelVariantSetsFunctionDirector : public UObject
	{
	public:
		unsigned char                                              UnknownData_IVFE[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValue
	 * Size -> 0x0190 (FullSize[0x01B8] - InheritedSize[0x0028])
	 */
	class UPropertyValue : public UObject
	{
	public:
		unsigned char                                              UnknownData_ZBDW[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Properties[0x10];                                        // 0x0088(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<int32_t>                                            PropertyIndices;                                         // 0x0098(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		TArray<struct FCapturedPropSegment>                        CapturedPropSegments;                                    // 0x00A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              FullDisplayString;                                       // 0x00B8(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PropertySetterName;                                      // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class FString>                         PropertySetterParameterDefaults;                         // 0x00D0(0x0050) Protected, NativeAccessSpecifierProtected
		bool                                                       bHasRecordedData;                                        // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KB8W[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LeafPropertyClass;                                       // 0x0128(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JURA[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ValueBytes;                                              // 0x0138(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EPropertyValueCategory                                     PropCategory;                                            // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5LTH[0x6F];                                  // 0x0149(0x006F) MISSED OFFSET (PADDING)

	public:
		bool HasRecordedData();
		class FText GetPropertyTooltip();
		class FString GetFullDisplayString();
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueTransform
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UPropertyValueTransform : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueVisibility
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UPropertyValueVisibility : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueColor
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UPropertyValueColor : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueMaterial
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UPropertyValueMaterial : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueOption
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UPropertyValueOption : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueSoftObject
	 * Size -> 0x0000 (FullSize[0x01B8] - InheritedSize[0x01B8])
	 */
	class UPropertyValueSoftObject : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.SwitchActor
	 * Size -> 0x0028 (FullSize[0x0248] - InheritedSize[0x0220])
	 */
	class ASwitchActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_6BTY[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    LastSelectedOption;                                      // 0x0240(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z8HR[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (PADDING)

	public:
		void SelectOption(int32_t OptionIndex);
		int32_t GetSelectedOption();
		TArray<class AActor*> GetOptions();
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.Variant
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UVariant : public UObject
	{
	public:
		TArray<struct FVariantDependency>                          Dependencies;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FText                                                DisplayText;                                             // 0x0038(0x0018) Deprecated, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TWXW[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVariantObjectBinding*>                       ObjectBindings;                                          // 0x0068(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UTexture2D*                                          Thumbnail;                                               // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SwitchOn();
		void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
		void SetThumbnailFromFile(const class FString& FilePath);
		void SetThumbnailFromEditorViewport();
		void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
		void SetDisplayText(const class FText& NewDisplayText);
		void SetDependency(int32_t Index, struct FVariantDependency* Dependency);
		bool IsActive();
		class UTexture2D* GetThumbnail();
		class UVariantSet* GetParent();
		int32_t GetNumDependencies();
		int32_t GetNumActors();
		class FText GetDisplayText();
		TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
		struct FVariantDependency GetDependency(int32_t Index);
		class AActor* GetActor(int32_t ActorIndex);
		void DeleteDependency(int32_t Index);
		int32_t AddDependency(struct FVariantDependency* Dependency);
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.VariantObjectBinding
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UVariantObjectBinding : public UObject
	{
	public:
		class FString                                              CachedActorLabel;                                        // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     ObjectPtr;                                               // 0x0038(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TLazyObjectPtr<class UObject>                              LazyObjectPtr;                                           // 0x0050(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2X37[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyValue*>                              CapturedProperties;                                      // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FFunctionCaller>                             FunctionCallers;                                         // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.VariantSet
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UVariantSet : public UObject
	{
	public:
		class FText                                                DisplayText;                                             // 0x0028(0x0018) Deprecated, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J9HI[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExpanded;                                               // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YHC1[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVariant*>                                    Variants;                                                // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UTexture2D*                                          Thumbnail;                                               // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
		void SetThumbnailFromFile(const class FString& FilePath);
		void SetThumbnailFromEditorViewport();
		void SetThumbnailFromCamera(class UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
		void SetDisplayText(const class FText& NewDisplayText);
		class UVariant* GetVariantByName(const class FString& VariantName);
		class UVariant* GetVariant(int32_t VariantIndex);
		class UTexture2D* GetThumbnail();
		class ULevelVariantSets* GetParent();
		int32_t GetNumVariants();
		class FText GetDisplayText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
