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
	 * BlueprintGeneratedClass BPI_KeyboardNavigable.BPI_KeyboardNavigable_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_KeyboardNavigable_C : public UInterface
	{
	public:
		void GetSelectedIndex(int32_t* Index);
		void GetNavigationAction(struct FFNavItemAction* Action);
		void RemoveFocus();
		void SetFocusBPIVersion();
		void GetIndex(int32_t* SelectedIndex, int32_t* StepIndex);
		void SetIndex(int32_t SelectedIndex, int32_t StepIndex);
		void GetEventHandler(class UBP_navset_event_handler_C** Event_Handler);
		void SetEventHandler(class UBP_navset_event_handler_C* Event_Handler);
		void OnClick();
		void ChangeValue(bool Right);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
