/**
 * Name: RaidGame
 * Version: 1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatroom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatroom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialParty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialParty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialParty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMember.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMember::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.PartyMember");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialToolkit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialToolkit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialToolkit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialChatManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialChatManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialChatManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialChatChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialChatChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialChatChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialChatRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialChatRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialChatRoom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialDebugTools.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialDebugTools::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialDebugTools");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialGroupChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialGroupChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialGroupChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialPartyChatRoom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialPartyChatRoom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialPartyChatRoom");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialPrivateMessageChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialPrivateMessageChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialPrivateMessageChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialReadOnlyChatChannel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialReadOnlyChatChannel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialReadOnlyChatChannel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USocialUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USocialUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Party.SocialUser");
		return ptr;
	}

}


