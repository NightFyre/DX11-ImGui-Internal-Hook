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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class CinematicCamera.CameraRig_Crane
	 * Size -> 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
	 */
	class ACameraRig_Crane : public AActor
	{
	public:
		float                                                      CranePitch;                                              // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneYaw;                                                // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneArmLength;                                          // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountPitch;                                         // 0x024C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountYaw;                                           // 0x024D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRIL[0x2];                                   // 0x024E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneYawControl;                                         // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CranePitchControl;                                       // 0x0260(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneCameraMount;                                        // 0x0268(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CameraRig_Rail
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class ACameraRig_Rail : public AActor
	{
	public:
		float                                                      CurrentPositionOnRail;                                   // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOrientationToRail;                                  // 0x0244(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3W11[0x3];                                   // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x0248(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USplineComponent*                                    RailSplineComponent;                                     // 0x0250(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     RailCameraMount;                                         // 0x0258(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraActor
	 * Size -> 0x0060 (FullSize[0x0800] - InheritedSize[0x07A0])
	 */
	class ACineCameraActor : public ACameraActor
	{
	public:
		struct FCameraLookatTrackingSettings                       LookatTrackingSettings;                                  // 0x07A0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HG4[0x10];                                  // 0x07F0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCineCameraComponent* GetCineCameraComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraComponent
	 * Size -> 0x00E0 (FullSize[0x08A0] - InheritedSize[0x07C0])
	 */
	class UCineCameraComponent : public UCameraComponent
	{
	public:
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x07C0(0x000C) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x07CC(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8LQ[0x4];                                   // 0x07E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x07E8(0x0058) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x0840(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0844(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x0848(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8O6K[0xC];                                   // 0x084C(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNamedFilmbackPreset>                        FilmbackPresets;                                         // 0x0858(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FNamedLensPreset>                            LensPresets;                                             // 0x0868(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPresetName;                               // 0x0878(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultLensPresetName;                                   // 0x0888(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFocalLength;                                  // 0x0898(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFStop;                                        // 0x089C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetLensPresetByName(const class FString& InPresetName);
		void SetFilmbackPresetByName(const class FString& InPresetName);
		float GetVerticalFieldOfView();
		class FString GetLensPresetName();
		float GetHorizontalFieldOfView();
		class FString GetFilmbackPresetName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
