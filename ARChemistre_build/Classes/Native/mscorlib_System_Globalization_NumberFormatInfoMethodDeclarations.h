#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1804;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t186;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1568;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
extern "C" void NumberFormatInfo__ctor_m11251 (NumberFormatInfo_t1804 * __this, int32_t ___lcid, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
extern "C" void NumberFormatInfo__ctor_m11252 (NumberFormatInfo_t1804 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
extern "C" void NumberFormatInfo__ctor_m11253 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
extern "C" void NumberFormatInfo__cctor_m11254 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m11255 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m11256 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m11257 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
extern "C" Int32U5BU5D_t186* NumberFormatInfo_get_RawCurrencyGroupSizes_m11258 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyNegativePattern_m11259 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
extern "C" int32_t NumberFormatInfo_get_CurrencyPositivePattern_m11260 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
extern "C" String_t* NumberFormatInfo_get_CurrencySymbol_m11261 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
extern "C" NumberFormatInfo_t1804 * NumberFormatInfo_get_CurrentInfo_m11262 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
extern "C" NumberFormatInfo_t1804 * NumberFormatInfo_get_InvariantInfo_m11263 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
extern "C" String_t* NumberFormatInfo_get_NaNSymbol_m11264 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m11265 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C" String_t* NumberFormatInfo_get_NegativeSign_m11266 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_NumberDecimalDigits_m11267 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberDecimalSeparator_m11268 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_NumberGroupSeparator_m11269 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
extern "C" Int32U5BU5D_t186* NumberFormatInfo_get_RawNumberGroupSizes_m11270 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
extern "C" int32_t NumberFormatInfo_get_NumberNegativePattern_m11271 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
extern "C" void NumberFormatInfo_set_NumberNegativePattern_m11272 (NumberFormatInfo_t1804 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
extern "C" int32_t NumberFormatInfo_get_PercentDecimalDigits_m11273 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentDecimalSeparator_m11274 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
extern "C" String_t* NumberFormatInfo_get_PercentGroupSeparator_m11275 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
extern "C" Int32U5BU5D_t186* NumberFormatInfo_get_RawPercentGroupSizes_m11276 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
extern "C" int32_t NumberFormatInfo_get_PercentNegativePattern_m11277 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
extern "C" int32_t NumberFormatInfo_get_PercentPositivePattern_m11278 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
extern "C" String_t* NumberFormatInfo_get_PercentSymbol_m11279 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
extern "C" String_t* NumberFormatInfo_get_PerMilleSymbol_m11280 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
extern "C" String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m11281 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C" String_t* NumberFormatInfo_get_PositiveSign_m11282 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
extern "C" Object_t * NumberFormatInfo_GetFormat_m11283 (NumberFormatInfo_t1804 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
extern "C" Object_t * NumberFormatInfo_Clone_m11284 (NumberFormatInfo_t1804 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
extern "C" NumberFormatInfo_t1804 * NumberFormatInfo_GetInstance_m11285 (Object_t * __this /* static, unused */, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
