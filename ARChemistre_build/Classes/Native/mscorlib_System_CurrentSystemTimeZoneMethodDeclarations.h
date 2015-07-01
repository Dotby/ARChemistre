#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2330;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1811;
// System.String[]
struct StringU5BU5D_t43;
// System.Globalization.DaylightTime
struct DaylightTime_t1944;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m13888 (CurrentSystemTimeZone_t2330 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m13889 (CurrentSystemTimeZone_t2330 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m13890 (CurrentSystemTimeZone_t2330 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m13891 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1811** ___data, StringU5BU5D_t43** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1944 * CurrentSystemTimeZone_GetDaylightChanges_m13892 (CurrentSystemTimeZone_t2330 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t150  CurrentSystemTimeZone_GetUtcOffset_m13893 (CurrentSystemTimeZone_t2330 * __this, DateTime_t31  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m13894 (CurrentSystemTimeZone_t2330 * __this, DaylightTime_t1944 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1944 * CurrentSystemTimeZone_GetDaylightTimeFromData_m13895 (CurrentSystemTimeZone_t2330 * __this, Int64U5BU5D_t1811* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
