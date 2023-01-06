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
	 * UserDefinedStruct BP_ShipInfomation.BP_ShipInfomation
	 * Size -> 0x012C
	 */
	struct FBP_ShipInfomation
	{
	public:
		class FString                                              Name_2_BA4C350E4A7EA31DAF77AAB3FC1F0956;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              Class_28_660176C04F2F7C7C03051B97EE2C8ADF;               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FText                                                Desc_61_C6FC0E7B4248712BDDC1A7BB643860CB;                // 0x0020(0x0018) Edit, BlueprintVisible
		unsigned char                                              ShipSkelMesh_44_259A79C544EB0AAD4FB4F98C257765A5[0x28];  // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UTexture2D*                                          ShipMMIcon_60_1045B3B946EF76952E5B64A36926DD45;          // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Hangar_AnimBP_48_3EC0B18E40C9588440B3699C26D90A54[0x28]; // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FTransform                                          ShipOffset_19_E994EB204BD16B9A50F0E6BACCDBA706;          // 0x0090(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      CameraBoomDistance_31_A85E1E664464392933D1758FD1C951FC;  // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            StartCameraRotation_33_AE3EFB1347FE89B19F908B82D861FA87; // 0x00C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CamBoomDist_Customise_40_CCB6E3F74FC312CAA535A085C9812E8F; // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EF5B[0xC];                                   // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CameraOffset_Customise_51_B03246FF49F845EDD14DAB815B47F172; // 0x00E0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		float                                                      Weight_7_6C52D058434B76BDE4C6638A5DCCFADA;               // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LLNZ[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FS_ShipAttachmentCameraOffset>               AttachmentCameraOffsets_56_EEEE17DF4983DE4A8763E5BFD3B93A89; // 0x0118(0x0010) Edit, BlueprintVisible
		float                                                      ShipScaleToUse_64_4702D24A4DE784CEEC459591C8BDC69E;      // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
