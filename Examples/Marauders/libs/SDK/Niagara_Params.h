#pragma once

/**
 * Name: RaidGame
 * Version: 1
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
	 * Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
	 */
	struct ANiagaraActor_SetDestroyOnSystemFinish_Params
	{
	public:
		bool                                                       bShouldDestroyOnSystemFinish;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraActor.OnNiagaraSystemFinished
	 */
	struct ANiagaraActor_OnNiagaraSystemFinished_Params
	{
	public:
		class UNiagaraComponent*                                   FinishedComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableVec4
	 */
	struct UNiagaraComponent_SetVariableVec4_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T4W2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableVec3
	 */
	struct UNiagaraComponent_SetVariableVec3_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableVec2
	 */
	struct UNiagaraComponent_SetVariableVec2_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	 */
	struct UNiagaraComponent_SetVariableTextureRenderTarget_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget*                                TextureRenderTarget;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableQuat
	 */
	struct UNiagaraComponent_SetVariableQuat_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MTL6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableObject
	 */
	struct UNiagaraComponent_SetVariableObject_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableMaterial
	 */
	struct UNiagaraComponent_SetVariableMaterial_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMaterialInterface*                                  Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableLinearColor
	 */
	struct UNiagaraComponent_SetVariableLinearColor_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableInt
	 */
	struct UNiagaraComponent_SetVariableInt_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableFloat
	 */
	struct UNiagaraComponent_SetVariableFloat_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableBool
	 */
	struct UNiagaraComponent_SetVariableBool_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetVariableActor
	 */
	struct UNiagaraComponent_SetVariableActor_Params
	{
	public:
		class FName                                                InVariableName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetTickBehavior
	 */
	struct UNiagaraComponent_SetTickBehavior_Params
	{
	public:
		ENiagaraTickBehavior                                       NewTickBehavior;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetSeekDelta
	 */
	struct UNiagaraComponent_SetSeekDelta_Params
	{
	public:
		float                                                      InSeekDelta;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetRenderingEnabled
	 */
	struct UNiagaraComponent_SetRenderingEnabled_Params
	{
	public:
		bool                                                       bInRenderingEnabled;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetPreviewLODDistance
	 */
	struct UNiagaraComponent_SetPreviewLODDistance_Params
	{
	public:
		bool                                                       bEnablePreviewLODDistance;                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z103[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      PreviewLODDistance;                                      // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetPaused
	 */
	struct UNiagaraComponent_SetPaused_Params
	{
	public:
		bool                                                       bInPaused;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec4_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec3_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
	 */
	struct UNiagaraComponent_SetNiagaraVariableVec2_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
	 */
	struct UNiagaraComponent_SetNiagaraVariableQuat_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableObject
	 */
	struct UNiagaraComponent_SetNiagaraVariableObject_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	 */
	struct UNiagaraComponent_SetNiagaraVariableLinearColor_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableInt
	 */
	struct UNiagaraComponent_SetNiagaraVariableInt_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
	 */
	struct UNiagaraComponent_SetNiagaraVariableFloat_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableBool
	 */
	struct UNiagaraComponent_SetNiagaraVariableBool_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetNiagaraVariableActor
	 */
	struct UNiagaraComponent_SetNiagaraVariableActor_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetMaxSimTime
	 */
	struct UNiagaraComponent_SetMaxSimTime_Params
	{
	public:
		float                                                      InMaxTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetGpuComputeDebug
	 */
	struct UNiagaraComponent_SetGpuComputeDebug_Params
	{
	public:
		bool                                                       bEnableDebug;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetForceSolo
	 */
	struct UNiagaraComponent_SetForceSolo_Params
	{
	public:
		bool                                                       bInForceSolo;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetDesiredAge
	 */
	struct UNiagaraComponent_SetDesiredAge_Params
	{
	public:
		float                                                      InDesiredAge;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	 */
	struct UNiagaraComponent_SetCanRenderWhileSeeking_Params
	{
	public:
		bool                                                       bInCanRenderWhileSeeking;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAutoDestroy
	 */
	struct UNiagaraComponent_SetAutoDestroy_Params
	{
	public:
		bool                                                       bInAutoDestroy;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAsset
	 */
	struct UNiagaraComponent_SetAsset_Params
	{
	public:
		class UNiagaraSystem*                                      InAsset;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAllowScalability
	 */
	struct UNiagaraComponent_SetAllowScalability_Params
	{
	public:
		bool                                                       bAllow;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SetAgeUpdateMode
	 */
	struct UNiagaraComponent_SetAgeUpdateMode_Params
	{
	public:
		ENiagaraAgeUpdateMode                                      InAgeUpdateMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.SeekToDesiredAge
	 */
	struct UNiagaraComponent_SeekToDesiredAge_Params
	{
	public:
		float                                                      InDesiredAge;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.ResetSystem
	 */
	struct UNiagaraComponent_ResetSystem_Params
	{	};

	/**
	 * Function Niagara.NiagaraComponent.ReinitializeSystem
	 */
	struct UNiagaraComponent_ReinitializeSystem_Params
	{	};

	/**
	 * Function Niagara.NiagaraComponent.IsPaused
	 */
	struct UNiagaraComponent_IsPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetTickBehavior
	 */
	struct UNiagaraComponent_GetTickBehavior_Params
	{
	public:
		ENiagaraTickBehavior                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetSeekDelta
	 */
	struct UNiagaraComponent_GetSeekDelta_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	 */
	struct UNiagaraComponent_GetPreviewLODDistanceEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetPreviewLODDistance
	 */
	struct UNiagaraComponent_GetPreviewLODDistance_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValueName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              InValueName;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	 */
	struct UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params
	{
	public:
		class FString                                              InEmitterName;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetMaxSimTime
	 */
	struct UNiagaraComponent_GetMaxSimTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetForceSolo
	 */
	struct UNiagaraComponent_GetForceSolo_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetDesiredAge
	 */
	struct UNiagaraComponent_GetDesiredAge_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetDataInterface
	 */
	struct UNiagaraComponent_GetDataInterface_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraDataInterface*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetAsset
	 */
	struct UNiagaraComponent_GetAsset_Params
	{
	public:
		class UNiagaraSystem*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.GetAgeUpdateMode
	 */
	struct UNiagaraComponent_GetAgeUpdateMode_Params
	{
	public:
		ENiagaraAgeUpdateMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.AdvanceSimulationByTime
	 */
	struct UNiagaraComponent_AdvanceSimulationByTime_Params
	{
	public:
		float                                                      SimulateTime;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TickDeltaSeconds;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraComponent.AdvanceSimulation
	 */
	struct UNiagaraComponent_AdvanceSimulation_Params
	{
	public:
		int32_t                                                    TickCount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TickDeltaSeconds;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector4>                                    ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FQuat>                                       ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ArrayData;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector4>                                    ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector2D>                                   ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FQuat>                                       ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	 */
	struct UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OverrideName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<bool>                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	 */
	struct UNiagaraParticleCallbackHandler_ReceiveParticleData_Params
	{
	public:
		TArray<struct FBasicParticleData>                          Data;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UNiagaraSystem*                                      NiagaraSystem;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttributeIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	 */
	struct UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTextureRenderTarget2D*                              Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesX;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesY;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeZ;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeX;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeY;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SizeZ;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVolumeTexture*                                      Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AttributeIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	 */
	struct UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params
	{
	public:
		class UNiagaraComponent*                                   Component;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVolumeTexture*                                      Dest;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesX;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TilesY;                                                  // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TileZ;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAttached_Params
	{
	public:
		class UNiagaraSystem*                                      SystemTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     AttachToComponent;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                AttachPointName;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EAttachLocation                                            LocationType;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoActivate;                                           // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENCPoolMethod                                              PoolingMethod;                                           // 0x0033(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreCullCheck;                                           // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4EAU[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0038(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	 */
	struct UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraSystem*                                      SystemTemplate;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             Scale;                                                   // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoDestroy;                                            // 0x0034(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAutoActivate;                                           // 0x0035(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENCPoolMethod                                              PoolingMethod;                                           // 0x0036(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPreCullCheck;                                           // 0x0037(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0038(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	 */
	struct UNiagaraFunctionLibrary_SetVolumeTextureObject_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UVolumeTexture*                                      Texture;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetTextureObject
	 */
	struct UNiagaraFunctionLibrary_SetTextureObject_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UTexture*                                            Texture;                                                 // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	 */
	struct UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FName>                                        SamplingRegions;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	 */
	struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	 */
	struct UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	 */
	struct UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params
	{
	public:
		class UNiagaraComponent*                                   NiagaraSystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OverrideName;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	 */
	struct UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraParameterCollection*                         Collection;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UNiagaraParameterCollectionInstance*                 ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVectorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InValue;                                                 // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVector4Parameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetVector2DParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           InValue;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetQuatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               InValue;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetIntParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetFloatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InValue;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetColorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        InValue;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	 */
	struct UNiagaraParameterCollectionInstance_SetBoolParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       InValue;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVectorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVector4Parameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetVector2DParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetQuatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuat                                               ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetIntParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetFloatParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetColorParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	 */
	struct UNiagaraParameterCollectionInstance_GetBoolParameter_Params
	{
	public:
		class FString                                              InVariableName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewBase.SetSystem
	 */
	struct ANiagaraPreviewBase_SetSystem_Params
	{
	public:
		class UNiagaraSystem*                                      InSystem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewBase.SetLabelText
	 */
	struct ANiagaraPreviewBase_SetLabelText_Params
	{
	public:
		class FText                                                InXAxisText;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                InYAxisText;                                             // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewAxis.Num
	 */
	struct UNiagaraPreviewAxis_Num_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewAxis.ApplyToPreview
	 */
	struct UNiagaraPreviewAxis_ApplyToPreview_Params
	{
	public:
		class UNiagaraComponent*                                   PreviewComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PreviewIndex;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsXAxis;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5QY0[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OutLabelText;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.SetPaused
	 */
	struct ANiagaraPreviewGrid_SetPaused_Params
	{
	public:
		bool                                                       bPaused;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.GetPreviews
	 */
	struct ANiagaraPreviewGrid_GetPreviews_Params
	{
	public:
		TArray<class UNiagaraComponent*>                           OutPreviews;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
	 */
	struct ANiagaraPreviewGrid_DeactivatePreviews_Params
	{	};

	/**
	 * Function Niagara.NiagaraPreviewGrid.ActivatePreviews
	 */
	struct ANiagaraPreviewGrid_ActivatePreviews_Params
	{
	public:
		bool                                                       bReset;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	 */
	struct UNiagaraScript_RaiseOnGPUCompilationComplete_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
