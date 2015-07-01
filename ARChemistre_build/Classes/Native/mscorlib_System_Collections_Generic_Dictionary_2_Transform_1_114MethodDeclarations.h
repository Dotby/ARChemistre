#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Transform_1_t3825;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24998_gshared (Transform_1_t3825 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m24998(__this, ___object, ___method, method) (( void (*) (Transform_1_t3825 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m24998_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::Invoke(TKey,TValue)
extern "C" VirtualButtonData_t699  Transform_1_Invoke_m24999_gshared (Transform_1_t3825 * __this, int32_t ___key, VirtualButtonData_t699  ___value, MethodInfo* method);
#define Transform_1_Invoke_m24999(__this, ___key, ___value, method) (( VirtualButtonData_t699  (*) (Transform_1_t3825 *, int32_t, VirtualButtonData_t699 , MethodInfo*))Transform_1_Invoke_m24999_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25000_gshared (Transform_1_t3825 * __this, int32_t ___key, VirtualButtonData_t699  ___value, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25000(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3825 *, int32_t, VirtualButtonData_t699 , AsyncCallback_t244 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25000_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::EndInvoke(System.IAsyncResult)
extern "C" VirtualButtonData_t699  Transform_1_EndInvoke_m25001_gshared (Transform_1_t3825 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25001(__this, ___result, method) (( VirtualButtonData_t699  (*) (Transform_1_t3825 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25001_gshared)(__this, ___result, method)
