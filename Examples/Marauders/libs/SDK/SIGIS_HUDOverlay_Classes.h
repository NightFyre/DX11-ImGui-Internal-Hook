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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass SIGIS_HUDOverlay.SIGIS_HUDOverlay_C
	 * Size -> 0x0008 (FullSize[0x02B0] - InheritedSize[0x02A8])
	 */
	class USIGIS_HUDOverlay_C : public UInGameOverlayWidget
	{
	public:
		class UHUD_Main_Widget_C*                                  HUD_Main_Widget;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
