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
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass rc_AI_FPS_AnimBP.rc_AI_FPS_AnimBP_C
	 * Size -> 0x57D4 (FullSize[0x5A8C] - InheritedSize[0x02B8])
	 */
	class Urc_AI_FPS_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_TZGF[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x02C8(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x03D0(0x00C0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x0490(0x0080)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x0510(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x0618(0x0158)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x0770(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x0878(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x0898(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x08B8(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x09C0(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x09E0(0x0108)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x0AE8(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x0B08(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x0B28(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x0C80(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x0CA8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x0DB0(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x0EB8(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x1010(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x1038(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x1060(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x1088(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x10B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x10D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x1100(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x1128(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x1150(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x1178(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x11A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x11C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x11F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x1218(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x1240(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x12C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x12F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x1370(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x13A0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x1420(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x1450(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x14D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x1500(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x1580(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x15B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x1630(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x1660(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x16E0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x1710(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x17C0(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x1918(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x1A70(0x0028)
		struct FAnimNode_TwoWayBlend                               AnimGraphNode_TwoWayBlend;                               // 0x1A98(0x00C8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x1B60(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x1BE0(0x00C0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x1CA0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x1DA8(0x0108)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x1EB0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1ED8(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x1F00(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x1FA0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x2020(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x20A0(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x2140(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x2298(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x22C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x22E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x2310(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x2338(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x2360(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x2388(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x23B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x23D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x2400(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x2428(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x2450(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x24D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x2500(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x2580(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x25B0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x2630(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x2660(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x2700(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x2780(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x2820(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x28C0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x2940(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x29C0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x2AA8(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2AD8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x2B00(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x2B28(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x2B50(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x2B78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x2BF8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x2C28(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x2CA8(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x2CD8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x2D78(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x2E18(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x2E98(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x2F18(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x2F98(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x3038(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x3120(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x3150(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x3200(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x3230(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x32E0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x33A0(0x0028)
		unsigned char                                              UnknownData_393E[0x8];                                   // 0x33C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x33D0(0x01E0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x35B0(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x3708(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x37A8(0x00A0)
		unsigned char                                              UnknownData_2IPN[0x8];                                   // 0x3848(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x3850(0x01E0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x3A30(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x3A58(0x0048)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x3AA0(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x3C30(0x0190)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x3DC0(0x0108)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x3EC8(0x0368)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x4230(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x4338(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x4440(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x4548(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x4590(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x45B0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x46B8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x47C0(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x48C8(0x0020)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x48E8(0x0080)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x4968(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x4988(0x0020)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x49A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x49D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x49F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x4A20(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x4A48(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x4AC8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x4AF8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x4B78(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x4BA8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x4C28(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x4C58(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x4CD8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x4D58(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x4DF8(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x4E98(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x4F18(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x5000(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x50A0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x50D0(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x5180(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x51B0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x5260(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x5300(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x5328(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x5370(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x53A0(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x5488(0x00C8)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x5550(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x5598(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x5638(0x0080)
		struct FVector                                             __CustomProperty_ADS_Breathing_Value_70E750DF4B6A0B0C389FD9AB849C6491; // 0x56B8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_BlockingOffsetAlpha_70E750DF4B6A0B0C389FD9AB849C6491; // 0x56C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_Weapon_ControlRig_Settings                       __CustomProperty_WeaponControlRigSettings_70E750DF4B6A0B0C389FD9AB849C6491; // 0x56C8(0x00E8) IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_DelayRotation_70E750DF4B6A0B0C389FD9AB849C6491; // 0x57B0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isADS_70E750DF4B6A0B0C389FD9AB849C6491; // 0x57BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isUnarmed_70E750DF4B6A0B0C389FD9AB849C6491; // 0x57BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q3OF[0x2];                                   // 0x57BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      MPS;                                                     // 0x57C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x57C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x57CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bend;                                                    // 0x57D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Leaning;                                                 // 0x57D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlockDistance;                                           // 0x57D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadRotation;                                            // 0x57DC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Wiggle;                                                  // 0x57E8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCrouched;                                              // 0x57F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHolstered;                                             // 0x57F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAiming;                                                // 0x57F6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoveLeftHand;                                            // 0x57F7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNoMontagePlaying;                                      // 0x57F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2S9M[0x7];                                   // 0x57F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         BlendSpace;                                              // 0x5800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Idle_Anim;                                               // 0x5808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Walk_Anim;                                               // 0x5810(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Sprint_Anim;                                             // 0x5818(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_In_Anim;                                             // 0x5820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_Idle_Anim;                                           // 0x5828(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_Out_Anim;                                            // 0x5830(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Blocked_Anim;                                            // 0x5838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LeftHandGrip;                                            // 0x5840(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7US4[0x8];                                   // 0x5848(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHand_TF;                                            // 0x5850(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          LeftHand_TF;                                             // 0x5880(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          Weapon_TF;                                               // 0x58B0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsProne;                                                 // 0x58E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R59Y[0x3];                                   // 0x58E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimSetToUse;                                            // 0x58E4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FootstepTraceSuccess;                                    // 0x58EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RUXO[0x3];                                   // 0x58ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Footstep_HitLocation;                                    // 0x58F0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPhysicalSurface                                           FootstepSurfaceType;                                     // 0x58FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isInAir;                                                 // 0x58FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShellTraceSuccess;                                       // 0x58FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J6US[0x1];                                   // 0x58FF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Shell_HitLocation;                                       // 0x5900(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPhysicalSurface                                           Shell_SurfaceType;                                       // 0x590C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OCWX[0x3];                                   // 0x590D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Aim_Walk_Anim;                                           // 0x5910(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnOffTheIKHands;                                       // 0x5918(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnOffIKFromCurve;                                      // 0x5919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMeleeWeapon;                                           // 0x591A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Using_Pilot_Seat;                                        // 0x591B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Using_Turret;                                            // 0x591C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TRAE[0x3];                                   // 0x591D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DeltaRotation;                                           // 0x5920(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PrevRotation;                                            // 0x592C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            AimDelay;                                                // 0x5938(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WS_TurnDelay_MaxAngle;                                   // 0x5944(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_TurnDelay_MaxAngle_ADS;                               // 0x5948(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_TurnDelay_RotationInterpTo;                           // 0x594C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_Weapon_ControlRig_Settings                       CurrentWeaponSettings;                                   // 0x5950(0x00E8) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Stamina_Percent_PlayrateEffect;                          // 0x5A38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PainNoise;                                               // 0x5A3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ADS_Fig8_BreathingOffset;                                // 0x5A40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Base_Frequency;                               // 0x5A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Horizonal_Extents;                            // 0x5A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Vertical_Extents;                             // 0x5A54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaPercent;                                          // 0x5A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Idle_NoStaminaPlayrateMaxEffect;                  // 0x5A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_Idle_NoStaminaPlayrateMaxEffect;                      // 0x5A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Idle_ADS_StaminaBreathingPlayrate;                       // 0x5A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Idle_StaminaBreathingPlayrate;                           // 0x5A68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BlockWpnStep1Amount;                                     // 0x5A6C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBlockingPreviously;                                   // 0x5A78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_03HZ[0x3];                                   // 0x5A79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockAlphaTarget;                                        // 0x5A7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsServerVersion;                                         // 0x5A80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBot;                                                   // 0x5A81(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LQFP[0x2];                                   // 0x5A82(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Standing_LegsPlayrate;                                   // 0x5A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Crouching_Legs_Playrate;                                 // 0x5A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void WeaponDelayVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void CalculateLegsPlayrate();
		void IsValidMat(EPhysicalSurface SurfaceHit, bool* ValidMat);
		void Fig8Breathing();
		void GetWpnSettingsFromDT();
		void PlayShellHitGroundSound(float VolumeAdjust, class USoundBase* Default, class USoundBase* Concrete, class USoundBase* dirt, class USoundBase* Water, class USoundBase* Metal, class USoundBase* Wood, class USoundBase* grass, class USoundBase* Glass, class USoundBase* Flesh, class USoundBase* Plastic, class USoundBase* Fabric, class USoundBase* Mud, class USoundBase* Gravel, class USoundBase* MetalThin, class USoundBase* MetalLoud, class USoundBase* MetalCreaky);
		void PlayFootstepSound(float VolumeAdjust, class USoundBase* Default, class USoundBase* Concrete, class USoundBase* dirt, class USoundBase* Water, class USoundBase* Metal, class USoundBase* Wood, class USoundBase* grass, class USoundBase* Glass, class USoundBase* Flesh, class USoundBase* Plastic, class USoundBase* Fabric, class USoundBase* Mud, class USoundBase* Gravel, class USoundBase* MetalThin, class USoundBase* MetalLoud, class USoundBase* MetalCreaky);
		void LeftHand_Transform(struct FTransform* LeftHand_TF);
		struct FTransform RightHand_Transform();
		void ActiveVars();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_00272C424B5E5CD2548893B7B1DFD409();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_613AB2E04D7049C2E1E4849EB05F12ED();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_F979534A435AE31493B1B695D55E809A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_054C617349EC63162DBA53A3FF2C3B56();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_9BD687F042C91E6E31A100A247EA57EB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_D141397E4FF34CD695096BB30D0D7B35();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_A3ED3CBA4DE41EECF8471D881F30AD08();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_2571C1514BA50D0C56B726BDC3CDDB42();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B546B03243726B0B61158D9C7528781F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ApplyAdditive_C9E6A2344F36FA9DA6BC56ACF237014A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_00D5189B4B2744188D1D6EA2F17B4C3B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_5468872B410EFA5E3D017F9DA8022198();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4CE2CAFB4FA93A75043681B998D1F6DB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_85844F5A4FD2BF7730DA0B9B525093A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_LayeredBoneBlend_FD01AE0B4A2F5F75AEE18DB7B962125E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_FF947D73496E0CF4B574C2BDA9D3705C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4AC66980498AE30094FBDBA3790C199D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_6C308D0047F4E4E4FBE3B28D1E56FAE6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_8A40C07645059E29B519FAAE4D183036();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_03506F8B4D5506DF4222E4AB80723C62();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_4A2EC4A449B5CB42162E9D966BF33FC0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TwoBoneIK_133022B8434C074DD80B14B0AC5179D0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TwoBoneIK_2D920BA9427810E1649B508EED62EE5D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_Fabrik_8C7ED10C435924B672F26C953786AF02();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_Fabrik_236FEC384B369F6266F82E9BF9988D32();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_F5EEF6A0458CFEEC3B799597A8A4CF0C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_6B3A41EC4B40FE17D9E346A63407BC2B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_B40B74734812CF964A083F8BE43B0C52();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_ModifyBone_17A723954D31B492402415BCE9E85897();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_81C8FC964AF67E482A6761BF90F35537();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_31CB251B481E99377BB70BBD71AEFB31();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_F99C336C49B65B9A6CBB45874537B181();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B1C6D1174439FD5C8CF20A8F461679FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_7E8B85CF4579531F3693D1AC87E3397A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_302864F844E1BA0AEBF23C862984D829();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_F80435D14D433078B85E4AB8140F46F4();
		void AnimNotify_Footstep_Walk();
		void AnimNotify_Footstep_Sprint();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_29CAFA8A4B28BFA8AD640D8310B251AB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_B59A7F094AFDA8B5DC21E58C0D1A20ED();
		void AnimNotify_JumpStart();
		void AnimNotify_JumpEnd();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendSpacePlayer_5EFECC074F7581984859AFB984BA28E2();
		void AnimNotify_JumpEnd_Sooner();
		void AnimNotify_Footstep_Crouch();
		void AnimNotify_StartProne();
		void AnimNotify_EndProne();
		void AnimNotify_StartCrouch();
		void AnimNotify_EndCrouch();
		void AnimNotify_AimStart();
		void AnimNotify_AimStop();
		void AnimNotify_ShotBullet();
		void AnimNotify_ReturnedToIdle();
		void Force_WalkFootstepSound();
		void Force_Crouch_FootstepSound();
		void AnimNotify_ReturnedToIdleRun();
		void AnimNotify_ShotBullet_Flamethrower();
		void AnimNotify_ShotBullet_Shotgun();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_44A1DD6648D29C10F6CF89BF5FA480F4();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_D5D521E048270D7DDA1A9584EF34CB74();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_32CF3BF04861F846AC8552BE2F06093A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_FBE09C944B9BECFB8D7223A9D263F0B3();
		void AnimNotify_StartDamage();
		void AnimNotify_StopDamage();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_SequencePlayer_5A132AC04C2EFAAACC2EB997D398D380();
		void IsUsingPilotSeat(bool UsingPilotSeat);
		void IsUsingTurret(bool UsingTurret);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_BlendListByBool_8E73F6A0495E08A6D6961384A1FAE2C1();
		void BlueprintInitializeAnimation();
		void DelayWeaponVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void StaminaVars(float StaminaPercent);
		void PlayHurtAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_5F89598C4F955FE8BF4215B9B5E48573();
		void DoProxyHitReact(const struct FHitResult& HitResult);
		void WeaponisBroken();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_AI_FPS_AnimBP_AnimGraphNode_TransitionResult_AC1DCF664F3B9ABE371FB4A8D5AB5957();
		void SendBlockingDistance(bool isBlocking, float BlockingDistance);
		void Shooting_Shaking(bool TurnOn);
		void IsUsingCameraTurret(bool UsingCameraTurret);
		void AnimNotify_JumpStartedForControlRig();
		void JumpHasBeenTriggered();
		void CrouchStateChange(bool isCrouchingNow);
		void ExecuteUbergraph_rc_AI_FPS_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
