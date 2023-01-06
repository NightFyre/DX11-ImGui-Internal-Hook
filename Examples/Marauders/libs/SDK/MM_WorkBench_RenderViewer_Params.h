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
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.Set_Workbench_AbleToRotate
	 */
	struct AMM_WorkBench_RenderViewer_C_Set_Workbench_AbleToRotate_Params
	{
	public:
		bool                                                       isAllowedToBeRotatedByPlayer;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.Show Hide Wpn_WB_Actor
	 */
	struct AMM_WorkBench_RenderViewer_C_Show_Hide_Wpn_WB_Actor_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.AttachingRelativeTransformChange
	 */
	struct AMM_WorkBench_RenderViewer_C_AttachingRelativeTransformChange_Params
	{
	public:
		EAttachmentSlot                                            WhichPart;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YRUE[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          AttachOffsetTransform;                                   // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetBoomLength_AttachmentCamera
	 */
	struct AMM_WorkBench_RenderViewer_C_SetBoomLength_AttachmentCamera_Params
	{
	public:
		bool                                                       isInstantChange;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PXOU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TargetArmLength;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomXamount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SwitchToAttachmentCamera
	 */
	struct AMM_WorkBench_RenderViewer_C_SwitchToAttachmentCamera_Params
	{
	public:
		EAttachmentSlot                                            WhichAttachement;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NAGP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                ItemDataName;                                            // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DoZoom;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2NMB[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetBoomLength_MainCamera
	 */
	struct AMM_WorkBench_RenderViewer_C_SetBoomLength_MainCamera_Params
	{
	public:
		bool                                                       isInstantChange;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X4LD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TargetArmLength;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomXamount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.SetMainMeshTransform
	 */
	struct AMM_WorkBench_RenderViewer_C_SetMainMeshTransform_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            NewRotation;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 */
	struct AMM_WorkBench_RenderViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	 */
	struct AMM_WorkBench_RenderViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ReceiveTick
	 */
	struct AMM_WorkBench_RenderViewer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ReceiveBeginPlay
	 */
	struct AMM_WorkBench_RenderViewer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MM_WorkBench_RenderViewer.MM_WorkBench_RenderViewer_C.ExecuteUbergraph_MM_WorkBench_RenderViewer
	 */
	struct AMM_WorkBench_RenderViewer_C_ExecuteUbergraph_MM_WorkBench_RenderViewer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEQJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
