#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1658;
// Mono.Math.BigInteger
struct BigInteger_t1657;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m8634 (ModulusRing_t1658 * __this, BigInteger_t1657 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m8635 (ModulusRing_t1658 * __this, BigInteger_t1657 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1657 * ModulusRing_Multiply_m8636 (ModulusRing_t1658 * __this, BigInteger_t1657 * ___a, BigInteger_t1657 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1657 * ModulusRing_Difference_m8637 (ModulusRing_t1658 * __this, BigInteger_t1657 * ___a, BigInteger_t1657 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1657 * ModulusRing_Pow_m8638 (ModulusRing_t1658 * __this, BigInteger_t1657 * ___a, BigInteger_t1657 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1657 * ModulusRing_Pow_m8639 (ModulusRing_t1658 * __this, uint32_t ___b, BigInteger_t1657 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
