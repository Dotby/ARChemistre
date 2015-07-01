#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t463;
// System.Object
struct Object_t;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t465;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Single>
#include "System_Core_System_Func_2_gen_3MethodDeclarations.h"
#define Func_2__ctor_m2782(__this, ___object, ___method, method) (( void (*) (Func_2_t463 *, Object_t *, IntPtr_t, MethodInfo*))Func_2__ctor_m19770_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
#define Func_2_Invoke_m2784(__this, ___arg1, method) (( float (*) (Func_2_t463 *, Object_t *, MethodInfo*))Func_2_Invoke_m19771_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m19772(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t463 *, Object_t *, AsyncCallback_t244 *, Object_t *, MethodInfo*))Func_2_BeginInvoke_m19773_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m19774(__this, ___result, method) (( float (*) (Func_2_t463 *, Object_t *, MethodInfo*))Func_2_EndInvoke_m19775_gshared)(__this, ___result, method)
