#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t398;
struct Coroutine_t398_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5744 (Coroutine_t398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5745 (Coroutine_t398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5746 (Coroutine_t398 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t398_marshal(const Coroutine_t398& unmarshaled, Coroutine_t398_marshaled& marshaled);
void Coroutine_t398_marshal_back(const Coroutine_t398_marshaled& marshaled, Coroutine_t398& unmarshaled);
void Coroutine_t398_marshal_cleanup(Coroutine_t398_marshaled& marshaled);
