#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
 */

#define UE4
#define FNAME_POOL
#define GOBJECTS_CHUNKS

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Forwards
	// --------------------------------------------------
	class UObject;

	// --------------------------------------------------
	// # Global functions
	// --------------------------------------------------
	bool InitSdk(const std::wstring& moduleName, uintptr_t gObjectsOffset, uintptr_t gNamesOffset, uintptr_t gWorldOffset);
	bool InitSdk();
	template<typename Fn>
	Fn GetVFunction(const void* instance, size_t index)
	{
		auto vtable = *static_cast<const void***>(const_cast<void*>(instance));
		return reinterpret_cast<Fn>(const_cast<void (*)>(vtable[index]));
	}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#include "BasicTypes_Structs.h"
#include "BasicTypes_Classes.h"

