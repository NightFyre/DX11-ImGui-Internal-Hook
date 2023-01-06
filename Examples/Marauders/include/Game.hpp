#pragma once
#include "helper.h"
#include "Console.hpp"

namespace DX11_Base {

	class GameData
	{
	public:
		struct Offsets
		{



		}; Offsets offsets;

	public:
		//	Dx & ImGui
		int		g_GamePid{};
		HANDLE	g_GameHandle{};
		HWND	g_GameWindow{};
		int		g_GameWidth;
		int		g_GameHeight;
		ImVec2	g_WindowSize{};
		LPCSTR	g_GameTitle;
		LPCSTR	g_ClassName;
		LPCSTR	g_GamePath;

		//	MENU RELATED
		bool	m_ShowMenu{};
		bool	m_ShowHud{};
		bool	m_ShowDemo{};
	
		//	Toggles
		bool	aimbot{0};
		bool	noRecoil{0};
		bool	silentAim{0};
		bool	fastMelee{0};
		bool	fastReload{0};
		bool	esp{ 0 };
		bool	worldEsp{ 0 };

		CG::ULocalPlayer*		localplayer = nullptr;
		CG::APlayerController*	l_controller = nullptr;

		void Init();

	public:	
		explicit GameData();
		~GameData() noexcept = default;
		GameData(GameData const&) = delete;
		GameData(GameData&&) = delete;
		GameData& operator=(GameData const&) = delete;
		GameData& operator=(GameData&&) = delete;
	};

	inline std::unique_ptr<GameData> g_GameData;

	//	BONES
	enum ARaidCharacter : std::uint32_t
	{
		FloatingIKBase_MOVEMENT__Skeleton = 0,
		SCALE__Skeleton = 1,
		BASE__ServerWieldSocket_BASE__Skeleton = 2,
		Targeting_Rotation_Pivot_UPPER_BODY_LOCK__Skeleton = 3,
		WaistSocket_WAIST__Skeleton = 4,
		TORSO__Skeleton = 5,
		BackStashProp_CHEST__Skeleton = 6,
		NECK1__Skeleton = 7,
		NECK2__Skeleton = 8,
		VFX_MouthSocket_3rd_HEAD__Skeleton = 9,
		JAW__Skeleton = 10,
		MID_FACE_UNDER_CHIN__Skeleton = 11,
		MID_FACE_LOWERLIP_OUTER__Skeleton = 12,
		MID_FACE_LOWERLIP_INNER__Skeleton = 13,
		LF_FACE_LOWERLIP_OUTER__Skeleton = 14,
		LF_FACE_LOWERLIP_INNER__Skeleton = 15,
		RT_FACE_LOWERLIP_INNER__Skeleton = 16,
		RT_FACE_LOWERLIP_OUTER__Skeleton = 17,
		LF_EYE__Skeleton = 18,
		MID_FACE_UPPERLIP_OUTER__Skeleton = 19,
		MID_FACE_NOSE__Skeleton = 20,
		MID_FACE_UPPERLIP_INNER__Skeleton = 21,
		LF_FACE_BROW_OUTER__Skeleton = 22,
		LF_FACE_BROW_MID__Skeleton = 23,
		LF_FACE_CHEEK_MID__Skeleton = 24,
		LF_FACE_UPPERLID_MID__Skeleton = 25,
		LF_FACE_UPPERLID_OUTER__Skeleton = 26,
		LF_FACE_LOWERLID_OUTER__Skeleton = 27,
		LF_FACE_LOWERLID_INNER__Skeleton = 28,
		LF_FACE_MOUTHFOLD_LOWER__Skeleton = 29,
		LF_FACE_LIPCORNER__Skeleton = 30,
		LF_FACE_MOUTHFOLD_UPPER__Skeleton = 31,
		LF_FACE_UPPERLIP_OUTER__Skeleton = 32,
		LF_FACE_BROW_INNER__Skeleton = 33,
		LF_FACE_UPPERLID_INNER__Skeleton = 34,
		LF_FACE_UPPERLIP_INNER__Skeleton = 35,
		RT_EYE__Skeleton = 36,
		RT_FACE_BROW_INNER__Skeleton = 37,
		RT_FACE_BROW_MID__Skeleton = 38,
		RT_FACE_BROW_OUTER__Skeleton = 39,
		RT_FACE_CHEEK_MID__Skeleton = 40,
		RT_FACE_LIPCORNER__Skeleton = 41,
		RT_FACE_LOWERLID_INNER__Skeleton = 42,
		RT_FACE_LOWERLID_OUTER__Skeleton = 43,
		RT_FACE_MOUTHFOLD_LOWER__Skeleton = 44,
		RT_FACE_MOUTHFOLD_UPPER__Skeleton = 45,
		RT_FACE_UPPERLID_INNER__Skeleton = 46,
		RT_FACE_UPPERLID_MID__Skeleton = 47,
		RT_FACE_UPPERLID_OUTER__Skeleton = 48,
		RT_FACE_UPPERLIP_INNER__Skeleton = 49,
		RT_FACE_UPPERLIP_OUTER__Skeleton = 50,
		LF_CLAVICLE__Skeleton = 51,
		vfx_pyro_left_shoulder_LF_SHOULDER__Skeleton = 52,
		LF_ELBOW__Skeleton = 53,
		LeftHandSocket_LF_WRIST__Skeleton = 54,
		LF_FINGD_ROOT__Skeleton = 55,
		LF_FINGD__Skeleton = 56,
		LF_FINGD1__Skeleton = 57,
		LF_FINGD2__Skeleton = 58,
		LF_FINGC_ROOT__Skeleton = 59,
		LF_FINGC__Skeleton = 60,
		LF_FINGC1__Skeleton = 61,
		LF_FINGC2__Skeleton = 62,
		LF_FINGB__Skeleton = 63,
		LF_FINGB1__Skeleton = 64,
		LF_FINGB2__Skeleton = 65,
		LF_FINGA__Skeleton = 66,
		LF_FINGA1__Skeleton = 67,
		LF_FINGA2__Skeleton = 68,
		LF_THUMB_ROOT__Skeleton = 69,
		LF_THUMB1__Skeleton = 70,
		VFX_BottleLeft_LF_THUMB2__Skeleton = 71,
		LeftHandProp_LF_PROP__Skeleton = 72,
		LF_TWIST_WRIST__Skeleton = 73,
		LF_TWIST_SHOULDER__Skeleton = 74,
		CAMERA_ROOT__Skeleton = 75,
		Camera_Socket_CAMERA__Skeleton = 76,
		FloatingProp_CAMERA_PROP__Skeleton = 77,
		LeftFloatIKCam_LF_CAMERA_IK_HAND__Skeleton = 78,
		RightFloatIKCam_RT_CAMERA_IK_HAND__Skeleton = 79,
		RT_CLAVICLE__Skeleton = 80,
		RT_SHOULDER__Skeleton = 81,
		RT_ELBOW__Skeleton = 82,
		RightHandSocket_RT_WRIST__Skeleton = 83,
		RT_FINGD_ROOT__Skeleton = 84,
		RT_FINGD__Skeleton = 85,
		RT_FINGD1__Skeleton = 86,
		RT_FINGD2__Skeleton = 87,
		RT_FINGC_ROOT__Skeleton = 88,
		RT_FINGC__Skeleton = 89,
		RT_FINGC1__Skeleton = 90,
		RT_FINGC2__Skeleton = 91,
		RT_FINGB__Skeleton = 92,
		RT_FINGB1__Skeleton = 93,
		RT_FINGB2__Skeleton = 94,
		RT_FINGA__Skeleton = 95,
		RT_FINGA1__Skeleton = 96,
		RT_FINGA2__Skeleton = 97,
		RT_THUMB_ROOT__Skeleton = 98,
		VFX_BottleRight_RT_THUMB1__Skeleton = 99,
		RT_THUMB2__Skeleton = 100,
		RightHandProp_RT_PROP__Skeleton = 101,
		RT_TWIST_WRIST__Skeleton = 102,
		vfx_pyro_shoulder_RT_TWIST_SHOULDER__Skeleton = 103,
		LF_DRIVEN_CHEST_RISE__Skeleton = 104,
		RT_DRIVEN_CHEST_RISE__Skeleton = 105,
		LF_HIP__Skeleton = 106,
		LF_KNEE__Skeleton = 107,
		VFX_LeftAnkle_LF_ANKLE__Skeleton = 108,
		LeftFoot_LF_TOE__Skeleton = 109,
		LF_TWIST_HIP__Skeleton = 110,
		RT_HIP__Skeleton = 111,
		RT_KNEE__Skeleton = 112,
		VFX_RightAnkle_RT_ANKLE__Skeleton = 113,
		RightFoot_RT_TOE__Skeleton = 114,
		RT_TWIST_HIP__Skeleton = 115,
		LF_DRIVEN_BUTT__Skeleton = 116,
		RT_DRIVEN_BUTT__Skeleton = 117,
		LF_IK_Socket_LF_IK_FOOT__Skeleton = 118,
		IK_HANDS__Skeleton = 119,
		VFX_LeftPalmSocket_old_LF_IK_HAND__Skeleton = 120,
		VFX_RightPalmSocket_old_RT_IK_HAND__Skeleton = 121,
		RF_IK_Socket_RT_IK_FOOT__Skeleton = 122,
		AMordhauCharacter_MAX = 123
	};
}
