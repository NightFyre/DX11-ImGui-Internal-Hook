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
	 * WidgetBlueprintGeneratedClass WBP_GameLiftMatchMaking.WBP_GameLiftMatchMaking_C
	 * Size -> 0x00B9 (FullSize[0x0319] - InheritedSize[0x0260])
	 */
	class UWBP_GameLiftMatchMaking_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		TArray<class UObject*>                                     GameLiftWidget;                                          // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UGameLiftClientCompenent*                            GameLiftClientComponent;                                 // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameLiftPlayer>                             GameLiftPlayer;                                          // 0x0280(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      StringValue;                                             // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, float>                                 DataMap;                                                 // 0x02A0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       StartedMatchmaking;                                      // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RLVY[0x3];                                   // 0x02F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DescribeInterval;                                        // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DescribeTimer;                                           // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QWQK[0x4];                                   // 0x02FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x0300(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      playerIds;                                               // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SentAcceptMatch;                                         // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetPlayerIds();
		class FText Get_TextBlock_RefreshTime_Text_1();
		void Get_TextBlock_Status_Text_1();
		void Get_EditableText_PlayerSessionId_Text_1();
		void Get_EditableText_PlayerId_Text_1();
		void Get_EditableText_Address_Text_1();
		void Get_EditableText_EndTime_Text_1();
		void Get_EditableText_Start_Text_1();
		void SetPlayers();
		void Construct();
		void ExecuteUbergraph_WBP_GameLiftMatchMaking(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
