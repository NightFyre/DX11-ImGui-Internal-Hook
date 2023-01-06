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
	 * BlueprintGeneratedClass BFL_Events.BFL_Events_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_Events_C : public UBlueprintFunctionLibrary
	{
	public:
		bool LoadEventKillTally(class UObject* __WorldContext, int32_t* PlayerKills, int32_t* AiKills);
		bool SaveEventKillTally(int32_t PlayerKills, int32_t AiKills, class UObject* __WorldContext);
		void EventIDtoDisplayName(const class FText& InText, class UObject* __WorldContext, class FText* EventPlayerDisplayName);
		void DeleteEventName(class UObject* __WorldContext);
		bool LoadEventName(class UObject* __WorldContext, class FText* PlayerId, class FText* PlayerDisplayName);
		bool SaveEventName(const class FText& NameUsed, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
