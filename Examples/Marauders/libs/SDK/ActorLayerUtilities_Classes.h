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
	 * Class ActorLayerUtilities.LayersBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);
		TArray<class AActor*> GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);
		void AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
