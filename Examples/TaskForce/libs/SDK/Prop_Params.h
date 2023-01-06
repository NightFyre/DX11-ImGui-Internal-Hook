#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * Function Prop.Prop_C.OverrideMaterials
	 */
	struct AProp_C_OverrideMaterials_Params
	{
	public:
		bool                                                       Dynamic;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7ZGF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Prop.Prop_C.SetVectorParameters
	 */
	struct AProp_C_SetVectorParameters_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Prop.Prop_C.SetScalarParameters
	 */
	struct AProp_C_SetScalarParameters_Params
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Prop.Prop_C.InitializeComponents
	 */
	struct AProp_C_InitializeComponents_Params
	{	};

	/**
	 * Function Prop.Prop_C.UserConstructionScript
	 */
	struct AProp_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
