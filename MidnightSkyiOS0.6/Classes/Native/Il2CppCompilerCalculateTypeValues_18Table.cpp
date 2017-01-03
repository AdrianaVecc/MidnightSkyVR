#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GvrHead2074018243.h"
#include "AssemblyU2DCSharp_GvrHead_HeadUpdatedDelegate4119218932.h"
#include "AssemblyU2DCSharp_GvrCameraUtils3751592777.h"
#include "AssemblyU2DCSharp_GvrEye2145111534.h"
#include "AssemblyU2DCSharp_GvrProfile2868291302.h"
#include "AssemblyU2DCSharp_GvrProfile_Screen3577771989.h"
#include "AssemblyU2DCSharp_GvrProfile_Lenses3379109269.h"
#include "AssemblyU2DCSharp_GvrProfile_MaxFOV3404298290.h"
#include "AssemblyU2DCSharp_GvrProfile_Distortion2316389254.h"
#include "AssemblyU2DCSharp_GvrProfile_Viewer3668830587.h"
#include "AssemblyU2DCSharp_GvrProfile_ScreenSizes4088223165.h"
#include "AssemblyU2DCSharp_GvrProfile_ViewerTypes962081726.h"
#include "AssemblyU2DCSharp_StereoController1637909972.h"
#include "AssemblyU2DCSharp_StereoController_U3CEndOfFrameU33320551393.h"
#include "AssemblyU2DCSharp_StereoRenderEffect4012593919.h"
#include "AssemblyU2DCSharp_Gvr_Internal_BaseVRDevice591083105.h"
#include "AssemblyU2DCSharp_Gvr_Internal_GvrDevice2458844523.h"
#include "AssemblyU2DCSharp_Gvr_Internal_iOSDevice141998261.h"
#include "AssemblyU2DCSharp_GvrGaze2073985384.h"
#include "AssemblyU2DCSharp_GvrReticle4275820913.h"
#include "AssemblyU2DCSharp_GvrAudio4159038547.h"
#include "AssemblyU2DCSharp_GvrAudio_Quality3830609699.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerData3927744912.h"
#include "AssemblyU2DCSharp_GvrAudio_SpatializerType3928244512.h"
#include "AssemblyU2DCSharp_GvrAudio_RoomProperties3951668682.h"
#include "AssemblyU2DCSharp_GvrAudioListener2617838119.h"
#include "AssemblyU2DCSharp_GvrAudioRoom252475342.h"
#include "AssemblyU2DCSharp_GvrAudioRoom_SurfaceMaterial3675539603.h"
#include "AssemblyU2DCSharp_GvrAudioSoundfield1975836158.h"
#include "AssemblyU2DCSharp_GvrAudioSource2139450958.h"
#include "AssemblyU2DCSharp_GvrPointerManager2245873363.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorClientSocke2137111857.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig3000403349.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorConfig_Mode884064821.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent3657941864.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent2349426533.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent2112311150.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_A926435919.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent_3710907716.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3989687101.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent200175493.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent3065328481.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager622010154.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1752883023.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA1207501038.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnTo970385655.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnO2004619270.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnB1240547244.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_U3C2571948932.h"
#include "AssemblyU2DCSharp_proto_Proto_PhoneEvent4294543246.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent1948414762.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types1856670140.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Type923828173.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2659645585.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1994437979.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEven190725481.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve1865844949.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_MotionEve2183502845.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Gyroscope2921203048.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Gyroscope3312050644.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerome148610782.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Accelerom1359586634.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3758135118.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_DepthMapE3987156410.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati3825228477.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_Orientati3974107689.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent2095740558.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Types_KeyEvent_1063111930.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent_Builder2932595742.h"
#include "AssemblyU2DCSharp_GvrBasePointer3602508009.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster407851501.h"
#include "AssemblyU2DCSharp_GvrBasePointerRaycaster_RaycastMo525023850.h"
#include "AssemblyU2DCSharp_GvrExecuteEventsExtension2547249172.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster1071039080.h"
#include "AssemblyU2DCSharp_GvrPointerGraphicRaycaster_Block2223317336.h"
#include "AssemblyU2DCSharp_GvrPointerInputModule2267916028.h"
#include "AssemblyU2DCSharp_GvrPointerPhysicsRaycaster1923475945.h"
#include "AssemblyU2DCSharp_GvrUnitySdkVersion3137951952.h"
#include "AssemblyU2DCSharp_GvrViewer671349045.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe2227033558.h"
#include "AssemblyU2DCSharp_GvrViewer_Eye643876407.h"
#include "AssemblyU2DCSharp_GvrViewer_Distortion2578366935.h"
#include "AssemblyU2DCSharp_GvrViewer_StereoScreenChangeDele2614477363.h"
#include "AssemblyU2DCSharp_Pose3D2396367586.h"
#include "AssemblyU2DCSharp_MutablePose3D1273683304.h"
#include "AssemblyU2DCSharp_GvrReticlePointer2844437388.h"
#include "AssemblyU2DCSharp_GvrFPS2145111206.h"
#include "AssemblyU2DCSharp_GvrIntent304217535.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture4035356898.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoType2828778824.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoResol3968033850.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoPlaye1357341794.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_VideoEvent3604595623.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_RenderComm2320763464.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnVideoEve3220588464.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_OnExceptio1067313352.h"
#include "AssemblyU2DCSharp_GvrVideoPlayerTexture_U3CStartU31863601164.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1800 = { sizeof (GvrHead_t2074018243), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1800[6] = 
{
	GvrHead_t2074018243::get_offset_of_trackRotation_2(),
	GvrHead_t2074018243::get_offset_of_trackPosition_3(),
	GvrHead_t2074018243::get_offset_of_target_4(),
	GvrHead_t2074018243::get_offset_of_updateEarly_5(),
	GvrHead_t2074018243::get_offset_of_updated_6(),
	GvrHead_t2074018243::get_offset_of_OnHeadUpdated_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1801 = { sizeof (HeadUpdatedDelegate_t4119218932), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1802 = { sizeof (GvrCameraUtils_t3751592777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1803 = { sizeof (GvrEye_t2145111534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1803[8] = 
{
	GvrEye_t2145111534::get_offset_of_eye_2(),
	GvrEye_t2145111534::get_offset_of_toggleCullingMask_3(),
	GvrEye_t2145111534::get_offset_of_controller_4(),
	GvrEye_t2145111534::get_offset_of_stereoEffect_5(),
	GvrEye_t2145111534::get_offset_of_monoCamera_6(),
	GvrEye_t2145111534::get_offset_of_realProj_7(),
	GvrEye_t2145111534::get_offset_of_interpPosition_8(),
	GvrEye_t2145111534::get_offset_of_U3CcamU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1804 = { sizeof (GvrProfile_t2868291302), -1, sizeof(GvrProfile_t2868291302_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1804[15] = 
{
	GvrProfile_t2868291302::get_offset_of_screen_0(),
	GvrProfile_t2868291302::get_offset_of_viewer_1(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_Nexus5_2(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_Nexus6_3(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_GalaxyS6_4(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_GalaxyNote4_5(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_LGG3_6(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone4_7(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone5_8(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone6_9(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_iPhone6p_10(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_CardboardJun2014_11(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_CardboardMay2015_12(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_GoggleTechC1Glass_13(),
	GvrProfile_t2868291302_StaticFields::get_offset_of_Default_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1805 = { sizeof (Screen_t3577771989)+ sizeof (Il2CppObject), sizeof(Screen_t3577771989_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1805[3] = 
{
	Screen_t3577771989::get_offset_of_width_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t3577771989::get_offset_of_height_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Screen_t3577771989::get_offset_of_border_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1806 = { sizeof (Lenses_t3379109269)+ sizeof (Il2CppObject), sizeof(Lenses_t3379109269_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1806[7] = 
{
	0,
	0,
	0,
	Lenses_t3379109269::get_offset_of_separation_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t3379109269::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t3379109269::get_offset_of_screenDistance_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Lenses_t3379109269::get_offset_of_alignment_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1807 = { sizeof (MaxFOV_t3404298290)+ sizeof (Il2CppObject), sizeof(MaxFOV_t3404298290_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1807[4] = 
{
	MaxFOV_t3404298290::get_offset_of_outer_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t3404298290::get_offset_of_inner_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t3404298290::get_offset_of_upper_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	MaxFOV_t3404298290::get_offset_of_lower_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1808 = { sizeof (Distortion_t2316389254)+ sizeof (Il2CppObject), sizeof(Distortion_t2316389254_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1808[1] = 
{
	Distortion_t2316389254::get_offset_of_coef_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1809 = { sizeof (Viewer_t3668830587)+ sizeof (Il2CppObject), sizeof(Viewer_t3668830587_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1809[4] = 
{
	Viewer_t3668830587::get_offset_of_lenses_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t3668830587::get_offset_of_maxFOV_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t3668830587::get_offset_of_distortion_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Viewer_t3668830587::get_offset_of_inverse_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1810 = { sizeof (ScreenSizes_t4088223165)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1810[10] = 
{
	ScreenSizes_t4088223165::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1811 = { sizeof (ViewerTypes_t962081726)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1811[4] = 
{
	ViewerTypes_t962081726::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1812 = { sizeof (StereoController_t1637909972), -1, sizeof(StereoController_t1637909972_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1812[17] = 
{
	StereoController_t1637909972::get_offset_of_directRender_2(),
	StereoController_t1637909972::get_offset_of_keepStereoUpdated_3(),
	StereoController_t1637909972::get_offset_of_stereoMultiplier_4(),
	StereoController_t1637909972::get_offset_of_matchMonoFOV_5(),
	StereoController_t1637909972::get_offset_of_matchByZoom_6(),
	StereoController_t1637909972::get_offset_of_centerOfInterest_7(),
	StereoController_t1637909972::get_offset_of_radiusOfInterest_8(),
	StereoController_t1637909972::get_offset_of_checkStereoComfort_9(),
	StereoController_t1637909972::get_offset_of_stereoAdjustSmoothing_10(),
	StereoController_t1637909972::get_offset_of_screenParallax_11(),
	StereoController_t1637909972::get_offset_of_stereoPaddingX_12(),
	StereoController_t1637909972::get_offset_of_stereoPaddingY_13(),
	StereoController_t1637909972::get_offset_of_renderedStereo_14(),
	StereoController_t1637909972::get_offset_of_eyes_15(),
	StereoController_t1637909972::get_offset_of_head_16(),
	StereoController_t1637909972::get_offset_of_U3CcamU3Ek__BackingField_17(),
	StereoController_t1637909972_StaticFields::get_offset_of_U3CU3Ef__amU24cache10_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1813 = { sizeof (U3CEndOfFrameU3Ec__Iterator0_t3320551393), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1813[3] = 
{
	U3CEndOfFrameU3Ec__Iterator0_t3320551393::get_offset_of_U24PC_0(),
	U3CEndOfFrameU3Ec__Iterator0_t3320551393::get_offset_of_U24current_1(),
	U3CEndOfFrameU3Ec__Iterator0_t3320551393::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1814 = { sizeof (StereoRenderEffect_t4012593919), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1815 = { sizeof (BaseVRDevice_t591083105), -1, sizeof(BaseVRDevice_t591083105_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1815[19] = 
{
	BaseVRDevice_t591083105_StaticFields::get_offset_of_device_0(),
	BaseVRDevice_t591083105::get_offset_of_headPose_1(),
	BaseVRDevice_t591083105::get_offset_of_leftEyePose_2(),
	BaseVRDevice_t591083105::get_offset_of_rightEyePose_3(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeDistortedProjection_4(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeDistortedProjection_5(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeUndistortedProjection_6(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeUndistortedProjection_7(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeDistortedViewport_8(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeDistortedViewport_9(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeUndistortedViewport_10(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeUndistortedViewport_11(),
	BaseVRDevice_t591083105::get_offset_of_recommendedTextureSize_12(),
	BaseVRDevice_t591083105::get_offset_of_leftEyeOrientation_13(),
	BaseVRDevice_t591083105::get_offset_of_rightEyeOrientation_14(),
	BaseVRDevice_t591083105::get_offset_of_tilted_15(),
	BaseVRDevice_t591083105::get_offset_of_profileChanged_16(),
	BaseVRDevice_t591083105::get_offset_of_backButtonPressed_17(),
	BaseVRDevice_t591083105::get_offset_of_U3CProfileU3Ek__BackingField_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1816 = { sizeof (GvrDevice_t2458844523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1816[13] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrDevice_t2458844523::get_offset_of_headData_24(),
	GvrDevice_t2458844523::get_offset_of_viewData_25(),
	GvrDevice_t2458844523::get_offset_of_profileData_26(),
	GvrDevice_t2458844523::get_offset_of_headView_27(),
	GvrDevice_t2458844523::get_offset_of_leftEyeView_28(),
	GvrDevice_t2458844523::get_offset_of_rightEyeView_29(),
	GvrDevice_t2458844523::get_offset_of_debugDisableNativeProjections_30(),
	GvrDevice_t2458844523::get_offset_of_debugDisableNativeUILayer_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1817 = { sizeof (iOSDevice_t141998261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1817[1] = 
{
	iOSDevice_t141998261::get_offset_of_isOpenGL_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1818 = { sizeof (GvrGaze_t2073985384), -1, sizeof(GvrGaze_t2073985384_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1818[11] = 
{
	GvrGaze_t2073985384::get_offset_of_pointerObject_2(),
	GvrGaze_t2073985384::get_offset_of_pointer_3(),
	GvrGaze_t2073985384::get_offset_of_mask_4(),
	GvrGaze_t2073985384::get_offset_of_currentTarget_5(),
	GvrGaze_t2073985384::get_offset_of_currentGazeObject_6(),
	GvrGaze_t2073985384::get_offset_of_lastIntersectPosition_7(),
	GvrGaze_t2073985384::get_offset_of_lastIntersectionRay_8(),
	GvrGaze_t2073985384::get_offset_of_isTriggered_9(),
	GvrGaze_t2073985384::get_offset_of_U3CcamU3Ek__BackingField_10(),
	GvrGaze_t2073985384_StaticFields::get_offset_of_U3CU3Ef__amU24cache9_11(),
	GvrGaze_t2073985384_StaticFields::get_offset_of_U3CU3Ef__amU24cacheA_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1819 = { sizeof (GvrReticle_t4275820913), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1820 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1821 = { sizeof (GvrAudio_t4159038547), -1, sizeof(GvrAudio_t4159038547_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1821[23] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	GvrAudio_t4159038547_StaticFields::get_offset_of_sampleRate_12(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_numChannels_13(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_framesPerBuffer_14(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_listenerDirectivityColor_15(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_sourceDirectivityColor_16(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_bounds_17(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_enabledRooms_18(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_initialized_19(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_listenerTransform_20(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_occlusionMaskValue_21(),
	GvrAudio_t4159038547_StaticFields::get_offset_of_pose_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1822 = { sizeof (Quality_t3830609699)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1822[4] = 
{
	Quality_t3830609699::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1823 = { sizeof (SpatializerData_t3927744912)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1823[9] = 
{
	SpatializerData_t3927744912::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1824 = { sizeof (SpatializerType_t3928244512)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1824[3] = 
{
	SpatializerType_t3928244512::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1825 = { sizeof (RoomProperties_t3951668682)+ sizeof (Il2CppObject), sizeof(RoomProperties_t3951668682_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1825[20] = 
{
	RoomProperties_t3951668682::get_offset_of_positionX_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_positionY_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_positionZ_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_rotationX_3() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_rotationY_4() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_rotationZ_5() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_rotationW_6() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_dimensionsX_7() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_dimensionsY_8() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_dimensionsZ_9() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_materialLeft_10() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_materialRight_11() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_materialBottom_12() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_materialTop_13() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_materialFront_14() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_materialBack_15() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_reflectionScalar_16() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_reverbGain_17() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_reverbTime_18() + static_cast<int32_t>(sizeof(Il2CppObject)),
	RoomProperties_t3951668682::get_offset_of_reverbBrightness_19() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1826 = { sizeof (GvrAudioListener_t2617838119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1826[3] = 
{
	GvrAudioListener_t2617838119::get_offset_of_globalGainDb_2(),
	GvrAudioListener_t2617838119::get_offset_of_occlusionMask_3(),
	GvrAudioListener_t2617838119::get_offset_of_quality_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1827 = { sizeof (GvrAudioRoom_t252475342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1827[11] = 
{
	GvrAudioRoom_t252475342::get_offset_of_leftWall_2(),
	GvrAudioRoom_t252475342::get_offset_of_rightWall_3(),
	GvrAudioRoom_t252475342::get_offset_of_floor_4(),
	GvrAudioRoom_t252475342::get_offset_of_ceiling_5(),
	GvrAudioRoom_t252475342::get_offset_of_backWall_6(),
	GvrAudioRoom_t252475342::get_offset_of_frontWall_7(),
	GvrAudioRoom_t252475342::get_offset_of_reflectivity_8(),
	GvrAudioRoom_t252475342::get_offset_of_reverbGainDb_9(),
	GvrAudioRoom_t252475342::get_offset_of_reverbBrightness_10(),
	GvrAudioRoom_t252475342::get_offset_of_reverbTime_11(),
	GvrAudioRoom_t252475342::get_offset_of_size_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1828 = { sizeof (SurfaceMaterial_t3675539603)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1828[24] = 
{
	SurfaceMaterial_t3675539603::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1829 = { sizeof (GvrAudioSoundfield_t1975836158), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1829[12] = 
{
	GvrAudioSoundfield_t1975836158::get_offset_of_gainDb_2(),
	GvrAudioSoundfield_t1975836158::get_offset_of_playOnAwake_3(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldClip0102_4(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldClip0304_5(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldLoop_6(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldMute_7(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldPitch_8(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldPriority_9(),
	GvrAudioSoundfield_t1975836158::get_offset_of_soundfieldVolume_10(),
	GvrAudioSoundfield_t1975836158::get_offset_of_id_11(),
	GvrAudioSoundfield_t1975836158::get_offset_of_audioSources_12(),
	GvrAudioSoundfield_t1975836158::get_offset_of_isPaused_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1830 = { sizeof (GvrAudioSource_t2139450958), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1830[25] = 
{
	GvrAudioSource_t2139450958::get_offset_of_bypassRoomEffects_2(),
	GvrAudioSource_t2139450958::get_offset_of_directivityAlpha_3(),
	GvrAudioSource_t2139450958::get_offset_of_directivitySharpness_4(),
	GvrAudioSource_t2139450958::get_offset_of_listenerDirectivityAlpha_5(),
	GvrAudioSource_t2139450958::get_offset_of_listenerDirectivitySharpness_6(),
	GvrAudioSource_t2139450958::get_offset_of_gainDb_7(),
	GvrAudioSource_t2139450958::get_offset_of_occlusionEnabled_8(),
	GvrAudioSource_t2139450958::get_offset_of_playOnAwake_9(),
	GvrAudioSource_t2139450958::get_offset_of_sourceClip_10(),
	GvrAudioSource_t2139450958::get_offset_of_sourceLoop_11(),
	GvrAudioSource_t2139450958::get_offset_of_sourceMute_12(),
	GvrAudioSource_t2139450958::get_offset_of_sourcePitch_13(),
	GvrAudioSource_t2139450958::get_offset_of_sourcePriority_14(),
	GvrAudioSource_t2139450958::get_offset_of_sourceDopplerLevel_15(),
	GvrAudioSource_t2139450958::get_offset_of_sourceSpread_16(),
	GvrAudioSource_t2139450958::get_offset_of_sourceVolume_17(),
	GvrAudioSource_t2139450958::get_offset_of_sourceRolloffMode_18(),
	GvrAudioSource_t2139450958::get_offset_of_sourceMaxDistance_19(),
	GvrAudioSource_t2139450958::get_offset_of_sourceMinDistance_20(),
	GvrAudioSource_t2139450958::get_offset_of_hrtfEnabled_21(),
	GvrAudioSource_t2139450958::get_offset_of_audioSource_22(),
	GvrAudioSource_t2139450958::get_offset_of_id_23(),
	GvrAudioSource_t2139450958::get_offset_of_currentOcclusion_24(),
	GvrAudioSource_t2139450958::get_offset_of_nextOcclusionUpdate_25(),
	GvrAudioSource_t2139450958::get_offset_of_isPaused_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1831 = { sizeof (GvrPointerManager_t2245873363), -1, sizeof(GvrPointerManager_t2245873363_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1831[2] = 
{
	GvrPointerManager_t2245873363_StaticFields::get_offset_of_instance_2(),
	GvrPointerManager_t2245873363::get_offset_of_pointer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1832 = { sizeof (EmulatorClientSocket_t2137111857), -1, sizeof(EmulatorClientSocket_t2137111857_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1832[9] = 
{
	0,
	0,
	EmulatorClientSocket_t2137111857_StaticFields::get_offset_of_kPhoneEventPort_4(),
	EmulatorClientSocket_t2137111857::get_offset_of_phoneMirroringSocket_5(),
	EmulatorClientSocket_t2137111857::get_offset_of_phoneEventThread_6(),
	EmulatorClientSocket_t2137111857::get_offset_of_shouldStop_7(),
	EmulatorClientSocket_t2137111857::get_offset_of_lastConnectionAttemptWasSuccessful_8(),
	EmulatorClientSocket_t2137111857::get_offset_of_phoneRemote_9(),
	EmulatorClientSocket_t2137111857::get_offset_of_U3CconnectedU3Ek__BackingField_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1833 = { sizeof (EmulatorConfig_t3000403349), -1, sizeof(EmulatorConfig_t3000403349_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1833[4] = 
{
	EmulatorConfig_t3000403349_StaticFields::get_offset_of_instance_2(),
	EmulatorConfig_t3000403349::get_offset_of_PHONE_EVENT_MODE_3(),
	EmulatorConfig_t3000403349_StaticFields::get_offset_of_USB_SERVER_IP_4(),
	EmulatorConfig_t3000403349_StaticFields::get_offset_of_WIFI_SERVER_IP_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1834 = { sizeof (Mode_t884064821)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1834[4] = 
{
	Mode_t884064821::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1835 = { sizeof (EmulatorGyroEvent_t3657941864)+ sizeof (Il2CppObject), sizeof(EmulatorGyroEvent_t3657941864_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1835[2] = 
{
	EmulatorGyroEvent_t3657941864::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorGyroEvent_t3657941864::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1836 = { sizeof (EmulatorAccelEvent_t2349426533)+ sizeof (Il2CppObject), sizeof(EmulatorAccelEvent_t2349426533_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1836[2] = 
{
	EmulatorAccelEvent_t2349426533::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorAccelEvent_t2349426533::get_offset_of_value_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1837 = { sizeof (EmulatorTouchEvent_t2112311150)+ sizeof (Il2CppObject), -1, sizeof(EmulatorTouchEvent_t2112311150_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1837[6] = 
{
	EmulatorTouchEvent_t2112311150::get_offset_of_action_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t2112311150::get_offset_of_relativeTimestamp_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t2112311150::get_offset_of_pointers_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorTouchEvent_t2112311150_StaticFields::get_offset_of_ACTION_POINTER_INDEX_SHIFT_3(),
	EmulatorTouchEvent_t2112311150_StaticFields::get_offset_of_ACTION_POINTER_INDEX_MASK_4(),
	EmulatorTouchEvent_t2112311150_StaticFields::get_offset_of_ACTION_MASK_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1838 = { sizeof (Action_t926435919)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1838[10] = 
{
	Action_t926435919::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1839 = { sizeof (Pointer_t3710907716)+ sizeof (Il2CppObject), sizeof(Pointer_t3710907716_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1839[3] = 
{
	Pointer_t3710907716::get_offset_of_fingerId_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3710907716::get_offset_of_normalizedX_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	Pointer_t3710907716::get_offset_of_normalizedY_2() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1840 = { sizeof (EmulatorOrientationEvent_t3989687101)+ sizeof (Il2CppObject), sizeof(EmulatorOrientationEvent_t3989687101_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1840[2] = 
{
	EmulatorOrientationEvent_t3989687101::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorOrientationEvent_t3989687101::get_offset_of_orientation_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1841 = { sizeof (EmulatorButtonEvent_t200175493)+ sizeof (Il2CppObject), sizeof(EmulatorButtonEvent_t200175493_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1841[2] = 
{
	EmulatorButtonEvent_t200175493::get_offset_of_code_0() + static_cast<int32_t>(sizeof(Il2CppObject)),
	EmulatorButtonEvent_t200175493::get_offset_of_down_1() + static_cast<int32_t>(sizeof(Il2CppObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1842 = { sizeof (ButtonCode_t3065328481)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1842[7] = 
{
	ButtonCode_t3065328481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1843 = { sizeof (EmulatorManager_t622010154), -1, sizeof(EmulatorManager_t622010154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1843[16] = 
{
	EmulatorManager_t622010154::get_offset_of_emulatorUpdate_2(),
	EmulatorManager_t622010154::get_offset_of_waitForEndOfFrame_3(),
	EmulatorManager_t622010154_StaticFields::get_offset_of_instance_4(),
	EmulatorManager_t622010154::get_offset_of_currentGyroEvent_5(),
	EmulatorManager_t622010154::get_offset_of_currentAccelEvent_6(),
	EmulatorManager_t622010154::get_offset_of_currentTouchEvent_7(),
	EmulatorManager_t622010154::get_offset_of_currentOrientationEvent_8(),
	EmulatorManager_t622010154::get_offset_of_currentButtonEvent_9(),
	EmulatorManager_t622010154::get_offset_of_pendingEvents_10(),
	EmulatorManager_t622010154::get_offset_of_socket_11(),
	EmulatorManager_t622010154::get_offset_of_lastDownTimeMs_12(),
	EmulatorManager_t622010154::get_offset_of_gyroEventListenersInternal_13(),
	EmulatorManager_t622010154::get_offset_of_accelEventListenersInternal_14(),
	EmulatorManager_t622010154::get_offset_of_touchEventListenersInternal_15(),
	EmulatorManager_t622010154::get_offset_of_orientationEventListenersInternal_16(),
	EmulatorManager_t622010154::get_offset_of_buttonEventListenersInternal_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1844 = { sizeof (OnGyroEvent_t1752883023), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1845 = { sizeof (OnAccelEvent_t1207501038), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1846 = { sizeof (OnTouchEvent_t970385655), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1847 = { sizeof (OnOrientationEvent_t2004619270), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1848 = { sizeof (OnButtonEvent_t1240547244), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1849 = { sizeof (U3CEndOfFrameU3Ec__Iterator1_t2571948932), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1849[5] = 
{
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U3CphoneEventU3E__0_0(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U3CU24s_6U3E__1_1(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U24PC_2(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U24current_3(),
	U3CEndOfFrameU3Ec__Iterator1_t2571948932::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1850 = { sizeof (PhoneEvent_t4294543246), -1, sizeof(PhoneEvent_t4294543246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1850[1] = 
{
	PhoneEvent_t4294543246_StaticFields::get_offset_of_Descriptor_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1851 = { sizeof (PhoneEvent_t1948414762), -1, sizeof(PhoneEvent_t1948414762_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1851[25] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	PhoneEvent_t1948414762_StaticFields::get_offset_of_defaultInstance_7(),
	PhoneEvent_t1948414762_StaticFields::get_offset_of__phoneEventFieldNames_8(),
	PhoneEvent_t1948414762_StaticFields::get_offset_of__phoneEventFieldTags_9(),
	PhoneEvent_t1948414762::get_offset_of_hasType_10(),
	PhoneEvent_t1948414762::get_offset_of_type__11(),
	PhoneEvent_t1948414762::get_offset_of_hasMotionEvent_12(),
	PhoneEvent_t1948414762::get_offset_of_motionEvent__13(),
	PhoneEvent_t1948414762::get_offset_of_hasGyroscopeEvent_14(),
	PhoneEvent_t1948414762::get_offset_of_gyroscopeEvent__15(),
	PhoneEvent_t1948414762::get_offset_of_hasAccelerometerEvent_16(),
	PhoneEvent_t1948414762::get_offset_of_accelerometerEvent__17(),
	PhoneEvent_t1948414762::get_offset_of_hasDepthMapEvent_18(),
	PhoneEvent_t1948414762::get_offset_of_depthMapEvent__19(),
	PhoneEvent_t1948414762::get_offset_of_hasOrientationEvent_20(),
	PhoneEvent_t1948414762::get_offset_of_orientationEvent__21(),
	PhoneEvent_t1948414762::get_offset_of_hasKeyEvent_22(),
	PhoneEvent_t1948414762::get_offset_of_keyEvent__23(),
	PhoneEvent_t1948414762::get_offset_of_memoizedSerializedSize_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1852 = { sizeof (Types_t1856670140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1853 = { sizeof (Type_t923828173)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1853[7] = 
{
	Type_t923828173::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1854 = { sizeof (MotionEvent_t2659645585), -1, sizeof(MotionEvent_t2659645585_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1854[12] = 
{
	0,
	0,
	0,
	MotionEvent_t2659645585_StaticFields::get_offset_of_defaultInstance_3(),
	MotionEvent_t2659645585_StaticFields::get_offset_of__motionEventFieldNames_4(),
	MotionEvent_t2659645585_StaticFields::get_offset_of__motionEventFieldTags_5(),
	MotionEvent_t2659645585::get_offset_of_hasTimestamp_6(),
	MotionEvent_t2659645585::get_offset_of_timestamp__7(),
	MotionEvent_t2659645585::get_offset_of_hasAction_8(),
	MotionEvent_t2659645585::get_offset_of_action__9(),
	MotionEvent_t2659645585::get_offset_of_pointers__10(),
	MotionEvent_t2659645585::get_offset_of_memoizedSerializedSize_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1855 = { sizeof (Types_t1994437979), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1856 = { sizeof (Pointer_t190725481), -1, sizeof(Pointer_t190725481_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1856[13] = 
{
	0,
	0,
	0,
	Pointer_t190725481_StaticFields::get_offset_of_defaultInstance_3(),
	Pointer_t190725481_StaticFields::get_offset_of__pointerFieldNames_4(),
	Pointer_t190725481_StaticFields::get_offset_of__pointerFieldTags_5(),
	Pointer_t190725481::get_offset_of_hasId_6(),
	Pointer_t190725481::get_offset_of_id__7(),
	Pointer_t190725481::get_offset_of_hasNormalizedX_8(),
	Pointer_t190725481::get_offset_of_normalizedX__9(),
	Pointer_t190725481::get_offset_of_hasNormalizedY_10(),
	Pointer_t190725481::get_offset_of_normalizedY__11(),
	Pointer_t190725481::get_offset_of_memoizedSerializedSize_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1857 = { sizeof (Builder_t1865844949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1857[2] = 
{
	Builder_t1865844949::get_offset_of_resultIsReadOnly_0(),
	Builder_t1865844949::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1858 = { sizeof (Builder_t2183502845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1858[2] = 
{
	Builder_t2183502845::get_offset_of_resultIsReadOnly_0(),
	Builder_t2183502845::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1859 = { sizeof (GyroscopeEvent_t2921203048), -1, sizeof(GyroscopeEvent_t2921203048_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1859[16] = 
{
	0,
	0,
	0,
	0,
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of_defaultInstance_4(),
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of__gyroscopeEventFieldNames_5(),
	GyroscopeEvent_t2921203048_StaticFields::get_offset_of__gyroscopeEventFieldTags_6(),
	GyroscopeEvent_t2921203048::get_offset_of_hasTimestamp_7(),
	GyroscopeEvent_t2921203048::get_offset_of_timestamp__8(),
	GyroscopeEvent_t2921203048::get_offset_of_hasX_9(),
	GyroscopeEvent_t2921203048::get_offset_of_x__10(),
	GyroscopeEvent_t2921203048::get_offset_of_hasY_11(),
	GyroscopeEvent_t2921203048::get_offset_of_y__12(),
	GyroscopeEvent_t2921203048::get_offset_of_hasZ_13(),
	GyroscopeEvent_t2921203048::get_offset_of_z__14(),
	GyroscopeEvent_t2921203048::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1860 = { sizeof (Builder_t3312050644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1860[2] = 
{
	Builder_t3312050644::get_offset_of_resultIsReadOnly_0(),
	Builder_t3312050644::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1861 = { sizeof (AccelerometerEvent_t148610782), -1, sizeof(AccelerometerEvent_t148610782_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1861[16] = 
{
	0,
	0,
	0,
	0,
	AccelerometerEvent_t148610782_StaticFields::get_offset_of_defaultInstance_4(),
	AccelerometerEvent_t148610782_StaticFields::get_offset_of__accelerometerEventFieldNames_5(),
	AccelerometerEvent_t148610782_StaticFields::get_offset_of__accelerometerEventFieldTags_6(),
	AccelerometerEvent_t148610782::get_offset_of_hasTimestamp_7(),
	AccelerometerEvent_t148610782::get_offset_of_timestamp__8(),
	AccelerometerEvent_t148610782::get_offset_of_hasX_9(),
	AccelerometerEvent_t148610782::get_offset_of_x__10(),
	AccelerometerEvent_t148610782::get_offset_of_hasY_11(),
	AccelerometerEvent_t148610782::get_offset_of_y__12(),
	AccelerometerEvent_t148610782::get_offset_of_hasZ_13(),
	AccelerometerEvent_t148610782::get_offset_of_z__14(),
	AccelerometerEvent_t148610782::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1862 = { sizeof (Builder_t1359586634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1862[2] = 
{
	Builder_t1359586634::get_offset_of_resultIsReadOnly_0(),
	Builder_t1359586634::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1863 = { sizeof (DepthMapEvent_t3758135118), -1, sizeof(DepthMapEvent_t3758135118_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1863[16] = 
{
	0,
	0,
	0,
	0,
	DepthMapEvent_t3758135118_StaticFields::get_offset_of_defaultInstance_4(),
	DepthMapEvent_t3758135118_StaticFields::get_offset_of__depthMapEventFieldNames_5(),
	DepthMapEvent_t3758135118_StaticFields::get_offset_of__depthMapEventFieldTags_6(),
	DepthMapEvent_t3758135118::get_offset_of_hasTimestamp_7(),
	DepthMapEvent_t3758135118::get_offset_of_timestamp__8(),
	DepthMapEvent_t3758135118::get_offset_of_hasWidth_9(),
	DepthMapEvent_t3758135118::get_offset_of_width__10(),
	DepthMapEvent_t3758135118::get_offset_of_hasHeight_11(),
	DepthMapEvent_t3758135118::get_offset_of_height__12(),
	DepthMapEvent_t3758135118::get_offset_of_zDistancesMemoizedSerializedSize_13(),
	DepthMapEvent_t3758135118::get_offset_of_zDistances__14(),
	DepthMapEvent_t3758135118::get_offset_of_memoizedSerializedSize_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1864 = { sizeof (Builder_t3987156410), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1864[2] = 
{
	Builder_t3987156410::get_offset_of_resultIsReadOnly_0(),
	Builder_t3987156410::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1865 = { sizeof (OrientationEvent_t3825228477), -1, sizeof(OrientationEvent_t3825228477_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1865[19] = 
{
	0,
	0,
	0,
	0,
	0,
	OrientationEvent_t3825228477_StaticFields::get_offset_of_defaultInstance_5(),
	OrientationEvent_t3825228477_StaticFields::get_offset_of__orientationEventFieldNames_6(),
	OrientationEvent_t3825228477_StaticFields::get_offset_of__orientationEventFieldTags_7(),
	OrientationEvent_t3825228477::get_offset_of_hasTimestamp_8(),
	OrientationEvent_t3825228477::get_offset_of_timestamp__9(),
	OrientationEvent_t3825228477::get_offset_of_hasX_10(),
	OrientationEvent_t3825228477::get_offset_of_x__11(),
	OrientationEvent_t3825228477::get_offset_of_hasY_12(),
	OrientationEvent_t3825228477::get_offset_of_y__13(),
	OrientationEvent_t3825228477::get_offset_of_hasZ_14(),
	OrientationEvent_t3825228477::get_offset_of_z__15(),
	OrientationEvent_t3825228477::get_offset_of_hasW_16(),
	OrientationEvent_t3825228477::get_offset_of_w__17(),
	OrientationEvent_t3825228477::get_offset_of_memoizedSerializedSize_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1866 = { sizeof (Builder_t3974107689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1866[2] = 
{
	Builder_t3974107689::get_offset_of_resultIsReadOnly_0(),
	Builder_t3974107689::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1867 = { sizeof (KeyEvent_t2095740558), -1, sizeof(KeyEvent_t2095740558_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1867[10] = 
{
	0,
	0,
	KeyEvent_t2095740558_StaticFields::get_offset_of_defaultInstance_2(),
	KeyEvent_t2095740558_StaticFields::get_offset_of__keyEventFieldNames_3(),
	KeyEvent_t2095740558_StaticFields::get_offset_of__keyEventFieldTags_4(),
	KeyEvent_t2095740558::get_offset_of_hasAction_5(),
	KeyEvent_t2095740558::get_offset_of_action__6(),
	KeyEvent_t2095740558::get_offset_of_hasCode_7(),
	KeyEvent_t2095740558::get_offset_of_code__8(),
	KeyEvent_t2095740558::get_offset_of_memoizedSerializedSize_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1868 = { sizeof (Builder_t1063111930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1868[2] = 
{
	Builder_t1063111930::get_offset_of_resultIsReadOnly_0(),
	Builder_t1063111930::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1869 = { sizeof (Builder_t2932595742), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1869[2] = 
{
	Builder_t2932595742::get_offset_of_resultIsReadOnly_0(),
	Builder_t2932595742::get_offset_of_result_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1870 = { sizeof (GvrBasePointer_t3602508009), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1871 = { sizeof (GvrBasePointerRaycaster_t407851501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1871[2] = 
{
	GvrBasePointerRaycaster_t407851501::get_offset_of_raycastMode_2(),
	GvrBasePointerRaycaster_t407851501::get_offset_of_lastRay_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1872 = { sizeof (RaycastMode_t525023850)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1872[3] = 
{
	RaycastMode_t525023850::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1873 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1874 = { sizeof (GvrExecuteEventsExtension_t2547249172), -1, sizeof(GvrExecuteEventsExtension_t2547249172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1874[1] = 
{
	GvrExecuteEventsExtension_t2547249172_StaticFields::get_offset_of_s_HoverHandler_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1875 = { sizeof (GvrPointerGraphicRaycaster_t1071039080), -1, sizeof(GvrPointerGraphicRaycaster_t1071039080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1875[9] = 
{
	0,
	GvrPointerGraphicRaycaster_t1071039080::get_offset_of_ignoreReversedGraphics_5(),
	GvrPointerGraphicRaycaster_t1071039080::get_offset_of_blockingObjects_6(),
	GvrPointerGraphicRaycaster_t1071039080::get_offset_of_blockingMask_7(),
	GvrPointerGraphicRaycaster_t1071039080::get_offset_of_targetCanvas_8(),
	GvrPointerGraphicRaycaster_t1071039080::get_offset_of_raycastResults_9(),
	GvrPointerGraphicRaycaster_t1071039080::get_offset_of_cachedPointerEventCamera_10(),
	GvrPointerGraphicRaycaster_t1071039080_StaticFields::get_offset_of_sortedGraphics_11(),
	GvrPointerGraphicRaycaster_t1071039080_StaticFields::get_offset_of_U3CU3Ef__amU24cache7_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1876 = { sizeof (BlockingObjects_t2223317336)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1876[5] = 
{
	BlockingObjects_t2223317336::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1877 = { sizeof (GvrPointerInputModule_t2267916028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1877[5] = 
{
	0,
	GvrPointerInputModule_t2267916028::get_offset_of_vrModeOnly_7(),
	GvrPointerInputModule_t2267916028::get_offset_of_pointerData_8(),
	GvrPointerInputModule_t2267916028::get_offset_of_lastHeadPose_9(),
	GvrPointerInputModule_t2267916028::get_offset_of_isActive_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1878 = { sizeof (GvrPointerPhysicsRaycaster_t1923475945), -1, sizeof(GvrPointerPhysicsRaycaster_t1923475945_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1878[4] = 
{
	0,
	GvrPointerPhysicsRaycaster_t1923475945::get_offset_of_raycasterEventMask_5(),
	GvrPointerPhysicsRaycaster_t1923475945::get_offset_of_cachedEventCamera_6(),
	GvrPointerPhysicsRaycaster_t1923475945_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1879 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1880 = { sizeof (GvrUnitySdkVersion_t3137951952), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1880[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1881 = { sizeof (GvrViewer_t671349045), -1, sizeof(GvrViewer_t671349045_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1881[20] = 
{
	0,
	GvrViewer_t671349045_StaticFields::get_offset_of_instance_3(),
	GvrViewer_t671349045_StaticFields::get_offset_of_currentController_4(),
	GvrViewer_t671349045_StaticFields::get_offset_of_currentMainCamera_5(),
	GvrViewer_t671349045::get_offset_of_vrModeEnabled_6(),
	GvrViewer_t671349045::get_offset_of_distortionCorrection_7(),
	GvrViewer_t671349045::get_offset_of_neckModelScale_8(),
	GvrViewer_t671349045_StaticFields::get_offset_of_device_9(),
	GvrViewer_t671349045::get_offset_of_stereoScreenScale_10(),
	GvrViewer_t671349045_StaticFields::get_offset_of_stereoScreen_11(),
	GvrViewer_t671349045::get_offset_of_defaultComfortableViewingRange_12(),
	GvrViewer_t671349045::get_offset_of_DefaultDeviceProfile_13(),
	GvrViewer_t671349045::get_offset_of_updatedToFrame_14(),
	GvrViewer_t671349045::get_offset_of_OnStereoScreenChanged_15(),
	GvrViewer_t671349045::get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16(),
	GvrViewer_t671349045::get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_17(),
	GvrViewer_t671349045::get_offset_of_U3CTriggeredU3Ek__BackingField_18(),
	GvrViewer_t671349045::get_offset_of_U3CTiltedU3Ek__BackingField_19(),
	GvrViewer_t671349045::get_offset_of_U3CProfileChangedU3Ek__BackingField_20(),
	GvrViewer_t671349045::get_offset_of_U3CBackButtonPressedU3Ek__BackingField_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1882 = { sizeof (DistortionCorrectionMethod_t2227033558)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1882[4] = 
{
	DistortionCorrectionMethod_t2227033558::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1883 = { sizeof (Eye_t643876407)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1883[4] = 
{
	Eye_t643876407::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1884 = { sizeof (Distortion_t2578366935)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1884[3] = 
{
	Distortion_t2578366935::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1885 = { sizeof (StereoScreenChangeDelegate_t2614477363), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1886 = { sizeof (Pose3D_t2396367586), -1, sizeof(Pose3D_t2396367586_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1886[4] = 
{
	Pose3D_t2396367586_StaticFields::get_offset_of_flipZ_0(),
	Pose3D_t2396367586::get_offset_of_U3CPositionU3Ek__BackingField_1(),
	Pose3D_t2396367586::get_offset_of_U3COrientationU3Ek__BackingField_2(),
	Pose3D_t2396367586::get_offset_of_U3CMatrixU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1887 = { sizeof (MutablePose3D_t1273683304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1888 = { sizeof (GvrReticlePointer_t2844437388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1888[13] = 
{
	0,
	0,
	0,
	0,
	0,
	GvrReticlePointer_t2844437388::get_offset_of_reticleSegments_7(),
	GvrReticlePointer_t2844437388::get_offset_of_reticleGrowthSpeed_8(),
	GvrReticlePointer_t2844437388::get_offset_of_materialComp_9(),
	GvrReticlePointer_t2844437388::get_offset_of_reticleInnerAngle_10(),
	GvrReticlePointer_t2844437388::get_offset_of_reticleOuterAngle_11(),
	GvrReticlePointer_t2844437388::get_offset_of_reticleDistanceInMeters_12(),
	GvrReticlePointer_t2844437388::get_offset_of_reticleInnerDiameter_13(),
	GvrReticlePointer_t2844437388::get_offset_of_reticleOuterDiameter_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1889 = { sizeof (GvrFPS_t2145111206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1889[6] = 
{
	0,
	0,
	0,
	GvrFPS_t2145111206::get_offset_of_textField_5(),
	GvrFPS_t2145111206::get_offset_of_fps_6(),
	GvrFPS_t2145111206::get_offset_of_cam_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1890 = { sizeof (GvrIntent_t304217535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1890[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1891 = { sizeof (GvrVideoPlayerTexture_t4035356898), -1, sizeof(GvrVideoPlayerTexture_t4035356898_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1891[30] = 
{
	0,
	0,
	0,
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoTextures_5(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_currentTexture_6(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoPlayerPtr_7(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoPlayerEventBase_8(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_initialTexture_9(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_initialized_10(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_texWidth_11(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_texHeight_12(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_lastBufferedPosition_13(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_framecount_14(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_graphicComponent_15(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_rendererComponent_16(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_renderEventFunction_17(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_processingRunning_18(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_onEventCallbacks_19(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_onExceptionCallbacks_20(),
	GvrVideoPlayerTexture_t4035356898_StaticFields::get_offset_of_ExecuteOnMainThread_21(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_statusText_22(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_bufferSize_23(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoType_24(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoURL_25(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoContentID_26(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_videoProviderId_27(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_initialResolution_28(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_adjustAspectRatio_29(),
	GvrVideoPlayerTexture_t4035356898::get_offset_of_useSecurePath_30(),
	GvrVideoPlayerTexture_t4035356898_StaticFields::get_offset_of_U3CU3Ef__amU24cache1A_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1892 = { sizeof (VideoType_t2828778824)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1892[4] = 
{
	VideoType_t2828778824::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1893 = { sizeof (VideoResolution_t3968033850)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1893[6] = 
{
	VideoResolution_t3968033850::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1894 = { sizeof (VideoPlayerState_t1357341794)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1894[6] = 
{
	VideoPlayerState_t1357341794::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1895 = { sizeof (VideoEvents_t3604595623)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1895[6] = 
{
	VideoEvents_t3604595623::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1896 = { sizeof (RenderCommand_t2320763464)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1896[8] = 
{
	RenderCommand_t2320763464::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1897 = { sizeof (OnVideoEventCallback_t3220588464), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1898 = { sizeof (OnExceptionCallback_t1067313352), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1899 = { sizeof (U3CStartU3Ec__Iterator2_t1863601164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1899[3] = 
{
	U3CStartU3Ec__Iterator2_t1863601164::get_offset_of_U24PC_0(),
	U3CStartU3Ec__Iterator2_t1863601164::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator2_t1863601164::get_offset_of_U3CU3Ef__this_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
