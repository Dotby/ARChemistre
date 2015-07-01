﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t1884;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t669;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C" void DeriveBytes__ctor_m10743 (DeriveBytes_t1884 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern "C" void DeriveBytes__cctor_m10744 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C" void DeriveBytes_set_HashName_m10745 (DeriveBytes_t1884 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C" void DeriveBytes_set_IterationCount_m10746 (DeriveBytes_t1884 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern "C" void DeriveBytes_set_Password_m10747 (DeriveBytes_t1884 * __this, ByteU5BU5D_t669* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern "C" void DeriveBytes_set_Salt_m10748 (DeriveBytes_t1884 * __this, ByteU5BU5D_t669* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C" void DeriveBytes_Adjust_m10749 (DeriveBytes_t1884 * __this, ByteU5BU5D_t669* ___a, int32_t ___aOff, ByteU5BU5D_t669* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t669* DeriveBytes_Derive_m10750 (DeriveBytes_t1884 * __this, ByteU5BU5D_t669* ___diversifier, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern "C" ByteU5BU5D_t669* DeriveBytes_DeriveKey_m10751 (DeriveBytes_t1884 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern "C" ByteU5BU5D_t669* DeriveBytes_DeriveIV_m10752 (DeriveBytes_t1884 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern "C" ByteU5BU5D_t669* DeriveBytes_DeriveMAC_m10753 (DeriveBytes_t1884 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;