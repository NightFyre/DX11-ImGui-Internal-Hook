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
	 * Function SIGIS_DefaultContainerWidget.SIGIS_DefaultContainerWidget_C.PreConstruct
	 */
	struct USIGIS_DefaultContainerWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SIGIS_DefaultContainerWidget.SIGIS_DefaultContainerWidget_C.Construct
	 */
	struct USIGIS_DefaultContainerWidget_C_Construct_Params
	{	};

	/**
	 * Function SIGIS_DefaultContainerWidget.SIGIS_DefaultContainerWidget_C.ExecuteUbergraph_SIGIS_DefaultContainerWidget
	 */
	struct USIGIS_DefaultContainerWidget_C_ExecuteUbergraph_SIGIS_DefaultContainerWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
