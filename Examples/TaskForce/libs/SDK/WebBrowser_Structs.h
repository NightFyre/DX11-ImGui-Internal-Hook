#pragma once

/**
 * Name: Task_Force
 * Version: 0.3.6.1537
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
	 * ScriptStruct WebBrowser.WebJSCallbackBase
	 * Size -> 0x0020
	 */
	struct FWebJSCallbackBase
	{
	public:
		unsigned char                                              UnknownData_7YHP[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebBrowser.WebJSResponse
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FWebJSResponse : public FWebJSCallbackBase
	{	};

	/**
	 * ScriptStruct WebBrowser.WebJSFunction
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FWebJSFunction : public FWebJSCallbackBase
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
