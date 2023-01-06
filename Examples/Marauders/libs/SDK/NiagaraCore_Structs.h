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
	 * ScriptStruct NiagaraCore.NiagaraCompileHash
	 * Size -> 0x0010
	 */
	struct FNiagaraCompileHash
	{
	public:
		TArray<unsigned char>                                      DataHash;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
