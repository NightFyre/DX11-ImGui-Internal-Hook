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
	 * Class VariantManagerContent.LevelVariantSets
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class ULevelVariantSets : public UObject
	{
	public:
		class UBlueprintGeneratedClass*                            DirectorClass;                                           // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UVariantSet*>                                 VariantSets;                                             // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CZHY[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		class UVariantSet* GetVariantSetByName(const class FString& VariantSetName);
		class UVariantSet* GetVariantSet(int32_t VariantSetIndex);
		int32_t GetNumVariantSets();
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.LevelVariantSetsActor
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class ALevelVariantSetsActor : public AActor
	{
	public:
		struct FSoftObjectPath                                     LevelVariantSets;                                        // 0x0240(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

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
		unsigned char                                              UnknownData_TWSP[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValue
	 * Size -> 0x0180 (FullSize[0x01A8] - InheritedSize[0x0028])
	 */
	class UPropertyValue : public UObject
	{
	public:
		unsigned char                                              UnknownData_3CAZ[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UProperty*>                                   Properties;                                              // 0x0080(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            PropertyIndices;                                         // 0x0090(0x0010) ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected
		TArray<struct FCapturedPropSegment>                        CapturedPropSegments;                                    // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FString                                              FullDisplayString;                                       // 0x00B0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                PropertySetterName;                                      // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<class FString, class FString>                         PropertySetterParameterDefaults;                         // 0x00C8(0x0050) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bHasRecordedData;                                        // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_44OX[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              LeafPropertyClass;                                       // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<unsigned char>                                      ValueBytes;                                              // 0x0128(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EPropertyValueCategory                                     PropCategory;                                            // 0x0138(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0CWC[0x6F];                                  // 0x0139(0x006F) MISSED OFFSET (PADDING)

	public:
		bool HasRecordedData();
		class FText GetPropertyTooltip();
		class FString GetFullDisplayString();
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueTransform
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class UPropertyValueTransform : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueVisibility
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class UPropertyValueVisibility : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueColor
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class UPropertyValueColor : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueMaterial
	 * Size -> 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
	 */
	class UPropertyValueMaterial : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.Variant
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UVariant : public UObject
	{
	public:
		class FText                                                DisplayText;                                             // 0x0028(0x0018) Deprecated, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q19R[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVariantObjectBinding*>                       ObjectBindings;                                          // 0x0058(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SwitchOn();
		void SetDisplayText(const class FText& NewDisplayText);
		int32_t GetNumActors();
		class FText GetDisplayText();
		class AActor* GetActor(int32_t ActorIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.VariantObjectBinding
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UVariantObjectBinding : public UObject
	{
	public:
		struct FSoftObjectPath                                     ObjectPtr;                                               // 0x0028(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TLazyObjectPtr<class UObject>                              LazyObjectPtr;                                           // 0x0040(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_96GP[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyValue*>                              CapturedProperties;                                      // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FFunctionCaller>                             FunctionCallers;                                         // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.VariantSet
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UVariantSet : public UObject
	{
	public:
		class FText                                                DisplayText;                                             // 0x0028(0x0018) Deprecated, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TUWX[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExpanded;                                               // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P1OQ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UVariant*>                                    Variants;                                                // 0x0060(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetDisplayText(const class FText& NewDisplayText);
		class UVariant* GetVariantByName(const class FString& VariantName);
		class UVariant* GetVariant(int32_t VariantIndex);
		int32_t GetNumVariants();
		class FText GetDisplayText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
