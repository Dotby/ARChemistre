#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>
struct Transform_1_t3900;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_122MethodDeclarations.h"
#define Transform_1__ctor_m25823(__this, ___object, ___method, method) (( void (*) (Transform_1_t3900 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25732_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m25824(__this, ___key, ___value, method) (( String_t* (*) (Transform_1_t3900 *, String_t*, ProfileData_t803 , MethodInfo*))Transform_1_Invoke_m25733_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m25825(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3900 *, String_t*, ProfileData_t803 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25734_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,System.String>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m25826(__this, ___result, method) (( String_t* (*) (Transform_1_t3900 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25735_gshared)(__this, ___result, method)
