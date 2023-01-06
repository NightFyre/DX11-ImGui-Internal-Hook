#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialVectorParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialTextureParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Value;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	 */
	struct ALandscapeProxy_SetLandscapeMaterialScalarParameterValue_Params
	{
	public:
		class FName                                                ParameterName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	 */
	struct ALandscapeProxy_EditorSetLandscapeMaterial_Params
	{
	public:
		class UMaterialInterface*                                  NewLandscapeMaterial;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.EditorApplySpline
	 */
	struct ALandscapeProxy_EditorApplySpline_Params
	{
	public:
		class USplineComponent*                                    InSplineComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartWidth;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndWidth;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartSideFalloff;                                        // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndSideFalloff;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartRoll;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndRoll;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumSubdivisions;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRaiseHeights;                                           // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLowerHeights;                                           // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7X8H[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULandscapeLayerInfoObject*                           PaintLayer;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	 */
	struct ALandscapeProxy_ChangeUseTessellationComponentScreenSizeFalloff_Params
	{
	public:
		bool                                                       InComponentScreenSizeToUseSubSections;                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	 */
	struct ALandscapeProxy_ChangeTessellationComponentScreenSizeFalloff_Params
	{
	public:
		float                                                      InUseTessellationComponentScreenSizeFalloff;             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	 */
	struct ALandscapeProxy_ChangeTessellationComponentScreenSize_Params
	{
	public:
		float                                                      InTessellationComponentScreenSize;                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	 */
	struct ALandscapeProxy_ChangeLODDistanceFactor_Params
	{
	public:
		float                                                      InLODDistanceFactor;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	 */
	struct ALandscapeProxy_ChangeComponentScreenSizeToUseSubSections_Params
	{
	public:
		float                                                      InComponentScreenSizeToUseSubSections;                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	 */
	struct ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Params
	{	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.Render
	 */
	struct ALandscapeBlueprintBrushBase_Render_Params
	{
	public:
		bool                                                       InIsHeightmap;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_34IE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              InCombinedResult;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InWeightmapLayerName;                                    // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeBlueprintBrushBase.Initialize
	 */
	struct ALandscapeBlueprintBrushBase_Initialize_Params
	{
	public:
		struct FTransform                                          InLandscapeTransform;                                    // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FIntPoint                                           InLandscapeSize;                                         // 0x0030(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           InLandscapeRenderTargetSize;                             // 0x0038(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	 */
	struct ULandscapeComponent_GetMaterialInstanceDynamic_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MQ7K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	 */
	struct ULandscapeSplinesComponent_GetSplineMeshComponents_Params
	{
	public:
		TArray<class USplineMeshComponent*>                        ReturnValue;                                             // 0x0000(0x0010)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
