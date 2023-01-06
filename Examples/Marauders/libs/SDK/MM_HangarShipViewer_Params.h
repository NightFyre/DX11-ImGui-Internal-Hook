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
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.Set_PlayerInHangarNow
	 */
	struct AMM_HangarShipViewer_C_Set_PlayerInHangarNow_Params
	{
	public:
		bool                                                       PlayerIsInTheHangar;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8O3N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.AttachingRelativeTransformChange
	 */
	struct AMM_HangarShipViewer_C_AttachingRelativeTransformChange_Params
	{
	public:
		EShipAttachmentSlot                                        WhichShipPart;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FV9X[0xF];                                   // 0x0001(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          AttachOffsetTransform;                                   // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_SetBoomLengthAttachmentCamera
	 */
	struct AMM_HangarShipViewer_C_Ship_SetBoomLengthAttachmentCamera_Params
	{
	public:
		bool                                                       isInstantChange;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GVOT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      TargetArmLength;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ZoomXamount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_Switch to Ship Attachment Slot
	 */
	struct AMM_HangarShipViewer_C_Ship_Switch_to_Ship_Attachment_Slot_Params
	{
	public:
		EShipAttachmentSlot                                        WhichShipAttachmentSlot;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BJOC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                CurrentShipItemDTName;                                   // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DoAZoom;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYQF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.Set_PlayerAbleToRotate
	 */
	struct AMM_HangarShipViewer_C_Set_PlayerAbleToRotate_Params
	{
	public:
		bool                                                       isallowed_to_rotate;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.Switch Ship
	 */
	struct AMM_HangarShipViewer_C_Switch_Ship_Params
	{
	public:
		class FName                                                ShipName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2
	 */
	struct AMM_HangarShipViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1
	 */
	struct AMM_HangarShipViewer_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E
	 */
	struct AMM_HangarShipViewer_C_OnLoaded_4564612F48A1978F1C5D93BFD52B8F5E_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.SetWhichCameraView
	 */
	struct AMM_HangarShipViewer_C_SetWhichCameraView_Params
	{
	public:
		bool                                                       isAttachmentView;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.SwitchShipNew_DoNotUse
	 */
	struct AMM_HangarShipViewer_C_SwitchShipNew_DoNotUse_Params
	{
	public:
		class FName                                                Switch_Ship;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.ReceiveTick
	 */
	struct AMM_HangarShipViewer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.ReceiveBeginPlay
	 */
	struct AMM_HangarShipViewer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.Ship_UpdateShipRenderActor
	 */
	struct AMM_HangarShipViewer_C_Ship_UpdateShipRenderActor_Params
	{
	public:
		class FName                                                Switch_Ship;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OnlyUpdateBaseTransform;                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsStarterShip;                                           // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MM_HangarShipViewer.MM_HangarShipViewer_C.ExecuteUbergraph_MM_HangarShipViewer
	 */
	struct AMM_HangarShipViewer_C_ExecuteUbergraph_MM_HangarShipViewer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HK07[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
