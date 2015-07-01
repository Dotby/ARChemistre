#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t2264;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t1476;
// System.ResolveEventArgs
struct ResolveEventArgs_t2323;
// System.IAsyncResult
struct IAsyncResult_t243;
// System.AsyncCallback
struct AsyncCallback_t244;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveEventHandler__ctor_m13966 (ResolveEventHandler_t2264 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C" Assembly_t1476 * ResolveEventHandler_Invoke_m13967 (ResolveEventHandler_t2264 * __this, Object_t * ___sender, ResolveEventArgs_t2323 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Assembly_t1476 * pinvoke_delegate_wrapper_ResolveEventHandler_t2264(Il2CppObject* delegate, Object_t * ___sender, ResolveEventArgs_t2323 * ___args);
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveEventHandler_BeginInvoke_m13968 (ResolveEventHandler_t2264 * __this, Object_t * ___sender, ResolveEventArgs_t2323 * ___args, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C" Assembly_t1476 * ResolveEventHandler_EndInvoke_m13969 (ResolveEventHandler_t2264 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
