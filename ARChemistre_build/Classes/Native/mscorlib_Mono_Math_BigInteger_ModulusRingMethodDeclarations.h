#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1865;
// Mono.Math.BigInteger
struct BigInteger_t1860;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10534 (ModulusRing_t1865 * __this, BigInteger_t1860 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10535 (ModulusRing_t1865 * __this, BigInteger_t1860 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1860 * ModulusRing_Multiply_m10536 (ModulusRing_t1865 * __this, BigInteger_t1860 * ___a, BigInteger_t1860 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1860 * ModulusRing_Difference_m10537 (ModulusRing_t1865 * __this, BigInteger_t1860 * ___a, BigInteger_t1860 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1860 * ModulusRing_Pow_m10538 (ModulusRing_t1865 * __this, BigInteger_t1860 * ___a, BigInteger_t1860 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1860 * ModulusRing_Pow_m10539 (ModulusRing_t1865 * __this, uint32_t ___b, BigInteger_t1860 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
