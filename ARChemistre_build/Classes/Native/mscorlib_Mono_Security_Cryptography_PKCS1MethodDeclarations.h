#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.PKCS1
struct PKCS1_t1875;
// System.Byte[]
struct ByteU5BU5D_t669;
// System.Security.Cryptography.RSA
struct RSA_t1351;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1662;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1679;

// System.Void Mono.Security.Cryptography.PKCS1::.cctor()
extern "C" void PKCS1__cctor_m10675 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS1_Compare_m10676 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___array1, ByteU5BU5D_t669* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::I2OSP(System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t669* PKCS1_I2OSP_m10677 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___x, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::OS2IP(System.Byte[])
extern "C" ByteU5BU5D_t669* PKCS1_OS2IP_m10678 (Object_t * __this /* static, unused */, ByteU5BU5D_t669* ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAEP(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t669* PKCS1_RSAEP_m10679 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, ByteU5BU5D_t669* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSASP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t669* PKCS1_RSASP1_m10680 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, ByteU5BU5D_t669* ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::RSAVP1(System.Security.Cryptography.RSA,System.Byte[])
extern "C" ByteU5BU5D_t669* PKCS1_RSAVP1_m10681 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, ByteU5BU5D_t669* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encrypt_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.RandomNumberGenerator,System.Byte[])
extern "C" ByteU5BU5D_t669* PKCS1_Encrypt_v15_m10682 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, RandomNumberGenerator_t1662 * ___rng, ByteU5BU5D_t669* ___M, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Sign_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[])
extern "C" ByteU5BU5D_t669* PKCS1_Sign_v15_m10683 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, HashAlgorithm_t1679 * ___hash, ByteU5BU5D_t669* ___hashValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[])
extern "C" bool PKCS1_Verify_v15_m10684 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, HashAlgorithm_t1679 * ___hash, ByteU5BU5D_t669* ___hashValue, ByteU5BU5D_t669* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
extern "C" bool PKCS1_Verify_v15_m10685 (Object_t * __this /* static, unused */, RSA_t1351 * ___rsa, HashAlgorithm_t1679 * ___hash, ByteU5BU5D_t669* ___hashValue, ByteU5BU5D_t669* ___signature, bool ___tryNonStandardEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS1::Encode_v15(System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Int32)
extern "C" ByteU5BU5D_t669* PKCS1_Encode_v15_m10686 (Object_t * __this /* static, unused */, HashAlgorithm_t1679 * ___hash, ByteU5BU5D_t669* ___hashValue, int32_t ___emLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
