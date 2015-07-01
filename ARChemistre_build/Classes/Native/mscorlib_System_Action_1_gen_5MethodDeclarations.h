#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<Vuforia.SmartTerrainInitializationInfo>
struct Action_1_t772;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.SmartTerrainInitializationInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainInitial.h"

// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m23786_gshared (Action_1_t772 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Action_1__ctor_m23786(__this, ___object, ___method, method) (( void (*) (Action_1_t772 *, Object_t *, IntPtr_t, MethodInfo*))Action_1__ctor_m23786_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::Invoke(T)
extern "C" void Action_1_Invoke_m5136_gshared (Action_1_t772 * __this, SmartTerrainInitializationInfo_t640  ___obj, MethodInfo* method);
#define Action_1_Invoke_m5136(__this, ___obj, method) (( void (*) (Action_1_t772 *, SmartTerrainInitializationInfo_t640 , MethodInfo*))Action_1_Invoke_m5136_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<Vuforia.SmartTerrainInitializationInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m23787_gshared (Action_1_t772 * __this, SmartTerrainInitializationInfo_t640  ___obj, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m23787(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t772 *, SmartTerrainInitializationInfo_t640 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Action_1_BeginInvoke_m23787_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<Vuforia.SmartTerrainInitializationInfo>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m23788_gshared (Action_1_t772 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m23788(__this, ___result, method) (( void (*) (Action_1_t772 *, Object_t *, MethodInfo*))Action_1_EndInvoke_m23788_gshared)(__this, ___result, method)
