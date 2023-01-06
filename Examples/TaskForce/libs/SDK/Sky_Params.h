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
	 * Function Sky.Sky_C.IsDirectionalLightShared
	 */
	struct ASky_C_IsDirectionalLightShared_Params
	{
	public:
		bool                                                       Shared;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sky.Sky_C.Ping Time Of Day
	 */
	struct ASky_C_Ping_Time_Of_Day_Params
	{
	public:
		float                                                      Time_of_Day;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sky.Sky_C.Set Time Of Day
	 */
	struct ASky_C_Set_Time_Of_Day_Params
	{
	public:
		float                                                      Time_of_Day;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sky.Sky_C.Set Material Variables
	 */
	struct ASky_C_Set_Material_Variables_Params
	{	};

	/**
	 * Function Sky.Sky_C.Set Solar Angle
	 */
	struct ASky_C_Set_Solar_Angle_Params
	{	};

	/**
	 * Function Sky.Sky_C.UserConstructionScript
	 */
	struct ASky_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Sky.Sky_C.ReceiveTick
	 */
	struct ASky_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sky.Sky_C.ReceiveBeginPlay
	 */
	struct ASky_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Sky.Sky_C.Sync Time Of Day
	 */
	struct ASky_C_Sync_Time_Of_Day_Params
	{
	public:
		float                                                      Time_of_Day;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sky.Sky_C.Update Time Of Day
	 */
	struct ASky_C_Update_Time_Of_Day_Params
	{
	public:
		float                                                      Time_of_Day;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sky.Sky_C.ExecuteUbergraph_Sky
	 */
	struct ASky_C_ExecuteUbergraph_Sky_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
