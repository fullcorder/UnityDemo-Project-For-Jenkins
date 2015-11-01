#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t599;
// Mono.Math.BigInteger
struct BigInteger_t600;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3007 (ModulusRing_t599 * __this, BigInteger_t600 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3008 (ModulusRing_t599 * __this, BigInteger_t600 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t600 * ModulusRing_Multiply_m3009 (ModulusRing_t599 * __this, BigInteger_t600 * ___a, BigInteger_t600 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t600 * ModulusRing_Difference_m3010 (ModulusRing_t599 * __this, BigInteger_t600 * ___a, BigInteger_t600 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t600 * ModulusRing_Pow_m3011 (ModulusRing_t599 * __this, BigInteger_t600 * ___a, BigInteger_t600 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t600 * ModulusRing_Pow_m3012 (ModulusRing_t599 * __this, uint32_t ___b, BigInteger_t600 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
