#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WebCamProfile
struct WebCamProfile_t805;
// System.String
struct String_t;
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::get_Default()
extern "C" ProfileData_t803  WebCamProfile_get_Default_m4424 (WebCamProfile_t805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamProfile::.ctor()
extern "C" void WebCamProfile__ctor_m4425 (WebCamProfile_t805 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WebCamProfile/ProfileData Vuforia.WebCamProfile::GetProfile(System.String)
extern "C" ProfileData_t803  WebCamProfile_GetProfile_m4426 (WebCamProfile_t805 * __this, String_t* ___webcamName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamProfile::ProfileAvailable(System.String)
extern "C" bool WebCamProfile_ProfileAvailable_m4427 (WebCamProfile_t805 * __this, String_t* ___webcamName, MethodInfo* method) IL2CPP_METHOD_ATTR;
