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
	 * Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
	 */
	struct UMagicLeapARPinComponent_UnPin_Params
	{	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
	 */
	struct UMagicLeapARPinComponent_TryGetPinData_Params
	{
	public:
		class UClass*                                              InPinDataClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutPinDataValid;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X0U1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMagicLeapARPinSaveGame*                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
	 */
	struct UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
	 */
	struct UMagicLeapARPinComponent_PinToID_Params
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
	 */
	struct UMagicLeapARPinComponent_PinToBestFit_Params
	{	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
	 */
	struct UMagicLeapARPinComponent_PinSceneComponent_Params
	{
	public:
		class USceneComponent*                                     ComponentToPin;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
	 */
	struct UMagicLeapARPinComponent_PinRestoredOrSynced_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
	 */
	struct UMagicLeapARPinComponent_PinActor_Params
	{
	public:
		class AActor*                                              ActorToPin;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
	 */
	struct UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params
	{
	public:
		bool                                                       bRestoredOrSynced;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
	 */
	struct UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
	 */
	struct UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params
	{
	public:
		bool                                                       bDataRestored;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
	 */
	struct UMagicLeapARPinComponent_IsPinned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
	 */
	struct UMagicLeapARPinComponent_GetPinState_Params
	{
	public:
		struct FMagicLeapARPinState                                State;                                                   // 0x0000(0x0014)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
	 */
	struct UMagicLeapARPinComponent_GetPinnedPinID_Params
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
	 */
	struct UMagicLeapARPinComponent_GetPinData_Params
	{
	public:
		class UClass*                                              PinDataClass;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMagicLeapARPinSaveGame*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
	 */
	struct UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params
	{	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
	 */
	struct UMagicLeapARPinComponent_AttemptPinDataRestoration_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
	 */
	struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
	 */
	struct UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
	 */
	struct UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params
	{
	public:
		struct FMagicLeapARPinQuery                                InGlobalFilter;                                          // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
	 */
	struct UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params
	{
	public:
		int32_t                                                    UserIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
	 */
	struct UMagicLeapARPinFunctionLibrary_QueryARPins_Params
	{
	public:
		struct FMagicLeapARPinQuery                                Query;                                                   // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FGuid>                                       Pins;                                                    // 0x0068(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
	 */
	struct UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params
	{
	public:
		class FString                                              PinIdString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               ARPinId;                                                 // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
	 */
	struct UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
	 */
	struct UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
	 */
	struct UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params
	{
	public:
		struct FMagicLeapARPinQuery                                CurrentGlobalFilter;                                     // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
	 */
	struct UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
	 */
	struct UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params
	{
	public:
		struct FVector                                             SearchPoint;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGuid                                               PinId;                                                   // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
	 */
	struct UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params
	{
	public:
		int32_t                                                    NumRequested;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NKA1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGuid>                                       Pins;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
	 */
	struct UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params
	{
	public:
		struct FMagicLeapARPinState                                State;                                                   // 0x0000(0x0014)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2E3M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
	 */
	struct UMagicLeapARPinFunctionLibrary_GetARPinState_Params
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FMagicLeapARPinState                                State;                                                   // 0x0010(0x0014)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
	 */
	struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       PinFoundInEnvironment;                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
	 */
	struct UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params
	{
	public:
		struct FGuid                                               PinId;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Orientation;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       PinFoundInEnvironment;                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
	 */
	struct UMagicLeapARPinFunctionLibrary_DestroyTracker_Params
	{
	public:
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
	 */
	struct UMagicLeapARPinFunctionLibrary_CreateTracker_Params
	{
	public:
		EMagicLeapPassableWorldError                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
	 */
	struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
	 */
	struct UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params
	{
	public:
		class FScriptDelegate                                      Delegate;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
	 */
	struct UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params
	{
	public:
		struct FGuid                                               ARPinId;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
	 */
	struct AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params
	{	};

	/**
	 * Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
	 */
	struct AMagicLeapARPinRenderer_SetVisibilityOverride_Params
	{
	public:
		bool                                                       InVisibilityOverride;                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
