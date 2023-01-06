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
	 * AnimBlueprintGeneratedClass rc_FPS_AnimBP.rc_FPS_AnimBP_C
	 * Size -> 0x8809 (FullSize[0x8AC1] - InheritedSize[0x02B8])
	 */
	class Urc_FPS_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6231[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_11;                         // 0x02C8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_20;                          // 0x0420(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_20;                             // 0x0448(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_19;                             // 0x0550(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_10;                         // 0x0658(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x07B0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x07D8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x0800(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x0828(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x0850(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x0878(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x08A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x08C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x08F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x0918(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x0940(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x0968(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x0990(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x09B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x09E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x0A08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x0A30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x0A58(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45;                         // 0x0A80(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x0B00(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_44;                         // 0x0B30(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x0BB0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_43;                         // 0x0BE0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x0C60(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_42;                         // 0x0C90(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x0D10(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_41;                         // 0x0D40(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x0DC0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_40;                         // 0x0DF0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x0E70(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_39;                         // 0x0EA0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x0F20(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_38;                         // 0x0F50(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x0FD0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_8;                            // 0x1000(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_9;                          // 0x10B0(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_8;                          // 0x1208(0x0158)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x1360(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x1380(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_18;                             // 0x13A0(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_8;                        // 0x14A8(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_31;                        // 0x1568(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_30;                        // 0x1608(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x16A8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x1728(0x0080)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x17A8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x17F0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_19;                          // 0x1948(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x1970(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x1998(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x19C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x19E8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x1A10(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x1A38(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x1A60(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x1A88(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x1AB0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x1AD8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x1B00(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x1B80(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x1BB0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x1C30(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x1C60(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x1CE0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x1D10(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_29;                        // 0x1D90(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_28;                        // 0x1E30(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x1ED0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_27;                        // 0x1F50(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x1FF0(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x2070(0x00E8)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x2158(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_26;                        // 0x21D8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x2278(0x0030)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x22A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x22D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x22F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x2320(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x2348(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x23C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x23F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x2478(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_25;                        // 0x24A8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_24;                        // 0x2548(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x25E8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x2668(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x26E8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_23;                        // 0x2768(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x2808(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x28F0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x2920(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x29D0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x2A00(0x00B0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_7;                        // 0x2AB0(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_18;                          // 0x2B70(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_17;                          // 0x2B98(0x0028)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x2BC0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x2BE0(0x0020)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x2C00(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x2C48(0x0020)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_16;                          // 0x2C68(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x2C90(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x2DE8(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_6;                        // 0x2E68(0x00C0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_3;                              // 0x2F28(0x0368)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_17;                             // 0x3290(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_16;                             // 0x3398(0x0108)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x34A0(0x0048)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x34E8(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_15;                             // 0x3508(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14;                             // 0x3610(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_13;                             // 0x3718(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x3820(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_12;                             // 0x3840(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_11;                             // 0x3948(0x0108)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x3A50(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x3A78(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x3AA0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x3AC8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x3AF0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x3B18(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x3B98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x3BC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x3C48(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x3C78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x3CF8(0x0030)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive_2;                           // 0x3D28(0x00C8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_22;                        // 0x3DF0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x3E90(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x3F10(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_21;                        // 0x3F90(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_20;                        // 0x4030(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x40D0(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x4150(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x4238(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x4320(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x4350(0x00B0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x4400(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x4430(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_19;                        // 0x44E0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_15;                          // 0x4580(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x45A8(0x0048)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x45F0(0x00E8)
		struct FAnimNode_ApplyAdditive                             AnimGraphNode_ApplyAdditive;                             // 0x46D8(0x00C8)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_10;                             // 0x47A0(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_18;                        // 0x48A8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_17;                        // 0x4948(0x00A0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig_2;                              // 0x49E8(0x0368)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x4D50(0x0368)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x50B8(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_16;                        // 0x5100(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x51A0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_14;                          // 0x52F8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_13;                          // 0x5320(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_15;                        // 0x5348(0x00A0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x53E8(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x5408(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_12;                          // 0x5560(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_11;                          // 0x5588(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9;                              // 0x55B0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x56B8(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_5;                        // 0x57C0(0x00C0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x5880(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x59D8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x5A00(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x5A28(0x0048)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x5A70(0x0108)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_14;                        // 0x5B78(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x5C18(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_13;                        // 0x5C98(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x5D38(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x5DB8(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x5E38(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_12;                        // 0x5EB8(0x00A0)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_4;                        // 0x5F58(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x6018(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x6040(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x6068(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x6090(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x6110(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x6140(0x0028)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x6168(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x6198(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x6248(0x0080)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_3;                        // 0x62C8(0x00C0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x6388(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x63D0(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x63F8(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x6500(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x6580(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x6620(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x66A0(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x6740(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x67C0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x6840(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x68E0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x6980(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x6A20(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x6AA0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x6B20(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x6BC0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x6C40(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x6CC0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x6D60(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x6D90(0x00B0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x6E40(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x6F48(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x7050(0x0108)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x7158(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x7218(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x72B8(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x72E0(0x0028)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x7308(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x7328(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x7348(0x0158)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x74A0(0x01E0)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x7680(0x01E0)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik_2;                                  // 0x7860(0x0190)
		struct FAnimNode_Fabrik                                    AnimGraphNode_Fabrik;                                    // 0x79F0(0x0190)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x7B80(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x7C88(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x7D08(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x7D88(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x7E28(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x7E58(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x7F08(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x7F30(0x00C0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x7FF0(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x8090(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x80B8(0x0158)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x8210(0x0108)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x8318(0x0020)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x8338(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x8358(0x00A0)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x83F8(0x0030)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x8428(0x0028)
		float                                                      __CustomProperty_RecoilOnOff_7EDEA1CB4EF41FAD58D1F6B184FE5471; // 0x8450(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_UseTranslationDelayWeight_7EDEA1CB4EF41FAD58D1F6B184FE5471; // 0x8454(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_BlockingOffsetAlpha_7EDEA1CB4EF41FAD58D1F6B184FE5471; // 0x8458(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JXN2[0x4];                                   // 0x845C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_Weapon_ControlRig_Settings                       __CustomProperty_WeaponControlRigSettings_7EDEA1CB4EF41FAD58D1F6B184FE5471; // 0x8460(0x00E8) IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       __CustomProperty_isUnarmed_7EDEA1CB4EF41FAD58D1F6B184FE5471; // 0x8548(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W8YK[0x3];                                   // 0x8549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      __CustomProperty_PlayerPitchLook_2698A63E443CE9BC0F52C5AF321BC381; // 0x854C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_Recoil_Rotation_ADS_Strength_2698A63E443CE9BC0F52C5AF321BC381; // 0x8550(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_Recoil_OnOff_Rotation_2698A63E443CE9BC0F52C5AF321BC381; // 0x8554(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             __CustomProperty_Recoil_XRotRand_2698A63E443CE9BC0F52C5AF321BC381; // 0x8558(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_RecoilOnOff_2698A63E443CE9BC0F52C5AF321BC381; // 0x8564(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_ShootShaking_2698A63E443CE9BC0F52C5AF321BC381; // 0x8568(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_JumpTransitionZValue_2698A63E443CE9BC0F52C5AF321BC381; // 0x856C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_UseTranslationDelayWeight_2698A63E443CE9BC0F52C5AF321BC381; // 0x8570(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             __CustomProperty_ADS_Breathing_Value_2698A63E443CE9BC0F52C5AF321BC381; // 0x8574(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_BlockingOffsetAlpha_2698A63E443CE9BC0F52C5AF321BC381; // 0x8580(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8RCM[0x4];                                   // 0x8584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_Weapon_ControlRig_Settings                       __CustomProperty_WeaponControlRigSettings_2698A63E443CE9BC0F52C5AF321BC381; // 0x8588(0x00E8) IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            __CustomProperty_DelayRotation_2698A63E443CE9BC0F52C5AF321BC381; // 0x8670(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isADS_2698A63E443CE9BC0F52C5AF321BC381; // 0x867C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       __CustomProperty_isUnarmed_2698A63E443CE9BC0F52C5AF321BC381; // 0x867D(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7UF6[0x2];                                   // 0x867E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ARaidCharacter*                                      MPS;                                                     // 0x8680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Direction;                                               // 0x8688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Speed;                                                   // 0x868C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Bend_HeadPitch;                                          // 0x8690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Leaning;                                                 // 0x8694(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlockDistance;                                           // 0x8698(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            HeadRotation;                                            // 0x869C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            Wiggle;                                                  // 0x86A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCrouched;                                              // 0x86B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHolstered;                                             // 0x86B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAiming;                                                // 0x86B6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoveLeftHand;                                            // 0x86B7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsNoMontagePlaying;                                      // 0x86B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_00DR[0x7];                                   // 0x86B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlendSpace*                                         BlendSpace;                                              // 0x86C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Idle_Anim;                                               // 0x86C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Walk_Anim;                                               // 0x86D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Sprint_Anim;                                             // 0x86D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_In_Anim;                                             // 0x86E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_Idle_Anim;                                           // 0x86E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_Out_Anim;                                            // 0x86F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Blocked_Anim;                                            // 0x86F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LeftHandGrip;                                            // 0x8700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IWX2[0x8];                                   // 0x8708(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RightHand_TF;                                            // 0x8710(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          LeftHand_TF;                                             // 0x8740(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FTransform                                          Weapon_TF;                                               // 0x8770(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsProne;                                                 // 0x87A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XTE4[0x3];                                   // 0x87A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimSetToUse;                                            // 0x87A4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FootstepTraceSuccess;                                    // 0x87AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LNS6[0x3];                                   // 0x87AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Footstep_HitLocation;                                    // 0x87B0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPhysicalSurface                                           FootstepSurfaceType;                                     // 0x87BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isInAir;                                                 // 0x87BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShellTraceSuccess;                                       // 0x87BE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_417N[0x1];                                   // 0x87BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Shell_HitLocation;                                       // 0x87C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPhysicalSurface                                           Shell_SurfaceType;                                       // 0x87CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FJ2A[0x3];                                   // 0x87CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Aim_Walk_Anim;                                           // 0x87D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnOffTheIKHands;                                       // 0x87D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TurnOffIKFromCurve;                                      // 0x87D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMeleeWeapon;                                           // 0x87DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Using_Pilot_Seat;                                        // 0x87DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Using_Turret;                                            // 0x87DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z09G[0x3];                                   // 0x87DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            DeltaRotation;                                           // 0x87E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PrevRotation;                                            // 0x87EC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            AimDelay;                                                // 0x87F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WS_TurnDelay_MaxAngle;                                   // 0x8804(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_TurnDelay_MaxAngle_ADS;                               // 0x8808(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_TurnDelay_RotationInterpTo;                           // 0x880C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_Weapon_ControlRig_Settings                       CurrentWeaponSettings;                                   // 0x8810(0x00E8) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Stamina_Percent_PlayrateEffect;                          // 0x88F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PainNoise;                                               // 0x88FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             ADS_Fig8_BreathingOffset;                                // 0x8900(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Base_Frequency;                               // 0x890C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Horizonal_Extents;                            // 0x8910(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Vertical_Extents;                             // 0x8914(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StaminaPercent;                                          // 0x8918(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Idle_NoStaminaPlayrateMaxEffect;                  // 0x891C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_Idle_NoStaminaPlayrateMaxEffect;                      // 0x8920(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Idle_ADS_StaminaBreathingPlayrate;                       // 0x8924(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Idle_StaminaBreathingPlayrate;                           // 0x8928(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BlockWpnStep1Amount;                                     // 0x892C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasBlockingPreviously;                                   // 0x8938(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MCHR[0x3];                                   // 0x8939(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockAlphaTarget;                                        // 0x893C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsServerVersion;                                         // 0x8940(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBot;                                                   // 0x8941(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CooldownBlocking;                                        // 0x8942(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M2NZ[0x1];                                   // 0x8943(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WS_Aim_In_to_ADS_Playrate;                               // 0x8944(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_Aim_Out_to_normal_Playrate;                           // 0x8948(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_Leaning_Interp_Speed;                                 // 0x894C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasPrevADS;                                              // 0x8950(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RX3T[0x3];                                   // 0x8951(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetingSettleTarget;                                   // 0x8954(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TranslatingGunWeightAlpha;                               // 0x8958(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_Leaning_Gun_Translation_Delay;                        // 0x895C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         TransitionCurve;                                         // 0x8960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      JumpTransitionZOffset;                                   // 0x8968(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TransitionZTargetValue;                                  // 0x896C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         WS_Transition_Stand_to_Crouch;                           // 0x8970(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         WS_Transition_Crouch_to_Stand;                           // 0x8978(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         WS_Transition_Jumping;                                   // 0x8980(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TurnOffCtrlRigTranslationEffect;                         // 0x8988(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KGFF[0x3];                                   // 0x8989(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpeedWithoutZ;                                           // 0x898C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSprinting;                                             // 0x8990(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I2ZW[0x7];                                   // 0x8991(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         WS_Transition_Landing;                                   // 0x8998(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MovementPlayrateAdjustPercent;                           // 0x89A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_when_No_Stamina_Effects_Start;                // 0x89A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WS_ADS_Fig_Extents_No_Stamina_Max_Multiplier;            // 0x89A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Fig_Extents_No_Stamina_Multiplier;                   // 0x89AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchedMovePlayrateAdjust;                              // 0x89B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchedMovePlayrateAdjust_WalkUpbody;                   // 0x89B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Using_Camera_Turret;                                     // 0x89B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EquippingAWeapon;                                        // 0x89B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RQ0I[0x2];                                   // 0x89BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Turn_OnShootShaking;                                     // 0x89BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Recoil_ShakeActive;                                      // 0x89C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3FG[0x3];                                   // 0x89C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Recoil_TargetValue;                                      // 0x89C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Recoil_TurnOnOff;                                        // 0x89C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_OnOffValue;                                       // 0x89D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Recoil_SingleShotRand_Rots;                              // 0x89D4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Recoil_RandXRot_TargetValue;                             // 0x89E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_N7ZD[0x4];                                   // 0x89EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Recoil_Kickback_Falloff_Single_Shot;                     // 0x89F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Recoil_Kickback_Falloff_Auto;                            // 0x89F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EFireMode                                                  WpnCurrentFireMode;                                      // 0x8A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerJumped;                                            // 0x8A01(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       WasPrevInAir;                                            // 0x8A02(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DelayedIsInAir;                                          // 0x8A03(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      InAirDelayTimer;                                         // 0x8A04(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimeBeforeConsideredHeavyLand;                           // 0x8A08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ENetRole                                                   LocalRole;                                               // 0x8A0C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WasPrevSprinting;                                        // 0x8A0D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DelayedIsSprinting;                                      // 0x8A0E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TUMF[0x1];                                   // 0x8A0F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SprintDelayTimer;                                        // 0x8A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            ActorDeltaRotation;                                      // 0x8A14(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PrevActorRotation;                                       // 0x8A20(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoTurnOnSpot;                                            // 0x8A2C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RotatingRight;                                           // 0x8A2D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_55WY[0x2];                                   // 0x8A2E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ActorDeltaRotationSlowed;                                // 0x8A30(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RotatingPlayrate;                                        // 0x8A3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BlockingActive;                                          // 0x8A40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7KF0[0x3];                                   // 0x8A41(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TraceBlocked_Distance;                                   // 0x8A44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blocking_Distance_Start_Pull_Back;                       // 0x8A48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blocking_Distance_Max_Pull_Back;                         // 0x8A4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blocking_Pull_Back_Amount;                               // 0x8A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFullyBlocking;                                         // 0x8A54(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BlockingCooldownActive;                                  // 0x8A55(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IFBL[0x2];                                   // 0x8A56(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumberOfStepsWillLast;                                // 0x8A58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentStepsLeft;                                        // 0x8A5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FS_FootstepDecals                                   CurrentDecalFootstep;                                    // 0x8A60(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WpnCurrentHasMultiFireModes;                             // 0x8A80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HF9C[0x3];                                   // 0x8A81(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Recoil_TargetValue_Rotation;                             // 0x8A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_OnOffValue_Rotation;                              // 0x8A88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_C1J8[0x4];                                   // 0x8A8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Recoil_SingleShotRotation;                               // 0x8A90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Recoil_Single_Shot_Max_Rotations;                        // 0x8A98(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_Single_Shot_ADS_Strength;                         // 0x8AA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalController;                                       // 0x8AA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D17N[0x3];                                   // 0x8AA9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StrideScale;                                             // 0x8AAC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Stride_Relative_Direction;                               // 0x8AB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Stride_Playrate;                                         // 0x8AB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Standing_LegsPlayrate;                                   // 0x8AB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Crouching_Legs_Playrate;                                 // 0x8ABC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LandWasHeavy;                                            // 0x8AC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void WeaponDelayVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void Calculate_legs_playrate();
		void CheckIfShouldTurnInPlace();
		void MakeSoundForAi(float Loudness);
		void TurningOnAndOffTheTranslationDelay();
		void GetCheckLeaningAmount();
		void Fig8Breathing();
		void GetWpnSettingsFromDT();
		void PlayShellHitGroundSound(float VolumeAdjust, class USoundBase* Default, class USoundBase* Concrete, class USoundBase* dirt, class USoundBase* Water, class USoundBase* Metal, class USoundBase* Wood, class USoundBase* grass, class USoundBase* Glass, class USoundBase* Flesh, class USoundBase* Plastic, class USoundBase* Fabric, class USoundBase* Mud, class USoundBase* Gravel, class USoundBase* MetalThin, class USoundBase* Pipe, class USoundBase* MetalCreaky);
		void PlayFootstepSound(float VolumeAdjust, float Ai_MakeNoiseLoudness, float PlayerOwnVolumeDivideBy, class USoundBase* Default, class USoundBase* Concrete, class USoundBase* dirt, class USoundBase* Water, class USoundBase* Metal, class USoundBase* Wood, class USoundBase* grass, class USoundBase* Glass, class USoundBase* Flesh, class USoundBase* Plastic, class USoundBase* Fabric, class USoundBase* Mud, class USoundBase* Gravel, class USoundBase* MetalThin, class USoundBase* MetalLoud, class USoundBase* MetalCreaky);
		void LeftHand_Transform(struct FTransform* LeftHand_TF);
		struct FTransform RightHand_Transform();
		void ActiveVars();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_9C73CCFA4359DA2AC978B7824A5D21E3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_2B08E5DF4093E0E77A04A78098BC7168();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_DA97AE17410BBA4E862CB0999668C450();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_954253494ADDB54BC21398811E4D6C4B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_A18D1ED343AA37F6A9ACB9A9F0870F85();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_C180746E453CE1573AA6BE9CDC5557D0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_C42B0DAA426AA43F5DD63EBB54598EB5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_BC25A6DD4613EB960C30A6BF601E6E2F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_7C704FC74BE1B65239CCEFA3188AA3F1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_388CD99646D2B0B1954B41A172C29962();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_D8E012034FB3C76F9D6693B323C9F1FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_619FCD234C59BFFCA5A7AA8B0C695A1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_2DBCC64446C0D797555594B7ABD3F818();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_75FABB01499EE091B2DD2FAE75A408DD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_E9723B624461DC21BBB7F0A441D673F9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_622544034077B2578D6AF2AA6DA37027();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_69F5BC7441905959E2DBA0A596DBB5D5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_1DB516FD46BAECC6B791DD899702D531();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_8EE6EFAD4790CA9DB72833B459B47282();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_E0A8AD504B95B40AD71E4D81F15ECFDB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_BBDA04344FA561ABB63A5D97E48549D3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_083378674AB0C3460C42199511D62129();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_SequencePlayer_2385901A46E364504676F2B73AC8A8E0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_810267C24E6138EBEF397F94EC01AFF2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendSpacePlayer_6476EA274853826CF82907BF48C59E5C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_0E1AF4EC44371618E7310AA04E4FF5B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_EEE2278543BAA3D2B88605AD966861FE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_98E8119A48DB06C364C050A2CC9E8CE0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_00C90FD840A03734E8E7119A4A026EAA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_B8A032974E99EF2822BD43AD5E2DEA80();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_98B929C349E9534EA668F18F6AF3B3EB();
		void AnimNotify_Footstep_Walk();
		void AnimNotify_Footstep_Sprint();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_6A23CD304E5FC8329006DD8DBB79960F();
		void AnimNotify_JumpStart();
		void AnimNotify_JumpEnd();
		void AnimNotify_JumpEnd_Sooner();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_674AC050446A98AB7321BA9ADAB740C2();
		void AnimNotify_Footstep_Crouch();
		void AnimNotify_StartProne();
		void AnimNotify_EndProne();
		void AnimNotify_StartCrouch();
		void AnimNotify_EndCrouch();
		void AnimNotify_AimStart();
		void AnimNotify_AimStop();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_A54B8C5B4183B9387A7A9F84530A19CE();
		void AnimNotify_ShotBullet();
		void AnimNotify_ReturnedToIdle();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ControlRig_2698A63E443CE9BC0F52C5AF321BC381();
		void Force_WalkFootstepSound();
		void Force_Crouch_FootstepSound();
		void AnimNotify_ReturnedToIdleRun();
		void AnimNotify_ShotBullet_Flamethrower();
		void AnimNotify_ShotBullet_Shotgun();
		void StartedWalkingOnModifyMaterial(EPhysicalSurface SurfaceType, const struct FHitResult& HitResult, bool IsRightFoot, const struct FTransform& FootSocketTransform);
		void CheckIfShouldDoFootstep(EPhysicalSurface Surface, const struct FHitResult& HitResult, bool IsRightFoot, const struct FTransform& FootSocketTransform);
		void PlayerLanded(bool WasHeavyLand);
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ApplyAdditive_1512DB2945D5873A7A7669B55458E96B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_177F3DF24A20E2B1812D42AE048D18C6();
		void AnimNotify_StartDamage();
		void AnimNotify_StopDamage();
		void IsUsingPilotSeat(bool UsingPilotSeat);
		void IsUsingTurret(bool UsingTurret);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_FE0F1AD54EBA7B481C039AA4E99AFD90();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_9FD6E2D647E6DEC73053CCAC84BEE98D();
		void BlueprintInitializeAnimation();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_ED787CD149D5ADD337A4BB94704F37A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_9002F9084DCAB0D7825A32A332D61796();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_LayeredBoneBlend_805B4D674EE4DFDFFFC068B99639D2A9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_D37A06D04133761963F65A93839AD17B();
		void DelayWeaponVars(float Turn_Input, float MoveRight_Input, float LookUp_Input);
		void StaminaVars(float StaminaPercent);
		void PlayHurtAnim();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_13674CCF45C67CD73F8EA58A3E373C7F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_0D511BE6495F74A2AE28408E3612DFA8();
		void DoProxyHitReact(const struct FHitResult& HitResult);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_D78FC36143CC2DF9818C528FB0DB622B();
		void WeaponisBroken();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_3EA4103A4A6A18CB716AC7BE56C2E3A0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_5F694414463DA35139AD82A1D429A0D1();
		void DelayBlockign();
		void DelayBlockExit();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TwoBoneIK_48D976D84DB39B1012DFD99F9D019B72();
		void CrouchStateChange(bool isCrouchingNow);
		void TransitionCalculations();
		void JumpHasBeenTriggered();
		void TempTurnOffCtrlRigTranslationEffect(float Duration);
		void AnimNotify_LandingNow();
		void AnimNotify_UsedMine();
		void IsUsingCameraTurret(bool UsingCameraTurret);
		void AnimNotify_EndEquipTransition();
		void Shooting_Shaking(bool TurnOn);
		void AnimNotify_Shoot();
		void RecoilCurves();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TwoBoneIK_791C6782426DB3D13EC53882D345C1B6();
		void Recoil_Shaking();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_Fabrik_6B4D9D2F4082FDD29AEE29B4324F5424();
		void CheckInAir();
		void DelayBeforeInAirTimer();
		void CheckIfSpriting();
		void DelayBeforeStartSprint();
		void SendBlockingDistance(bool isBlocking, float BlockingDistance);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_Fabrik_1AD33DA549F7966B65673F92954780B1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_A2F52B3340592C579142C1B349BB2C01();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ModifyBone_1BA3697B4CFCA3B303FC3F9162717264();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_BC4A866C46B2B08E0B8C5189826D035B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_7D8DFEEB4757BDC08CF87B8ED38545FF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_6F4C995E491ECF5821ACC6A9D908F58B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_ApplyAdditive_7F1E166F4B5BDB627DFB71854F5E6885();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_2AB08D0541DC5252A046B482003EE106();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_9AEECE434B4580339C7C408739444ED7();
		void AnimNotify_DelayBeforeCanUnBlock();
		void AnimNotify_StartedBlocking();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_BlendListByBool_387644C747CDC98F76046CB3DF3EA560();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_5F1FCB0044B2559BD60BD7B3F09AB745();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_F558715544D6D1C41CBA139C7EE54103();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_rc_FPS_AnimBP_AnimGraphNode_TransitionResult_9538BCC5432AB85582752AB7984FFDB6();
		void ExecuteUbergraph_rc_FPS_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
