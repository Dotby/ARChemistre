﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t1362;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1359;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1361;

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C" void X509Certificate2Enumerator__ctor_m7367 (X509Certificate2Enumerator_t1362 * __this, X509Certificate2Collection_t1361 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * X509Certificate2Enumerator_System_Collections_IEnumerator_get_Current_m7368 (X509Certificate2Enumerator_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::System.Collections.IEnumerator.MoveNext()
extern "C" bool X509Certificate2Enumerator_System_Collections_IEnumerator_MoveNext_m7369 (X509Certificate2Enumerator_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::get_Current()
extern "C" X509Certificate2_t1359 * X509Certificate2Enumerator_get_Current_m7370 (X509Certificate2Enumerator_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator::MoveNext()
extern "C" bool X509Certificate2Enumerator_MoveNext_m7371 (X509Certificate2Enumerator_t1362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;