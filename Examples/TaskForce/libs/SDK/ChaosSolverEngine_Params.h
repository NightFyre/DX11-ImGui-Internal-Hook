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
	 * Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	 */
	struct UChaosSolverEngineBlueprintLibrary_ConvertPhysicsCollisionToHitResult_Params
	{
	public:
		struct FChaosPhysicsCollisionInfo                          PhysicsCollision;                                        // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FHitResult                                          ReturnValue;                                             // 0x0070(0x0088)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	 */
	struct AChaosSolverActor_SetSolverActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	 */
	struct AChaosSolverActor_SetAsCurrentWorldSolver_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
