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
	 * UserDefinedStruct SFlashbangSettings.SFlashbangSettings
	 * Size -> 0x0030
	 */
	struct FSFlashbangSettings
	{
	public:
		float                                                      InitialSpeed_13_6909645A4B5B549F6946F2BCD73FC85B;        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FuseDuration_14_EC2D44F745249B67EFC93B8B22BC35F6;        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LightDuration_15_CD0403874149FBB84A4B97AD615B3CC8;       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinimumSfxVelocity_16_033753D84F984A235A5402B72084D499;  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CameraShakeRadius_17_F7CA7C1148D31686253159AA7FB2EFD3;   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MaterialHorizontalOffset_18_6BA5372644EE622D9CF236A845AAE76B; // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MaterialVerticalOffset_19_CF7DE826449A3FC167D41C88087A962C; // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScorchMarkSize_20_632D44FF4CA85D97BA2559BC65595FD9;      // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ScorchMarkFadeDuration_21_255286EA4760ADC36C8E659F44AD9630; // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExplosionRadius_22_B90748C3405DD43449782BB6E00E70EF;     // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
