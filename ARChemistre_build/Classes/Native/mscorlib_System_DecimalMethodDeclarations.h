﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t1567;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1568;
// System.Int32[]
struct Int32U5BU5D_t186;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1804;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C" void Decimal__ctor_m10031 (Decimal_t1567 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C" void Decimal__ctor_m10032 (Decimal_t1567 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C" void Decimal__ctor_m10033 (Decimal_t1567 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C" void Decimal__ctor_m10034 (Decimal_t1567 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C" void Decimal__ctor_m10035 (Decimal_t1567 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C" void Decimal__ctor_m10036 (Decimal_t1567 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C" void Decimal__ctor_m10037 (Decimal_t1567 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C" void Decimal__cctor_m10038 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Decimal_System_IConvertible_ToType_m10039 (Decimal_t1567 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Decimal_System_IConvertible_ToBoolean_m10040 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Decimal_System_IConvertible_ToByte_m10041 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToChar_m10042 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t31  Decimal_System_IConvertible_ToDateTime_m10043 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1567  Decimal_System_IConvertible_ToDecimal_m10044 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Decimal_System_IConvertible_ToDouble_m10045 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Decimal_System_IConvertible_ToInt16_m10046 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Decimal_System_IConvertible_ToInt32_m10047 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Decimal_System_IConvertible_ToInt64_m10048 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Decimal_System_IConvertible_ToSByte_m10049 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Decimal_System_IConvertible_ToSingle_m10050 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToUInt16_m10051 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Decimal_System_IConvertible_ToUInt32_m10052 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Decimal_System_IConvertible_ToUInt64_m10053 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C" Int32U5BU5D_t186* Decimal_GetBits_m10054 (Object_t * __this /* static, unused */, Decimal_t1567  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_Add_m10055 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_Subtract_m10056 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C" int32_t Decimal_GetHashCode_m10057 (Decimal_t1567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C" uint64_t Decimal_u64_m10058 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C" int64_t Decimal_s64_m10059 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C" bool Decimal_Equals_m10060 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C" bool Decimal_Equals_m10061 (Decimal_t1567 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C" bool Decimal_IsZero_m10062 (Decimal_t1567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C" Decimal_t1567  Decimal_Floor_m10063 (Object_t * __this /* static, unused */, Decimal_t1567  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_Multiply_m10064 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_Divide_m10065 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C" int32_t Decimal_Compare_m10066 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C" int32_t Decimal_CompareTo_m10067 (Decimal_t1567 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C" int32_t Decimal_CompareTo_m10068 (Decimal_t1567 * __this, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C" bool Decimal_Equals_m10069 (Decimal_t1567 * __this, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C" Decimal_t1567  Decimal_Parse_m10070 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C" void Decimal_ThrowAtPos_m10071 (Object_t * __this /* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C" void Decimal_ThrowInvalidExp_m10072 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C" String_t* Decimal_stripStyles_m10073 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1804 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" Decimal_t1567  Decimal_Parse_m10074 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C" bool Decimal_PerformParse_m10075 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t1567 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m10076 (Decimal_t1567 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C" String_t* Decimal_ToString_m10077 (Decimal_t1567 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m10078 (Decimal_t1567 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C" int32_t Decimal_decimal2UInt64_m10079 (Object_t * __this /* static, unused */, Decimal_t1567 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C" int32_t Decimal_decimal2Int64_m10080 (Object_t * __this /* static, unused */, Decimal_t1567 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalIncr_m10081 (Object_t * __this /* static, unused */, Decimal_t1567 * ___d1, Decimal_t1567 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C" int32_t Decimal_string2decimal_m10082 (Object_t * __this /* static, unused */, Decimal_t1567 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C" int32_t Decimal_decimalSetExponent_m10083 (Object_t * __this /* static, unused */, Decimal_t1567 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C" double Decimal_decimal2double_m10084 (Object_t * __this /* static, unused */, Decimal_t1567 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C" void Decimal_decimalFloorAndTrunc_m10085 (Object_t * __this /* static, unused */, Decimal_t1567 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalMult_m10086 (Object_t * __this /* static, unused */, Decimal_t1567 * ___pd1, Decimal_t1567 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalDiv_m10087 (Object_t * __this /* static, unused */, Decimal_t1567 * ___pc, Decimal_t1567 * ___pa, Decimal_t1567 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalCompare_m10088 (Object_t * __this /* static, unused */, Decimal_t1567 * ___d1, Decimal_t1567 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C" Decimal_t1567  Decimal_op_Increment_m10089 (Object_t * __this /* static, unused */, Decimal_t1567  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_op_Subtraction_m10090 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_op_Multiply_m10091 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C" Decimal_t1567  Decimal_op_Division_m10092 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C" uint8_t Decimal_op_Explicit_m10093 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C" int8_t Decimal_op_Explicit_m10094 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C" int16_t Decimal_op_Explicit_m10095 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint16_t Decimal_op_Explicit_m10096 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C" int32_t Decimal_op_Explicit_m10097 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint32_t Decimal_op_Explicit_m10098 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C" int64_t Decimal_op_Explicit_m10099 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint64_t Decimal_op_Explicit_m10100 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10101 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10102 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10103 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10104 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10105 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10106 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10107 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C" Decimal_t1567  Decimal_op_Implicit_m10108 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C" Decimal_t1567  Decimal_op_Explicit_m10109 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C" Decimal_t1567  Decimal_op_Explicit_m10110 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C" float Decimal_op_Explicit_m10111 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" double Decimal_op_Explicit_m10112 (Object_t * __this /* static, unused */, Decimal_t1567  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Inequality_m10113 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Equality_m8439 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_GreaterThan_m10114 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_LessThan_m10115 (Object_t * __this /* static, unused */, Decimal_t1567  ___d1, Decimal_t1567  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
