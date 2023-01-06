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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum InteractiveToolsFramework.EInputCaptureState
	 */
	enum class EInputCaptureState : uint8_t
	{
		Begin    = 0,
		Continue = 1,
		End      = 2,
		Ignore   = 3,
		MAX      = 4
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureRequestType
	 */
	enum class EInputCaptureRequestType : uint8_t
	{
		Begin  = 0,
		Ignore = 1,
		MAX    = 2
	};

	/**
	 * Enum InteractiveToolsFramework.EInputCaptureSide
	 */
	enum class EInputCaptureSide : uint8_t
	{
		None  = 0,
		Left  = 1,
		Right = 2,
		Both  = 3,
		Any   = 4,
		MAX   = 5
	};

	/**
	 * Enum InteractiveToolsFramework.EInputDevices
	 */
	enum class EInputDevices : uint8_t
	{
		None             = 0,
		Keyboard         = 1,
		Mouse            = 2,
		Gamepad          = 3,
		OculusTouch      = 4,
		HTCViveWands     = 5,
		AnySpatialDevice = 6,
		TabletFingers    = 7,
		MAX              = 8
	};

	/**
	 * Enum InteractiveToolsFramework.ETransformGizmoSubElements
	 */
	enum class ETransformGizmoSubElements : uint8_t
	{
		None                        = 0,
		TranslateAxisX              = 1,
		TranslateAxisY              = 2,
		TranslateAxisZ              = 3,
		TranslateAllAxes            = 4,
		TranslatePlaneXY            = 5,
		TranslatePlaneXZ            = 6,
		TranslatePlaneYZ            = 7,
		TranslateAllPlanes          = 8,
		RotateAxisX                 = 9,
		RotateAxisY                 = 10,
		RotateAxisZ                 = 11,
		RotateAllAxes               = 12,
		ScaleAxisX                  = 13,
		ScaleAxisY                  = 14,
		ScaleAxisZ                  = 15,
		ScaleAllAxes                = 16,
		ScalePlaneYZ                = 17,
		ScalePlaneXZ                = 18,
		ScalePlaneXY                = 19,
		ScaleAllPlanes              = 20,
		ScaleUniform                = 21,
		StandardTranslateRotate     = 22,
		TranslateRotateUniformScale = 23,
		FullTranslateRotateScale    = 24,
		MAX                         = 25
	};

	/**
	 * Enum InteractiveToolsFramework.EToolChangeTrackingMode
	 */
	enum class EToolChangeTrackingMode : uint8_t
	{
		NoChangeTracking = 0,
		UndoToExit       = 1,
		FullUndoRedo     = 2,
		MAX              = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EToolSide
	 */
	enum class EToolSide : uint8_t
	{
		Left  = 0,
		Mouse = 1,
		Right = 2,
		MAX   = 3
	};

	/**
	 * Enum InteractiveToolsFramework.EViewInteractionState
	 */
	enum class EViewInteractionState : uint8_t
	{
		None    = 0,
		Hovered = 1,
		Focused = 2,
		MAX     = 3
	};

	/**
	 * Enum InteractiveToolsFramework.ESelectedObjectsModificationType
	 */
	enum class ESelectedObjectsModificationType : uint8_t
	{
		Replace = 0,
		Add     = 1,
		Remove  = 2,
		Clear   = 3,
		MAX     = 4
	};

	/**
	 * Enum InteractiveToolsFramework.EToolMessageLevel
	 */
	enum class EToolMessageLevel : uint8_t
	{
		Internal         = 0,
		UserMessage      = 1,
		UserNotification = 2,
		UserWarning      = 3,
		UserError        = 4,
		MAX              = 5
	};

	/**
	 * Enum InteractiveToolsFramework.EToolContextCoordinateSystem
	 */
	enum class EToolContextCoordinateSystem : uint8_t
	{
		World = 0,
		Local = 1,
		MAX   = 2
	};

	/**
	 * Enum InteractiveToolsFramework.EStandardToolContextMaterials
	 */
	enum class EStandardToolContextMaterials : uint8_t
	{
		VertexColorMaterial = 0,
		MAX                 = 1
	};

	/**
	 * Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
	 */
	enum class ESceneSnapQueryTargetType : uint8_t
	{
		None       = 0,
		MeshVertex = 1,
		MeshEdge   = 2,
		Grid       = 3,
		All        = 4,
		MAX        = 5
	};

	/**
	 * Enum InteractiveToolsFramework.ESceneSnapQueryType
	 */
	enum class ESceneSnapQueryType : uint8_t
	{
		Position = 0,
		Rotation = 1,
		MAX      = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct InteractiveToolsFramework.BrushStampData
	 * Size -> 0x00AC
	 */
	struct FBrushStampData
	{
	public:
		unsigned char                                              UnknownData_CA0B[0xAC];                                  // 0x0000(0x00AC) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.BehaviorInfo
	 * Size -> 0x0020
	 */
	struct FBehaviorInfo
	{
	public:
		class UInputBehavior*                                      Behavior;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLU5[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.ActiveGizmo
	 * Size -> 0x0030
	 */
	struct FActiveGizmo
	{
	public:
		unsigned char                                              UnknownData_7XRT[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
	 * Size -> 0x0008
	 */
	struct FGizmoFloatParameterChange
	{
	public:
		float                                                      InitialValue;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentValue;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
	 * Size -> 0x0010
	 */
	struct FGizmoVec2ParameterChange
	{
	public:
		struct FVector2D                                           InitialValue;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CurrentValue;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct InteractiveToolsFramework.InputRayHit
	 * Size -> 0x0028
	 */
	struct FInputRayHit
	{
	public:
		unsigned char                                              UnknownData_Y8EE[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
