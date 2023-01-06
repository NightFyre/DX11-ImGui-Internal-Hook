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
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.WeaponDelayVars
	 */
	struct Urc_AI_FPS_AnimBP_C_WeaponDelayVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimGraph
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.CalculateLegsPlayrate
	 */
	struct Urc_AI_FPS_AnimBP_C_CalculateLegsPlayrate_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.IsValidMat
	 */
	struct Urc_AI_FPS_AnimBP_C_IsValidMat_Params
	{
	public:
		EPhysicalSurface                                           SurfaceHit;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ValidMat;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.Fig8Breathing
	 */
	struct Urc_AI_FPS_AnimBP_C_Fig8Breathing_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.GetWpnSettingsFromDT
	 */
	struct Urc_AI_FPS_AnimBP_C_GetWpnSettingsFromDT_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.PlayShellHitGroundSound
	 */
	struct Urc_AI_FPS_AnimBP_C_PlayShellHitGroundSound_Params
	{
	public:
		float                                                      VolumeAdjust;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWN5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Default;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Concrete;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          dirt;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Water;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Metal;                                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Wood;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          grass;                                                   // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Glass;                                                   // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Flesh;                                                   // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Plastic;                                                 // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Fabric;                                                  // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Mud;                                                     // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Gravel;                                                  // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalThin;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalLoud;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalCreaky;                                             // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.PlayFootstepSound
	 */
	struct Urc_AI_FPS_AnimBP_C_PlayFootstepSound_Params
	{
	public:
		float                                                      VolumeAdjust;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FL5R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Default;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Concrete;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          dirt;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Water;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Metal;                                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Wood;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          grass;                                                   // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Glass;                                                   // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Flesh;                                                   // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Plastic;                                                 // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Fabric;                                                  // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Mud;                                                     // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Gravel;                                                  // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalThin;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalLoud;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalCreaky;                                             // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.LeftHand_Transform
	 */
	struct Urc_AI_FPS_AnimBP_C_LeftHand_Transform_Params
	{
	public:
		struct FTransform                                          LeftHand_TF;                                             // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.RightHand_Transform
	 */
	struct Urc_AI_FPS_AnimBP_C_RightHand_Transform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.ActiveVars
	 */
	struct Urc_AI_FPS_AnimBP_C_ActiveVars_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_00272C424B5E5CD2548893B7B1DFD409
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_00272C424B5E5CD2548893B7B1DFD409_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_613AB2E04D7049C2E1E4849EB05F12ED
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_613AB2E04D7049C2E1E4849EB05F12ED_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_F979534A435AE31493B1B695D55E809A
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_F979534A435AE31493B1B695D55E809A_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_054C617349EC63162DBA53A3FF2C3B56
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_054C617349EC63162DBA53A3FF2C3B56_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_9BD687F042C91E6E31A100A247EA57EB
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_9BD687F042C91E6E31A100A247EA57EB_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_D141397E4FF34CD695096BB30D0D7B35
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_D141397E4FF34CD695096BB30D0D7B35_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_A3ED3CBA4DE41EECF8471D881F30AD08
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_A3ED3CBA4DE41EECF8471D881F30AD08_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_2571C1514BA50D0C56B726BDC3CDDB42
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_2571C1514BA50D0C56B726BDC3CDDB42_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B546B03243726B0B61158D9C7528781F
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B546B03243726B0B61158D9C7528781F_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ApplyAdditive_C9E6A2344F36FA9DA6BC56ACF237014A
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ApplyAdditive_C9E6A2344F36FA9DA6BC56ACF237014A_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_00D5189B4B2744188D1D6EA2F17B4C3B
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_00D5189B4B2744188D1D6EA2F17B4C3B_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_5468872B410EFA5E3D017F9DA8022198
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_5468872B410EFA5E3D017F9DA8022198_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4CE2CAFB4FA93A75043681B998D1F6DB
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4CE2CAFB4FA93A75043681B998D1F6DB_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_85844F5A4FD2BF7730DA0B9B525093A9
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_85844F5A4FD2BF7730DA0B9B525093A9_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_LayeredBoneBlend_FD01AE0B4A2F5F75AEE18DB7B962125E
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_LayeredBoneBlend_FD01AE0B4A2F5F75AEE18DB7B962125E_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_FF947D73496E0CF4B574C2BDA9D3705C
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_FF947D73496E0CF4B574C2BDA9D3705C_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4AC66980498AE30094FBDBA3790C199D
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4AC66980498AE30094FBDBA3790C199D_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_6C308D0047F4E4E4FBE3B28D1E56FAE6
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_6C308D0047F4E4E4FBE3B28D1E56FAE6_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_8A40C07645059E29B519FAAE4D183036
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_8A40C07645059E29B519FAAE4D183036_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_03506F8B4D5506DF4222E4AB80723C62
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_03506F8B4D5506DF4222E4AB80723C62_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4A2EC4A449B5CB42162E9D966BF33FC0
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4A2EC4A449B5CB42162E9D966BF33FC0_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TwoBoneIK_133022B8434C074DD80B14B0AC5179D0
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TwoBoneIK_133022B8434C074DD80B14B0AC5179D0_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TwoBoneIK_2D920BA9427810E1649B508EED62EE5D
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TwoBoneIK_2D920BA9427810E1649B508EED62EE5D_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_Fabrik_8C7ED10C435924B672F26C953786AF02
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_Fabrik_8C7ED10C435924B672F26C953786AF02_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_Fabrik_236FEC384B369F6266F82E9BF9988D32
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_Fabrik_236FEC384B369F6266F82E9BF9988D32_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_F5EEF6A0458CFEEC3B799597A8A4CF0C
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_F5EEF6A0458CFEEC3B799597A8A4CF0C_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_6B3A41EC4B40FE17D9E346A63407BC2B
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_6B3A41EC4B40FE17D9E346A63407BC2B_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_B40B74734812CF964A083F8BE43B0C52
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_B40B74734812CF964A083F8BE43B0C52_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_17A723954D31B492402415BCE9E85897
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_17A723954D31B492402415BCE9E85897_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_81C8FC964AF67E482A6761BF90F35537
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_81C8FC964AF67E482A6761BF90F35537_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_31CB251B481E99377BB70BBD71AEFB31
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_31CB251B481E99377BB70BBD71AEFB31_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_F99C336C49B65B9A6CBB45874537B181
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_F99C336C49B65B9A6CBB45874537B181_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B1C6D1174439FD5C8CF20A8F461679FF
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B1C6D1174439FD5C8CF20A8F461679FF_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_7E8B85CF4579531F3693D1AC87E3397A
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_7E8B85CF4579531F3693D1AC87E3397A_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_302864F844E1BA0AEBF23C862984D829
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_302864F844E1BA0AEBF23C862984D829_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_F80435D14D433078B85E4AB8140F46F4
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_F80435D14D433078B85E4AB8140F46F4_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_Footstep_Walk
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_Footstep_Walk_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_Footstep_Sprint
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_Footstep_Sprint_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_29CAFA8A4B28BFA8AD640D8310B251AB
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_29CAFA8A4B28BFA8AD640D8310B251AB_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B59A7F094AFDA8B5DC21E58C0D1A20ED
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B59A7F094AFDA8B5DC21E58C0D1A20ED_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_JumpStart
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_JumpStart_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_JumpEnd
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_JumpEnd_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendSpacePlayer_5EFECC074F7581984859AFB984BA28E2
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendSpacePlayer_5EFECC074F7581984859AFB984BA28E2_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_JumpEnd_Sooner
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_JumpEnd_Sooner_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_Footstep_Crouch
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_Footstep_Crouch_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_StartProne
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_StartProne_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_EndProne
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_EndProne_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_StartCrouch
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_StartCrouch_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_EndCrouch
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_EndCrouch_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_AimStart
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_AimStart_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_AimStop
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_AimStop_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_ShotBullet
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_ShotBullet_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_ReturnedToIdle
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_ReturnedToIdle_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.Force_WalkFootstepSound
	 */
	struct Urc_AI_FPS_AnimBP_C_Force_WalkFootstepSound_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.Force_Crouch_FootstepSound
	 */
	struct Urc_AI_FPS_AnimBP_C_Force_Crouch_FootstepSound_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_ReturnedToIdleRun
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_ReturnedToIdleRun_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_ShotBullet_Flamethrower
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_ShotBullet_Flamethrower_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_ShotBullet_Shotgun
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_ShotBullet_Shotgun_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_44A1DD6648D29C10F6CF89BF5FA480F4
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_44A1DD6648D29C10F6CF89BF5FA480F4_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct Urc_AI_FPS_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_D5D521E048270D7DDA1A9584EF34CB74
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_D5D521E048270D7DDA1A9584EF34CB74_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_32CF3BF04861F846AC8552BE2F06093A
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_32CF3BF04861F846AC8552BE2F06093A_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_FBE09C944B9BECFB8D7223A9D263F0B3
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_FBE09C944B9BECFB8D7223A9D263F0B3_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_StartDamage
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_StartDamage_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_StopDamage
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_StopDamage_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_5A132AC04C2EFAAACC2EB997D398D380
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_5A132AC04C2EFAAACC2EB997D398D380_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.IsUsingPilotSeat
	 */
	struct Urc_AI_FPS_AnimBP_C_IsUsingPilotSeat_Params
	{
	public:
		bool                                                       UsingPilotSeat;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.IsUsingTurret
	 */
	struct Urc_AI_FPS_AnimBP_C_IsUsingTurret_Params
	{
	public:
		bool                                                       UsingTurret;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_8E73F6A0495E08A6D6961384A1FAE2C1
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_8E73F6A0495E08A6D6961384A1FAE2C1_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.BlueprintInitializeAnimation
	 */
	struct Urc_AI_FPS_AnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.DelayWeaponVars
	 */
	struct Urc_AI_FPS_AnimBP_C_DelayWeaponVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.StaminaVars
	 */
	struct Urc_AI_FPS_AnimBP_C_StaminaVars_Params
	{
	public:
		float                                                      StaminaPercent;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.PlayHurtAnim
	 */
	struct Urc_AI_FPS_AnimBP_C_PlayHurtAnim_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_5F89598C4F955FE8BF4215B9B5E48573
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_5F89598C4F955FE8BF4215B9B5E48573_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.DoProxyHitReact
	 */
	struct Urc_AI_FPS_AnimBP_C_DoProxyHitReact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.WeaponisBroken
	 */
	struct Urc_AI_FPS_AnimBP_C_WeaponisBroken_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_AC1DCF664F3B9ABE371FB4A8D5AB5957
	 */
	struct Urc_AI_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_AC1DCF664F3B9ABE371FB4A8D5AB5957_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.SendBlockingDistance
	 */
	struct Urc_AI_FPS_AnimBP_C_SendBlockingDistance_Params
	{
	public:
		bool                                                       isBlocking;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_87L3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlockingDistance;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.Shooting_Shaking
	 */
	struct Urc_AI_FPS_AnimBP_C_Shooting_Shaking_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.IsUsingCameraTurret
	 */
	struct Urc_AI_FPS_AnimBP_C_IsUsingCameraTurret_Params
	{
	public:
		bool                                                       UsingCameraTurret;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.AnimNotify_JumpStartedForControlRig
	 */
	struct Urc_AI_FPS_AnimBP_C_AnimNotify_JumpStartedForControlRig_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.JumpHasBeenTriggered
	 */
	struct Urc_AI_FPS_AnimBP_C_JumpHasBeenTriggered_Params
	{	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.CrouchStateChange
	 */
	struct Urc_AI_FPS_AnimBP_C_CrouchStateChange_Params
	{
	public:
		bool                                                       isCrouchingNow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C.ExecuteUbergraph_rc_AI_FPS_AnimBP
	 */
	struct Urc_AI_FPS_AnimBP_C_ExecuteUbergraph_rc_AI_FPS_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
