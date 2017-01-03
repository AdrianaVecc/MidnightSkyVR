#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrFPS
struct  GvrFPS_t2145111206  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text GvrFPS::textField
	Text_t9039225 * ___textField_5;
	// System.Single GvrFPS::fps
	float ___fps_6;
	// UnityEngine.Camera GvrFPS::cam
	Camera_t2727095145 * ___cam_7;

public:
	inline static int32_t get_offset_of_textField_5() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___textField_5)); }
	inline Text_t9039225 * get_textField_5() const { return ___textField_5; }
	inline Text_t9039225 ** get_address_of_textField_5() { return &___textField_5; }
	inline void set_textField_5(Text_t9039225 * value)
	{
		___textField_5 = value;
		Il2CppCodeGenWriteBarrier(&___textField_5, value);
	}

	inline static int32_t get_offset_of_fps_6() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___fps_6)); }
	inline float get_fps_6() const { return ___fps_6; }
	inline float* get_address_of_fps_6() { return &___fps_6; }
	inline void set_fps_6(float value)
	{
		___fps_6 = value;
	}

	inline static int32_t get_offset_of_cam_7() { return static_cast<int32_t>(offsetof(GvrFPS_t2145111206, ___cam_7)); }
	inline Camera_t2727095145 * get_cam_7() const { return ___cam_7; }
	inline Camera_t2727095145 ** get_address_of_cam_7() { return &___cam_7; }
	inline void set_cam_7(Camera_t2727095145 * value)
	{
		___cam_7 = value;
		Il2CppCodeGenWriteBarrier(&___cam_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
