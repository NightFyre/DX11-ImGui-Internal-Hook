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
	 * UserDefinedStruct Player_Anims_Struct.Player_Anims_Struct
	 * Size -> 0x00D0
	 */
	struct FPlayer_Anims_Struct
	{
	public:
		class UBlendSpace*                                         Blendspace_65_D59228274E622C1DE30BFBBCB32EC7CB;          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Idle_2_5E354FB7402E3CF6C0EC2EBA94FEEE89;                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Walk_4_00B9E5774D07449352F6D88D08AF497A;                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Sprint_24_1B6EB0504400AF0855485CAEF1ACDFBB;              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       AimIn_26_0931DBFE4F7D4CC1D6946BBFAA3E37AE;               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_29_137366B4472460CE9C951FA8F3433FEA;                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       AimOut_30_520860CD4B64ECE7E8D6669EC53F5BAB;              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       AimBreathingAdd_71_F4EFCF954EC8A55240FE85ABA1E438BF;     // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Aim_Walk_68_C49F355948DCD52C3360A6A96EF41FB7;            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Blocked_32_6189C9A34D63422D533E9B9A82095944;             // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       LeftHandGrip_59_FFB54241410AE2D352FA85A0025FC6DC;        // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        FirstDraw_12_F9EB494E4EB6888BCFF54581C8AD2D65;           // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Draw_7_001FD6AD418EA0A811F9B5A405DA11FC;                 // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Holster_9_AD098C874228048CC5F3BCA86D5F91B4;              // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Shoot_60_1BD73F6E4B3C517AF2AF4BB92AB82B64;               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Shoot_Aim_61_B859AA4D44E87C2584BB369289969ADE;           // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Reload_Short_46_108E9B3B4EE679996913E8B04576E7DF;        // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Reload_Long_48_C3B2478A48F230DA9D687DAB409FBA40;         // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Firemode_53_C164B90C44111D8D1B9EA2A998BE9FC8;            // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Melee_56_905F15864F77BE542FFADFA9E0658A8F;               // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        InteractWithObject_74_66D5E4904385531E6316BE9E5857918C;  // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       MainMenuPose_77_9D05E68E445BD99F87BE818602C91D5E;        // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Mantle_Normal_80_23BB5309402EDF72636D2593A9FE68E5;       // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Mantle_Fast_84_A01E030140200790AB7398B2FF912737;         // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Vault_Normal_85_4D5E7419468438335531CCAEFF2AF61E;        // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Vault_Fast_86_88543A684129C7F910D5C0B2AC9B7CAD;          // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
