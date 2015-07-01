#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t145;
struct WaitForSeconds_t145_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m447 (WaitForSeconds_t145 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t145_marshal(const WaitForSeconds_t145& unmarshaled, WaitForSeconds_t145_marshaled& marshaled);
void WaitForSeconds_t145_marshal_back(const WaitForSeconds_t145_marshaled& marshaled, WaitForSeconds_t145& unmarshaled);
void WaitForSeconds_t145_marshal_cleanup(WaitForSeconds_t145_marshaled& marshaled);
