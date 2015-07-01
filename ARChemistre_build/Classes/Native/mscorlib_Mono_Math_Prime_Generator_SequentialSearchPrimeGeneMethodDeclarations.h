#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1861;
// Mono.Math.BigInteger
struct BigInteger_t1860;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m10525 (SequentialSearchPrimeGeneratorBase_t1861 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t1860 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m10526 (SequentialSearchPrimeGeneratorBase_t1861 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t1860 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m10527 (SequentialSearchPrimeGeneratorBase_t1861 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t1860 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m10528 (SequentialSearchPrimeGeneratorBase_t1861 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m10529 (SequentialSearchPrimeGeneratorBase_t1861 * __this, BigInteger_t1860 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
