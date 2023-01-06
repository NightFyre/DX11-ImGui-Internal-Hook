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
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.WeaponDelayVars
	 */
	struct Urc_FPS_AnimBP_C_WeaponDelayVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimGraph
	 */
	struct Urc_FPS_AnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.Calculate legs playrate
	 */
	struct Urc_FPS_AnimBP_C_Calculate_legs_playrate_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.CheckIfShouldTurnInPlace
	 */
	struct Urc_FPS_AnimBP_C_CheckIfShouldTurnInPlace_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.MakeSoundForAi
	 */
	struct Urc_FPS_AnimBP_C_MakeSoundForAi_Params
	{
	public:
		float                                                      Loudness;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7SN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.TurningOnAndOffTheTranslationDelay
	 */
	struct Urc_FPS_AnimBP_C_TurningOnAndOffTheTranslationDelay_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.GetCheckLeaningAmount
	 */
	struct Urc_FPS_AnimBP_C_GetCheckLeaningAmount_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.Fig8Breathing
	 */
	struct Urc_FPS_AnimBP_C_Fig8Breathing_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.GetWpnSettingsFromDT
	 */
	struct Urc_FPS_AnimBP_C_GetWpnSettingsFromDT_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.PlayShellHitGroundSound
	 */
	struct Urc_FPS_AnimBP_C_PlayShellHitGroundSound_Params
	{
	public:
		float                                                      VolumeAdjust;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PZ1L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
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
		class USoundBase*                                          Pipe;                                                    // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalCreaky;                                             // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.PlayFootstepSound
	 */
	struct Urc_FPS_AnimBP_C_PlayFootstepSound_Params
	{
	public:
		float                                                      VolumeAdjust;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ai_MakeNoiseLoudness;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayerOwnVolumeDivideBy;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ZO3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundBase*                                          Default;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Concrete;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          dirt;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Water;                                                   // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Metal;                                                   // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Wood;                                                    // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          grass;                                                   // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Glass;                                                   // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Flesh;                                                   // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Plastic;                                                 // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Fabric;                                                  // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Mud;                                                     // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Gravel;                                                  // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalThin;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalLoud;                                               // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          MetalCreaky;                                             // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.LeftHand_Transform
	 */
	struct Urc_FPS_AnimBP_C_LeftHand_Transform_Params
	{
	public:
		struct FTransform                                          LeftHand_TF;                                             // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.RightHand_Transform
	 */
	struct Urc_FPS_AnimBP_C_RightHand_Transform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.ActiveVars
	 */
	struct Urc_FPS_AnimBP_C_ActiveVars_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_9C73CCFA4359DA2AC978B7824A5D21E3
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_9C73CCFA4359DA2AC978B7824A5D21E3_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_2B08E5DF4093E0E77A04A78098BC7168
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_2B08E5DF4093E0E77A04A78098BC7168_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_DA97AE17410BBA4E862CB0999668C450
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_DA97AE17410BBA4E862CB0999668C450_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_954253494ADDB54BC21398811E4D6C4B
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_954253494ADDB54BC21398811E4D6C4B_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_A18D1ED343AA37F6A9ACB9A9F0870F85
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_A18D1ED343AA37F6A9ACB9A9F0870F85_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_C180746E453CE1573AA6BE9CDC5557D0
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_C180746E453CE1573AA6BE9CDC5557D0_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_C42B0DAA426AA43F5DD63EBB54598EB5
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_C42B0DAA426AA43F5DD63EBB54598EB5_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_BC25A6DD4613EB960C30A6BF601E6E2F
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_BC25A6DD4613EB960C30A6BF601E6E2F_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_7C704FC74BE1B65239CCEFA3188AA3F1
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_7C704FC74BE1B65239CCEFA3188AA3F1_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_388CD99646D2B0B1954B41A172C29962
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_388CD99646D2B0B1954B41A172C29962_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_D8E012034FB3C76F9D6693B323C9F1FB
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_D8E012034FB3C76F9D6693B323C9F1FB_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_619FCD234C59BFFCA5A7AA8B0C695A1F
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_619FCD234C59BFFCA5A7AA8B0C695A1F_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_2DBCC64446C0D797555594B7ABD3F818
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_2DBCC64446C0D797555594B7ABD3F818_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_75FABB01499EE091B2DD2FAE75A408DD
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_75FABB01499EE091B2DD2FAE75A408DD_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_E9723B624461DC21BBB7F0A441D673F9
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_E9723B624461DC21BBB7F0A441D673F9_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_622544034077B2578D6AF2AA6DA37027
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_622544034077B2578D6AF2AA6DA37027_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_69F5BC7441905959E2DBA0A596DBB5D5
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_69F5BC7441905959E2DBA0A596DBB5D5_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_1DB516FD46BAECC6B791DD899702D531
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_1DB516FD46BAECC6B791DD899702D531_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_8EE6EFAD4790CA9DB72833B459B47282
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_8EE6EFAD4790CA9DB72833B459B47282_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_E0A8AD504B95B40AD71E4D81F15ECFDB
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_E0A8AD504B95B40AD71E4D81F15ECFDB_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_BBDA04344FA561ABB63A5D97E48549D3
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_BBDA04344FA561ABB63A5D97E48549D3_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_083378674AB0C3460C42199511D62129
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_083378674AB0C3460C42199511D62129_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_2385901A46E364504676F2B73AC8A8E0
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_2385901A46E364504676F2B73AC8A8E0_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_810267C24E6138EBEF397F94EC01AFF2
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_810267C24E6138EBEF397F94EC01AFF2_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendSpacePlayer_6476EA274853826CF82907BF48C59E5C
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendSpacePlayer_6476EA274853826CF82907BF48C59E5C_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_0E1AF4EC44371618E7310AA04E4FF5B5
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_0E1AF4EC44371618E7310AA04E4FF5B5_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_EEE2278543BAA3D2B88605AD966861FE
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_EEE2278543BAA3D2B88605AD966861FE_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_98E8119A48DB06C364C050A2CC9E8CE0
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_98E8119A48DB06C364C050A2CC9E8CE0_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_00C90FD840A03734E8E7119A4A026EAA
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_00C90FD840A03734E8E7119A4A026EAA_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_B8A032974E99EF2822BD43AD5E2DEA80
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_B8A032974E99EF2822BD43AD5E2DEA80_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_98B929C349E9534EA668F18F6AF3B3EB
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_98B929C349E9534EA668F18F6AF3B3EB_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_Footstep_Walk
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_Footstep_Walk_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_Footstep_Sprint
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_Footstep_Sprint_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_6A23CD304E5FC8329006DD8DBB79960F
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_6A23CD304E5FC8329006DD8DBB79960F_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_JumpStart
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_JumpStart_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_JumpEnd
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_JumpEnd_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_JumpEnd_Sooner
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_JumpEnd_Sooner_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_674AC050446A98AB7321BA9ADAB740C2
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_674AC050446A98AB7321BA9ADAB740C2_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_Footstep_Crouch
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_Footstep_Crouch_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_StartProne
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_StartProne_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_EndProne
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_EndProne_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_StartCrouch
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_StartCrouch_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_EndCrouch
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_EndCrouch_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_AimStart
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_AimStart_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_AimStop
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_AimStop_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_A54B8C5B4183B9387A7A9F84530A19CE
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_A54B8C5B4183B9387A7A9F84530A19CE_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_ShotBullet
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_ShotBullet_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_ReturnedToIdle
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_ReturnedToIdle_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ControlRig_2698A63E443CE9BC0F52C5AF321BC381
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ControlRig_2698A63E443CE9BC0F52C5AF321BC381_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.Force_WalkFootstepSound
	 */
	struct Urc_FPS_AnimBP_C_Force_WalkFootstepSound_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.Force_Crouch_FootstepSound
	 */
	struct Urc_FPS_AnimBP_C_Force_Crouch_FootstepSound_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_ReturnedToIdleRun
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_ReturnedToIdleRun_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_ShotBullet_Flamethrower
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_ShotBullet_Flamethrower_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_ShotBullet_Shotgun
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_ShotBullet_Shotgun_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.StartedWalkingOnModifyMaterial
	 */
	struct Urc_FPS_AnimBP_C_StartedWalkingOnModifyMaterial_Params
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OQR2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       IsRightFoot;                                             // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P6NN[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          FootSocketTransform;                                     // 0x00A0(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.CheckIfShouldDoFootstep
	 */
	struct Urc_FPS_AnimBP_C_CheckIfShouldDoFootstep_Params
	{
	public:
		EPhysicalSurface                                           Surface;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JXKX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          HitResult;                                               // 0x0004(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       IsRightFoot;                                             // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6VFZ[0xF];                                   // 0x0091(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          FootSocketTransform;                                     // 0x00A0(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.PlayerLanded
	 */
	struct Urc_FPS_AnimBP_C_PlayerLanded_Params
	{
	public:
		bool                                                       WasHeavyLand;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.BlueprintUpdateAnimation
	 */
	struct Urc_FPS_AnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ApplyAdditive_1512DB2945D5873A7A7669B55458E96B
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ApplyAdditive_1512DB2945D5873A7A7669B55458E96B_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_177F3DF24A20E2B1812D42AE048D18C6
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_177F3DF24A20E2B1812D42AE048D18C6_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_StartDamage
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_StartDamage_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_StopDamage
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_StopDamage_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.IsUsingPilotSeat
	 */
	struct Urc_FPS_AnimBP_C_IsUsingPilotSeat_Params
	{
	public:
		bool                                                       UsingPilotSeat;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.IsUsingTurret
	 */
	struct Urc_FPS_AnimBP_C_IsUsingTurret_Params
	{
	public:
		bool                                                       UsingTurret;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_FE0F1AD54EBA7B481C039AA4E99AFD90
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_FE0F1AD54EBA7B481C039AA4E99AFD90_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_9FD6E2D647E6DEC73053CCAC84BEE98D
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_9FD6E2D647E6DEC73053CCAC84BEE98D_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.BlueprintInitializeAnimation
	 */
	struct Urc_FPS_AnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_ED787CD149D5ADD337A4BB94704F37A9
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_ED787CD149D5ADD337A4BB94704F37A9_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_9002F9084DCAB0D7825A32A332D61796
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_9002F9084DCAB0D7825A32A332D61796_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_LayeredBoneBlend_805B4D674EE4DFDFFFC068B99639D2A9
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_LayeredBoneBlend_805B4D674EE4DFDFFFC068B99639D2A9_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_D37A06D04133761963F65A93839AD17B
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_D37A06D04133761963F65A93839AD17B_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.DelayWeaponVars
	 */
	struct Urc_FPS_AnimBP_C_DelayWeaponVars_Params
	{
	public:
		float                                                      Turn_Input;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MoveRight_Input;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LookUp_Input;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.StaminaVars
	 */
	struct Urc_FPS_AnimBP_C_StaminaVars_Params
	{
	public:
		float                                                      StaminaPercent;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.PlayHurtAnim
	 */
	struct Urc_FPS_AnimBP_C_PlayHurtAnim_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_13674CCF45C67CD73F8EA58A3E373C7F
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_13674CCF45C67CD73F8EA58A3E373C7F_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_0D511BE6495F74A2AE28408E3612DFA8
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_0D511BE6495F74A2AE28408E3612DFA8_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.DoProxyHitReact
	 */
	struct Urc_FPS_AnimBP_C_DoProxyHitReact_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_D78FC36143CC2DF9818C528FB0DB622B
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_D78FC36143CC2DF9818C528FB0DB622B_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.WeaponisBroken
	 */
	struct Urc_FPS_AnimBP_C_WeaponisBroken_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_3EA4103A4A6A18CB716AC7BE56C2E3A0
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_3EA4103A4A6A18CB716AC7BE56C2E3A0_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_5F694414463DA35139AD82A1D429A0D1
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_5F694414463DA35139AD82A1D429A0D1_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.DelayBlockign
	 */
	struct Urc_FPS_AnimBP_C_DelayBlockign_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.DelayBlockExit
	 */
	struct Urc_FPS_AnimBP_C_DelayBlockExit_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TwoBoneIK_48D976D84DB39B1012DFD99F9D019B72
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TwoBoneIK_48D976D84DB39B1012DFD99F9D019B72_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.CrouchStateChange
	 */
	struct Urc_FPS_AnimBP_C_CrouchStateChange_Params
	{
	public:
		bool                                                       isCrouchingNow;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.TransitionCalculations
	 */
	struct Urc_FPS_AnimBP_C_TransitionCalculations_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.JumpHasBeenTriggered
	 */
	struct Urc_FPS_AnimBP_C_JumpHasBeenTriggered_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.TempTurnOffCtrlRigTranslationEffect
	 */
	struct Urc_FPS_AnimBP_C_TempTurnOffCtrlRigTranslationEffect_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_LandingNow
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_LandingNow_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_UsedMine
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_UsedMine_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.IsUsingCameraTurret
	 */
	struct Urc_FPS_AnimBP_C_IsUsingCameraTurret_Params
	{
	public:
		bool                                                       UsingCameraTurret;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_EndEquipTransition
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_EndEquipTransition_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.Shooting_Shaking
	 */
	struct Urc_FPS_AnimBP_C_Shooting_Shaking_Params
	{
	public:
		bool                                                       TurnOn;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_Shoot
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_Shoot_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.RecoilCurves
	 */
	struct Urc_FPS_AnimBP_C_RecoilCurves_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TwoBoneIK_791C6782426DB3D13EC53882D345C1B6
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TwoBoneIK_791C6782426DB3D13EC53882D345C1B6_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.Recoil_Shaking
	 */
	struct Urc_FPS_AnimBP_C_Recoil_Shaking_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_Fabrik_6B4D9D2F4082FDD29AEE29B4324F5424
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_Fabrik_6B4D9D2F4082FDD29AEE29B4324F5424_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.CheckInAir
	 */
	struct Urc_FPS_AnimBP_C_CheckInAir_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.DelayBeforeInAirTimer
	 */
	struct Urc_FPS_AnimBP_C_DelayBeforeInAirTimer_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.CheckIfSpriting
	 */
	struct Urc_FPS_AnimBP_C_CheckIfSpriting_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.DelayBeforeStartSprint
	 */
	struct Urc_FPS_AnimBP_C_DelayBeforeStartSprint_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.SendBlockingDistance
	 */
	struct Urc_FPS_AnimBP_C_SendBlockingDistance_Params
	{
	public:
		bool                                                       isBlocking;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U9QQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      BlockingDistance;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_Fabrik_1AD33DA549F7966B65673F92954780B1
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_Fabrik_1AD33DA549F7966B65673F92954780B1_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_A2F52B3340592C579142C1B349BB2C01
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_A2F52B3340592C579142C1B349BB2C01_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_1BA3697B4CFCA3B303FC3F9162717264
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_1BA3697B4CFCA3B303FC3F9162717264_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_BC4A866C46B2B08E0B8C5189826D035B
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_BC4A866C46B2B08E0B8C5189826D035B_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_7D8DFEEB4757BDC08CF87B8ED38545FF
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_7D8DFEEB4757BDC08CF87B8ED38545FF_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_6F4C995E491ECF5821ACC6A9D908F58B
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_6F4C995E491ECF5821ACC6A9D908F58B_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ApplyAdditive_7F1E166F4B5BDB627DFB71854F5E6885
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ApplyAdditive_7F1E166F4B5BDB627DFB71854F5E6885_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_2AB08D0541DC5252A046B482003EE106
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_2AB08D0541DC5252A046B482003EE106_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_9AEECE434B4580339C7C408739444ED7
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_9AEECE434B4580339C7C408739444ED7_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_DelayBeforeCanUnBlock
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_DelayBeforeCanUnBlock_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.AnimNotify_StartedBlocking
	 */
	struct Urc_FPS_AnimBP_C_AnimNotify_StartedBlocking_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_387644C747CDC98F76046CB3DF3EA560
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_387644C747CDC98F76046CB3DF3EA560_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_5F1FCB0044B2559BD60BD7B3F09AB745
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_5F1FCB0044B2559BD60BD7B3F09AB745_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_F558715544D6D1C41CBA139C7EE54103
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_F558715544D6D1C41CBA139C7EE54103_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_9538BCC5432AB85582752AB7984FFDB6
	 */
	struct Urc_FPS_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_9538BCC5432AB85582752AB7984FFDB6_Params
	{	};

	/**
	 * Function rc_FPS_AnimBP.rc_FPS_AnimBP_C.ExecuteUbergraph_rc_FPS_AnimBP
	 */
	struct Urc_FPS_AnimBP_C_ExecuteUbergraph_rc_FPS_AnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQCZ[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
