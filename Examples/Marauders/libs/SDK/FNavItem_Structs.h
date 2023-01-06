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
	 * UserDefinedStruct FNavItem.FNavItem
	 * Size -> 0x0028
	 */
	struct FFNavItem
	{
	public:
		class UWidget*                                             PanelReferance_9_4E5BD57648F39432D5027DB78636F72C;       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FFWidgetFix>                                 NavigableWidgets_5_6E2081A042DEF7ED68953185A3D58380;     // 0x0008(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		int32_t                                                    SelectedWidgetIndex_12_CCC55F6E4DEDC51A992C498EF1CA1D4D; // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X03N[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_navset_event_handler_C*                          NavItemsEventHandler_16_6D3B9003466776B91BB65098D7031A41; // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
