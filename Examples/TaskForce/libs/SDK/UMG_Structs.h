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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum UMG.ESlateAccessibleBehavior
	 */
	enum class ESlateAccessibleBehavior : uint8_t
	{
		NotAccessible = 0,
		Auto          = 1,
		Summary       = 2,
		Custom        = 3,
		ToolTip       = 4,
		MAX           = 5
	};

	/**
	 * Enum UMG.ESlateVisibility
	 */
	enum class ESlateVisibility : uint8_t
	{
		Visible              = 0,
		Collapsed            = 1,
		Hidden               = 2,
		HitTestInvisible     = 3,
		SelfHitTestInvisible = 4,
		MAX                  = 5
	};

	/**
	 * Enum UMG.EVirtualKeyboardType
	 */
	enum class EVirtualKeyboardType : uint8_t
	{
		Default      = 0,
		Number       = 1,
		Web          = 2,
		Email        = 3,
		Password     = 4,
		AlphaNumeric = 5,
		MAX          = 6
	};

	/**
	 * Enum UMG.EDragPivot
	 */
	enum class EDragPivot : uint8_t
	{
		MouseDown    = 0,
		TopLeft      = 1,
		TopCenter    = 2,
		TopRight     = 3,
		CenterLeft   = 4,
		CenterCenter = 5,
		CenterRight  = 6,
		BottomLeft   = 7,
		BottomCenter = 8,
		BottomRight  = 9,
		MAX          = 10
	};

	/**
	 * Enum UMG.EDynamicBoxType
	 */
	enum class EDynamicBoxType : uint8_t
	{
		Horizontal = 0,
		Vertical   = 1,
		Wrap       = 2,
		Overlay    = 3,
		MAX        = 4
	};

	/**
	 * Enum UMG.ESlateSizeRule
	 */
	enum class ESlateSizeRule : uint8_t
	{
		Automatic = 0,
		Fill      = 1,
		MAX       = 2
	};

	/**
	 * Enum UMG.EUMGSequencePlayMode
	 */
	enum class EUMGSequencePlayMode : uint8_t
	{
		Forward  = 0,
		Reverse  = 1,
		PingPong = 2,
		MAX      = 3
	};

	/**
	 * Enum UMG.EWidgetAnimationEvent
	 */
	enum class EWidgetAnimationEvent : uint8_t
	{
		Started  = 0,
		Finished = 1,
		MAX      = 2
	};

	/**
	 * Enum UMG.EWidgetTickFrequency
	 */
	enum class EWidgetTickFrequency : uint8_t
	{
		Never = 0,
		Auto  = 1,
		MAX   = 2
	};

	/**
	 * Enum UMG.EWidgetDesignFlags
	 */
	enum class EWidgetDesignFlags : uint8_t
	{
		None                = 0,
		Designing           = 1,
		ShowOutline         = 2,
		ExecutePreConstruct = 3,
		MAX                 = 4
	};

	/**
	 * Enum UMG.EBindingKind
	 */
	enum class EBindingKind : uint8_t
	{
		Function = 0,
		Property = 1,
		MAX      = 2
	};

	/**
	 * Enum UMG.EWindowVisibility
	 */
	enum class EWindowVisibility : uint8_t
	{
		Visible              = 0,
		SelfHitTestInvisible = 1,
		MAX                  = 2
	};

	/**
	 * Enum UMG.EWidgetGeometryMode
	 */
	enum class EWidgetGeometryMode : uint8_t
	{
		Plane    = 0,
		Cylinder = 1,
		MAX      = 2
	};

	/**
	 * Enum UMG.EWidgetBlendMode
	 */
	enum class EWidgetBlendMode : uint8_t
	{
		Opaque      = 0,
		Masked      = 1,
		Transparent = 2,
		MAX         = 3
	};

	/**
	 * Enum UMG.EWidgetTimingPolicy
	 */
	enum class EWidgetTimingPolicy : uint8_t
	{
		RealTime = 0,
		GameTime = 1,
		MAX      = 2
	};

	/**
	 * Enum UMG.EWidgetSpace
	 */
	enum class EWidgetSpace : uint8_t
	{
		World  = 0,
		Screen = 1,
		MAX    = 2
	};

	/**
	 * Enum UMG.EWidgetInteractionSource
	 */
	enum class EWidgetInteractionSource : uint8_t
	{
		World        = 0,
		Mouse        = 1,
		CenterScreen = 2,
		Custom       = 3,
		MAX          = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct UMG.WidgetTransform
	 * Size -> 0x001C
	 */
	struct FWidgetTransform
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Shear;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Angle;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.EventReply
	 * Size -> 0x00B8
	 */
	struct FEventReply
	{
	public:
		unsigned char                                              UnknownData_NZGU[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.NamedSlotBinding
	 * Size -> 0x0010
	 */
	struct FNamedSlotBinding
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.AnimationEventBinding
	 * Size -> 0x0028
	 */
	struct FAnimationEventBinding
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Delegate;                                                // 0x0008(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		EWidgetAnimationEvent                                      AnimationEvent;                                          // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0630[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UserTag;                                                 // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFWC[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.PaintContext
	 * Size -> 0x0030
	 */
	struct FPaintContext
	{
	public:
		unsigned char                                              UnknownData_6AP0[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.DynamicPropertyPath
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	struct FDynamicPropertyPath : public FCachedPropertyPath
	{	};

	/**
	 * ScriptStruct UMG.AnchorData
	 * Size -> 0x0028
	 */
	struct FAnchorData
	{
	public:
		struct FMargin                                             Offsets;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAnchors                                            Anchors;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Alignment;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.SlateChildSize
	 * Size -> 0x0008
	 */
	struct FSlateChildSize
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateSizeRule                                             SizeRule;                                                // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHJP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.UserWidgetPool
	 * Size -> 0x0080
	 */
	struct FUserWidgetPool
	{
	public:
		TArray<class UUserWidget*>                                 ActiveWidgets;                                           // 0x0000(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UUserWidget*>                                 InactiveWidgets;                                         // 0x0010(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XFRR[0x60];                                  // 0x0020(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.ShapedTextOptions
	 * Size -> 0x0003
	 */
	struct FShapedTextOptions
	{
	public:
		unsigned char                                              bOverride_TextShapingMethod : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bOverride_TextFlowDirection : 1;                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextShapingMethod                                         TextShapingMethod;                                       // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextFlowDirection                                         TextFlowDirection;                                       // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.MovieScene2DTransformMask
	 * Size -> 0x0004
	 */
	struct FMovieScene2DTransformMask
	{
	public:
		uint32_t                                                   Mask;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct UMG.SlateMeshVertex
	 * Size -> 0x003C
	 */
	struct FSlateMeshVertex
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV0;                                                     // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV1;                                                     // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV2;                                                     // 0x001C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV3;                                                     // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV4;                                                     // 0x002C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UV5;                                                     // 0x0034(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.WidgetAnimationBinding
	 * Size -> 0x0024
	 */
	struct FWidgetAnimationBinding
	{
	public:
		class FName                                                WidgetName;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SlotWidgetName;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               AnimationGuid;                                           // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRootWidget;                                           // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFVK[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
	 * Size -> 0x001C
	 */
	struct FBlueprintWidgetAnimationDelegateBinding
	{
	public:
		EWidgetAnimationEvent                                      Action;                                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5P61[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimationToBind;                                         // 0x0004(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionNameToBind;                                      // 0x000C(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                UserTag;                                                 // 0x0014(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.DelegateRuntimeBinding
	 * Size -> 0x0050
	 */
	struct FDelegateRuntimeBinding
	{
	public:
		class FString                                              ObjectName;                                              // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0020(0x0028) NativeAccessSpecifierPublic
		EBindingKind                                               Kind;                                                    // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTSC[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.WidgetNavigationData
	 * Size -> 0x0024
	 */
	struct FWidgetNavigationData
	{
	public:
		EUINavigationRule                                          Rule;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUTF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WidgetToFocus;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UWidget>                              Widget;                                                  // 0x000C(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      CustomDelegate;                                          // 0x0014(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.MovieScene2DTransformSectionTemplate
	 * Size -> 0x0468 (FullSize[0x04B0] - InheritedSize[0x0048])
	 */
	struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             Translation[0x2];                                        // 0x0048(0x0140) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Rotation;                                                // 0x0188(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Scale[0x2];                                              // 0x0228(0x0140) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             Shear[0x2];                                              // 0x0368(0x0140) NativeAccessSpecifierPrivate
		EMovieSceneBlendType                                       BlendType;                                               // 0x04A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GA4R[0x3];                                   // 0x04A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieScene2DTransformMask                          Mask;                                                    // 0x04AC(0x0004) NoDestructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct UMG.MovieSceneMarginSectionTemplate
	 * Size -> 0x0288 (FullSize[0x02D0] - InheritedSize[0x0048])
	 */
	struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
	{
	public:
		struct FMovieSceneFloatChannel                             TopCurve;                                                // 0x0048(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             LeftCurve;                                               // 0x00E8(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             RightCurve;                                              // 0x0188(0x00A0) NativeAccessSpecifierPrivate
		struct FMovieSceneFloatChannel                             BottomCurve;                                             // 0x0228(0x00A0) NativeAccessSpecifierPrivate
		EMovieSceneBlendType                                       BlendType;                                               // 0x02C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MK3L[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
	{
	public:
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct UMG.RichTextStyleRow
	 * Size -> 0x0268 (FullSize[0x0270] - InheritedSize[0x0008])
	 */
	struct FRichTextStyleRow : public FTableRowBase
	{
	public:
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0008(0x0268) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.RichImageRow
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FRichImageRow : public FTableRowBase
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0008(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct UMG.WidgetComponentInstanceData
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
	{
	public:
		unsigned char                                              UnknownData_OLTX[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
