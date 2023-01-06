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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_Weapon_ControlRig_Settings.S_Weapon_ControlRig_Settings
	 * Size -> 0x00E8
	 */
	struct FS_Weapon_ControlRig_Settings
	{
	public:
		float                                                      TurnDelay_MaxAngle_3_BB9EA93C47B04EE53FF84BB641995B98;   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_MaxAngle_ADS_5_3B8EA2E14F2867089AD7798245C9F403; // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Delay_Strength_7_9D4C298545D26492B0FB558030F34115; // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Delay_Damp_9_8CD8CD804FD8BFBEEAB708B557F18288; // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Delay_Blend_11_FF2FEC6C44145776AA5212BBC3F93F9A; // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Delay_Strength_ADS_16_2CBBEF2B4DCD28E8D76E2A839B318911; // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Delay_Damp_ADS_15_E3A8CDBD4D73577CD054D0824864FA70; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Delay_Blend_ADS_17_7B54EE3F4E9F736001BFB9B4C3C92B65; // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Roll_MinMax_106_6AD1CCD8464CD02BD03507B0DDFBDCFF; // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_VerticalTranslation_Strength_20_97DB640A4562C3EEB9EBD294A6CB7F61; // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_VerticalTranslation_Damp_23_5ACDD4B54EF1D42D9A4305B71A641E31; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_VerticalTranslation_Blend_24_3AD7784F4B6D5AB8248249BF8235123F; // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_VerticalTranslation_Strength_ADS_30_7F2B6C814261FD3AD184CCB77CB45DF2; // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_VerticalTranslation_Damp_ADS_31_C90C42AA46AFF95AC4E5139F7B4734DF; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_VerticalTranslation_Blend_ADS_32_DFFC85BA43E02AB94BD02D99737EA441; // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnDelay_Roll_ADS_MinMax_103_7F568AED4CC1A1DF4E8383823FAAAF29; // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Fig8_BaseFrequency_39_7A4878994971AE0C157CAAB4B255555D; // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Fig8_Horizonal_Extents_40_8B72F95244E94A665E588088E7E9EC11; // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Fig8_Vertical_Extents_41_99A90C29419C2826171CEE8C18B0B103; // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Fig8_WhenNoStaminaEffectsStart_95_2BB7BDBE4BB97C4C44F732883CB48B00; // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Fig8_Extents_NoStaminaMax_Multiplier_100_2C2845EE495469193EF2FFA7F9707AA1; // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ADS_Idle_NoStaminaPlayrateMaxIncrease_58_172FFB804BB3EA21CE007DB3E6BABEBB; // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Idle_NoStamina_PlayRateMaxIncrease_59_87E827AD407E2CD09D82AE9AEB96204B; // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimIn_Playrate_67_F9A7C9154813DD7F51A860A738857527;      // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         AimIn_Playrate_StaminaEffect_84_47932FE1471DE7D95A50CB8AB08F9829; // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AimOut_Playrate_66_76A5465C46215CB4371E32B718B43456;     // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VHXG[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AimOut_Playrate_StaminaEffect_86_D767CAB14F33DDAC274A489D24D85A5D; // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Leaning_Interp_Speed_71_8FDDC9F345A7BF83E8488E96CCE01162; // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Leaning_GunTranslationDelay_74_F74A5C2F45CA3D64EC34CEBA5C42D118; // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Leaning_Playrate_StaminaEffect_88_2AD5599444D08F2631FF68922E4F8205; // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Transition_StandToCrouch_77_E5255B3845684BA992FCB0B4FDA8D244; // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Transition_CrouchToStand_79_3FDE86C64C02998F8575A7A08D764A5C; // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Transition_Jumping_81_F992E0B64DBF4E1C6658BC8432559F4D;  // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_Kickback_114_E193D55F4188FFCF22D691909689D07C;    // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_KickbackADS_116_046911DC4B7ACCB17AE9249AC6B3723F; // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Recoil_KickbackFalloff_SingleShot_123_4052AC4F490C426FD5E2CABB93DA5E6E; // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         Recoil_KickbackFalloff_Auto_124_474263BF452746D15427E1B00669FC35; // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_ShootShake_MaxAngle_127_40ABA3744DA5D5DC8EA4F2AA3B1128BD; // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_ShootShakeADS_MaxAngle_129_BEDA2AFF4205C936A7B00391430008D5; // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Recoil_SingleShot_MaxRotations_150_A1E1D58C422B79583A9FFC9BC9A6F1AB; // 0x00C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JLMK[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         Recoil_SingleShot_RotationFalloff_149_72CC91324B7DA712A1B6EDAD1698DB72; // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Recoil_SingleShot_ADS_Strength_148_B1DA0BB547FD27F67FC97BB43010162B; // 0x00D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blocking_DistanceStartPullBack_132_5B2A30EB471DB7823968E2A4CF213E65; // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blocking_DistanceMaxPullBack_135_ED63468A4597A547B3CEFD9FF244776B; // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blocking_PullBackAmount_137_A0DC98C149699F800DE138B32A08255B; // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
