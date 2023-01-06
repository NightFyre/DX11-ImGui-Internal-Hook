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
	 * Function WB_Image.WB_Image_C.SetVignetteColor
	 */
	struct UWB_Image_C_SetVignetteColor_Params
	{
	public:
		struct FLinearColor                                        InContentColorAndOpacity;                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Image.WB_Image_C.SetImageColor
	 */
	struct UWB_Image_C_SetImageColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Image.WB_Image_C.UpdateSaturation
	 */
	struct UWB_Image_C_UpdateSaturation_Params
	{
	public:
		float                                                      Saturation;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TQ41[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WB_Image.WB_Image_C.FindTextureSize
	 */
	struct UWB_Image_C_FindTextureSize_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Return_Value;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Image.WB_Image_C.SetImageTranslation
	 */
	struct UWB_Image_C_SetImageTranslation_Params
	{
	public:
		struct FVector2D                                           Translation;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Image.WB_Image_C.SetImageBrush
	 */
	struct UWB_Image_C_SetImageBrush_Params
	{
	public:
		class UObject*                                             Brush;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WB_Image.WB_Image_C.OnHovered
	 */
	struct UWB_Image_C_OnHovered_Params
	{	};

	/**
	 * Function WB_Image.WB_Image_C.Construct
	 */
	struct UWB_Image_C_Construct_Params
	{	};

	/**
	 * Function WB_Image.WB_Image_C.OnClicked
	 */
	struct UWB_Image_C_OnClicked_Params
	{	};

	/**
	 * Function WB_Image.WB_Image_C.OnUnhovered
	 */
	struct UWB_Image_C_OnUnhovered_Params
	{	};

	/**
	 * Function WB_Image.WB_Image_C.PreConstruct
	 */
	struct UWB_Image_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WB_Image.WB_Image_C.OnDisabled
	 */
	struct UWB_Image_C_OnDisabled_Params
	{	};

	/**
	 * Function WB_Image.WB_Image_C.ExecuteUbergraph_WB_Image
	 */
	struct UWB_Image_C_ExecuteUbergraph_WB_Image_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
