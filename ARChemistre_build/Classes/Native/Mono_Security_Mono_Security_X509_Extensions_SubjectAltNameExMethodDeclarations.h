#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t1701;
// System.String[]
struct StringU5BU5D_t43;
// Mono.Security.X509.X509Extension
struct X509Extension_t1373;
// System.String
struct String_t;

// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void SubjectAltNameExtension__ctor_m8928 (SubjectAltNameExtension_t1701 * __this, X509Extension_t1373 * ___extension, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern "C" void SubjectAltNameExtension_Decode_m8929 (SubjectAltNameExtension_t1701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C" StringU5BU5D_t43* SubjectAltNameExtension_get_DNSNames_m8930 (SubjectAltNameExtension_t1701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C" StringU5BU5D_t43* SubjectAltNameExtension_get_IPAddresses_m8931 (SubjectAltNameExtension_t1701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C" String_t* SubjectAltNameExtension_ToString_m8932 (SubjectAltNameExtension_t1701 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
