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
	 * BlueprintGeneratedClass BPI_KeyboardNavigablePanel.BPI_KeyboardNavigablePanel_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPI_KeyboardNavigablePanel_C : public UInterface
	{
	public:
		void SetParentPanel(class UUserWidget* ParentWidget);
		void GetEscapeBehaviour();
		void GetEventHandler(class UBP_navset_event_handler_C** EventHandler);
		void SetOnEscapeBehaviour(EEscapeBehaviour EscapeBehaviour);
		void OnEscapeInput(bool* Handled);
		void SetNavManager(class UBP_navigation_manager_C* NavManagerRef);
		void SetStepIndex(int32_t StepIndex);
		void GetStepIndex(int32_t* StepIndex);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
