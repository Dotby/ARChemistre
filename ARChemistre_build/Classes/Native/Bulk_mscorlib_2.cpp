﻿#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileType.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo MonoFileType_t1968_il2cpp_TypeInfo;
// System.IO.MonoFileType
#include "mscorlib_System_IO_MonoFileTypeMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIO.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoIO_t1969_il2cpp_TypeInfo;
// System.IO.MonoIO
#include "mscorlib_System_IO_MonoIOMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Exception
#include "mscorlib_System_Exception.h"
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOError.h"
// System.String
#include "mscorlib_System_String.h"
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessException.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOException.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageException.h"
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongException.h"
#include "mscorlib_ArrayTypes.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStat.h"
// System.IO.FileMode
#include "mscorlib_System_IO_FileMode.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"
// System.IO.FileShare
#include "mscorlib_System_IO_FileShare.h"
// System.IO.FileOptions
#include "mscorlib_System_IO_FileOptions.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"
extern TypeInfo UnauthorizedAccessException_t2332_il2cpp_TypeInfo;
extern TypeInfo IOException_t1797_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo IsolatedStorageException_t1949_il2cpp_TypeInfo;
extern TypeInfo PathTooLongException_t1971_il2cpp_TypeInfo;
extern TypeInfo ObjectU5BU5D_t164_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo MonoIOError_t1970_il2cpp_TypeInfo;
// System.IntPtr
#include "mscorlib_System_IntPtrMethodDeclarations.h"
// System.UnauthorizedAccessException
#include "mscorlib_System_UnauthorizedAccessExceptionMethodDeclarations.h"
// System.IO.IOException
#include "mscorlib_System_IO_IOExceptionMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// System.IO.IsolatedStorage.IsolatedStorageException
#include "mscorlib_System_IO_IsolatedStorage_IsolatedStorageExceptionMethodDeclarations.h"
// System.IO.PathTooLongException
#include "mscorlib_System_IO_PathTooLongExceptionMethodDeclarations.h"
extern Il2CppType ObjectU5BU5D_t164_0_0_0;
extern MethodInfo IntPtr_op_Explicit_m10150_MethodInfo;
extern MethodInfo UnauthorizedAccessException__ctor_m13904_MethodInfo;
extern MethodInfo IOException__ctor_m11406_MethodInfo;
extern MethodInfo MonoIO_GetException_m11419_MethodInfo;
extern MethodInfo String_Format_m2378_MethodInfo;
extern MethodInfo IsolatedStorageException__ctor_m11296_MethodInfo;
extern MethodInfo PathTooLongException__ctor_m11458_MethodInfo;
extern MethodInfo String_Format_m2725_MethodInfo;
extern MethodInfo String_Format_m4796_MethodInfo;
extern MethodInfo MonoIO_GetFileAttributes_m11424_MethodInfo;


// System.Void System.IO.MonoIO::.cctor()
extern MethodInfo MonoIO__cctor_m11417_MethodInfo;
extern "C" void MonoIO__cctor_m11417 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((MonoIO_t1969_StaticFields*)InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0 = (-1);
		IntPtr_t L_0 = IntPtr_op_Explicit_m10150(NULL /*static, unused*/, (((int64_t)(-1))), /*hidden argument*/&IntPtr_op_Explicit_m10150_MethodInfo);
		((MonoIO_t1969_StaticFields*)InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo)->static_fields)->___InvalidHandle_1 = L_0;
		return;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.IO.MonoIOError)
extern MethodInfo MonoIO_GetException_m11418_MethodInfo;
extern "C" Exception_t154 * MonoIO_GetException_m11418 (Object_t * __this /* static, unused */, int32_t ___error, MethodInfo* method)
{
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ___error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)80))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_002c;
	}

IL_000d:
	{
		UnauthorizedAccessException_t2332 * L_3 = (UnauthorizedAccessException_t2332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t2332_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m13904(L_3, (String_t*) &_stringLiteral1832, /*hidden argument*/&UnauthorizedAccessException__ctor_m13904_MethodInfo);
		return L_3;
	}

IL_0018:
	{
		V_0 = (String_t*) &_stringLiteral1833;
		String_t* L_4 = V_0;
		int32_t L_5 = ___error;
		IOException_t1797 * L_6 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_6, L_4, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_5)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_6;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		int32_t L_8 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo));
		Exception_t154 * L_9 = MonoIO_GetException_m11419(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/&MonoIO_GetException_m11419_MethodInfo);
		return L_9;
	}
}
// System.Exception System.IO.MonoIO::GetException(System.String,System.IO.MonoIOError)
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" Exception_t154 * MonoIO_GetException_m11419 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___error, MethodInfo* method)
{
	static bool MonoIO_GetException_m11419_init;
	if (!MonoIO_GetException_m11419_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		MonoIO_GetException_m11419_init = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = ___error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 0)
		{
			goto IL_009b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 1)
		{
			goto IL_00c0;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 2)
		{
			goto IL_00ae;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 3)
		{
			goto IL_00d3;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)2)) == 4)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_2 = V_1;
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 0)
		{
			goto IL_0166;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 1)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 2)
		{
			goto IL_003b;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 3)
		{
			goto IL_0180;
		}
		if (((int32_t)((int32_t)L_2-(int32_t)((int32_t)29))) == 4)
		{
			goto IL_019a;
		}
	}

IL_003b:
	{
		int32_t L_3 = V_1;
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 0)
		{
			goto IL_0100;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 1)
		{
			goto IL_0050;
		}
		if (((int32_t)((int32_t)L_3-(int32_t)((int32_t)15))) == 2)
		{
			goto IL_0214;
		}
	}

IL_0050:
	{
		int32_t L_4 = V_1;
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 0)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 1)
		{
			goto IL_0065;
		}
		if (((int32_t)((int32_t)L_4-(int32_t)((int32_t)80))) == 2)
		{
			goto IL_01fa;
		}
	}

IL_0065:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)87))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)145))))
		{
			goto IL_01ce;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)206))))
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)6000))))
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_0228;
	}

IL_009b:
	{
		String_t* L_10 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_11 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1834, L_10, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_11;
		String_t* L_12 = V_0;
		IsolatedStorageException_t1949 * L_13 = (IsolatedStorageException_t1949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1949_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m11296(L_13, L_12, /*hidden argument*/&IsolatedStorageException__ctor_m11296_MethodInfo);
		return L_13;
	}

IL_00ae:
	{
		int32_t L_14 = ___error;
		IOException_t1797 * L_15 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_15, (String_t*) &_stringLiteral1835, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_14)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_15;
	}

IL_00c0:
	{
		String_t* L_16 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_17 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1836, L_16, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_17;
		String_t* L_18 = V_0;
		IsolatedStorageException_t1949 * L_19 = (IsolatedStorageException_t1949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IsolatedStorageException_t1949_il2cpp_TypeInfo));
		IsolatedStorageException__ctor_m11296(L_19, L_18, /*hidden argument*/&IsolatedStorageException__ctor_m11296_MethodInfo);
		return L_19;
	}

IL_00d3:
	{
		String_t* L_20 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1837, L_20, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_21;
		String_t* L_22 = V_0;
		UnauthorizedAccessException_t2332 * L_23 = (UnauthorizedAccessException_t2332 *)il2cpp_codegen_object_new (InitializedTypeInfo(&UnauthorizedAccessException_t2332_il2cpp_TypeInfo));
		UnauthorizedAccessException__ctor_m13904(L_23, L_22, /*hidden argument*/&UnauthorizedAccessException__ctor_m13904_MethodInfo);
		return L_23;
	}

IL_00e6:
	{
		String_t* L_24 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_25 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1838, L_24, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_25;
		String_t* L_26 = V_0;
		int32_t L_27 = ___error;
		IOException_t1797 * L_28 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_28, L_26, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_27)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_28;
	}

IL_0100:
	{
		String_t* L_29 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_30 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1839, L_29, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_30;
		String_t* L_31 = V_0;
		int32_t L_32 = ___error;
		IOException_t1797 * L_33 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_33, L_31, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_32)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_33;
	}

IL_011a:
	{
		String_t* L_34 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_35 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1840, L_34, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_35;
		String_t* L_36 = V_0;
		int32_t L_37 = ___error;
		IOException_t1797 * L_38 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_38, L_36, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_37)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_38;
	}

IL_0134:
	{
		String_t* L_39 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_40 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1841, L_39, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_40;
		String_t* L_41 = V_0;
		PathTooLongException_t1971 * L_42 = (PathTooLongException_t1971 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PathTooLongException_t1971_il2cpp_TypeInfo));
		PathTooLongException__ctor_m11458(L_42, L_41, /*hidden argument*/&PathTooLongException__ctor_m11458_MethodInfo);
		return L_42;
	}

IL_0147:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_43 = String_Format_m2725(NULL /*static, unused*/, (String_t*) &_stringLiteral1842, ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&String_Format_m2725_MethodInfo);
		V_0 = L_43;
		String_t* L_44 = V_0;
		int32_t L_45 = ___error;
		IOException_t1797 * L_46 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_46, L_44, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_45)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_46;
	}

IL_0166:
	{
		String_t* L_47 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_48 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1843, L_47, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_48;
		String_t* L_49 = V_0;
		int32_t L_50 = ___error;
		IOException_t1797 * L_51 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_51, L_49, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_50)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_51;
	}

IL_0180:
	{
		String_t* L_52 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_53 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1844, L_52, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_53;
		String_t* L_54 = V_0;
		int32_t L_55 = ___error;
		IOException_t1797 * L_56 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_56, L_54, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_55)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_56;
	}

IL_019a:
	{
		String_t* L_57 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_58 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1845, L_57, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_58;
		String_t* L_59 = V_0;
		int32_t L_60 = ___error;
		IOException_t1797 * L_61 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_61, L_59, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_60)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_61;
	}

IL_01b4:
	{
		String_t* L_62 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_63 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1846, L_62, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_63;
		String_t* L_64 = V_0;
		int32_t L_65 = ___error;
		IOException_t1797 * L_66 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_66, L_64, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_65)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_66;
	}

IL_01ce:
	{
		String_t* L_67 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_68 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1847, L_67, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_68;
		String_t* L_69 = V_0;
		int32_t L_70 = ___error;
		IOException_t1797 * L_71 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_71, L_69, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_70)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_71;
	}

IL_01e8:
	{
		int32_t L_72 = ___error;
		IOException_t1797 * L_73 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_73, (String_t*) &_stringLiteral1848, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_72)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_73;
	}

IL_01fa:
	{
		String_t* L_74 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_75 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1849, L_74, /*hidden argument*/&String_Format_m2378_MethodInfo);
		V_0 = L_75;
		String_t* L_76 = V_0;
		int32_t L_77 = ___error;
		IOException_t1797 * L_78 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_78, L_76, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_77)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_78;
	}

IL_0214:
	{
		V_0 = (String_t*) &_stringLiteral1850;
		String_t* L_79 = V_0;
		int32_t L_80 = ___error;
		IOException_t1797 * L_81 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_81, L_79, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_80)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_81;
	}

IL_0228:
	{
		int32_t L_82 = ___error;
		int32_t L_83 = L_82;
		Object_t * L_84 = Box(InitializedTypeInfo(&MonoIOError_t1970_il2cpp_TypeInfo), &L_83);
		String_t* L_85 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_86 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1851, L_84, L_85, /*hidden argument*/&String_Format_m4796_MethodInfo);
		V_0 = L_86;
		String_t* L_87 = V_0;
		int32_t L_88 = ___error;
		IOException_t1797 * L_89 = (IOException_t1797 *)il2cpp_codegen_object_new (InitializedTypeInfo(&IOException_t1797_il2cpp_TypeInfo));
		IOException__ctor_m11406(L_89, L_87, ((int32_t)((int32_t)((int32_t)-2147024896)|(int32_t)L_88)), /*hidden argument*/&IOException__ctor_m11406_MethodInfo);
		return L_89;
	}
}
// System.Boolean System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_CreateDirectory_m11420_MethodInfo;
extern "C" bool MonoIO_CreateDirectory_m11420 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_CreateDirectory_m11420_ftn) (String_t*, int32_t*);
	static MonoIO_CreateDirectory_m11420_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_CreateDirectory_m11420_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::CreateDirectory(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.String[] System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetFileSystemEntries_m11421_MethodInfo;
extern "C" StringU5BU5D_t43* MonoIO_GetFileSystemEntries_m11421 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___path_with_pattern, int32_t ___attrs, int32_t ___mask, int32_t* ___error, MethodInfo* method)
{
	typedef StringU5BU5D_t43* (*MonoIO_GetFileSystemEntries_m11421_ftn) (String_t*, String_t*, int32_t, int32_t, int32_t*);
	static MonoIO_GetFileSystemEntries_m11421_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileSystemEntries_m11421_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileSystemEntries(System.String,System.String,System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___path_with_pattern, ___attrs, ___mask, ___error);
}
// System.String System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetCurrentDirectory_m11422_MethodInfo;
extern "C" String_t* MonoIO_GetCurrentDirectory_m11422 (Object_t * __this /* static, unused */, int32_t* ___error, MethodInfo* method)
{
	typedef String_t* (*MonoIO_GetCurrentDirectory_m11422_ftn) (int32_t*);
	static MonoIO_GetCurrentDirectory_m11422_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetCurrentDirectory_m11422_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetCurrentDirectory(System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___error);
}
// System.Boolean System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_DeleteFile_m11423_MethodInfo;
extern "C" bool MonoIO_DeleteFile_m11423 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_DeleteFile_m11423_ftn) (String_t*, int32_t*);
	static MonoIO_DeleteFile_m11423_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_DeleteFile_m11423_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::DeleteFile(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.FileAttributes System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)
extern "C" int32_t MonoIO_GetFileAttributes_m11424 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileAttributes_m11424_ftn) (String_t*, int32_t*);
	static MonoIO_GetFileAttributes_m11424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileAttributes_m11424_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileAttributes(System.String,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___error);
}
// System.IO.MonoFileType System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetFileType_m11425_MethodInfo;
extern "C" int32_t MonoIO_GetFileType_m11425 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_GetFileType_m11425_ftn) (IntPtr_t, int32_t*);
	static MonoIO_GetFileType_m11425_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileType_m11425_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileType(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::ExistsFile(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_ExistsFile_m11426_MethodInfo;
extern "C" bool MonoIO_ExistsFile_m11426 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = ___path;
		int32_t* L_1 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo));
		int32_t L_2 = MonoIO_GetFileAttributes_m11424(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoIO_GetFileAttributes_m11424_MethodInfo);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ((MonoIO_t1969_StaticFields*)InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_0012;
		}
	}
	{
		return 0;
	}

IL_0012:
	{
		int32_t L_5 = V_0;
		if (!((int32_t)((int32_t)L_5&(int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::ExistsDirectory(System.String,System.IO.MonoIOError&)
extern MethodInfo MonoIO_ExistsDirectory_m11427_MethodInfo;
extern "C" bool MonoIO_ExistsDirectory_m11427 (Object_t * __this /* static, unused */, String_t* ___path, int32_t* ___error, MethodInfo* method)
{
	int32_t V_0 = {0};
	{
		String_t* L_0 = ___path;
		int32_t* L_1 = ___error;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo));
		int32_t L_2 = MonoIO_GetFileAttributes_m11424(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoIO_GetFileAttributes_m11424_MethodInfo);
		V_0 = L_2;
		int32_t* L_3 = ___error;
		if ((!(((uint32_t)(*((int32_t*)L_3))) == ((uint32_t)2))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t* L_4 = ___error;
		*((int32_t*)(L_4)) = (int32_t)3;
	}

IL_0010:
	{
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo));
		int32_t L_6 = ((MonoIO_t1969_StaticFields*)InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo)->static_fields)->___InvalidFileAttributes_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_001a;
		}
	}
	{
		return 0;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		if (((int32_t)((int32_t)L_7&(int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		return 0;
	}

IL_0022:
	{
		return 1;
	}
}
// System.Boolean System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetFileStat_m11428_MethodInfo;
extern "C" bool MonoIO_GetFileStat_m11428 (Object_t * __this /* static, unused */, String_t* ___path, MonoIOStat_t1967 * ___stat, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_GetFileStat_m11428_ftn) (String_t*, MonoIOStat_t1967 *, int32_t*);
	static MonoIO_GetFileStat_m11428_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetFileStat_m11428_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetFileStat(System.String,System.IO.MonoIOStat&,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___path, ___stat, ___error);
}
// System.IntPtr System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Open_m11429_MethodInfo;
extern "C" IntPtr_t MonoIO_Open_m11429 (Object_t * __this /* static, unused */, String_t* ___filename, int32_t ___mode, int32_t ___access, int32_t ___share, int32_t ___options, int32_t* ___error, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_Open_m11429_ftn) (String_t*, int32_t, int32_t, int32_t, int32_t, int32_t*);
	static MonoIO_Open_m11429_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Open_m11429_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.IO.FileOptions,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___filename, ___mode, ___access, ___share, ___options, ___error);
}
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Close_m11430_MethodInfo;
extern "C" bool MonoIO_Close_m11430 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_Close_m11430_ftn) (IntPtr_t, int32_t*);
	static MonoIO_Close_m11430_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Close_m11430_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Int32 System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Read_m11431_MethodInfo;
extern "C" int32_t MonoIO_Read_m11431 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t669* ___dest, int32_t ___dest_offset, int32_t ___count, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_Read_m11431_ftn) (IntPtr_t, ByteU5BU5D_t669*, int32_t, int32_t, int32_t*);
	static MonoIO_Read_m11431_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Read_m11431_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Read(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___dest, ___dest_offset, ___count, ___error);
}
// System.Int32 System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Write_m11432_MethodInfo;
extern "C" int32_t MonoIO_Write_m11432 (Object_t * __this /* static, unused */, IntPtr_t ___handle, ByteU5BU5D_t669* ___src, int32_t ___src_offset, int32_t ___count, int32_t* ___error, MethodInfo* method)
{
	typedef int32_t (*MonoIO_Write_m11432_ftn) (IntPtr_t, ByteU5BU5D_t669*, int32_t, int32_t, int32_t*);
	static MonoIO_Write_m11432_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Write_m11432_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Write(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___src, ___src_offset, ___count, ___error);
}
// System.Int64 System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
extern MethodInfo MonoIO_Seek_m11433_MethodInfo;
extern "C" int64_t MonoIO_Seek_m11433 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___offset, int32_t ___origin, int32_t* ___error, MethodInfo* method)
{
	typedef int64_t (*MonoIO_Seek_m11433_ftn) (IntPtr_t, int64_t, int32_t, int32_t*);
	static MonoIO_Seek_m11433_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_Seek_m11433_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::Seek(System.IntPtr,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___offset, ___origin, ___error);
}
// System.Int64 System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)
extern MethodInfo MonoIO_GetLength_m11434_MethodInfo;
extern "C" int64_t MonoIO_GetLength_m11434 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, MethodInfo* method)
{
	typedef int64_t (*MonoIO_GetLength_m11434_ftn) (IntPtr_t, int32_t*);
	static MonoIO_GetLength_m11434_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_GetLength_m11434_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::GetLength(System.IntPtr,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___error);
}
// System.Boolean System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)
extern MethodInfo MonoIO_SetLength_m11435_MethodInfo;
extern "C" bool MonoIO_SetLength_m11435 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int64_t ___length, int32_t* ___error, MethodInfo* method)
{
	typedef bool (*MonoIO_SetLength_m11435_ftn) (IntPtr_t, int64_t, int32_t*);
	static MonoIO_SetLength_m11435_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_SetLength_m11435_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::SetLength(System.IntPtr,System.Int64,System.IO.MonoIOError&)");
	return _il2cpp_icall_func(___handle, ___length, ___error);
}
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern MethodInfo MonoIO_get_ConsoleOutput_m11436_MethodInfo;
extern "C" IntPtr_t MonoIO_get_ConsoleOutput_m11436 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleOutput_m11436_ftn) ();
	static MonoIO_get_ConsoleOutput_m11436_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleOutput_m11436_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleOutput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern MethodInfo MonoIO_get_ConsoleInput_m11437_MethodInfo;
extern "C" IntPtr_t MonoIO_get_ConsoleInput_m11437 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleInput_m11437_ftn) ();
	static MonoIO_get_ConsoleInput_m11437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleInput_m11437_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleInput()");
	return _il2cpp_icall_func();
}
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern MethodInfo MonoIO_get_ConsoleError_m11438_MethodInfo;
extern "C" IntPtr_t MonoIO_get_ConsoleError_m11438 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef IntPtr_t (*MonoIO_get_ConsoleError_m11438_ftn) ();
	static MonoIO_get_ConsoleError_m11438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_ConsoleError_m11438_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_ConsoleError()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_VolumeSeparatorChar()
extern MethodInfo MonoIO_get_VolumeSeparatorChar_m11439_MethodInfo;
extern "C" uint16_t MonoIO_get_VolumeSeparatorChar_m11439 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_VolumeSeparatorChar_m11439_ftn) ();
	static MonoIO_get_VolumeSeparatorChar_m11439_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_VolumeSeparatorChar_m11439_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_VolumeSeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_DirectorySeparatorChar()
extern MethodInfo MonoIO_get_DirectorySeparatorChar_m11440_MethodInfo;
extern "C" uint16_t MonoIO_get_DirectorySeparatorChar_m11440 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_DirectorySeparatorChar_m11440_ftn) ();
	static MonoIO_get_DirectorySeparatorChar_m11440_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_DirectorySeparatorChar_m11440_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_DirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_AltDirectorySeparatorChar()
extern MethodInfo MonoIO_get_AltDirectorySeparatorChar_m11441_MethodInfo;
extern "C" uint16_t MonoIO_get_AltDirectorySeparatorChar_m11441 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_AltDirectorySeparatorChar_m11441_ftn) ();
	static MonoIO_get_AltDirectorySeparatorChar_m11441_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_AltDirectorySeparatorChar_m11441_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_AltDirectorySeparatorChar()");
	return _il2cpp_icall_func();
}
// System.Char System.IO.MonoIO::get_PathSeparator()
extern MethodInfo MonoIO_get_PathSeparator_m11442_MethodInfo;
extern "C" uint16_t MonoIO_get_PathSeparator_m11442 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef uint16_t (*MonoIO_get_PathSeparator_m11442_ftn) ();
	static MonoIO_get_PathSeparator_m11442_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoIO_get_PathSeparator_m11442_ftn)il2cpp_codegen_resolve_icall ("System.IO.MonoIO::get_PathSeparator()");
	return _il2cpp_icall_func();
}
#ifndef _MSC_VER
#else
#endif
// System.IO.MonoIOError
#include "mscorlib_System_IO_MonoIOErrorMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoIOStat_t1967_il2cpp_TypeInfo;
// System.IO.MonoIOStat
#include "mscorlib_System_IO_MonoIOStatMethodDeclarations.h"



// Conversion methods for marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1967_marshal(const MonoIOStat_t1967& unmarshaled, MonoIOStat_t1967_marshaled& marshaled)
{
	marshaled.___Name_0 = il2cpp_codegen_marshal_string(unmarshaled.___Name_0);
	marshaled.___Attributes_1 = unmarshaled.___Attributes_1;
	marshaled.___Length_2 = unmarshaled.___Length_2;
	marshaled.___CreationTime_3 = unmarshaled.___CreationTime_3;
	marshaled.___LastAccessTime_4 = unmarshaled.___LastAccessTime_4;
	marshaled.___LastWriteTime_5 = unmarshaled.___LastWriteTime_5;
}
void MonoIOStat_t1967_marshal_back(const MonoIOStat_t1967_marshaled& marshaled, MonoIOStat_t1967& unmarshaled)
{
	unmarshaled.___Name_0 = il2cpp_codegen_marshal_string_result(marshaled.___Name_0);
	unmarshaled.___Attributes_1 = marshaled.___Attributes_1;
	unmarshaled.___Length_2 = marshaled.___Length_2;
	unmarshaled.___CreationTime_3 = marshaled.___CreationTime_3;
	unmarshaled.___LastAccessTime_4 = marshaled.___LastAccessTime_4;
	unmarshaled.___LastWriteTime_5 = marshaled.___LastWriteTime_5;
}
// Conversion method for clean up from marshalling of: System.IO.MonoIOStat
void MonoIOStat_t1967_marshal_cleanup(MonoIOStat_t1967_marshaled& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Name_0);
	marshaled.___Name_0 = NULL;
}
// System.IO.Path
#include "mscorlib_System_IO_Path.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Path_t916_il2cpp_TypeInfo;
// System.IO.Path
#include "mscorlib_System_IO_PathMethodDeclarations.h"

// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$72
#include "mscorlib_U3CPrivateImplementationDetailsU3E_$ArrayType$72.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo Char_t389_il2cpp_TypeInfo;
extern TypeInfo CharU5BU5D_t395_il2cpp_TypeInfo;
extern TypeInfo ArgumentNullException_t1172_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t521_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t2356_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t1165_il2cpp_TypeInfo;
extern TypeInfo Boolean_t147_il2cpp_TypeInfo;
// System.Char
#include "mscorlib_System_CharMethodDeclarations.h"
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// System.IO.Directory
#include "mscorlib_System_IO_DirectoryMethodDeclarations.h"
// Locale
#include "mscorlib_LocaleMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// <PrivateImplementationDetails>
#include "mscorlib_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType CharU5BU5D_t395_0_0_0;
extern MethodInfo Path_GetInvalidPathChars_m11453_MethodInfo;
extern MethodInfo Char_ToString_m2567_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m6951_MethodInfo;
extern MethodInfo String_get_Length_m694_MethodInfo;
extern MethodInfo String_IndexOfAny_m9928_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2726_MethodInfo;
extern MethodInfo Path_IsPathRooted_m11452_MethodInfo;
extern MethodInfo String_get_Chars_m2541_MethodInfo;
extern MethodInfo String_Concat_m554_MethodInfo;
extern MethodInfo String_Concat_m540_MethodInfo;
extern MethodInfo String__ctor_m8206_MethodInfo;
extern MethodInfo String_op_Equality_m406_MethodInfo;
extern MethodInfo Path_GetPathRoot_m11451_MethodInfo;
extern MethodInfo String_Trim_m6930_MethodInfo;
extern MethodInfo String_LastIndexOfAny_m9936_MethodInfo;
extern MethodInfo String_Substring_m2542_MethodInfo;
extern MethodInfo String_Concat_m495_MethodInfo;
extern MethodInfo Path_CleanPath_m11444_MethodInfo;
extern MethodInfo String_Substring_m2569_MethodInfo;
extern MethodInfo Path_InsecureGetFullPath_m11449_MethodInfo;
extern MethodInfo Char_IsLetter_m2596_MethodInfo;
extern MethodInfo Directory_GetCurrentDirectory_m11324_MethodInfo;
extern MethodInfo Path_Combine_m5367_MethodInfo;
extern MethodInfo Locale_GetText_m10406_MethodInfo;
extern MethodInfo Environment_get_IsRunningOnWindows_m13570_MethodInfo;
extern MethodInfo Path_WindowsDriveAdjustment_m11448_MethodInfo;
extern MethodInfo Path_IsDsc_m11450_MethodInfo;
extern MethodInfo String_IndexOf_m8256_MethodInfo;
extern MethodInfo String_Replace_m6934_MethodInfo;
extern MethodInfo Path_CanonicalizePath_m11456_MethodInfo;
extern MethodInfo String_IndexOf_m6932_MethodInfo;
extern MethodInfo RuntimeHelpers_InitializeArray_m5337_MethodInfo;
extern MethodInfo Path_GetServerAndShare_m11454_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m8023_MethodInfo;
extern MethodInfo String_Compare_m8042_MethodInfo;
extern MethodInfo Char_Equals_m9882_MethodInfo;
extern MethodInfo String_Split_m5453_MethodInfo;
extern MethodInfo String_TrimEnd_m8078_MethodInfo;
extern MethodInfo String_Join_m9949_MethodInfo;
extern MethodInfo Path_SameRoot_m11455_MethodInfo;
extern MethodInfo String_EndsWith_m4752_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t2356____$$fieldU2D30_20_FieldInfo;


// System.Void System.IO.Path::.cctor()
extern MethodInfo Path__cctor_m11443_MethodInfo;
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" void Path__cctor_m11443 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Path__cctor_m11443_init;
	if (!Path__cctor_m11443_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		Path__cctor_m11443_init = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoIO_t1969_il2cpp_TypeInfo));
		uint16_t L_0 = MonoIO_get_VolumeSeparatorChar_m11439(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_VolumeSeparatorChar_m11439_MethodInfo);
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5 = L_0;
		uint16_t L_1 = MonoIO_get_DirectorySeparatorChar_m11440(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_DirectorySeparatorChar_m11440_MethodInfo);
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2 = L_1;
		uint16_t L_2 = MonoIO_get_AltDirectorySeparatorChar_m11441(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_AltDirectorySeparatorChar_m11441_MethodInfo);
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1 = L_2;
		uint16_t L_3 = MonoIO_get_PathSeparator_m11442(NULL /*static, unused*/, /*hidden argument*/&MonoIO_get_PathSeparator_m11442_MethodInfo);
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___PathSeparator_3 = L_3;
		CharU5BU5D_t395* L_4 = Path_GetInvalidPathChars_m11453(NULL /*static, unused*/, /*hidden argument*/&Path_GetInvalidPathChars_m11453_MethodInfo);
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0 = L_4;
		String_t* L_5 = Char_ToString_m2567((&((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2), /*hidden argument*/&Char_ToString_m2567_MethodInfo);
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4 = L_5;
		CharU5BU5D_t395* L_6 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 3));
		uint16_t L_7 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, 0)) = (uint16_t)L_7;
		CharU5BU5D_t395* L_8 = L_6;
		uint16_t L_9 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, 1)) = (uint16_t)L_9;
		CharU5BU5D_t395* L_10 = L_8;
		uint16_t L_11 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_10, 2)) = (uint16_t)L_11;
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6 = L_10;
		uint16_t L_12 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_13 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___dirEqualsVolume_7 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		return;
	}
}
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" String_t* Path_Combine_m5367 (Object_t * __this /* static, unused */, String_t* ___path1, String_t* ___path2, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	{
		String_t* L_0 = ___path1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1852, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___path2;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1172 * L_3 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_3, (String_t*) &_stringLiteral1853, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		String_t* L_4 = ___path1;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m694(L_4, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_6 = ___path2;
		return L_6;
	}

IL_0026:
	{
		String_t* L_7 = ___path2;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m694(L_7, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_9 = ___path1;
		return L_9;
	}

IL_0030:
	{
		String_t* L_10 = ___path1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_11 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_10);
		int32_t L_12 = String_IndexOfAny_m9928(L_10, L_11, /*hidden argument*/&String_IndexOfAny_m9928_MethodInfo);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t521 * L_13 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_13, (String_t*) &_stringLiteral1813, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0049:
	{
		String_t* L_14 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_15 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_14);
		int32_t L_16 = String_IndexOfAny_m9928(L_14, L_15, /*hidden argument*/&String_IndexOfAny_m9928_MethodInfo);
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentException_t521 * L_17 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_17, (String_t*) &_stringLiteral1813, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_17);
	}

IL_0062:
	{
		String_t* L_18 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_19 = Path_IsPathRooted_m11452(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_IsPathRooted_m11452_MethodInfo);
		if (!L_19)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_20 = ___path2;
		return L_20;
	}

IL_006c:
	{
		String_t* L_21 = ___path1;
		String_t* L_22 = ___path1;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m694(L_22, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_21);
		uint16_t L_24 = String_get_Chars_m2541(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_0 = L_24;
		uint16_t L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_26 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_28 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_27) == ((int32_t)L_28)))
		{
			goto IL_00a0;
		}
	}
	{
		uint16_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_30 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_00a0;
		}
	}
	{
		String_t* L_31 = ___path1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_32 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_33 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_34 = String_Concat_m554(NULL /*static, unused*/, L_31, L_32, L_33, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_34;
	}

IL_00a0:
	{
		String_t* L_35 = ___path1;
		String_t* L_36 = ___path2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_37 = String_Concat_m540(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/&String_Concat_m540_MethodInfo);
		return L_37;
	}
}
// System.String System.IO.Path::CleanPath(System.String)
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CleanPath_m11444 (Object_t * __this /* static, unused */, String_t* ___s, MethodInfo* method)
{
	static bool Path_CleanPath_m11444_init;
	if (!Path_CleanPath_m11444_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		Path_CleanPath_m11444_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint16_t V_3 = 0x0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0x0;
	CharU5BU5D_t395* V_6 = {0};
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint16_t V_9 = 0x0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m694(L_0, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		V_0 = L_1;
		V_1 = 0;
		V_2 = 0;
		String_t* L_2 = ___s;
		NullCheck(L_2);
		uint16_t L_3 = String_get_Chars_m2541(L_2, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_3 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		uint16_t L_5 = V_3;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_6 = ___s;
		NullCheck(L_6);
		uint16_t L_7 = String_get_Chars_m2541(L_6, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0029;
		}
	}
	{
		V_2 = 2;
	}

IL_0029:
	{
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_003f;
		}
	}
	{
		uint16_t L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_10 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_003d;
		}
	}
	{
		uint16_t L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_12 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_003f;
		}
	}

IL_003d:
	{
		String_t* L_13 = ___s;
		return L_13;
	}

IL_003f:
	{
		int32_t L_14 = V_2;
		V_4 = L_14;
		goto IL_0097;
	}

IL_0044:
	{
		String_t* L_15 = ___s;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		uint16_t L_17 = String_get_Chars_m2541(L_15, L_16, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_5 = L_17;
		uint16_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_19 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0062;
		}
	}
	{
		uint16_t L_20 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_21 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			goto IL_0062;
		}
	}
	{
		goto IL_0091;
	}

IL_0062:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_22+(int32_t)1))) == ((uint32_t)L_23))))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)((int32_t)L_24+(int32_t)1));
		goto IL_0091;
	}

IL_006f:
	{
		String_t* L_25 = ___s;
		int32_t L_26 = V_4;
		NullCheck(L_25);
		uint16_t L_27 = String_get_Chars_m2541(L_25, ((int32_t)((int32_t)L_26+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_5 = L_27;
		uint16_t L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_29 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_28) == ((int32_t)L_29)))
		{
			goto IL_008d;
		}
	}
	{
		uint16_t L_30 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_31 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_0091;
		}
	}

IL_008d:
	{
		int32_t L_32 = V_1;
		V_1 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_0091:
	{
		int32_t L_33 = V_4;
		V_4 = ((int32_t)((int32_t)L_33+(int32_t)1));
	}

IL_0097:
	{
		int32_t L_34 = V_4;
		int32_t L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_36 = V_1;
		if (L_36)
		{
			goto IL_00a1;
		}
	}
	{
		String_t* L_37 = ___s;
		return L_37;
	}

IL_00a1:
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_1;
		V_6 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_38-(int32_t)L_39))));
		int32_t L_40 = V_2;
		if (!L_40)
		{
			goto IL_00ba;
		}
	}
	{
		CharU5BU5D_t395* L_41 = V_6;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_41, 0)) = (uint16_t)((int32_t)92);
		CharU5BU5D_t395* L_42 = V_6;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_42, 1)) = (uint16_t)((int32_t)92);
	}

IL_00ba:
	{
		int32_t L_43 = V_2;
		V_7 = L_43;
		int32_t L_44 = V_2;
		V_8 = L_44;
		goto IL_013d;
	}

IL_00c5:
	{
		String_t* L_45 = ___s;
		int32_t L_46 = V_7;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m2541(L_45, L_46, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_9 = L_47;
		uint16_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_49 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_48) == ((int32_t)L_49)))
		{
			goto IL_00ef;
		}
	}
	{
		uint16_t L_50 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_51 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_50) == ((int32_t)L_51)))
		{
			goto IL_00ef;
		}
	}
	{
		CharU5BU5D_t395* L_52 = V_6;
		int32_t L_53 = V_8;
		int32_t L_54 = L_53;
		V_8 = ((int32_t)((int32_t)L_54+(int32_t)1));
		uint16_t L_55 = V_9;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_54);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_52, L_54)) = (uint16_t)L_55;
		goto IL_0137;
	}

IL_00ef:
	{
		int32_t L_56 = V_8;
		CharU5BU5D_t395* L_57 = V_6;
		NullCheck(L_57);
		if ((((int32_t)((int32_t)((int32_t)L_56+(int32_t)1))) == ((int32_t)(((int32_t)(((Array_t *)L_57)->max_length))))))
		{
			goto IL_0137;
		}
	}
	{
		CharU5BU5D_t395* L_58 = V_6;
		int32_t L_59 = V_8;
		int32_t L_60 = L_59;
		V_8 = ((int32_t)((int32_t)L_60+(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_61 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_58);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_58, L_60);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_58, L_60)) = (uint16_t)L_61;
		goto IL_0130;
	}

IL_010a:
	{
		String_t* L_62 = ___s;
		int32_t L_63 = V_7;
		NullCheck(L_62);
		uint16_t L_64 = String_get_Chars_m2541(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_9 = L_64;
		uint16_t L_65 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_66 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_65) == ((int32_t)L_66)))
		{
			goto IL_012a;
		}
	}
	{
		uint16_t L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_68 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_67) == ((int32_t)L_68)))
		{
			goto IL_012a;
		}
	}
	{
		goto IL_0137;
	}

IL_012a:
	{
		int32_t L_69 = V_7;
		V_7 = ((int32_t)((int32_t)L_69+(int32_t)1));
	}

IL_0130:
	{
		int32_t L_70 = V_7;
		int32_t L_71 = V_0;
		if ((((int32_t)L_70) < ((int32_t)((int32_t)((int32_t)L_71-(int32_t)1)))))
		{
			goto IL_010a;
		}
	}

IL_0137:
	{
		int32_t L_72 = V_7;
		V_7 = ((int32_t)((int32_t)L_72+(int32_t)1));
	}

IL_013d:
	{
		int32_t L_73 = V_7;
		int32_t L_74 = V_0;
		if ((((int32_t)L_73) >= ((int32_t)L_74)))
		{
			goto IL_014d;
		}
	}
	{
		int32_t L_75 = V_8;
		CharU5BU5D_t395* L_76 = V_6;
		NullCheck(L_76);
		if ((((int32_t)L_75) < ((int32_t)(((int32_t)(((Array_t *)L_76)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_014d:
	{
		CharU5BU5D_t395* L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_78 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_78 = String_CreateString_m8207(L_78, L_77, /*hidden argument*/&String__ctor_m8206_MethodInfo);
		return L_78;
	}
}
// System.String System.IO.Path::GetDirectoryName(System.String)
extern MethodInfo Path_GetDirectoryName_m11445_MethodInfo;
extern "C" String_t* Path_GetDirectoryName_m11445 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_2 = String_op_Equality_m406(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t521 * L_3 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_3, (String_t*) &_stringLiteral1854, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		String_t* L_4 = ___path;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_5 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_6 = Path_GetPathRoot_m11451(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_GetPathRoot_m11451_MethodInfo);
		String_t* L_7 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_8 = String_op_Equality_m406(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_8)
		{
			goto IL_002b;
		}
	}

IL_0029:
	{
		return (String_t*)NULL;
	}

IL_002b:
	{
		String_t* L_9 = ___path;
		NullCheck(L_9);
		String_t* L_10 = String_Trim_m6930(L_9, /*hidden argument*/&String_Trim_m6930_MethodInfo);
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m694(L_10, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_11)
		{
			goto IL_0043;
		}
	}
	{
		ArgumentException_t521 * L_12 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_12, (String_t*) &_stringLiteral1855, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0043:
	{
		String_t* L_13 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_14 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOfAny_m9928(L_13, L_14, /*hidden argument*/&String_IndexOfAny_m9928_MethodInfo);
		if ((((int32_t)L_15) <= ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t521 * L_16 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_16, (String_t*) &_stringLiteral1755, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005c:
	{
		String_t* L_17 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_18 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6;
		NullCheck(L_17);
		int32_t L_19 = String_LastIndexOfAny_m9936(L_17, L_18, /*hidden argument*/&String_LastIndexOfAny_m9936_MethodInfo);
		V_0 = L_19;
		int32_t L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_21 = V_0;
		V_0 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_006f:
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00b8;
		}
	}
	{
		String_t* L_23 = ___path;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		String_t* L_25 = String_Substring_m2542(L_23, 0, L_24, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_1 = L_25;
		String_t* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = String_get_Length_m694(L_26, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		V_2 = L_27;
		int32_t L_28 = V_2;
		if ((((int32_t)L_28) < ((int32_t)2)))
		{
			goto IL_00b1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_29 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_30 = V_1;
		int32_t L_31 = V_2;
		NullCheck(L_30);
		uint16_t L_32 = String_get_Chars_m2541(L_30, ((int32_t)((int32_t)L_31-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_33 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b1;
		}
	}
	{
		String_t* L_34 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_35 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_36 = L_35;
		Object_t * L_37 = Box(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo), &L_36);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Concat_m495(NULL /*static, unused*/, L_34, L_37, /*hidden argument*/&String_Concat_m495_MethodInfo);
		return L_38;
	}

IL_00b1:
	{
		String_t* L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_40 = Path_CleanPath_m11444(NULL /*static, unused*/, L_39, /*hidden argument*/&Path_CleanPath_m11444_MethodInfo);
		return L_40;
	}

IL_00b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_41 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_41;
	}
}
// System.String System.IO.Path::GetFileName(System.String)
extern MethodInfo Path_GetFileName_m11446_MethodInfo;
extern "C" String_t* Path_GetFileName_m11446 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___path;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m694(L_1, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		String_t* L_3 = ___path;
		return L_3;
	}

IL_000d:
	{
		String_t* L_4 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_5 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_4);
		int32_t L_6 = String_IndexOfAny_m9928(L_4, L_5, /*hidden argument*/&String_IndexOfAny_m9928_MethodInfo);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t521 * L_7 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_7, (String_t*) &_stringLiteral1813, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0026:
	{
		String_t* L_8 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_9 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___PathSeparatorChars_6;
		NullCheck(L_8);
		int32_t L_10 = String_LastIndexOfAny_m9936(L_8, L_9, /*hidden argument*/&String_LastIndexOfAny_m9936_MethodInfo);
		V_0 = L_10;
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_12 = ___path;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		String_t* L_14 = String_Substring_m2569(L_12, ((int32_t)((int32_t)L_13+(int32_t)1)), /*hidden argument*/&String_Substring_m2569_MethodInfo);
		return L_14;
	}

IL_0040:
	{
		String_t* L_15 = ___path;
		return L_15;
	}
}
// System.String System.IO.Path::GetFullPath(System.String)
extern MethodInfo Path_GetFullPath_m11447_MethodInfo;
extern "C" String_t* Path_GetFullPath_m11447 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_1 = Path_InsecureGetFullPath_m11449(NULL /*static, unused*/, L_0, /*hidden argument*/&Path_InsecureGetFullPath_m11449_MethodInfo);
		V_0 = L_1;
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.String System.IO.Path::WindowsDriveAdjustment(System.String)
extern "C" String_t* Path_WindowsDriveAdjustment_m11448 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		String_t* L_0 = ___path;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m694(L_0, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_2 = ___path;
		return L_2;
	}

IL_000b:
	{
		String_t* L_3 = ___path;
		NullCheck(L_3);
		uint16_t L_4 = String_get_Chars_m2541(L_3, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = ___path;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m2541(L_5, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo));
		bool L_7 = Char_IsLetter_m2596(NULL /*static, unused*/, L_6, /*hidden argument*/&Char_IsLetter_m2596_MethodInfo);
		if (L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		String_t* L_8 = ___path;
		return L_8;
	}

IL_0026:
	{
		String_t* L_9 = Directory_GetCurrentDirectory_m11324(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m11324_MethodInfo);
		V_0 = L_9;
		String_t* L_10 = ___path;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m694(L_10, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_005f;
		}
	}
	{
		String_t* L_12 = V_0;
		NullCheck(L_12);
		uint16_t L_13 = String_get_Chars_m2541(L_12, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		String_t* L_14 = ___path;
		NullCheck(L_14);
		uint16_t L_15 = String_get_Chars_m2541(L_14, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_15))))
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_16 = V_0;
		___path = L_16;
		goto IL_005d;
	}

IL_004c:
	{
		String_t* L_17 = ___path;
		uint16_t L_18 = ((int32_t)92);
		Object_t * L_19 = Box(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Concat_m495(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/&String_Concat_m495_MethodInfo);
		___path = L_20;
	}

IL_005d:
	{
		goto IL_00cb;
	}

IL_005f:
	{
		String_t* L_21 = ___path;
		NullCheck(L_21);
		uint16_t L_22 = String_get_Chars_m2541(L_21, 2, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_23 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_24 = ___path;
		NullCheck(L_24);
		uint16_t L_25 = String_get_Chars_m2541(L_24, 2, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_26 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_27 = V_0;
		NullCheck(L_27);
		uint16_t L_28 = String_get_Chars_m2541(L_27, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		String_t* L_29 = ___path;
		NullCheck(L_29);
		uint16_t L_30 = String_get_Chars_m2541(L_29, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		if ((!(((uint32_t)L_28) == ((uint32_t)L_30))))
		{
			goto IL_00a6;
		}
	}
	{
		String_t* L_31 = V_0;
		String_t* L_32 = ___path;
		String_t* L_33 = ___path;
		NullCheck(L_33);
		int32_t L_34 = String_get_Length_m694(L_33, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_32);
		String_t* L_35 = String_Substring_m2542(L_32, 2, ((int32_t)((int32_t)L_34-(int32_t)2)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_36 = Path_Combine_m5367(NULL /*static, unused*/, L_31, L_35, /*hidden argument*/&Path_Combine_m5367_MethodInfo);
		___path = L_36;
		goto IL_00cb;
	}

IL_00a6:
	{
		String_t* L_37 = ___path;
		NullCheck(L_37);
		String_t* L_38 = String_Substring_m2542(L_37, 0, 2, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_39 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_40 = ___path;
		String_t* L_41 = ___path;
		NullCheck(L_41);
		int32_t L_42 = String_get_Length_m694(L_41, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_40);
		String_t* L_43 = String_Substring_m2542(L_40, 2, ((int32_t)((int32_t)L_42-(int32_t)2)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m554(NULL /*static, unused*/, L_38, L_39, L_43, /*hidden argument*/&String_Concat_m554_MethodInfo);
		___path = L_44;
	}

IL_00cb:
	{
		String_t* L_45 = ___path;
		return L_45;
	}
}
// System.String System.IO.Path::InsecureGetFullPath(System.String)
extern "C" String_t* Path_InsecureGetFullPath_m11449 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	uint16_t V_1 = 0x0;
	String_t* V_2 = {0};
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1747, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		String_t* L_3 = String_Trim_m6930(L_2, /*hidden argument*/&String_Trim_m6930_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m694(L_3, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_5 = Locale_GetText_m10406(NULL /*static, unused*/, (String_t*) &_stringLiteral1856, /*hidden argument*/&Locale_GetText_m10406_MethodInfo);
		V_0 = L_5;
		String_t* L_6 = V_0;
		ArgumentException_t521 * L_7 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_7, L_6, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_002d:
	{
		bool L_8 = Environment_get_IsRunningOnWindows_m13570(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m13570_MethodInfo);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		String_t* L_9 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_10 = Path_WindowsDriveAdjustment_m11448(NULL /*static, unused*/, L_9, /*hidden argument*/&Path_WindowsDriveAdjustment_m11448_MethodInfo);
		___path = L_10;
	}

IL_003e:
	{
		String_t* L_11 = ___path;
		String_t* L_12 = ___path;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m694(L_12, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_11);
		uint16_t L_14 = String_get_Chars_m2541(L_11, ((int32_t)((int32_t)L_13-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_1 = L_14;
		String_t* L_15 = ___path;
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m694(L_15, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_16) < ((int32_t)2)))
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_17 = ___path;
		NullCheck(L_17);
		uint16_t L_18 = String_get_Chars_m2541(L_17, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_19 = Path_IsDsc_m11450(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_19)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_20 = ___path;
		NullCheck(L_20);
		uint16_t L_21 = String_get_Chars_m2541(L_20, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_22 = Path_IsDsc_m11450(NULL /*static, unused*/, L_21, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_22)
		{
			goto IL_00cb;
		}
	}
	{
		String_t* L_23 = ___path;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m694(L_23, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_008f;
		}
	}
	{
		String_t* L_25 = ___path;
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m2541(L_26, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		NullCheck(L_25);
		int32_t L_28 = String_IndexOf_m8256(L_25, L_27, 2, /*hidden argument*/&String_IndexOf_m8256_MethodInfo);
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}

IL_008f:
	{
		ArgumentException_t521 * L_29 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_29, (String_t*) &_stringLiteral1857, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_29);
	}

IL_009a:
	{
		String_t* L_30 = ___path;
		NullCheck(L_30);
		uint16_t L_31 = String_get_Chars_m2541(L_30, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_32 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_33 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_34 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_35 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_33);
		String_t* L_36 = String_Replace_m6934(L_33, L_34, L_35, /*hidden argument*/&String_Replace_m6934_MethodInfo);
		___path = L_36;
	}

IL_00bc:
	{
		String_t* L_37 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_38 = Path_CanonicalizePath_m11456(NULL /*static, unused*/, L_37, /*hidden argument*/&Path_CanonicalizePath_m11456_MethodInfo);
		___path = L_38;
		goto IL_016c;
	}

IL_00cb:
	{
		String_t* L_39 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_40 = Path_IsPathRooted_m11452(NULL /*static, unused*/, L_39, /*hidden argument*/&Path_IsPathRooted_m11452_MethodInfo);
		if (L_40)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_41 = Directory_GetCurrentDirectory_m11324(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m11324_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_42 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_43 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_44 = String_Concat_m554(NULL /*static, unused*/, L_41, L_42, L_43, /*hidden argument*/&String_Concat_m554_MethodInfo);
		___path = L_44;
		goto IL_0162;
	}

IL_00ec:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_45 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_46 = ___path;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m694(L_46, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_47) < ((int32_t)2)))
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_48 = ___path;
		NullCheck(L_48);
		uint16_t L_49 = String_get_Chars_m2541(L_48, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_50 = Path_IsDsc_m11450(NULL /*static, unused*/, L_49, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_50)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_51 = ___path;
		NullCheck(L_51);
		uint16_t L_52 = String_get_Chars_m2541(L_51, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_53 = Path_IsDsc_m11450(NULL /*static, unused*/, L_52, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (L_53)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_54 = Directory_GetCurrentDirectory_m11324(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m11324_MethodInfo);
		V_2 = L_54;
		String_t* L_55 = V_2;
		NullCheck(L_55);
		uint16_t L_56 = String_get_Chars_m2541(L_55, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_57 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_56) == ((uint32_t)L_57))))
		{
			goto IL_0142;
		}
	}
	{
		String_t* L_58 = V_2;
		NullCheck(L_58);
		String_t* L_59 = String_Substring_m2542(L_58, 0, 2, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		String_t* L_60 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_61 = String_Concat_m540(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/&String_Concat_m540_MethodInfo);
		___path = L_61;
		goto IL_0162;
	}

IL_0142:
	{
		String_t* L_62 = V_2;
		String_t* L_63 = V_2;
		String_t* L_64 = V_2;
		NullCheck(L_64);
		int32_t L_65 = String_IndexOf_m6932(L_64, (String_t*) &_stringLiteral1858, /*hidden argument*/&String_IndexOf_m6932_MethodInfo);
		NullCheck(L_63);
		int32_t L_66 = String_IndexOf_m8256(L_63, ((int32_t)92), ((int32_t)((int32_t)L_65+(int32_t)1)), /*hidden argument*/&String_IndexOf_m8256_MethodInfo);
		NullCheck(L_62);
		String_t* L_67 = String_Substring_m2542(L_62, 0, L_66, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		___path = L_67;
	}

IL_0162:
	{
		String_t* L_68 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_69 = Path_CanonicalizePath_m11456(NULL /*static, unused*/, L_68, /*hidden argument*/&Path_CanonicalizePath_m11456_MethodInfo);
		___path = L_69;
	}

IL_016c:
	{
		uint16_t L_70 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_71 = Path_IsDsc_m11450(NULL /*static, unused*/, L_70, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_71)
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_72 = ___path;
		String_t* L_73 = ___path;
		NullCheck(L_73);
		int32_t L_74 = String_get_Length_m694(L_73, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_72);
		uint16_t L_75 = String_get_Chars_m2541(L_72, ((int32_t)((int32_t)L_74-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_76 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_75) == ((int32_t)L_76)))
		{
			goto IL_019d;
		}
	}
	{
		String_t* L_77 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_78 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_79 = L_78;
		Object_t * L_80 = Box(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo), &L_79);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_81 = String_Concat_m495(NULL /*static, unused*/, L_77, L_80, /*hidden argument*/&String_Concat_m495_MethodInfo);
		___path = L_81;
	}

IL_019d:
	{
		String_t* L_82 = ___path;
		return L_82;
	}
}
// System.Boolean System.IO.Path::IsDsc(System.Char)
extern "C" bool Path_IsDsc_m11450 (Object_t * __this /* static, unused */, uint16_t ___c, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		uint16_t L_0 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_1 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		uint16_t L_2 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_3 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0013;
	}

IL_0012:
	{
		G_B3_0 = 1;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.String System.IO.Path::GetPathRoot(System.String)
extern "C" String_t* Path_GetPathRoot_m11451 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	String_t* G_B10_0 = {0};
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		String_t* L_2 = String_Trim_m6930(L_1, /*hidden argument*/&String_Trim_m6930_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m694(L_2, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_3)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_t521 * L_4 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_4, (String_t*) &_stringLiteral1859, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_001d:
	{
		String_t* L_5 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_6 = Path_IsPathRooted_m11452(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_IsPathRooted_m11452_MethodInfo);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_7 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_7;
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_8 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_9 = ___path;
		NullCheck(L_9);
		uint16_t L_10 = String_get_Chars_m2541(L_9, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_11 = Path_IsDsc_m11450(NULL /*static, unused*/, L_10, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_12 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		G_B10_0 = L_12;
		goto IL_004e;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_13 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		G_B10_0 = L_13;
	}

IL_004e:
	{
		return G_B10_0;
	}

IL_004f:
	{
		V_0 = 2;
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m694(L_14, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_16 = ___path;
		NullCheck(L_16);
		uint16_t L_17 = String_get_Chars_m2541(L_16, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_18 = Path_IsDsc_m11450(NULL /*static, unused*/, L_17, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_19 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		return L_19;
	}

IL_006e:
	{
		String_t* L_20 = ___path;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m694(L_20, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_21) >= ((int32_t)2)))
		{
			goto IL_007d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_22 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_22;
	}

IL_007d:
	{
		String_t* L_23 = ___path;
		NullCheck(L_23);
		uint16_t L_24 = String_get_Chars_m2541(L_23, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_25 = Path_IsDsc_m11450(NULL /*static, unused*/, L_24, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_25)
		{
			goto IL_010f;
		}
	}
	{
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m2541(L_26, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_28 = Path_IsDsc_m11450(NULL /*static, unused*/, L_27, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_28)
		{
			goto IL_010f;
		}
	}
	{
		goto IL_00a5;
	}

IL_00a1:
	{
		int32_t L_29 = V_0;
		V_0 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_00a5:
	{
		int32_t L_30 = V_0;
		String_t* L_31 = ___path;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m694(L_31, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_30) >= ((int32_t)L_32)))
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_33 = ___path;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		uint16_t L_35 = String_get_Chars_m2541(L_33, L_34, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_36 = Path_IsDsc_m11450(NULL /*static, unused*/, L_35, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_36)
		{
			goto IL_00a1;
		}
	}

IL_00bc:
	{
		int32_t L_37 = V_0;
		String_t* L_38 = ___path;
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m694(L_38, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_37) >= ((int32_t)L_39)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_40 = V_0;
		V_0 = ((int32_t)((int32_t)L_40+(int32_t)1));
		goto IL_00cf;
	}

IL_00cb:
	{
		int32_t L_41 = V_0;
		V_0 = ((int32_t)((int32_t)L_41+(int32_t)1));
	}

IL_00cf:
	{
		int32_t L_42 = V_0;
		String_t* L_43 = ___path;
		NullCheck(L_43);
		int32_t L_44 = String_get_Length_m694(L_43, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_42) >= ((int32_t)L_44)))
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_45 = ___path;
		int32_t L_46 = V_0;
		NullCheck(L_45);
		uint16_t L_47 = String_get_Chars_m2541(L_45, L_46, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_48 = Path_IsDsc_m11450(NULL /*static, unused*/, L_47, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_48)
		{
			goto IL_00cb;
		}
	}

IL_00e6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_49 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_50 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_51 = ___path;
		int32_t L_52 = V_0;
		NullCheck(L_51);
		String_t* L_53 = String_Substring_m2542(L_51, 2, ((int32_t)((int32_t)L_52-(int32_t)2)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		uint16_t L_54 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_55 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_53);
		String_t* L_56 = String_Replace_m6934(L_53, L_54, L_55, /*hidden argument*/&String_Replace_m6934_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_57 = String_Concat_m554(NULL /*static, unused*/, L_49, L_50, L_56, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_57;
	}

IL_010f:
	{
		String_t* L_58 = ___path;
		NullCheck(L_58);
		uint16_t L_59 = String_get_Chars_m2541(L_58, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_60 = Path_IsDsc_m11450(NULL /*static, unused*/, L_59, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_60)
		{
			goto IL_0123;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_61 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		return L_61;
	}

IL_0123:
	{
		String_t* L_62 = ___path;
		NullCheck(L_62);
		uint16_t L_63 = String_get_Chars_m2541(L_62, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_64 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_014e;
		}
	}
	{
		String_t* L_65 = ___path;
		NullCheck(L_65);
		int32_t L_66 = String_get_Length_m694(L_65, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_66) < ((int32_t)3)))
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_67 = ___path;
		NullCheck(L_67);
		uint16_t L_68 = String_get_Chars_m2541(L_67, 2, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_69 = Path_IsDsc_m11450(NULL /*static, unused*/, L_68, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_69)
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_70 = V_0;
		V_0 = ((int32_t)((int32_t)L_70+(int32_t)1));
	}

IL_014c:
	{
		goto IL_015b;
	}

IL_014e:
	{
		String_t* L_71 = Directory_GetCurrentDirectory_m11324(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m11324_MethodInfo);
		NullCheck(L_71);
		String_t* L_72 = String_Substring_m2542(L_71, 0, 2, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		return L_72;
	}

IL_015b:
	{
		String_t* L_73 = ___path;
		int32_t L_74 = V_0;
		NullCheck(L_73);
		String_t* L_75 = String_Substring_m2542(L_73, 0, L_74, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		return L_75;
	}
}
// System.Boolean System.IO.Path::IsPathRooted(System.String)
extern "C" bool Path_IsPathRooted_m11452 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	{
		String_t* L_0 = ___path;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___path;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m694(L_1, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_3 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_4 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m9928(L_3, L_4, /*hidden argument*/&String_IndexOfAny_m9928_MethodInfo);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t521 * L_6 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_6, (String_t*) &_stringLiteral1813, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0026:
	{
		String_t* L_7 = ___path;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m2541(L_7, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_0 = L_8;
		uint16_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_10 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0061;
		}
	}
	{
		uint16_t L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_12 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_13 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___dirEqualsVolume_7;
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m694(L_14, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_16 = ___path;
		NullCheck(L_16);
		uint16_t L_17 = String_get_Chars_m2541(L_16, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_18 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		G_B11_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_005f;
	}

IL_005e:
	{
		G_B11_0 = 0;
	}

IL_005f:
	{
		G_B13_0 = G_B11_0;
		goto IL_0062;
	}

IL_0061:
	{
		G_B13_0 = 1;
	}

IL_0062:
	{
		return G_B13_0;
	}
}
// System.Char[] System.IO.Path::GetInvalidPathChars()
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" CharU5BU5D_t395* Path_GetInvalidPathChars_m11453 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool Path_GetInvalidPathChars_m11453_init;
	if (!Path_GetInvalidPathChars_m11453_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		Path_GetInvalidPathChars_m11453_init = true;
	}
	{
		bool L_0 = Environment_get_IsRunningOnWindows_m13570(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m13570_MethodInfo);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t395* L_1 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, ((int32_t)36)));
		RuntimeHelpers_InitializeArray_m5337(NULL /*static, unused*/, (Array_t *)(Array_t *)L_1, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t2356____$$fieldU2D30_20_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m5337_MethodInfo);
		return L_1;
	}

IL_001a:
	{
		return ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 1));
	}
}
// System.String System.IO.Path::GetServerAndShare(System.String)
extern "C" String_t* Path_GetServerAndShare_m11454 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 2;
		goto IL_0008;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)((int32_t)L_0+(int32_t)1));
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		String_t* L_2 = ___path;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m694(L_2, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_4 = ___path;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m2541(L_4, L_5, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_7 = Path_IsDsc_m11450(NULL /*static, unused*/, L_6, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_7)
		{
			goto IL_0004;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		String_t* L_9 = ___path;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_m694(L_9, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		goto IL_0032;
	}

IL_002e:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_13 = V_0;
		String_t* L_14 = ___path;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m694(L_14, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_13) >= ((int32_t)L_15)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_16 = ___path;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		uint16_t L_18 = String_get_Chars_m2541(L_16, L_17, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_19 = Path_IsDsc_m11450(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_19)
		{
			goto IL_002e;
		}
	}

IL_0049:
	{
		String_t* L_20 = ___path;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		String_t* L_22 = String_Substring_m2542(L_20, 2, ((int32_t)((int32_t)L_21-(int32_t)2)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_23 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		uint16_t L_24 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_22);
		String_t* L_25 = String_Replace_m6934(L_22, L_23, L_24, /*hidden argument*/&String_Replace_m6934_MethodInfo);
		return L_25;
	}
}
// System.Boolean System.IO.Path::SameRoot(System.String,System.String)
extern "C" bool Path_SameRoot_m11455 (Object_t * __this /* static, unused */, String_t* ___root, String_t* ___path, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	uint16_t V_2 = 0x0;
	int32_t G_B18_0 = 0;
	{
		String_t* L_0 = ___root;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m694(L_0, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_2 = ___path;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m694(L_2, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		return 0;
	}

IL_0014:
	{
		String_t* L_4 = ___root;
		NullCheck(L_4);
		uint16_t L_5 = String_get_Chars_m2541(L_4, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_6 = Path_IsDsc_m11450(NULL /*static, unused*/, L_5, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_6)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_7 = ___root;
		NullCheck(L_7);
		uint16_t L_8 = String_get_Chars_m2541(L_7, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_9 = Path_IsDsc_m11450(NULL /*static, unused*/, L_8, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		String_t* L_10 = ___path;
		NullCheck(L_10);
		uint16_t L_11 = String_get_Chars_m2541(L_10, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_12 = Path_IsDsc_m11450(NULL /*static, unused*/, L_11, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_12)
		{
			goto IL_004c;
		}
	}
	{
		String_t* L_13 = ___path;
		NullCheck(L_13);
		uint16_t L_14 = String_get_Chars_m2541(L_13, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_15 = Path_IsDsc_m11450(NULL /*static, unused*/, L_14, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (L_15)
		{
			goto IL_004e;
		}
	}

IL_004c:
	{
		return 0;
	}

IL_004e:
	{
		String_t* L_16 = ___root;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_17 = Path_GetServerAndShare_m11454(NULL /*static, unused*/, L_16, /*hidden argument*/&Path_GetServerAndShare_m11454_MethodInfo);
		V_0 = L_17;
		String_t* L_18 = ___path;
		String_t* L_19 = Path_GetServerAndShare_m11454(NULL /*static, unused*/, L_18, /*hidden argument*/&Path_GetServerAndShare_m11454_MethodInfo);
		V_1 = L_19;
		String_t* L_20 = V_0;
		String_t* L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1165_il2cpp_TypeInfo));
		CultureInfo_t1165 * L_22 = CultureInfo_get_InvariantCulture_m8023(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m8023_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_23 = String_Compare_m8042(NULL /*static, unused*/, L_20, L_21, 1, L_22, /*hidden argument*/&String_Compare_m8042_MethodInfo);
		return ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
	}

IL_006d:
	{
		String_t* L_24 = ___root;
		NullCheck(L_24);
		uint16_t L_25 = String_get_Chars_m2541(L_24, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		V_2 = L_25;
		String_t* L_26 = ___path;
		NullCheck(L_26);
		uint16_t L_27 = String_get_Chars_m2541(L_26, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		bool L_28 = Char_Equals_m9882((&V_2), L_27, /*hidden argument*/&Char_Equals_m9882_MethodInfo);
		if (L_28)
		{
			goto IL_0087;
		}
	}
	{
		return 0;
	}

IL_0087:
	{
		String_t* L_29 = ___path;
		NullCheck(L_29);
		uint16_t L_30 = String_get_Chars_m2541(L_29, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_31 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((((int32_t)L_30) == ((int32_t)L_31)))
		{
			goto IL_0097;
		}
	}
	{
		return 0;
	}

IL_0097:
	{
		String_t* L_32 = ___root;
		NullCheck(L_32);
		int32_t L_33 = String_get_Length_m694(L_32, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_33) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_34 = ___path;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m694(L_34, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_35) <= ((int32_t)2)))
		{
			goto IL_00c7;
		}
	}
	{
		String_t* L_36 = ___root;
		NullCheck(L_36);
		uint16_t L_37 = String_get_Chars_m2541(L_36, 2, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_38 = Path_IsDsc_m11450(NULL /*static, unused*/, L_37, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_38)
		{
			goto IL_00c5;
		}
	}
	{
		String_t* L_39 = ___path;
		NullCheck(L_39);
		uint16_t L_40 = String_get_Chars_m2541(L_39, 2, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_41 = Path_IsDsc_m11450(NULL /*static, unused*/, L_40, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		G_B18_0 = ((int32_t)(L_41));
		goto IL_00c6;
	}

IL_00c5:
	{
		G_B18_0 = 0;
	}

IL_00c6:
	{
		return G_B18_0;
	}

IL_00c7:
	{
		return 1;
	}
}
// System.String System.IO.Path::CanonicalizePath(System.String)
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" String_t* Path_CanonicalizePath_m11456 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method)
{
	static bool Path_CanonicalizePath_m11456_init;
	if (!Path_CanonicalizePath_m11456_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		Path_CanonicalizePath_m11456_init = true;
	}
	String_t* V_0 = {0};
	StringU5BU5D_t43* V_1 = {0};
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = {0};
	String_t* V_7 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	{
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		String_t* L_1 = ___path;
		return L_1;
	}

IL_0005:
	{
		bool L_2 = Environment_get_IsRunningOnWindows_m13570(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m13570_MethodInfo);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___path;
		NullCheck(L_3);
		String_t* L_4 = String_Trim_m6930(L_3, /*hidden argument*/&String_Trim_m6930_MethodInfo);
		___path = L_4;
	}

IL_0016:
	{
		String_t* L_5 = ___path;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m694(L_5, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_6)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_7 = ___path;
		return L_7;
	}

IL_0020:
	{
		String_t* L_8 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_9 = Path_GetPathRoot_m11451(NULL /*static, unused*/, L_8, /*hidden argument*/&Path_GetPathRoot_m11451_MethodInfo);
		V_0 = L_9;
		String_t* L_10 = ___path;
		CharU5BU5D_t395* L_11 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 2));
		uint16_t L_12 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_11, 0)) = (uint16_t)L_12;
		CharU5BU5D_t395* L_13 = L_11;
		uint16_t L_14 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_13, 1)) = (uint16_t)L_14;
		NullCheck(L_10);
		StringU5BU5D_t43* L_15 = String_Split_m5453(L_10, L_13, /*hidden argument*/&String_Split_m5453_MethodInfo);
		V_1 = L_15;
		V_2 = 0;
		bool L_16 = Environment_get_IsRunningOnWindows_m13570(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m13570_MethodInfo);
		if (!L_16)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m694(L_17, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_19 = V_0;
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m2541(L_19, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_21 = Path_IsDsc_m11450(NULL /*static, unused*/, L_20, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_21)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_22 = V_0;
		NullCheck(L_22);
		uint16_t L_23 = String_get_Chars_m2541(L_22, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_24 = Path_IsDsc_m11450(NULL /*static, unused*/, L_23, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		G_B11_0 = ((int32_t)(L_24));
		goto IL_0073;
	}

IL_0072:
	{
		G_B11_0 = 0;
	}

IL_0073:
	{
		V_3 = G_B11_0;
		bool L_25 = V_3;
		if (!L_25)
		{
			goto IL_007a;
		}
	}
	{
		G_B14_0 = 3;
		goto IL_007b;
	}

IL_007a:
	{
		G_B14_0 = 0;
	}

IL_007b:
	{
		V_4 = G_B14_0;
		V_5 = 0;
		goto IL_00e9;
	}

IL_0082:
	{
		bool L_26 = Environment_get_IsRunningOnWindows_m13570(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m13570_MethodInfo);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t43* L_27 = V_1;
		int32_t L_28 = V_5;
		StringU5BU5D_t43* L_29 = V_1;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)));
		String_t* L_32 = String_TrimEnd_m8078((*(String_t**)(String_t**)SZArrayLdElema(L_29, L_31)), ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 0)), /*hidden argument*/&String_TrimEnd_m8078_MethodInfo);
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		ArrayElementTypeCheck (L_27, L_32);
		*((String_t**)(String_t**)SZArrayLdElema(L_27, L_28)) = (String_t*)L_32;
	}

IL_009c:
	{
		StringU5BU5D_t43* L_33 = V_1;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_36 = String_op_Equality_m406(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_33, L_35)), (String_t*) &_stringLiteral207, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (L_36)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_37 = V_5;
		if (!L_37)
		{
			goto IL_00bd;
		}
	}
	{
		StringU5BU5D_t43* L_38 = V_1;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		int32_t L_40 = L_39;
		NullCheck((*(String_t**)(String_t**)SZArrayLdElema(L_38, L_40)));
		int32_t L_41 = String_get_Length_m694((*(String_t**)(String_t**)SZArrayLdElema(L_38, L_40)), /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_41)
		{
			goto IL_00bd;
		}
	}

IL_00bb:
	{
		goto IL_00e3;
	}

IL_00bd:
	{
		StringU5BU5D_t43* L_42 = V_1;
		int32_t L_43 = V_5;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_45 = String_op_Equality_m406(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_42, L_44)), (String_t*) &_stringLiteral925, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_45)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_4;
		if ((((int32_t)L_46) <= ((int32_t)L_47)))
		{
			goto IL_00d6;
		}
	}
	{
		int32_t L_48 = V_2;
		V_2 = ((int32_t)((int32_t)L_48-(int32_t)1));
	}

IL_00d6:
	{
		goto IL_00e3;
	}

IL_00d8:
	{
		StringU5BU5D_t43* L_49 = V_1;
		int32_t L_50 = V_2;
		int32_t L_51 = L_50;
		V_2 = ((int32_t)((int32_t)L_51+(int32_t)1));
		StringU5BU5D_t43* L_52 = V_1;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		int32_t L_54 = L_53;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_51);
		ArrayElementTypeCheck (L_49, (*(String_t**)(String_t**)SZArrayLdElema(L_52, L_54)));
		*((String_t**)(String_t**)SZArrayLdElema(L_49, L_51)) = (String_t*)(*(String_t**)(String_t**)SZArrayLdElema(L_52, L_54));
	}

IL_00e3:
	{
		int32_t L_55 = V_5;
		V_5 = ((int32_t)((int32_t)L_55+(int32_t)1));
	}

IL_00e9:
	{
		int32_t L_56 = V_5;
		StringU5BU5D_t43* L_57 = V_1;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)(((int32_t)(((Array_t *)L_57)->max_length))))))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_58 = V_2;
		if (!L_58)
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_59 = V_2;
		if ((!(((uint32_t)L_59) == ((uint32_t)1))))
		{
			goto IL_0108;
		}
	}
	{
		StringU5BU5D_t43* L_60 = V_1;
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 0);
		int32_t L_61 = 0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_62 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		bool L_63 = String_op_Equality_m406(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_60, L_61)), L_62, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_63)
		{
			goto IL_0108;
		}
	}

IL_0106:
	{
		String_t* L_64 = V_0;
		return L_64;
	}

IL_0108:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_65 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		StringU5BU5D_t43* L_66 = V_1;
		int32_t L_67 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_68 = String_Join_m9949(NULL /*static, unused*/, L_65, L_66, 0, L_67, /*hidden argument*/&String_Join_m9949_MethodInfo);
		V_6 = L_68;
		bool L_69 = Environment_get_IsRunningOnWindows_m13570(NULL /*static, unused*/, /*hidden argument*/&Environment_get_IsRunningOnWindows_m13570_MethodInfo);
		if (!L_69)
		{
			goto IL_022a;
		}
	}
	{
		bool L_70 = V_3;
		if (!L_70)
		{
			goto IL_0132;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_71 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		String_t* L_72 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_73 = String_Concat_m540(NULL /*static, unused*/, L_71, L_72, /*hidden argument*/&String_Concat_m540_MethodInfo);
		V_6 = L_73;
	}

IL_0132:
	{
		String_t* L_74 = V_0;
		String_t* L_75 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_76 = Path_SameRoot_m11455(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/&Path_SameRoot_m11455_MethodInfo);
		if (L_76)
		{
			goto IL_0146;
		}
	}
	{
		String_t* L_77 = V_0;
		String_t* L_78 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_79 = String_Concat_m540(NULL /*static, unused*/, L_77, L_78, /*hidden argument*/&String_Concat_m540_MethodInfo);
		V_6 = L_79;
	}

IL_0146:
	{
		bool L_80 = V_3;
		if (!L_80)
		{
			goto IL_014c;
		}
	}
	{
		String_t* L_81 = V_6;
		return L_81;
	}

IL_014c:
	{
		String_t* L_82 = ___path;
		NullCheck(L_82);
		uint16_t L_83 = String_get_Chars_m2541(L_82, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_84 = Path_IsDsc_m11450(NULL /*static, unused*/, L_83, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (L_84)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_85 = V_0;
		String_t* L_86 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_87 = Path_SameRoot_m11455(NULL /*static, unused*/, L_85, L_86, /*hidden argument*/&Path_SameRoot_m11455_MethodInfo);
		if (!L_87)
		{
			goto IL_0191;
		}
	}
	{
		String_t* L_88 = V_6;
		NullCheck(L_88);
		int32_t L_89 = String_get_Length_m694(L_88, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_89) > ((int32_t)2)))
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_90 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		String_t* L_91 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorStr_4;
		NullCheck(L_90);
		bool L_92 = String_EndsWith_m4752(L_90, L_91, /*hidden argument*/&String_EndsWith_m4752_MethodInfo);
		if (L_92)
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_93 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_94 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		uint16_t L_95 = L_94;
		Object_t * L_96 = Box(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo), &L_95);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_97 = String_Concat_m495(NULL /*static, unused*/, L_93, L_96, /*hidden argument*/&String_Concat_m495_MethodInfo);
		V_6 = L_97;
	}

IL_018e:
	{
		String_t* L_98 = V_6;
		return L_98;
	}

IL_0191:
	{
		String_t* L_99 = Directory_GetCurrentDirectory_m11324(NULL /*static, unused*/, /*hidden argument*/&Directory_GetCurrentDirectory_m11324_MethodInfo);
		V_7 = L_99;
		String_t* L_100 = V_7;
		NullCheck(L_100);
		int32_t L_101 = String_get_Length_m694(L_100, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_101) <= ((int32_t)1)))
		{
			goto IL_01ea;
		}
	}
	{
		String_t* L_102 = V_7;
		NullCheck(L_102);
		uint16_t L_103 = String_get_Chars_m2541(L_102, 1, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_104 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___VolumeSeparatorChar_5;
		if ((!(((uint32_t)L_103) == ((uint32_t)L_104))))
		{
			goto IL_01ea;
		}
	}
	{
		String_t* L_105 = V_6;
		NullCheck(L_105);
		int32_t L_106 = String_get_Length_m694(L_105, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (!L_106)
		{
			goto IL_01c9;
		}
	}
	{
		String_t* L_107 = V_6;
		NullCheck(L_107);
		uint16_t L_108 = String_get_Chars_m2541(L_107, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_109 = Path_IsDsc_m11450(NULL /*static, unused*/, L_108, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_109)
		{
			goto IL_01d9;
		}
	}

IL_01c9:
	{
		String_t* L_110 = V_6;
		uint16_t L_111 = ((int32_t)92);
		Object_t * L_112 = Box(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo), &L_111);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_113 = String_Concat_m495(NULL /*static, unused*/, L_110, L_112, /*hidden argument*/&String_Concat_m495_MethodInfo);
		V_6 = L_113;
	}

IL_01d9:
	{
		String_t* L_114 = V_7;
		NullCheck(L_114);
		String_t* L_115 = String_Substring_m2542(L_114, 0, 2, /*hidden argument*/&String_Substring_m2542_MethodInfo);
		String_t* L_116 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_117 = String_Concat_m540(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/&String_Concat_m540_MethodInfo);
		return L_117;
	}

IL_01ea:
	{
		String_t* L_118 = V_7;
		String_t* L_119 = V_7;
		NullCheck(L_119);
		int32_t L_120 = String_get_Length_m694(L_119, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_118);
		uint16_t L_121 = String_get_Chars_m2541(L_118, ((int32_t)((int32_t)L_120-(int32_t)1)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_122 = Path_IsDsc_m11450(NULL /*static, unused*/, L_121, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_122)
		{
			goto IL_0220;
		}
	}
	{
		String_t* L_123 = V_6;
		NullCheck(L_123);
		uint16_t L_124 = String_get_Chars_m2541(L_123, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		bool L_125 = Path_IsDsc_m11450(NULL /*static, unused*/, L_124, /*hidden argument*/&Path_IsDsc_m11450_MethodInfo);
		if (!L_125)
		{
			goto IL_0220;
		}
	}
	{
		String_t* L_126 = V_7;
		String_t* L_127 = V_6;
		NullCheck(L_127);
		String_t* L_128 = String_Substring_m2569(L_127, 1, /*hidden argument*/&String_Substring_m2569_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_129 = String_Concat_m540(NULL /*static, unused*/, L_126, L_128, /*hidden argument*/&String_Concat_m540_MethodInfo);
		return L_129;
	}

IL_0220:
	{
		String_t* L_130 = V_7;
		String_t* L_131 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_132 = String_Concat_m540(NULL /*static, unused*/, L_130, L_131, /*hidden argument*/&String_Concat_m540_MethodInfo);
		return L_132;
	}

IL_022a:
	{
		String_t* L_133 = V_6;
		return L_133;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
extern MethodInfo IOException__ctor_m11404_MethodInfo;
extern MethodInfo IOException__ctor_m11405_MethodInfo;


// System.Void System.IO.PathTooLongException::.ctor()
extern MethodInfo PathTooLongException__ctor_m11457_MethodInfo;
extern "C" void PathTooLongException__ctor_m11457 (PathTooLongException_t1971 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m10406(NULL /*static, unused*/, (String_t*) &_stringLiteral1860, /*hidden argument*/&Locale_GetText_m10406_MethodInfo);
		IOException__ctor_m11404(__this, L_0, /*hidden argument*/&IOException__ctor_m11404_MethodInfo);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.String)
extern "C" void PathTooLongException__ctor_m11458 (PathTooLongException_t1971 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		IOException__ctor_m11404(__this, L_0, /*hidden argument*/&IOException__ctor_m11404_MethodInfo);
		return;
	}
}
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo PathTooLongException__ctor_m11459_MethodInfo;
extern "C" void PathTooLongException__ctor_m11459 (PathTooLongException_t1971 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		StreamingContext_t1124  L_1 = ___context;
		IOException__ctor_m11405(__this, L_0, L_1, /*hidden argument*/&IOException__ctor_m11405_MethodInfo);
		return;
	}
}
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPattern.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SearchPattern_t1972_il2cpp_TypeInfo;
// System.IO.SearchPattern
#include "mscorlib_System_IO_SearchPatternMethodDeclarations.h"



// System.Void System.IO.SearchPattern::.cctor()
extern MethodInfo SearchPattern__cctor_m11460_MethodInfo;
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" void SearchPattern__cctor_m11460 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool SearchPattern__cctor_m11460_init;
	if (!SearchPattern__cctor_m11460_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		SearchPattern__cctor_m11460_init = true;
	}
	{
		CharU5BU5D_t395* L_0 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 2));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)42);
		CharU5BU5D_t395* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)63);
		((SearchPattern_t1972_StaticFields*)InitializedTypeInfo(&SearchPattern_t1972_il2cpp_TypeInfo)->static_fields)->___WildcardChars_0 = L_1;
		CharU5BU5D_t395* L_2 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 2));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		uint16_t L_3 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___DirectorySeparatorChar_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 0)) = (uint16_t)L_3;
		CharU5BU5D_t395* L_4 = L_2;
		uint16_t L_5 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___AltDirectorySeparatorChar_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, 1)) = (uint16_t)L_5;
		((SearchPattern_t1972_StaticFields*)InitializedTypeInfo(&SearchPattern_t1972_il2cpp_TypeInfo)->static_fields)->___InvalidChars_1 = L_4;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SeekOrigin_t1798_il2cpp_TypeInfo;
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOriginMethodDeclarations.h"



// System.IO.Stream
#include "mscorlib_System_IO_Stream.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Stream_t1719_il2cpp_TypeInfo;
// System.IO.Stream
#include "mscorlib_System_IO_StreamMethodDeclarations.h"

// System.IO.NullStream
#include "mscorlib_System_IO_NullStream.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResult.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
extern TypeInfo NullStream_t1973_il2cpp_TypeInfo;
extern TypeInfo Void_t133_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t669_il2cpp_TypeInfo;
extern TypeInfo Byte_t523_il2cpp_TypeInfo;
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t146_il2cpp_TypeInfo;
extern TypeInfo StreamAsyncResult_t1974_il2cpp_TypeInfo;
extern TypeInfo AsyncCallback_t244_il2cpp_TypeInfo;
extern TypeInfo IAsyncResult_t243_il2cpp_TypeInfo;
extern TypeInfo Exception_t154_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t1471_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.IO.NullStream
#include "mscorlib_System_IO_NullStreamMethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.IO.StreamAsyncResult
#include "mscorlib_System_IO_StreamAsyncResultMethodDeclarations.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
extern Il2CppType ByteU5BU5D_t669_0_0_0;
extern MethodInfo Object__ctor_m419_MethodInfo;
extern MethodInfo NullStream__ctor_m11462_MethodInfo;
extern MethodInfo Stream_Close_m9506_MethodInfo;
extern MethodInfo Stream_Dispose_m9588_MethodInfo;
extern MethodInfo Stream_Read_m9557_MethodInfo;
extern MethodInfo Stream_Write_m9541_MethodInfo;
extern MethodInfo Stream_get_CanRead_m9567_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m7099_MethodInfo;
extern MethodInfo StreamAsyncResult__ctor_m11476_MethodInfo;
extern MethodInfo StreamAsyncResult_SetComplete_m11478_MethodInfo;
extern MethodInfo AsyncCallback_Invoke_m10398_MethodInfo;
extern MethodInfo Stream_get_CanWrite_m9568_MethodInfo;
extern MethodInfo StreamAsyncResult_SetComplete_m11477_MethodInfo;
extern MethodInfo AsyncCallback_BeginInvoke_m9544_MethodInfo;
extern MethodInfo StreamAsyncResult_get_NBytes_m11483_MethodInfo;
extern MethodInfo ArgumentException__ctor_m7991_MethodInfo;
extern MethodInfo StreamAsyncResult_get_Done_m11484_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m7984_MethodInfo;
extern MethodInfo StreamAsyncResult_set_Done_m11485_MethodInfo;
extern MethodInfo StreamAsyncResult_get_Exception_m11482_MethodInfo;


// System.Void System.IO.Stream::.ctor()
extern MethodInfo Stream__ctor_m9570_MethodInfo;
extern "C" void Stream__ctor_m9570 (Stream_t1719 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.IO.Stream::.cctor()
extern MethodInfo Stream__cctor_m11461_MethodInfo;
extern "C" void Stream__cctor_m11461 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullStream_t1973 * L_0 = (NullStream_t1973 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullStream_t1973_il2cpp_TypeInfo));
		NullStream__ctor_m11462(L_0, /*hidden argument*/&NullStream__ctor_m11462_MethodInfo);
		((Stream_t1719_StaticFields*)InitializedTypeInfo(&Stream_t1719_il2cpp_TypeInfo)->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Boolean System.IO.Stream::get_CanRead()
// System.Boolean System.IO.Stream::get_CanSeek()
// System.Boolean System.IO.Stream::get_CanWrite()
// System.Int64 System.IO.Stream::get_Length()
// System.Int64 System.IO.Stream::get_Position()
// System.Void System.IO.Stream::set_Position(System.Int64)
// System.Void System.IO.Stream::Dispose()
extern MethodInfo Stream_Dispose_m9618_MethodInfo;
extern "C" void Stream_Dispose_m9618 (Stream_t1719 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(&Stream_Close_m9506_MethodInfo, __this);
		return;
	}
}
// System.Void System.IO.Stream::Dispose(System.Boolean)
extern "C" void Stream_Dispose_m9588 (Stream_t1719 * __this, bool ___disposing, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.Stream::Close()
extern "C" void Stream_Close_m9506 (Stream_t1719 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&Stream_Dispose_m9588_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.Stream::Flush()
// System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32)
// System.Int32 System.IO.Stream::ReadByte()
extern MethodInfo Stream_ReadByte_m9555_MethodInfo;
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" int32_t Stream_ReadByte_m9555 (Stream_t1719 * __this, MethodInfo* method)
{
	static bool Stream_ReadByte_m9555_init;
	if (!Stream_ReadByte_m9555_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		Stream_ReadByte_m9555_init = true;
	}
	ByteU5BU5D_t669* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t669*)SZArrayNew(ByteU5BU5D_t669_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t669* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Read_m9557_MethodInfo, __this, L_0, 0, 1);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t669* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3));
	}

IL_0017:
	{
		return (-1);
	}
}
// System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin)
// System.Void System.IO.Stream::SetLength(System.Int64)
// System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32)
// System.Void System.IO.Stream::WriteByte(System.Byte)
extern MethodInfo Stream_WriteByte_m9533_MethodInfo;
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" void Stream_WriteByte_m9533 (Stream_t1719 * __this, uint8_t ___value, MethodInfo* method)
{
	static bool Stream_WriteByte_m9533_init;
	if (!Stream_WriteByte_m9533_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		Stream_WriteByte_m9533_init = true;
	}
	ByteU5BU5D_t669* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t669*)SZArrayNew(ByteU5BU5D_t669_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t669* L_0 = V_0;
		uint8_t L_1 = ___value;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, 0)) = (uint8_t)L_1;
		ByteU5BU5D_t669* L_2 = V_0;
		VirtActionInvoker3< ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Write_m9541_MethodInfo, __this, L_2, 0, 1);
		return;
	}
}
// System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo Stream_BeginRead_m9547_MethodInfo;
extern "C" Object_t * Stream_BeginRead_m9547 (Stream_t1719 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t244 * ___callback, Object_t * ___state, MethodInfo* method)
{
	StreamAsyncResult_t1974 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t154 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m9567_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t146 * L_1 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_1, (String_t*) &_stringLiteral1796, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t * L_2 = ___state;
		StreamAsyncResult_t1974 * L_3 = (StreamAsyncResult_t1974 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamAsyncResult_t1974_il2cpp_TypeInfo));
		StreamAsyncResult__ctor_m11476(L_3, L_2, /*hidden argument*/&StreamAsyncResult__ctor_m11476_MethodInfo);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t669* L_4 = ___buffer;
		int32_t L_5 = ___offset;
		int32_t L_6 = ___count;
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Read_m9557_MethodInfo, __this, L_4, L_5, L_6);
		V_1 = L_7;
		StreamAsyncResult_t1974 * L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		StreamAsyncResult_SetComplete_m11478(L_8, (Exception_t154 *)NULL, L_9, /*hidden argument*/&StreamAsyncResult_SetComplete_m11478_MethodInfo);
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002f;
		throw e;
	}

CATCH_002f:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t154 *)__exception_local);
		StreamAsyncResult_t1974 * L_10 = V_0;
		Exception_t154 * L_11 = V_2;
		NullCheck(L_10);
		StreamAsyncResult_SetComplete_m11478(L_10, L_11, 0, /*hidden argument*/&StreamAsyncResult_SetComplete_m11478_MethodInfo);
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		AsyncCallback_t244 * L_12 = ___callback;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		AsyncCallback_t244 * L_13 = ___callback;
		StreamAsyncResult_t1974 * L_14 = V_0;
		NullCheck(L_13);
		VirtActionInvoker1< Object_t * >::Invoke(&AsyncCallback_Invoke_m10398_MethodInfo, L_13, L_14);
	}

IL_0046:
	{
		StreamAsyncResult_t1974 * L_15 = V_0;
		return L_15;
	}
}
// System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern MethodInfo Stream_BeginWrite_m9558_MethodInfo;
extern "C" Object_t * Stream_BeginWrite_m9558 (Stream_t1719 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t244 * ___callback, Object_t * ___state, MethodInfo* method)
{
	StreamAsyncResult_t1974 * V_0 = {0};
	Exception_t154 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanWrite_m9568_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t146 * L_1 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_1, (String_t*) &_stringLiteral1802, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		Object_t * L_2 = ___state;
		StreamAsyncResult_t1974 * L_3 = (StreamAsyncResult_t1974 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamAsyncResult_t1974_il2cpp_TypeInfo));
		StreamAsyncResult__ctor_m11476(L_3, L_2, /*hidden argument*/&StreamAsyncResult__ctor_m11476_MethodInfo);
		V_0 = L_3;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t669* L_4 = ___buffer;
		int32_t L_5 = ___offset;
		int32_t L_6 = ___count;
		VirtActionInvoker3< ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Write_m9541_MethodInfo, __this, L_4, L_5, L_6);
		StreamAsyncResult_t1974 * L_7 = V_0;
		NullCheck(L_7);
		StreamAsyncResult_SetComplete_m11477(L_7, (Exception_t154 *)NULL, /*hidden argument*/&StreamAsyncResult_SetComplete_m11477_MethodInfo);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_002d;
		throw e;
	}

CATCH_002d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t154 *)__exception_local);
		StreamAsyncResult_t1974 * L_8 = V_0;
		Exception_t154 * L_9 = V_1;
		NullCheck(L_8);
		StreamAsyncResult_SetComplete_m11477(L_8, L_9, /*hidden argument*/&StreamAsyncResult_SetComplete_m11477_MethodInfo);
		goto IL_0037;
	} // end catch (depth: 1)

IL_0037:
	{
		AsyncCallback_t244 * L_10 = ___callback;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		AsyncCallback_t244 * L_11 = ___callback;
		StreamAsyncResult_t1974 * L_12 = V_0;
		NullCheck(L_11);
		VirtFuncInvoker3< Object_t *, Object_t *, AsyncCallback_t244 *, Object_t * >::Invoke(&AsyncCallback_BeginInvoke_m9544_MethodInfo, L_11, L_12, (AsyncCallback_t244 *)NULL, NULL);
	}

IL_0046:
	{
		StreamAsyncResult_t1974 * L_13 = V_0;
		return L_13;
	}
}
// System.Int32 System.IO.Stream::EndRead(System.IAsyncResult)
extern MethodInfo Stream_EndRead_m9549_MethodInfo;
extern "C" int32_t Stream_EndRead_m9549 (Stream_t1719 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	StreamAsyncResult_t1974 * V_0 = {0};
	{
		Object_t * L_0 = ___asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1800, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___asyncResult;
		V_0 = ((StreamAsyncResult_t1974 *)IsInst(L_2, InitializedTypeInfo(&StreamAsyncResult_t1974_il2cpp_TypeInfo)));
		StreamAsyncResult_t1974 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		StreamAsyncResult_t1974 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = StreamAsyncResult_get_NBytes_m11483(L_4, /*hidden argument*/&StreamAsyncResult_get_NBytes_m11483_MethodInfo);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t521 * L_6 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_6, (String_t*) &_stringLiteral1801, (String_t*) &_stringLiteral1800, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		StreamAsyncResult_t1974 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = StreamAsyncResult_get_Done_m11484(L_7, /*hidden argument*/&StreamAsyncResult_get_Done_m11484_MethodInfo);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t1471 * L_9 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_9, (String_t*) &_stringLiteral1861, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		StreamAsyncResult_t1974 * L_10 = V_0;
		NullCheck(L_10);
		StreamAsyncResult_set_Done_m11485(L_10, 1, /*hidden argument*/&StreamAsyncResult_set_Done_m11485_MethodInfo);
		StreamAsyncResult_t1974 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t154 * L_12 = StreamAsyncResult_get_Exception_m11482(L_11, /*hidden argument*/&StreamAsyncResult_get_Exception_m11482_MethodInfo);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		StreamAsyncResult_t1974 * L_13 = V_0;
		NullCheck(L_13);
		Exception_t154 * L_14 = StreamAsyncResult_get_Exception_m11482(L_13, /*hidden argument*/&StreamAsyncResult_get_Exception_m11482_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		StreamAsyncResult_t1974 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = StreamAsyncResult_get_NBytes_m11483(L_15, /*hidden argument*/&StreamAsyncResult_get_NBytes_m11483_MethodInfo);
		return L_16;
	}
}
// System.Void System.IO.Stream::EndWrite(System.IAsyncResult)
extern MethodInfo Stream_EndWrite_m9559_MethodInfo;
extern "C" void Stream_EndWrite_m9559 (Stream_t1719 * __this, Object_t * ___asyncResult, MethodInfo* method)
{
	StreamAsyncResult_t1974 * V_0 = {0};
	{
		Object_t * L_0 = ___asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1800, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___asyncResult;
		V_0 = ((StreamAsyncResult_t1974 *)IsInst(L_2, InitializedTypeInfo(&StreamAsyncResult_t1974_il2cpp_TypeInfo)));
		StreamAsyncResult_t1974 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		StreamAsyncResult_t1974 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = StreamAsyncResult_get_NBytes_m11483(L_4, /*hidden argument*/&StreamAsyncResult_get_NBytes_m11483_MethodInfo);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0031;
		}
	}

IL_0021:
	{
		ArgumentException_t521 * L_6 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_6, (String_t*) &_stringLiteral1801, (String_t*) &_stringLiteral1800, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_0031:
	{
		StreamAsyncResult_t1974 * L_7 = V_0;
		NullCheck(L_7);
		bool L_8 = StreamAsyncResult_get_Done_m11484(L_7, /*hidden argument*/&StreamAsyncResult_get_Done_m11484_MethodInfo);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		InvalidOperationException_t1471 * L_9 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_9, (String_t*) &_stringLiteral1862, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0044:
	{
		StreamAsyncResult_t1974 * L_10 = V_0;
		NullCheck(L_10);
		StreamAsyncResult_set_Done_m11485(L_10, 1, /*hidden argument*/&StreamAsyncResult_set_Done_m11485_MethodInfo);
		StreamAsyncResult_t1974 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t154 * L_12 = StreamAsyncResult_get_Exception_m11482(L_11, /*hidden argument*/&StreamAsyncResult_get_Exception_m11482_MethodInfo);
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		StreamAsyncResult_t1974 * L_13 = V_0;
		NullCheck(L_13);
		Exception_t154 * L_14 = StreamAsyncResult_get_Exception_m11482(L_13, /*hidden argument*/&StreamAsyncResult_get_Exception_m11482_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_005a:
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.NullStream::.ctor()
extern "C" void NullStream__ctor_m11462 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		Stream__ctor_m9570(__this, /*hidden argument*/&Stream__ctor_m9570_MethodInfo);
		return;
	}
}
// System.Boolean System.IO.NullStream::get_CanRead()
extern MethodInfo NullStream_get_CanRead_m11463_MethodInfo;
extern "C" bool NullStream_get_CanRead_m11463 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanSeek()
extern MethodInfo NullStream_get_CanSeek_m11464_MethodInfo;
extern "C" bool NullStream_get_CanSeek_m11464 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.IO.NullStream::get_CanWrite()
extern MethodInfo NullStream_get_CanWrite_m11465_MethodInfo;
extern "C" bool NullStream_get_CanWrite_m11465 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Int64 System.IO.NullStream::get_Length()
extern MethodInfo NullStream_get_Length_m11466_MethodInfo;
extern "C" int64_t NullStream_get_Length_m11466 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Int64 System.IO.NullStream::get_Position()
extern MethodInfo NullStream_get_Position_m11467_MethodInfo;
extern "C" int64_t NullStream_get_Position_m11467 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::set_Position(System.Int64)
extern MethodInfo NullStream_set_Position_m11468_MethodInfo;
extern "C" void NullStream_set_Position_m11468 (NullStream_t1973 * __this, int64_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Flush()
extern MethodInfo NullStream_Flush_m11469_MethodInfo;
extern "C" void NullStream_Flush_m11469 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.Int32 System.IO.NullStream::Read(System.Byte[],System.Int32,System.Int32)
extern MethodInfo NullStream_Read_m11470_MethodInfo;
extern "C" int32_t NullStream_Read_m11470 (NullStream_t1973 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Int32 System.IO.NullStream::ReadByte()
extern MethodInfo NullStream_ReadByte_m11471_MethodInfo;
extern "C" int32_t NullStream_ReadByte_m11471 (NullStream_t1973 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int64 System.IO.NullStream::Seek(System.Int64,System.IO.SeekOrigin)
extern MethodInfo NullStream_Seek_m11472_MethodInfo;
extern "C" int64_t NullStream_Seek_m11472 (NullStream_t1973 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method)
{
	{
		return (((int64_t)0));
	}
}
// System.Void System.IO.NullStream::SetLength(System.Int64)
extern MethodInfo NullStream_SetLength_m11473_MethodInfo;
extern "C" void NullStream_SetLength_m11473 (NullStream_t1973 * __this, int64_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::Write(System.Byte[],System.Int32,System.Int32)
extern MethodInfo NullStream_Write_m11474_MethodInfo;
extern "C" void NullStream_Write_m11474 (NullStream_t1973 * __this, ByteU5BU5D_t669* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.NullStream::WriteByte(System.Byte)
extern MethodInfo NullStream_WriteByte_m11475_MethodInfo;
extern "C" void NullStream_WriteByte_m11475 (NullStream_t1973 * __this, uint8_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Threading.WaitHandle
#include "mscorlib_System_Threading_WaitHandle.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEvent.h"
extern TypeInfo ManualResetEvent_t1734_il2cpp_TypeInfo;
// System.Threading.Monitor
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
// System.Threading.ManualResetEvent
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
// System.Threading.EventWaitHandle
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
extern MethodInfo Monitor_Enter_m4664_MethodInfo;
extern MethodInfo ManualResetEvent__ctor_m9542_MethodInfo;
extern MethodInfo Monitor_Exit_m4665_MethodInfo;
extern MethodInfo EventWaitHandle_Set_m9543_MethodInfo;


// System.Void System.IO.StreamAsyncResult::.ctor(System.Object)
extern "C" void StreamAsyncResult__ctor_m11476 (StreamAsyncResult_t1974 * __this, Object_t * ___state, MethodInfo* method)
{
	{
		__this->___nbytes_4 = (-1);
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Object_t * L_0 = ___state;
		__this->___state_0 = L_0;
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception)
extern "C" void StreamAsyncResult_SetComplete_m11477 (StreamAsyncResult_t1974 * __this, Exception_t154 * ___e, MethodInfo* method)
{
	StreamAsyncResult_t1974 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Exception_t154 * L_0 = ___e;
		__this->___exc_3 = L_0;
		__this->___completed_1 = 1;
		V_0 = __this;
		StreamAsyncResult_t1974 * L_1 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t1734 * L_2 = (__this->___wh_5);
			if (!L_2)
			{
				goto IL_002a;
			}
		}

IL_001e:
		{
			ManualResetEvent_t1734 * L_3 = (__this->___wh_5);
			NullCheck(L_3);
			EventWaitHandle_Set_m9543(L_3, /*hidden argument*/&EventWaitHandle_Set_m9543_MethodInfo);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		StreamAsyncResult_t1974 * L_4 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_4, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void StreamAsyncResult_SetComplete_m11478 (StreamAsyncResult_t1974 * __this, Exception_t154 * ___e, int32_t ___nbytes, MethodInfo* method)
{
	{
		int32_t L_0 = ___nbytes;
		__this->___nbytes_4 = L_0;
		Exception_t154 * L_1 = ___e;
		StreamAsyncResult_SetComplete_m11477(__this, L_1, /*hidden argument*/&StreamAsyncResult_SetComplete_m11477_MethodInfo);
		return;
	}
}
// System.Object System.IO.StreamAsyncResult::get_AsyncState()
extern MethodInfo StreamAsyncResult_get_AsyncState_m11479_MethodInfo;
extern "C" Object_t * StreamAsyncResult_get_AsyncState_m11479 (StreamAsyncResult_t1974 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___state_0);
		return L_0;
	}
}
// System.Threading.WaitHandle System.IO.StreamAsyncResult::get_AsyncWaitHandle()
extern MethodInfo StreamAsyncResult_get_AsyncWaitHandle_m11480_MethodInfo;
extern "C" WaitHandle_t1736 * StreamAsyncResult_get_AsyncWaitHandle_m11480 (StreamAsyncResult_t1974 * __this, MethodInfo* method)
{
	StreamAsyncResult_t1974 * V_0 = {0};
	WaitHandle_t1736 * V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		StreamAsyncResult_t1974 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t1734 * L_1 = (__this->___wh_5);
			if (L_1)
			{
				goto IL_0021;
			}
		}

IL_0010:
		{
			bool L_2 = (__this->___completed_1);
			ManualResetEvent_t1734 * L_3 = (ManualResetEvent_t1734 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ManualResetEvent_t1734_il2cpp_TypeInfo));
			ManualResetEvent__ctor_m9542(L_3, L_2, /*hidden argument*/&ManualResetEvent__ctor_m9542_MethodInfo);
			__this->___wh_5 = L_3;
		}

IL_0021:
		{
			ManualResetEvent_t1734 * L_4 = (__this->___wh_5);
			V_1 = L_4;
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x33, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		StreamAsyncResult_t1974 * L_5 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0033:
	{
		WaitHandle_t1736 * L_6 = V_1;
		return L_6;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_IsCompleted()
extern MethodInfo StreamAsyncResult_get_IsCompleted_m11481_MethodInfo;
extern "C" bool StreamAsyncResult_get_IsCompleted_m11481 (StreamAsyncResult_t1974 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___completed_1);
		return L_0;
	}
}
// System.Exception System.IO.StreamAsyncResult::get_Exception()
extern "C" Exception_t154 * StreamAsyncResult_get_Exception_m11482 (StreamAsyncResult_t1974 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = (__this->___exc_3);
		return L_0;
	}
}
// System.Int32 System.IO.StreamAsyncResult::get_NBytes()
extern "C" int32_t StreamAsyncResult_get_NBytes_m11483 (StreamAsyncResult_t1974 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___nbytes_4);
		return L_0;
	}
}
// System.Boolean System.IO.StreamAsyncResult::get_Done()
extern "C" bool StreamAsyncResult_get_Done_m11484 (StreamAsyncResult_t1974 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___done_2);
		return L_0;
	}
}
// System.Void System.IO.StreamAsyncResult::set_Done(System.Boolean)
extern "C" void StreamAsyncResult_set_Done_m11485 (StreamAsyncResult_t1974 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___done_2 = L_0;
		return;
	}
}
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullStreamReader_t1975_il2cpp_TypeInfo;
// System.IO.StreamReader/NullStreamReader
#include "mscorlib_System_IO_StreamReader_NullStreamReaderMethodDeclarations.h"

// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReaderMethodDeclarations.h"
extern MethodInfo StreamReader__ctor_m11492_MethodInfo;


// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern MethodInfo NullStreamReader__ctor_m11486_MethodInfo;
extern "C" void NullStreamReader__ctor_m11486 (NullStreamReader_t1975 * __this, MethodInfo* method)
{
	{
		StreamReader__ctor_m11492(__this, /*hidden argument*/&StreamReader__ctor_m11492_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern MethodInfo NullStreamReader_Peek_m11487_MethodInfo;
extern "C" int32_t NullStreamReader_Peek_m11487 (NullStreamReader_t1975 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern MethodInfo NullStreamReader_Read_m11488_MethodInfo;
extern "C" int32_t NullStreamReader_Read_m11488 (NullStreamReader_t1975 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo NullStreamReader_Read_m11489_MethodInfo;
extern "C" int32_t NullStreamReader_Read_m11489 (NullStreamReader_t1975 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern MethodInfo NullStreamReader_ReadLine_m11490_MethodInfo;
extern "C" String_t* NullStreamReader_ReadLine_m11490 (NullStreamReader_t1975 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern MethodInfo NullStreamReader_ReadToEnd_m11491_MethodInfo;
extern "C" String_t* NullStreamReader_ReadToEnd_m11491 (NullStreamReader_t1975 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.IO.StreamReader
#include "mscorlib_System_IO_StreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StreamReader_t1958_il2cpp_TypeInfo;

// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// System.IO.FileStream
#include "mscorlib_System_IO_FileStream.h"
// System.Text.Decoder
#include "mscorlib_System_Text_Decoder.h"
// System.IO.TextReader
#include "mscorlib_System_IO_TextReader.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedException.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilder.h"
extern TypeInfo Encoding_t1486_il2cpp_TypeInfo;
extern TypeInfo ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo;
extern TypeInfo Decoder_t1950_il2cpp_TypeInfo;
extern TypeInfo TextReader_t1904_il2cpp_TypeInfo;
extern TypeInfo ObjectDisposedException_t1780_il2cpp_TypeInfo;
extern TypeInfo StringBuilder_t480_il2cpp_TypeInfo;
// System.IO.TextReader
#include "mscorlib_System_IO_TextReaderMethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.IO.File
#include "mscorlib_System_IO_FileMethodDeclarations.h"
// System.Text.Decoder
#include "mscorlib_System_Text_DecoderMethodDeclarations.h"
// System.ObjectDisposedException
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
// System.Math
#include "mscorlib_System_MathMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
// System.Text.StringBuilder
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
extern MethodInfo TextReader__ctor_m11535_MethodInfo;
extern MethodInfo StreamReader__ctor_m11494_MethodInfo;
extern MethodInfo StreamReader_Initialize_m11498_MethodInfo;
extern MethodInfo Encoding_get_UTF8Unmarked_m12966_MethodInfo;
extern MethodInfo StreamReader__ctor_m11496_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7988_MethodInfo;
extern MethodInfo File_OpenRead_m9503_MethodInfo;
extern MethodInfo Encoding_GetDecoder_m12956_MethodInfo;
extern MethodInfo Encoding_GetPreamble_m12961_MethodInfo;
extern MethodInfo Encoding_GetMaxCharCount_m14019_MethodInfo;
extern MethodInfo TextReader_Dispose_m11538_MethodInfo;
extern MethodInfo Encoding_get_BigEndianUnicode_m9476_MethodInfo;
extern MethodInfo Encoding_get_Unicode_m12968_MethodInfo;
extern MethodInfo Encoding_get_BigEndianUTF32_m12970_MethodInfo;
extern MethodInfo Encoding_get_UTF32_m12969_MethodInfo;
extern MethodInfo StreamReader_DoChecks_m11500_MethodInfo;
extern MethodInfo Decoder_GetChars_m14018_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m13806_MethodInfo;
extern MethodInfo StreamReader_ReadBuffer_m11501_MethodInfo;
extern MethodInfo Math_Min_m13610_MethodInfo;
extern MethodInfo Array_Copy_m10283_MethodInfo;
extern MethodInfo StreamReader_FindNextEOL_m11505_MethodInfo;
extern MethodInfo String__ctor_m9892_MethodInfo;
extern MethodInfo StringBuilder_get_Length_m8158_MethodInfo;
extern MethodInfo StringBuilder_ToString_m12994_MethodInfo;
extern MethodInfo StringBuilder__ctor_m2206_MethodInfo;
extern MethodInfo StringBuilder_set_Length_m8259_MethodInfo;
extern MethodInfo StringBuilder_Append_m12999_MethodInfo;
extern MethodInfo StringBuilder_get_Capacity_m12990_MethodInfo;
extern MethodInfo StreamReader_Read_m11504_MethodInfo;
extern MethodInfo StringBuilder_ToString_m2209_MethodInfo;


// System.Void System.IO.StreamReader::.ctor()
extern "C" void StreamReader__ctor_m11492 (StreamReader_t1958 * __this, MethodInfo* method)
{
	{
		TextReader__ctor_m11535(__this, /*hidden argument*/&TextReader__ctor_m11535_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo StreamReader__ctor_m11493_MethodInfo;
extern "C" void StreamReader__ctor_m11493 (StreamReader_t1958 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1719 * L_0 = ___stream;
		Encoding_t1486 * L_1 = ___encoding;
		StreamReader__ctor_m11494(__this, L_0, L_1, 1, ((int32_t)1024), /*hidden argument*/&StreamReader__ctor_m11494_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m11494 (StreamReader_t1958 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	{
		TextReader__ctor_m11535(__this, /*hidden argument*/&TextReader__ctor_m11535_MethodInfo);
		Stream_t1719 * L_0 = ___stream;
		Encoding_t1486 * L_1 = ___encoding;
		bool L_2 = ___detectEncodingFromByteOrderMarks;
		int32_t L_3 = ___bufferSize;
		StreamReader_Initialize_m11498(__this, L_0, L_1, L_2, L_3, /*hidden argument*/&StreamReader_Initialize_m11498_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String)
extern MethodInfo StreamReader__ctor_m11495_MethodInfo;
extern "C" void StreamReader__ctor_m11495 (StreamReader_t1958 * __this, String_t* ___path, MethodInfo* method)
{
	{
		String_t* L_0 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_1 = Encoding_get_UTF8Unmarked_m12966(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m12966_MethodInfo);
		StreamReader__ctor_m11496(__this, L_0, L_1, 1, ((int32_t)4096), /*hidden argument*/&StreamReader__ctor_m11496_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
extern "C" void StreamReader__ctor_m11496 (StreamReader_t1958 * __this, String_t* ___path, Encoding_t1486 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	Stream_t1719 * V_0 = {0};
	{
		TextReader__ctor_m11535(__this, /*hidden argument*/&TextReader__ctor_m11535_MethodInfo);
		String_t* L_0 = ___path;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1747, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		String_t* L_3 = ___path;
		bool L_4 = String_op_Equality_m406(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentException_t521 * L_5 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_5, (String_t*) &_stringLiteral1863, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_002c:
	{
		String_t* L_6 = ___path;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo));
		CharU5BU5D_t395* L_7 = ((Path_t916_StaticFields*)InitializedTypeInfo(&Path_t916_il2cpp_TypeInfo)->static_fields)->___InvalidPathChars_0;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOfAny_m9928(L_6, L_7, /*hidden argument*/&String_IndexOfAny_m9928_MethodInfo);
		if ((((int32_t)L_8) == ((int32_t)(-1))))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t521 * L_9 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_9, (String_t*) &_stringLiteral1864, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0045:
	{
		Encoding_t1486 * L_10 = ___encoding;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		ArgumentNullException_t1172 * L_11 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_11, (String_t*) &_stringLiteral1865, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0053:
	{
		int32_t L_12 = ___bufferSize;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_13 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_13, (String_t*) &_stringLiteral1781, (String_t*) &_stringLiteral1866, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_13);
	}

IL_0068:
	{
		String_t* L_14 = ___path;
		FileStream_t1788 * L_15 = File_OpenRead_m9503(NULL /*static, unused*/, L_14, /*hidden argument*/&File_OpenRead_m9503_MethodInfo);
		V_0 = L_15;
		Stream_t1719 * L_16 = V_0;
		Encoding_t1486 * L_17 = ___encoding;
		bool L_18 = ___detectEncodingFromByteOrderMarks;
		int32_t L_19 = ___bufferSize;
		StreamReader_Initialize_m11498(__this, L_16, L_17, L_18, L_19, /*hidden argument*/&StreamReader_Initialize_m11498_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamReader::.cctor()
extern MethodInfo StreamReader__cctor_m11497_MethodInfo;
extern "C" void StreamReader__cctor_m11497 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullStreamReader_t1975 * L_0 = (NullStreamReader_t1975 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullStreamReader_t1975_il2cpp_TypeInfo));
		NullStreamReader__ctor_m11486(L_0, /*hidden argument*/&NullStreamReader__ctor_m11486_MethodInfo);
		((StreamReader_t1958_StaticFields*)InitializedTypeInfo(&StreamReader_t1958_il2cpp_TypeInfo)->static_fields)->___Null_12 = L_0;
		return;
	}
}
// System.Void System.IO.StreamReader::Initialize(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" void StreamReader_Initialize_m11498 (StreamReader_t1958 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, bool ___detectEncodingFromByteOrderMarks, int32_t ___bufferSize, MethodInfo* method)
{
	static bool StreamReader_Initialize_m11498_init;
	if (!StreamReader_Initialize_m11498_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		StreamReader_Initialize_m11498_init = true;
	}
	ByteU5BU5D_t669* V_0 = {0};
	StreamReader_t1958 * G_B12_0 = {0};
	StreamReader_t1958 * G_B11_0 = {0};
	int32_t G_B13_0 = 0;
	StreamReader_t1958 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	StreamReader_t1958 * G_B15_1 = {0};
	int32_t G_B14_0 = 0;
	StreamReader_t1958 * G_B14_1 = {0};
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	StreamReader_t1958 * G_B16_2 = {0};
	{
		Stream_t1719 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1867, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		Encoding_t1486 * L_2 = ___encoding;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t1172 * L_3 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_3, (String_t*) &_stringLiteral1865, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		Stream_t1719 * L_4 = ___stream;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanRead_m9567_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		ArgumentException_t521 * L_6 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_6, (String_t*) &_stringLiteral1868, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}

IL_002f:
	{
		int32_t L_7 = ___bufferSize;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_8 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_8, (String_t*) &_stringLiteral1781, (String_t*) &_stringLiteral1866, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		int32_t L_9 = ___bufferSize;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0056;
		}
	}
	{
		___bufferSize = ((int32_t)128);
	}

IL_0056:
	{
		Stream_t1719 * L_10 = ___stream;
		__this->___base_stream_9 = L_10;
		int32_t L_11 = ___bufferSize;
		__this->___input_buffer_1 = ((ByteU5BU5D_t669*)SZArrayNew(ByteU5BU5D_t669_il2cpp_TypeInfo_var, L_11));
		int32_t L_12 = ___bufferSize;
		__this->___buffer_size_5 = L_12;
		Encoding_t1486 * L_13 = ___encoding;
		__this->___encoding_7 = L_13;
		Encoding_t1486 * L_14 = ___encoding;
		NullCheck(L_14);
		Decoder_t1950 * L_15 = (Decoder_t1950 *)VirtFuncInvoker0< Decoder_t1950 * >::Invoke(&Encoding_GetDecoder_m12956_MethodInfo, L_14);
		__this->___decoder_8 = L_15;
		Encoding_t1486 * L_16 = ___encoding;
		NullCheck(L_16);
		ByteU5BU5D_t669* L_17 = (ByteU5BU5D_t669*)VirtFuncInvoker0< ByteU5BU5D_t669* >::Invoke(&Encoding_GetPreamble_m12961_MethodInfo, L_16);
		V_0 = L_17;
		bool L_18 = ___detectEncodingFromByteOrderMarks;
		G_B11_0 = __this;
		if (!L_18)
		{
			G_B12_0 = __this;
			goto IL_0093;
		}
	}
	{
		G_B13_0 = 1;
		G_B13_1 = G_B11_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B13_0 = 0;
		G_B13_1 = G_B12_0;
	}

IL_0094:
	{
		NullCheck(G_B13_1);
		G_B13_1->___do_checks_6 = G_B13_0;
		int32_t L_19 = (__this->___do_checks_6);
		ByteU5BU5D_t669* L_20 = V_0;
		NullCheck(L_20);
		G_B14_0 = L_19;
		G_B14_1 = __this;
		if ((((int32_t)(((Array_t *)L_20)->max_length))))
		{
			G_B15_0 = L_19;
			G_B15_1 = __this;
			goto IL_00a8;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_0;
		G_B16_2 = G_B14_1;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B16_0 = 2;
		G_B16_1 = G_B15_0;
		G_B16_2 = G_B15_1;
	}

IL_00a9:
	{
		NullCheck(G_B16_2);
		G_B16_2->___do_checks_6 = ((int32_t)((int32_t)G_B16_1+(int32_t)G_B16_0));
		Encoding_t1486 * L_21 = ___encoding;
		int32_t L_22 = ___bufferSize;
		NullCheck(L_21);
		int32_t L_23 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m14019_MethodInfo, L_21, L_22);
		__this->___decoded_buffer_2 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_23+(int32_t)1))));
		__this->___decoded_count_3 = 0;
		__this->___pos_4 = 0;
		return;
	}
}
// System.Void System.IO.StreamReader::Dispose(System.Boolean)
extern MethodInfo StreamReader_Dispose_m11499_MethodInfo;
extern "C" void StreamReader_Dispose_m11499 (StreamReader_t1958 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1719 * L_1 = (__this->___base_stream_9);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Stream_t1719 * L_2 = (__this->___base_stream_9);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&Stream_Close_m9506_MethodInfo, L_2);
	}

IL_0016:
	{
		__this->___input_buffer_1 = (ByteU5BU5D_t669*)NULL;
		__this->___decoded_buffer_2 = (CharU5BU5D_t395*)NULL;
		__this->___encoding_7 = (Encoding_t1486 *)NULL;
		__this->___decoder_8 = (Decoder_t1950 *)NULL;
		__this->___base_stream_9 = (Stream_t1719 *)NULL;
		bool L_3 = ___disposing;
		TextReader_Dispose_m11538(__this, L_3, /*hidden argument*/&TextReader_Dispose_m11538_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StreamReader::DoChecks(System.Int32)
extern "C" int32_t StreamReader_DoChecks_m11500 (StreamReader_t1958 * __this, int32_t ___count, MethodInfo* method)
{
	ByteU5BU5D_t669* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (__this->___do_checks_6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		Encoding_t1486 * L_1 = (__this->___encoding_7);
		NullCheck(L_1);
		ByteU5BU5D_t669* L_2 = (ByteU5BU5D_t669*)VirtFuncInvoker0< ByteU5BU5D_t669* >::Invoke(&Encoding_GetPreamble_m12961_MethodInfo, L_1);
		V_0 = L_2;
		ByteU5BU5D_t669* L_3 = V_0;
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = ___count;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0040;
		}
	}
	{
		V_2 = 0;
		goto IL_0036;
	}

IL_0023:
	{
		ByteU5BU5D_t669* L_6 = (__this->___input_buffer_1);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ByteU5BU5D_t669* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_8))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_11)))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_003a;
	}

IL_0032:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0023;
		}
	}

IL_003a:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_17 = V_2;
		return L_17;
	}

IL_0040:
	{
		int32_t L_18 = (__this->___do_checks_6);
		if ((!(((uint32_t)((int32_t)((int32_t)L_18&(int32_t)1))) == ((uint32_t)1))))
		{
			goto IL_0185;
		}
	}
	{
		int32_t L_19 = ___count;
		if ((((int32_t)L_19) >= ((int32_t)2)))
		{
			goto IL_0054;
		}
	}
	{
		return 0;
	}

IL_0054:
	{
		ByteU5BU5D_t669* L_20 = (__this->___input_buffer_1);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		int32_t L_21 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_t669* L_22 = (__this->___input_buffer_1);
		NullCheck(L_22);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_22, 1);
		int32_t L_23 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_22, L_23))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_24 = Encoding_get_BigEndianUnicode_m9476(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_BigEndianUnicode_m9476_MethodInfo);
		__this->___encoding_7 = L_24;
		return 2;
	}

IL_007f:
	{
		int32_t L_25 = ___count;
		if ((((int32_t)L_25) >= ((int32_t)3)))
		{
			goto IL_0085;
		}
	}
	{
		return 0;
	}

IL_0085:
	{
		ByteU5BU5D_t669* L_26 = (__this->___input_buffer_1);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 0);
		int32_t L_27 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_26, L_27))) == ((uint32_t)((int32_t)239)))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t669* L_28 = (__this->___input_buffer_1);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		int32_t L_29 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_28, L_29))) == ((uint32_t)((int32_t)187)))))
		{
			goto IL_00bf;
		}
	}
	{
		ByteU5BU5D_t669* L_30 = (__this->___input_buffer_1);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 2);
		int32_t L_31 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_30, L_31))) == ((uint32_t)((int32_t)191)))))
		{
			goto IL_00bf;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_32 = Encoding_get_UTF8Unmarked_m12966(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m12966_MethodInfo);
		__this->___encoding_7 = L_32;
		return 3;
	}

IL_00bf:
	{
		int32_t L_33 = ___count;
		if ((((int32_t)L_33) >= ((int32_t)4)))
		{
			goto IL_00fa;
		}
	}
	{
		ByteU5BU5D_t669* L_34 = (__this->___input_buffer_1);
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 0);
		int32_t L_35 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_34, L_35))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t669* L_36 = (__this->___input_buffer_1);
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 1);
		int32_t L_37 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_36, L_37))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_00f8;
		}
	}
	{
		ByteU5BU5D_t669* L_38 = (__this->___input_buffer_1);
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 2);
		int32_t L_39 = 2;
		if (!(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_38, L_39)))
		{
			goto IL_00f8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_40 = Encoding_get_Unicode_m12968(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_Unicode_m12968_MethodInfo);
		__this->___encoding_7 = L_40;
		return 2;
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		ByteU5BU5D_t669* L_41 = (__this->___input_buffer_1);
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 0);
		int32_t L_42 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_41, L_42)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t669* L_43 = (__this->___input_buffer_1);
		NullCheck(L_43);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_43, 1);
		int32_t L_44 = 1;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_43, L_44)))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t669* L_45 = (__this->___input_buffer_1);
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 2);
		int32_t L_46 = 2;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_45, L_46))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0139;
		}
	}
	{
		ByteU5BU5D_t669* L_47 = (__this->___input_buffer_1);
		NullCheck(L_47);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_47, 3);
		int32_t L_48 = 3;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_47, L_48))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0139;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_49 = Encoding_get_BigEndianUTF32_m12970(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_BigEndianUTF32_m12970_MethodInfo);
		__this->___encoding_7 = L_49;
		return 4;
	}

IL_0139:
	{
		ByteU5BU5D_t669* L_50 = (__this->___input_buffer_1);
		NullCheck(L_50);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_50, 0);
		int32_t L_51 = 0;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_50, L_51))) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t669* L_52 = (__this->___input_buffer_1);
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, 1);
		int32_t L_53 = 1;
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_52, L_53))) == ((uint32_t)((int32_t)254)))))
		{
			goto IL_0185;
		}
	}
	{
		ByteU5BU5D_t669* L_54 = (__this->___input_buffer_1);
		NullCheck(L_54);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 2);
		int32_t L_55 = 2;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_54, L_55)))
		{
			goto IL_0178;
		}
	}
	{
		ByteU5BU5D_t669* L_56 = (__this->___input_buffer_1);
		NullCheck(L_56);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_56, 3);
		int32_t L_57 = 3;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_56, L_57)))
		{
			goto IL_0178;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_58 = Encoding_get_UTF32_m12969(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF32_m12969_MethodInfo);
		__this->___encoding_7 = L_58;
		return 4;
	}

IL_0178:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_59 = Encoding_get_Unicode_m12968(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_Unicode_m12968_MethodInfo);
		__this->___encoding_7 = L_59;
		return 2;
	}

IL_0185:
	{
		return 0;
	}
}
// System.Int32 System.IO.StreamReader::ReadBuffer()
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" int32_t StreamReader_ReadBuffer_m11501 (StreamReader_t1958 * __this, MethodInfo* method)
{
	static bool StreamReader_ReadBuffer_m11501_init;
	if (!StreamReader_ReadBuffer_m11501_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		StreamReader_ReadBuffer_m11501_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Encoding_t1486 * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		__this->___pos_4 = 0;
		V_0 = 0;
		__this->___decoded_count_3 = 0;
		V_1 = 0;
	}

IL_0012:
	{
		Stream_t1719 * L_0 = (__this->___base_stream_9);
		ByteU5BU5D_t669* L_1 = (__this->___input_buffer_1);
		int32_t L_2 = (__this->___buffer_size_5);
		NullCheck(L_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Read_m9557_MethodInfo, L_0, L_1, 0, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return 0;
	}

IL_0031:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = (__this->___buffer_size_5);
		__this->___mayBlock_10 = ((((int32_t)L_5) < ((int32_t)L_6))? 1 : 0);
		int32_t L_7 = (__this->___do_checks_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		Encoding_t1486 * L_8 = (__this->___encoding_7);
		V_2 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = StreamReader_DoChecks_m11500(__this, L_9, /*hidden argument*/&StreamReader_DoChecks_m11500_MethodInfo);
		V_1 = L_10;
		Encoding_t1486 * L_11 = V_2;
		Encoding_t1486 * L_12 = (__this->___encoding_7);
		if ((((Object_t*)(Encoding_t1486 *)L_11) == ((Object_t*)(Encoding_t1486 *)L_12)))
		{
			goto IL_00a8;
		}
	}
	{
		Encoding_t1486 * L_13 = V_2;
		int32_t L_14 = (__this->___buffer_size_5);
		NullCheck(L_13);
		int32_t L_15 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m14019_MethodInfo, L_13, L_14);
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
		Encoding_t1486 * L_16 = (__this->___encoding_7);
		int32_t L_17 = (__this->___buffer_size_5);
		NullCheck(L_16);
		int32_t L_18 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxCharCount_m14019_MethodInfo, L_16, L_17);
		V_4 = ((int32_t)((int32_t)L_18+(int32_t)1));
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		if ((((int32_t)L_19) == ((int32_t)L_20)))
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = V_4;
		__this->___decoded_buffer_2 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, L_21));
	}

IL_0097:
	{
		Encoding_t1486 * L_22 = (__this->___encoding_7);
		NullCheck(L_22);
		Decoder_t1950 * L_23 = (Decoder_t1950 *)VirtFuncInvoker0< Decoder_t1950 * >::Invoke(&Encoding_GetDecoder_m12956_MethodInfo, L_22);
		__this->___decoder_8 = L_23;
	}

IL_00a8:
	{
		__this->___do_checks_6 = 0;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		V_0 = ((int32_t)((int32_t)L_24-(int32_t)L_25));
	}

IL_00b3:
	{
		int32_t L_26 = (__this->___decoded_count_3);
		Decoder_t1950 * L_27 = (__this->___decoder_8);
		ByteU5BU5D_t669* L_28 = (__this->___input_buffer_1);
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		CharU5BU5D_t395* L_31 = (__this->___decoded_buffer_2);
		NullCheck(L_27);
		int32_t L_32 = (int32_t)VirtFuncInvoker5< int32_t, ByteU5BU5D_t669*, int32_t, int32_t, CharU5BU5D_t395*, int32_t >::Invoke(&Decoder_GetChars_m14018_MethodInfo, L_27, L_28, L_29, L_30, L_31, 0);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_26+(int32_t)L_32));
		V_1 = 0;
		int32_t L_33 = (__this->___decoded_count_3);
		if (!L_33)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_34 = (__this->___decoded_count_3);
		return L_34;
	}
}
// System.Int32 System.IO.StreamReader::Peek()
extern MethodInfo StreamReader_Peek_m11502_MethodInfo;
extern "C" int32_t StreamReader_Peek_m11502 (StreamReader_t1958 * __this, MethodInfo* method)
{
	{
		Stream_t1719 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m13806(L_1, (String_t*) &_stringLiteral1869, (String_t*) &_stringLiteral1870, /*hidden argument*/&ObjectDisposedException__ctor_m13806_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m11501(__this, /*hidden argument*/&StreamReader_ReadBuffer_m11501_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t395* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_7));
	}
}
// System.Int32 System.IO.StreamReader::Read()
extern MethodInfo StreamReader_Read_m11503_MethodInfo;
extern "C" int32_t StreamReader_Read_m11503 (StreamReader_t1958 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Stream_t1719 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m13806(L_1, (String_t*) &_stringLiteral1869, (String_t*) &_stringLiteral1870, /*hidden argument*/&ObjectDisposedException__ctor_m13806_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m11501(__this, /*hidden argument*/&StreamReader_ReadBuffer_m11501_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (-1);
	}

IL_0030:
	{
		CharU5BU5D_t395* L_5 = (__this->___decoded_buffer_2);
		int32_t L_6 = (__this->___pos_4);
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___pos_4 = ((int32_t)((int32_t)L_7+(int32_t)1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_8);
		int32_t L_9 = L_8;
		return (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_5, L_9));
	}
}
// System.Int32 System.IO.StreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t StreamReader_Read_m11504 (StreamReader_t1958 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B16_0 = 0;
	{
		Stream_t1719 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m13806(L_1, (String_t*) &_stringLiteral1869, (String_t*) &_stringLiteral1870, /*hidden argument*/&ObjectDisposedException__ctor_m13806_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		CharU5BU5D_t395* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t1172 * L_3 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_3, (String_t*) &_stringLiteral1227, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0026:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_5 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_5, (String_t*) &_stringLiteral573, (String_t*) &_stringLiteral984, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003a:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_7 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_7, (String_t*) &_stringLiteral662, (String_t*) &_stringLiteral984, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_004e:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t395* L_9 = ___buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_0061;
		}
	}
	{
		ArgumentException_t521 * L_11 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_11, (String_t*) &_stringLiteral1871, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_0061:
	{
		V_0 = 0;
		goto IL_00d9;
	}

IL_0068:
	{
		int32_t L_12 = (__this->___pos_4);
		int32_t L_13 = (__this->___decoded_count_3);
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_14 = StreamReader_ReadBuffer_m11501(__this, /*hidden argument*/&StreamReader_ReadBuffer_m11501_MethodInfo);
		if (L_14)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_16 = V_0;
		G_B16_0 = L_16;
		goto IL_0086;
	}

IL_0085:
	{
		G_B16_0 = 0;
	}

IL_0086:
	{
		return G_B16_0;
	}

IL_0087:
	{
		int32_t L_17 = (__this->___decoded_count_3);
		int32_t L_18 = (__this->___pos_4);
		int32_t L_19 = ___count;
		int32_t L_20 = Math_Min_m13610(NULL /*static, unused*/, ((int32_t)((int32_t)L_17-(int32_t)L_18)), L_19, /*hidden argument*/&Math_Min_m13610_MethodInfo);
		V_1 = L_20;
		CharU5BU5D_t395* L_21 = (__this->___decoded_buffer_2);
		int32_t L_22 = (__this->___pos_4);
		CharU5BU5D_t395* L_23 = ___buffer;
		int32_t L_24 = ___index;
		int32_t L_25 = V_1;
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_21, L_22, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/&Array_Copy_m10283_MethodInfo);
		int32_t L_26 = (__this->___pos_4);
		int32_t L_27 = V_1;
		__this->___pos_4 = ((int32_t)((int32_t)L_26+(int32_t)L_27));
		int32_t L_28 = ___index;
		int32_t L_29 = V_1;
		___index = ((int32_t)((int32_t)L_28+(int32_t)L_29));
		int32_t L_30 = ___count;
		int32_t L_31 = V_1;
		___count = ((int32_t)((int32_t)L_30-(int32_t)L_31));
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		V_0 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
		bool L_34 = (__this->___mayBlock_10);
		if (!L_34)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_00dd;
	}

IL_00d9:
	{
		int32_t L_35 = ___count;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_00dd:
	{
		int32_t L_36 = V_0;
		return L_36;
	}
}
// System.Int32 System.IO.StreamReader::FindNextEOL()
extern "C" int32_t StreamReader_FindNextEOL_m11505 (StreamReader_t1958 * __this, MethodInfo* method)
{
	uint16_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		goto IL_008e;
	}

IL_0007:
	{
		CharU5BU5D_t395* L_0 = (__this->___decoded_buffer_2);
		int32_t L_1 = (__this->___pos_4);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		V_0 = (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_0, L_2));
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_4 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_4+(int32_t)1));
		bool L_5 = (__this->___foundCR_13);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_6 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_6-(int32_t)2));
		goto IL_0042;
	}

IL_003a:
	{
		int32_t L_7 = (__this->___pos_4);
		G_B5_0 = ((int32_t)((int32_t)L_7-(int32_t)1));
	}

IL_0042:
	{
		V_1 = G_B5_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 0;
	}

IL_0049:
	{
		__this->___foundCR_13 = 0;
		int32_t L_9 = V_1;
		return L_9;
	}

IL_0052:
	{
		bool L_10 = (__this->___foundCR_13);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		__this->___foundCR_13 = 0;
		int32_t L_11 = (__this->___pos_4);
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		return ((int32_t)-2);
	}

IL_006c:
	{
		int32_t L_12 = (__this->___pos_4);
		return ((int32_t)((int32_t)L_12-(int32_t)1));
	}

IL_0075:
	{
		uint16_t L_13 = V_0;
		__this->___foundCR_13 = ((((int32_t)L_13) == ((int32_t)((int32_t)13)))? 1 : 0);
		int32_t L_14 = (__this->___pos_4);
		__this->___pos_4 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_008e:
	{
		int32_t L_15 = (__this->___pos_4);
		int32_t L_16 = (__this->___decoded_count_3);
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0007;
		}
	}
	{
		return (-1);
	}
}
// System.String System.IO.StreamReader::ReadLine()
extern MethodInfo StreamReader_ReadLine_m11506_MethodInfo;
extern "C" String_t* StreamReader_ReadLine_m11506 (StreamReader_t1958 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringBuilder_t480 * V_2 = {0};
	StringBuilder_t480 * V_3 = {0};
	{
		Stream_t1719 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m13806(L_1, (String_t*) &_stringLiteral1869, (String_t*) &_stringLiteral1870, /*hidden argument*/&ObjectDisposedException__ctor_m13806_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___pos_4);
		int32_t L_3 = (__this->___decoded_count_3);
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = StreamReader_ReadBuffer_m11501(__this, /*hidden argument*/&StreamReader_ReadBuffer_m11501_MethodInfo);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0030:
	{
		int32_t L_5 = (__this->___pos_4);
		V_0 = L_5;
		int32_t L_6 = StreamReader_FindNextEOL_m11505(__this, /*hidden argument*/&StreamReader_FindNextEOL_m11505_MethodInfo);
		V_1 = L_6;
		int32_t L_7 = V_1;
		int32_t L_8 = (__this->___decoded_count_3);
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		CharU5BU5D_t395* L_11 = (__this->___decoded_buffer_2);
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_15 = (String_t*)il2cpp_codegen_object_new ((&String_t_il2cpp_TypeInfo));
		L_15 = String_CreateString_m9961(L_15, L_11, L_12, ((int32_t)((int32_t)L_13-(int32_t)L_14)), /*hidden argument*/&String__ctor_m9892_MethodInfo);
		return L_15;
	}

IL_005b:
	{
		int32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t480 * L_17 = (__this->___line_builder_11);
		StringBuilder_t480 * L_18 = (__this->___line_builder_11);
		NullCheck(L_18);
		int32_t L_19 = StringBuilder_get_Length_m8158(L_18, /*hidden argument*/&StringBuilder_get_Length_m8158_MethodInfo);
		NullCheck(L_17);
		String_t* L_20 = StringBuilder_ToString_m12994(L_17, 0, L_19, /*hidden argument*/&StringBuilder_ToString_m12994_MethodInfo);
		return L_20;
	}

IL_0078:
	{
		StringBuilder_t480 * L_21 = (__this->___line_builder_11);
		if (L_21)
		{
			goto IL_008d;
		}
	}
	{
		StringBuilder_t480 * L_22 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m2206(L_22, /*hidden argument*/&StringBuilder__ctor_m2206_MethodInfo);
		__this->___line_builder_11 = L_22;
		goto IL_0099;
	}

IL_008d:
	{
		StringBuilder_t480 * L_23 = (__this->___line_builder_11);
		NullCheck(L_23);
		StringBuilder_set_Length_m8259(L_23, 0, /*hidden argument*/&StringBuilder_set_Length_m8259_MethodInfo);
	}

IL_0099:
	{
		bool L_24 = (__this->___foundCR_13);
		if (!L_24)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_25 = (__this->___decoded_count_3);
		__this->___decoded_count_3 = ((int32_t)((int32_t)L_25-(int32_t)1));
	}

IL_00af:
	{
		StringBuilder_t480 * L_26 = (__this->___line_builder_11);
		CharU5BU5D_t395* L_27 = (__this->___decoded_buffer_2);
		int32_t L_28 = V_0;
		int32_t L_29 = (__this->___decoded_count_3);
		int32_t L_30 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m12999(L_26, L_27, L_28, ((int32_t)((int32_t)L_29-(int32_t)L_30)), /*hidden argument*/&StringBuilder_Append_m12999_MethodInfo);
		int32_t L_31 = StreamReader_ReadBuffer_m11501(__this, /*hidden argument*/&StreamReader_ReadBuffer_m11501_MethodInfo);
		if (L_31)
		{
			goto IL_0118;
		}
	}
	{
		StringBuilder_t480 * L_32 = (__this->___line_builder_11);
		NullCheck(L_32);
		int32_t L_33 = StringBuilder_get_Capacity_m12990(L_32, /*hidden argument*/&StringBuilder_get_Capacity_m12990_MethodInfo);
		if ((((int32_t)L_33) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t480 * L_34 = (__this->___line_builder_11);
		V_2 = L_34;
		__this->___line_builder_11 = (StringBuilder_t480 *)NULL;
		StringBuilder_t480 * L_35 = V_2;
		StringBuilder_t480 * L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37 = StringBuilder_get_Length_m8158(L_36, /*hidden argument*/&StringBuilder_get_Length_m8158_MethodInfo);
		NullCheck(L_35);
		String_t* L_38 = StringBuilder_ToString_m12994(L_35, 0, L_37, /*hidden argument*/&StringBuilder_ToString_m12994_MethodInfo);
		return L_38;
	}

IL_0100:
	{
		StringBuilder_t480 * L_39 = (__this->___line_builder_11);
		StringBuilder_t480 * L_40 = (__this->___line_builder_11);
		NullCheck(L_40);
		int32_t L_41 = StringBuilder_get_Length_m8158(L_40, /*hidden argument*/&StringBuilder_get_Length_m8158_MethodInfo);
		NullCheck(L_39);
		String_t* L_42 = StringBuilder_ToString_m12994(L_39, 0, L_41, /*hidden argument*/&StringBuilder_ToString_m12994_MethodInfo);
		return L_42;
	}

IL_0118:
	{
		int32_t L_43 = (__this->___pos_4);
		V_0 = L_43;
		int32_t L_44 = StreamReader_FindNextEOL_m11505(__this, /*hidden argument*/&StreamReader_FindNextEOL_m11505_MethodInfo);
		V_1 = L_44;
		int32_t L_45 = V_1;
		int32_t L_46 = (__this->___decoded_count_3);
		if ((((int32_t)L_45) >= ((int32_t)L_46)))
		{
			goto IL_018f;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = V_0;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_018f;
		}
	}
	{
		StringBuilder_t480 * L_49 = (__this->___line_builder_11);
		CharU5BU5D_t395* L_50 = (__this->___decoded_buffer_2);
		int32_t L_51 = V_0;
		int32_t L_52 = V_1;
		int32_t L_53 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m12999(L_49, L_50, L_51, ((int32_t)((int32_t)L_52-(int32_t)L_53)), /*hidden argument*/&StringBuilder_Append_m12999_MethodInfo);
		StringBuilder_t480 * L_54 = (__this->___line_builder_11);
		NullCheck(L_54);
		int32_t L_55 = StringBuilder_get_Capacity_m12990(L_54, /*hidden argument*/&StringBuilder_get_Capacity_m12990_MethodInfo);
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)32768))))
		{
			goto IL_0177;
		}
	}
	{
		StringBuilder_t480 * L_56 = (__this->___line_builder_11);
		V_3 = L_56;
		__this->___line_builder_11 = (StringBuilder_t480 *)NULL;
		StringBuilder_t480 * L_57 = V_3;
		StringBuilder_t480 * L_58 = V_3;
		NullCheck(L_58);
		int32_t L_59 = StringBuilder_get_Length_m8158(L_58, /*hidden argument*/&StringBuilder_get_Length_m8158_MethodInfo);
		NullCheck(L_57);
		String_t* L_60 = StringBuilder_ToString_m12994(L_57, 0, L_59, /*hidden argument*/&StringBuilder_ToString_m12994_MethodInfo);
		return L_60;
	}

IL_0177:
	{
		StringBuilder_t480 * L_61 = (__this->___line_builder_11);
		StringBuilder_t480 * L_62 = (__this->___line_builder_11);
		NullCheck(L_62);
		int32_t L_63 = StringBuilder_get_Length_m8158(L_62, /*hidden argument*/&StringBuilder_get_Length_m8158_MethodInfo);
		NullCheck(L_61);
		String_t* L_64 = StringBuilder_ToString_m12994(L_61, 0, L_63, /*hidden argument*/&StringBuilder_ToString_m12994_MethodInfo);
		return L_64;
	}

IL_018f:
	{
		int32_t L_65 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_01ac;
		}
	}
	{
		StringBuilder_t480 * L_66 = (__this->___line_builder_11);
		StringBuilder_t480 * L_67 = (__this->___line_builder_11);
		NullCheck(L_67);
		int32_t L_68 = StringBuilder_get_Length_m8158(L_67, /*hidden argument*/&StringBuilder_get_Length_m8158_MethodInfo);
		NullCheck(L_66);
		String_t* L_69 = StringBuilder_ToString_m12994(L_66, 0, L_68, /*hidden argument*/&StringBuilder_ToString_m12994_MethodInfo);
		return L_69;
	}

IL_01ac:
	{
		goto IL_0099;
	}
}
// System.String System.IO.StreamReader::ReadToEnd()
extern MethodInfo StreamReader_ReadToEnd_m11507_MethodInfo;
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" String_t* StreamReader_ReadToEnd_m11507 (StreamReader_t1958 * __this, MethodInfo* method)
{
	static bool StreamReader_ReadToEnd_m11507_init;
	if (!StreamReader_ReadToEnd_m11507_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		StreamReader_ReadToEnd_m11507_init = true;
	}
	StringBuilder_t480 * V_0 = {0};
	int32_t V_1 = 0;
	CharU5BU5D_t395* V_2 = {0};
	int32_t V_3 = 0;
	{
		Stream_t1719 * L_0 = (__this->___base_stream_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m13806(L_1, (String_t*) &_stringLiteral1869, (String_t*) &_stringLiteral1870, /*hidden argument*/&ObjectDisposedException__ctor_m13806_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0018:
	{
		StringBuilder_t480 * L_2 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m2206(L_2, /*hidden argument*/&StringBuilder__ctor_m2206_MethodInfo);
		V_0 = L_2;
		CharU5BU5D_t395* L_3 = (__this->___decoded_buffer_2);
		NullCheck(L_3);
		V_1 = (((int32_t)(((Array_t *)L_3)->max_length)));
		int32_t L_4 = V_1;
		V_2 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, L_4));
		goto IL_003a;
	}

IL_0030:
	{
		StringBuilder_t480 * L_5 = V_0;
		CharU5BU5D_t395* L_6 = V_2;
		int32_t L_7 = V_3;
		NullCheck(L_5);
		StringBuilder_Append_m12999(L_5, L_6, 0, L_7, /*hidden argument*/&StringBuilder_Append_m12999_MethodInfo);
	}

IL_003a:
	{
		CharU5BU5D_t395* L_8 = V_2;
		int32_t L_9 = V_1;
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t395*, int32_t, int32_t >::Invoke(&StreamReader_Read_m11504_MethodInfo, __this, L_8, 0, L_9);
		int32_t L_11 = L_10;
		V_3 = L_11;
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		StringBuilder_t480 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_12);
		return L_13;
	}
}
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StreamWriter_t1976_il2cpp_TypeInfo;
// System.IO.StreamWriter
#include "mscorlib_System_IO_StreamWriterMethodDeclarations.h"

extern TypeInfo Int64_t1166_il2cpp_TypeInfo;
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriterMethodDeclarations.h"
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
extern MethodInfo StreamWriter_Flush_m11514_MethodInfo;
extern MethodInfo StreamWriter__ctor_m11509_MethodInfo;
extern MethodInfo TextWriter__ctor_m11555_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m7993_MethodInfo;
extern MethodInfo StreamWriter_Initialize_m11511_MethodInfo;
extern MethodInfo Math_Max_m9460_MethodInfo;
extern MethodInfo Encoding_GetMaxByteCount_m14020_MethodInfo;
extern MethodInfo Stream_get_CanSeek_m9550_MethodInfo;
extern MethodInfo Stream_get_Position_m14021_MethodInfo;
extern MethodInfo ObjectDisposedException__ctor_m9468_MethodInfo;
extern MethodInfo StreamWriter_Decode_m11516_MethodInfo;
extern MethodInfo StreamWriter_FlushBytes_m11515_MethodInfo;
extern MethodInfo Stream_Flush_m9587_MethodInfo;
extern MethodInfo Encoding_GetBytes_m14022_MethodInfo;
extern MethodInfo StreamWriter_LowLevelWrite_m11518_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m8065_MethodInfo;
extern MethodInfo StreamWriter_LowLevelWrite_m11519_MethodInfo;
extern MethodInfo StreamWriter_Dispose_m11513_MethodInfo;
extern MethodInfo Object_Finalize_m710_MethodInfo;


// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo StreamWriter__ctor_m11508_MethodInfo;
extern "C" void StreamWriter__ctor_m11508 (StreamWriter_t1976 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1719 * L_0 = ___stream;
		Encoding_t1486 * L_1 = ___encoding;
		StreamWriter__ctor_m11509(__this, L_0, L_1, ((int32_t)1024), /*hidden argument*/&StreamWriter__ctor_m11509_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m11509 (StreamWriter_t1976 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, int32_t ___bufferSize, MethodInfo* method)
{
	{
		TextWriter__ctor_m11555(__this, /*hidden argument*/&TextWriter__ctor_m11555_MethodInfo);
		Stream_t1719 * L_0 = ___stream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1867, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		Encoding_t1486 * L_2 = ___encoding;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1172 * L_3 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_3, (String_t*) &_stringLiteral1865, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___bufferSize;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_5 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_5, (String_t*) &_stringLiteral1781, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0031:
	{
		Stream_t1719 * L_6 = ___stream;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanWrite_m9568_MethodInfo, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_t521 * L_8 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_8, (String_t*) &_stringLiteral1872, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0044:
	{
		Stream_t1719 * L_9 = ___stream;
		__this->___internalStream_3 = L_9;
		Encoding_t1486 * L_10 = ___encoding;
		int32_t L_11 = ___bufferSize;
		StreamWriter_Initialize_m11511(__this, L_10, L_11, /*hidden argument*/&StreamWriter_Initialize_m11511_MethodInfo);
		return;
	}
}
// System.Void System.IO.StreamWriter::.cctor()
extern MethodInfo StreamWriter__cctor_m11510_MethodInfo;
extern "C" void StreamWriter__cctor_m11510 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Stream_t1719_il2cpp_TypeInfo));
		Stream_t1719 * L_0 = ((Stream_t1719_StaticFields*)InitializedTypeInfo(&Stream_t1719_il2cpp_TypeInfo)->static_fields)->___Null_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t1486_il2cpp_TypeInfo));
		Encoding_t1486 * L_1 = Encoding_get_UTF8Unmarked_m12966(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8Unmarked_m12966_MethodInfo);
		StreamWriter_t1976 * L_2 = (StreamWriter_t1976 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StreamWriter_t1976_il2cpp_TypeInfo));
		StreamWriter__ctor_m11509(L_2, L_0, L_1, 1, /*hidden argument*/&StreamWriter__ctor_m11509_MethodInfo);
		((StreamWriter_t1976_StaticFields*)InitializedTypeInfo(&StreamWriter_t1976_il2cpp_TypeInfo)->static_fields)->___Null_11 = L_2;
		return;
	}
}
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" void StreamWriter_Initialize_m11511 (StreamWriter_t1976 * __this, Encoding_t1486 * ___encoding, int32_t ___bufferSize, MethodInfo* method)
{
	static bool StreamWriter_Initialize_m11511_init;
	if (!StreamWriter_Initialize_m11511_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		StreamWriter_Initialize_m11511_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Encoding_t1486 * L_0 = ___encoding;
		__this->___internalEncoding_2 = L_0;
		int32_t L_1 = 0;
		V_1 = L_1;
		__this->___byte_pos_6 = L_1;
		int32_t L_2 = V_1;
		__this->___decode_pos_8 = L_2;
		int32_t L_3 = ___bufferSize;
		int32_t L_4 = Math_Max_m9460(NULL /*static, unused*/, L_3, ((int32_t)256), /*hidden argument*/&Math_Max_m9460_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->___decode_buf_7 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, L_5));
		Encoding_t1486 * L_6 = ___encoding;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = (int32_t)VirtFuncInvoker1< int32_t, int32_t >::Invoke(&Encoding_GetMaxByteCount_m14020_MethodInfo, L_6, L_7);
		__this->___byte_buf_5 = ((ByteU5BU5D_t669*)SZArrayNew(ByteU5BU5D_t669_il2cpp_TypeInfo_var, L_8));
		Stream_t1719 * L_9 = (__this->___internalStream_3);
		NullCheck(L_9);
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&Stream_get_CanSeek_m9550_MethodInfo, L_9);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		Stream_t1719 * L_11 = (__this->___internalStream_3);
		NullCheck(L_11);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&Stream_get_Position_m14021_MethodInfo, L_11);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)0)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->___preamble_done_10 = 1;
	}

IL_0064:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern MethodInfo StreamWriter_set_AutoFlush_m11512_MethodInfo;
extern "C" void StreamWriter_set_AutoFlush_m11512 (StreamWriter_t1976 * __this, bool ___value, MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___iflush_4 = L_0;
		bool L_1 = (__this->___iflush_4);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m11514_MethodInfo, __this);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m11513 (StreamWriter_t1976 * __this, bool ___disposing, MethodInfo* method)
{
	Exception_t154 * V_0 = {0};
	Exception_t154 * V_1 = {0};
	Exception_t154 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t154 *)NULL;
		bool L_0 = (__this->___DisposedAlready_9);
		if (L_0)
		{
			goto IL_003e;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Stream_t1719 * L_2 = (__this->___internalStream_3);
		if (!L_2)
		{
			goto IL_003e;
		}
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m11514_MethodInfo, __this);
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_001d;
		throw e;
	}

CATCH_001d:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t154 *)__exception_local);
		Exception_t154 * L_3 = V_1;
		V_0 = L_3;
		goto IL_0022;
	} // end catch (depth: 1)

IL_0022:
	{
		__this->___DisposedAlready_9 = 1;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		Stream_t1719 * L_4 = (__this->___internalStream_3);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(&Stream_Close_m9506_MethodInfo, L_4);
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0036;
		throw e;
	}

CATCH_0036:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t154 *)__exception_local);
			Exception_t154 * L_5 = V_0;
			if (L_5)
			{
				goto IL_003c;
			}
		}

IL_003a:
		{
			Exception_t154 * L_6 = V_2;
			V_0 = L_6;
		}

IL_003c:
		{
			goto IL_003e;
		}
	} // end catch (depth: 1)

IL_003e:
	{
		__this->___internalStream_3 = (Stream_t1719 *)NULL;
		__this->___byte_buf_5 = (ByteU5BU5D_t669*)NULL;
		__this->___internalEncoding_2 = (Encoding_t1486 *)NULL;
		__this->___decode_buf_7 = (CharU5BU5D_t395*)NULL;
		Exception_t154 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		Exception_t154 * L_8 = V_0;
		il2cpp_codegen_raise_exception(L_8);
	}

IL_005f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m11514 (StreamWriter_t1976 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_1, (String_t*) &_stringLiteral1873, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		StreamWriter_Decode_m11516(__this, /*hidden argument*/&StreamWriter_Decode_m11516_MethodInfo);
		int32_t L_2 = (__this->___byte_pos_6);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		StreamWriter_FlushBytes_m11515(__this, /*hidden argument*/&StreamWriter_FlushBytes_m11515_MethodInfo);
		Stream_t1719 * L_3 = (__this->___internalStream_3);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(&Stream_Flush_m9587_MethodInfo, L_3);
	}

IL_0033:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m11515 (StreamWriter_t1976 * __this, MethodInfo* method)
{
	ByteU5BU5D_t669* V_0 = {0};
	{
		bool L_0 = (__this->___preamble_done_10);
		if (L_0)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_1 = (__this->___byte_pos_6);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Encoding_t1486 * L_2 = (__this->___internalEncoding_2);
		NullCheck(L_2);
		ByteU5BU5D_t669* L_3 = (ByteU5BU5D_t669*)VirtFuncInvoker0< ByteU5BU5D_t669* >::Invoke(&Encoding_GetPreamble_m12961_MethodInfo, L_2);
		V_0 = L_3;
		ByteU5BU5D_t669* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_4)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Stream_t1719 * L_5 = (__this->___internalStream_3);
		ByteU5BU5D_t669* L_6 = V_0;
		ByteU5BU5D_t669* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Write_m9541_MethodInfo, L_5, L_6, 0, (((int32_t)(((Array_t *)L_7)->max_length))));
	}

IL_0033:
	{
		__this->___preamble_done_10 = 1;
	}

IL_003a:
	{
		Stream_t1719 * L_8 = (__this->___internalStream_3);
		ByteU5BU5D_t669* L_9 = (__this->___byte_buf_5);
		int32_t L_10 = (__this->___byte_pos_6);
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_t669*, int32_t, int32_t >::Invoke(&Stream_Write_m9541_MethodInfo, L_8, L_9, 0, L_10);
		__this->___byte_pos_6 = 0;
		return;
	}
}
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m11516 (StreamWriter_t1976 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (__this->___byte_pos_6);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		StreamWriter_FlushBytes_m11515(__this, /*hidden argument*/&StreamWriter_FlushBytes_m11515_MethodInfo);
	}

IL_000f:
	{
		int32_t L_1 = (__this->___decode_pos_8);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		Encoding_t1486 * L_2 = (__this->___internalEncoding_2);
		CharU5BU5D_t395* L_3 = (__this->___decode_buf_7);
		int32_t L_4 = (__this->___decode_pos_8);
		ByteU5BU5D_t669* L_5 = (__this->___byte_buf_5);
		int32_t L_6 = (__this->___byte_pos_6);
		NullCheck(L_2);
		int32_t L_7 = (int32_t)VirtFuncInvoker5< int32_t, CharU5BU5D_t395*, int32_t, int32_t, ByteU5BU5D_t669*, int32_t >::Invoke(&Encoding_GetBytes_m14022_MethodInfo, L_2, L_3, 0, L_4, L_5, L_6);
		V_0 = L_7;
		int32_t L_8 = (__this->___byte_pos_6);
		int32_t L_9 = V_0;
		__this->___byte_pos_6 = ((int32_t)((int32_t)L_8+(int32_t)L_9));
		__this->___decode_pos_8 = 0;
	}

IL_0052:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo StreamWriter_Write_m11517_MethodInfo;
extern "C" void StreamWriter_Write_m11517 (StreamWriter_t1976 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_1, (String_t*) &_stringLiteral1873, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		CharU5BU5D_t395* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t1172 * L_3 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_3, (String_t*) &_stringLiteral1227, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0021:
	{
		int32_t L_4 = ___index;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_5 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_5, (String_t*) &_stringLiteral573, (String_t*) &_stringLiteral984, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0035:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_7 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_7, (String_t*) &_stringLiteral662, (String_t*) &_stringLiteral984, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0049:
	{
		int32_t L_8 = ___index;
		CharU5BU5D_t395* L_9 = ___buffer;
		NullCheck(L_9);
		int32_t L_10 = ___count;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)L_10)))))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t521 * L_11 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_11, (String_t*) &_stringLiteral1871, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_005c:
	{
		CharU5BU5D_t395* L_12 = ___buffer;
		int32_t L_13 = ___index;
		int32_t L_14 = ___count;
		StreamWriter_LowLevelWrite_m11518(__this, L_12, L_13, L_14, /*hidden argument*/&StreamWriter_LowLevelWrite_m11518_MethodInfo);
		bool L_15 = (__this->___iflush_4);
		if (!L_15)
		{
			goto IL_0073;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m11514_MethodInfo, __this);
	}

IL_0073:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m11518 (StreamWriter_t1976 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0060;
	}

IL_0002:
	{
		CharU5BU5D_t395* L_0 = (__this->___decode_buf_7);
		NullCheck(L_0);
		int32_t L_1 = (__this->___decode_pos_8);
		V_0 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_0)->max_length)))-(int32_t)L_1));
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		StreamWriter_Decode_m11516(__this, /*hidden argument*/&StreamWriter_Decode_m11516_MethodInfo);
		CharU5BU5D_t395* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		V_0 = (((int32_t)(((Array_t *)L_3)->max_length)));
	}

IL_0024:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___count;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = ___count;
		V_0 = L_6;
	}

IL_002a:
	{
		CharU5BU5D_t395* L_7 = ___buffer;
		int32_t L_8 = ___index;
		CharU5BU5D_t395* L_9 = (__this->___decode_buf_7);
		int32_t L_10 = (__this->___decode_pos_8);
		int32_t L_11 = V_0;
		Buffer_BlockCopy_m8065(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, ((int32_t)((int32_t)L_8*(int32_t)2)), (Array_t *)(Array_t *)L_9, ((int32_t)((int32_t)L_10*(int32_t)2)), ((int32_t)((int32_t)L_11*(int32_t)2)), /*hidden argument*/&Buffer_BlockCopy_m8065_MethodInfo);
		int32_t L_12 = ___count;
		int32_t L_13 = V_0;
		___count = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		int32_t L_14 = ___index;
		int32_t L_15 = V_0;
		___index = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = (__this->___decode_pos_8);
		int32_t L_17 = V_0;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_16+(int32_t)L_17));
	}

IL_0060:
	{
		int32_t L_18 = ___count;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m11519 (StreamWriter_t1976 * __this, String_t* ___s, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___s;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m694(L_0, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		V_0 = L_1;
		V_1 = 0;
		goto IL_006d;
	}

IL_000b:
	{
		CharU5BU5D_t395* L_2 = (__this->___decode_buf_7);
		NullCheck(L_2);
		int32_t L_3 = (__this->___decode_pos_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)L_3));
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		StreamWriter_Decode_m11516(__this, /*hidden argument*/&StreamWriter_Decode_m11516_MethodInfo);
		CharU5BU5D_t395* L_5 = (__this->___decode_buf_7);
		NullCheck(L_5);
		V_2 = (((int32_t)(((Array_t *)L_5)->max_length)));
	}

IL_002d:
	{
		int32_t L_6 = V_2;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_8 = V_0;
		V_2 = L_8;
	}

IL_0033:
	{
		V_3 = 0;
		goto IL_0053;
	}

IL_0037:
	{
		CharU5BU5D_t395* L_9 = (__this->___decode_buf_7);
		int32_t L_10 = V_3;
		int32_t L_11 = (__this->___decode_pos_8);
		String_t* L_12 = ___s;
		int32_t L_13 = V_3;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		uint16_t L_15 = String_get_Chars_m2541(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_14)), /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_9, ((int32_t)((int32_t)L_10+(int32_t)L_11)))) = (uint16_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_2;
		V_0 = ((int32_t)((int32_t)L_19-(int32_t)L_20));
		int32_t L_21 = V_1;
		int32_t L_22 = V_2;
		V_1 = ((int32_t)((int32_t)L_21+(int32_t)L_22));
		int32_t L_23 = (__this->___decode_pos_8);
		int32_t L_24 = V_2;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_23+(int32_t)L_24));
	}

IL_006d:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char)
extern MethodInfo StreamWriter_Write_m11520_MethodInfo;
extern "C" void StreamWriter_Write_m11520 (StreamWriter_t1976 * __this, uint16_t ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_1, (String_t*) &_stringLiteral1873, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		int32_t L_2 = (__this->___decode_pos_8);
		CharU5BU5D_t395* L_3 = (__this->___decode_buf_7);
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)(((Array_t *)L_3)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		StreamWriter_Decode_m11516(__this, /*hidden argument*/&StreamWriter_Decode_m11516_MethodInfo);
	}

IL_0029:
	{
		CharU5BU5D_t395* L_4 = (__this->___decode_buf_7);
		int32_t L_5 = (__this->___decode_pos_8);
		int32_t L_6 = L_5;
		V_0 = L_6;
		__this->___decode_pos_8 = ((int32_t)((int32_t)L_6+(int32_t)1));
		int32_t L_7 = V_0;
		uint16_t L_8 = ___value;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_7);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_4, L_7)) = (uint16_t)L_8;
		bool L_9 = (__this->___iflush_4);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m11514_MethodInfo, __this);
	}

IL_0050:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern MethodInfo StreamWriter_Write_m11521_MethodInfo;
extern "C" void StreamWriter_Write_m11521 (StreamWriter_t1976 * __this, CharU5BU5D_t395* ___buffer, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_1, (String_t*) &_stringLiteral1873, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		CharU5BU5D_t395* L_2 = ___buffer;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		CharU5BU5D_t395* L_3 = ___buffer;
		CharU5BU5D_t395* L_4 = ___buffer;
		NullCheck(L_4);
		StreamWriter_LowLevelWrite_m11518(__this, L_3, 0, (((int32_t)(((Array_t *)L_4)->max_length))), /*hidden argument*/&StreamWriter_LowLevelWrite_m11518_MethodInfo);
	}

IL_0021:
	{
		bool L_5 = (__this->___iflush_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m11514_MethodInfo, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Write(System.String)
extern MethodInfo StreamWriter_Write_m11522_MethodInfo;
extern "C" void StreamWriter_Write_m11522 (StreamWriter_t1976 * __this, String_t* ___value, MethodInfo* method)
{
	{
		bool L_0 = (__this->___DisposedAlready_9);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t1780 * L_1 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m9468(L_1, (String_t*) &_stringLiteral1873, /*hidden argument*/&ObjectDisposedException__ctor_m9468_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		String_t* L_2 = ___value;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___value;
		StreamWriter_LowLevelWrite_m11519(__this, L_3, /*hidden argument*/&StreamWriter_LowLevelWrite_m11519_MethodInfo);
	}

IL_001d:
	{
		bool L_4 = (__this->___iflush_4);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		VirtActionInvoker0::Invoke(&StreamWriter_Flush_m11514_MethodInfo, __this);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.IO.StreamWriter::Close()
extern MethodInfo StreamWriter_Close_m11523_MethodInfo;
extern "C" void StreamWriter_Close_m11523 (StreamWriter_t1976 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&StreamWriter_Dispose_m11513_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.StreamWriter::Finalize()
extern MethodInfo StreamWriter_Finalize_m11524_MethodInfo;
extern "C" void StreamWriter_Finalize_m11524 (StreamWriter_t1976 * __this, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(&StreamWriter_Dispose_m11513_MethodInfo, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m710(__this, /*hidden argument*/&Object_Finalize_m710_MethodInfo);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0010:
	{
		return;
	}
}
// System.IO.StringReader
#include "mscorlib_System_IO_StringReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StringReader_t1977_il2cpp_TypeInfo;
// System.IO.StringReader
#include "mscorlib_System_IO_StringReaderMethodDeclarations.h"

extern MethodInfo StringReader_CheckObjectDisposedException_m11532_MethodInfo;
extern MethodInfo ArgumentException__ctor_m13180_MethodInfo;
extern MethodInfo ArgumentOutOfRangeException__ctor_m8173_MethodInfo;
extern MethodInfo String_CopyTo_m9913_MethodInfo;
extern MethodInfo StringReader_ReadToEnd_m11531_MethodInfo;


// System.Void System.IO.StringReader::.ctor(System.String)
extern MethodInfo StringReader__ctor_m11525_MethodInfo;
extern "C" void StringReader__ctor_m11525 (StringReader_t1977 * __this, String_t* ___s, MethodInfo* method)
{
	{
		TextReader__ctor_m11535(__this, /*hidden argument*/&TextReader__ctor_m11535_MethodInfo);
		String_t* L_0 = ___s;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1254, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___s;
		__this->___source_1 = L_2;
		__this->___nextChar_2 = 0;
		String_t* L_3 = ___s;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m694(L_3, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		__this->___sourceLength_3 = L_4;
		return;
	}
}
// System.Void System.IO.StringReader::Dispose(System.Boolean)
extern MethodInfo StringReader_Dispose_m11526_MethodInfo;
extern "C" void StringReader_Dispose_m11526 (StringReader_t1977 * __this, bool ___disposing, MethodInfo* method)
{
	{
		__this->___source_1 = (String_t*)NULL;
		bool L_0 = ___disposing;
		TextReader_Dispose_m11538(__this, L_0, /*hidden argument*/&TextReader_Dispose_m11538_MethodInfo);
		return;
	}
}
// System.Int32 System.IO.StringReader::Peek()
extern MethodInfo StringReader_Peek_m11527_MethodInfo;
extern "C" int32_t StringReader_Peek_m11527 (StringReader_t1977 * __this, MethodInfo* method)
{
	{
		StringReader_CheckObjectDisposedException_m11532(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m11532_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_2);
		uint16_t L_4 = String_get_Chars_m2541(L_2, L_3, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		return L_4;
	}
}
// System.Int32 System.IO.StringReader::Read()
extern MethodInfo StringReader_Read_m11528_MethodInfo;
extern "C" int32_t StringReader_Read_m11528 (StringReader_t1977 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m11532(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m11532_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		int32_t L_1 = (__this->___sourceLength_3);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		return (-1);
	}

IL_0016:
	{
		String_t* L_2 = (__this->___source_1);
		int32_t L_3 = (__this->___nextChar_2);
		int32_t L_4 = L_3;
		V_0 = L_4;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_4+(int32_t)1));
		int32_t L_5 = V_0;
		NullCheck(L_2);
		uint16_t L_6 = String_get_Chars_m2541(L_2, L_5, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		return L_6;
	}
}
// System.Int32 System.IO.StringReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo StringReader_Read_m11529_MethodInfo;
extern "C" int32_t StringReader_Read_m11529 (StringReader_t1977 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		StringReader_CheckObjectDisposedException_m11532(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m11532_MethodInfo);
		CharU5BU5D_t395* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1227, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		CharU5BU5D_t395* L_2 = ___buffer;
		NullCheck(L_2);
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_2)->max_length)))-(int32_t)L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t521 * L_5 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m13180(L_5, /*hidden argument*/&ArgumentException__ctor_m13180_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		int32_t L_6 = ___index;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}

IL_002a:
	{
		ArgumentOutOfRangeException_t1472 * L_8 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m8173(L_8, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m8173_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0030:
	{
		int32_t L_9 = (__this->___nextChar_2);
		int32_t L_10 = (__this->___sourceLength_3);
		int32_t L_11 = ___count;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)L_10-(int32_t)L_11)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_12 = (__this->___sourceLength_3);
		int32_t L_13 = (__this->___nextChar_2);
		V_0 = ((int32_t)((int32_t)L_12-(int32_t)L_13));
		goto IL_0052;
	}

IL_0050:
	{
		int32_t L_14 = ___count;
		V_0 = L_14;
	}

IL_0052:
	{
		String_t* L_15 = (__this->___source_1);
		int32_t L_16 = (__this->___nextChar_2);
		CharU5BU5D_t395* L_17 = ___buffer;
		int32_t L_18 = ___index;
		int32_t L_19 = V_0;
		NullCheck(L_15);
		String_CopyTo_m9913(L_15, L_16, L_17, L_18, L_19, /*hidden argument*/&String_CopyTo_m9913_MethodInfo);
		int32_t L_20 = (__this->___nextChar_2);
		int32_t L_21 = V_0;
		__this->___nextChar_2 = ((int32_t)((int32_t)L_20+(int32_t)L_21));
		int32_t L_22 = V_0;
		return L_22;
	}
}
// System.String System.IO.StringReader::ReadLine()
extern MethodInfo StringReader_ReadLine_m11530_MethodInfo;
extern "C" String_t* StringReader_ReadLine_m11530 (StringReader_t1977 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = {0};
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	StringReader_t1977 * G_B14_1 = {0};
	int32_t G_B13_0 = 0;
	StringReader_t1977 * G_B13_1 = {0};
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	StringReader_t1977 * G_B15_2 = {0};
	{
		StringReader_CheckObjectDisposedException_m11532(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m11532_MethodInfo);
		int32_t L_0 = (__this->___nextChar_2);
		String_t* L_1 = (__this->___source_1);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m694(L_1, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001b;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_001b:
	{
		String_t* L_3 = (__this->___source_1);
		int32_t L_4 = (__this->___nextChar_2);
		NullCheck(L_3);
		int32_t L_5 = String_IndexOf_m8256(L_3, ((int32_t)13), L_4, /*hidden argument*/&String_IndexOf_m8256_MethodInfo);
		V_0 = L_5;
		String_t* L_6 = (__this->___source_1);
		int32_t L_7 = (__this->___nextChar_2);
		NullCheck(L_6);
		int32_t L_8 = String_IndexOf_m8256(L_6, ((int32_t)10), L_7, /*hidden argument*/&String_IndexOf_m8256_MethodInfo);
		V_1 = L_8;
		V_3 = 0;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringReader_ReadToEnd_m11531_MethodInfo, __this);
		return L_11;
	}

IL_0054:
	{
		int32_t L_12 = V_1;
		V_2 = L_12;
		goto IL_0070;
	}

IL_0058:
	{
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_0;
		V_2 = L_14;
		goto IL_0070;
	}

IL_0060:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_17 = V_1;
		G_B11_0 = L_17;
		goto IL_0068;
	}

IL_0067:
	{
		int32_t L_18 = V_0;
		G_B11_0 = L_18;
	}

IL_0068:
	{
		V_2 = G_B11_0;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		V_3 = ((((int32_t)((int32_t)((int32_t)L_19+(int32_t)1))) == ((int32_t)L_20))? 1 : 0);
	}

IL_0070:
	{
		String_t* L_21 = (__this->___source_1);
		int32_t L_22 = (__this->___nextChar_2);
		int32_t L_23 = V_2;
		int32_t L_24 = (__this->___nextChar_2);
		NullCheck(L_21);
		String_t* L_25 = String_Substring_m2542(L_21, L_22, ((int32_t)((int32_t)L_23-(int32_t)L_24)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_4 = L_25;
		int32_t L_26 = V_2;
		bool L_27 = V_3;
		G_B13_0 = L_26;
		G_B13_1 = __this;
		if (!L_27)
		{
			G_B14_0 = L_26;
			G_B14_1 = __this;
			goto IL_0093;
		}
	}
	{
		G_B15_0 = 2;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_0094;
	}

IL_0093:
	{
		G_B15_0 = 1;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_0094:
	{
		NullCheck(G_B15_2);
		G_B15_2->___nextChar_2 = ((int32_t)((int32_t)G_B15_1+(int32_t)G_B15_0));
		String_t* L_28 = V_4;
		return L_28;
	}
}
// System.String System.IO.StringReader::ReadToEnd()
extern "C" String_t* StringReader_ReadToEnd_m11531 (StringReader_t1977 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		StringReader_CheckObjectDisposedException_m11532(__this, /*hidden argument*/&StringReader_CheckObjectDisposedException_m11532_MethodInfo);
		String_t* L_0 = (__this->___source_1);
		int32_t L_1 = (__this->___nextChar_2);
		int32_t L_2 = (__this->___sourceLength_3);
		int32_t L_3 = (__this->___nextChar_2);
		NullCheck(L_0);
		String_t* L_4 = String_Substring_m2542(L_0, L_1, ((int32_t)((int32_t)L_2-(int32_t)L_3)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		V_0 = L_4;
		int32_t L_5 = (__this->___sourceLength_3);
		__this->___nextChar_2 = L_5;
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void System.IO.StringReader::CheckObjectDisposedException()
extern "C" void StringReader_CheckObjectDisposedException_m11532 (StringReader_t1977 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___source_1);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = Locale_GetText_m10406(NULL /*static, unused*/, (String_t*) &_stringLiteral1875, /*hidden argument*/&Locale_GetText_m10406_MethodInfo);
		ObjectDisposedException_t1780 * L_2 = (ObjectDisposedException_t1780 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ObjectDisposedException_t1780_il2cpp_TypeInfo));
		ObjectDisposedException__ctor_m13806(L_2, (String_t*) &_stringLiteral1874, L_1, /*hidden argument*/&ObjectDisposedException__ctor_m13806_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_001d:
	{
		return;
	}
}
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullTextReader_t1978_il2cpp_TypeInfo;
// System.IO.TextReader/NullTextReader
#include "mscorlib_System_IO_TextReader_NullTextReaderMethodDeclarations.h"



// System.Void System.IO.TextReader/NullTextReader::.ctor()
extern MethodInfo NullTextReader__ctor_m11533_MethodInfo;
extern "C" void NullTextReader__ctor_m11533 (NullTextReader_t1978 * __this, MethodInfo* method)
{
	{
		TextReader__ctor_m11535(__this, /*hidden argument*/&TextReader__ctor_m11535_MethodInfo);
		return;
	}
}
// System.String System.IO.TextReader/NullTextReader::ReadLine()
extern MethodInfo NullTextReader_ReadLine_m11534_MethodInfo;
extern "C" String_t* NullTextReader_ReadLine_m11534 (NullTextReader_t1978 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReader.h"
extern TypeInfo SynchronizedReader_t1979_il2cpp_TypeInfo;
// System.GC
#include "mscorlib_System_GCMethodDeclarations.h"
// System.IO.SynchronizedReader
#include "mscorlib_System_IO_SynchronizedReaderMethodDeclarations.h"
extern MethodInfo GC_SuppressFinalize_m9452_MethodInfo;
extern MethodInfo TextReader_Read_m11540_MethodInfo;
extern MethodInfo SynchronizedReader__ctor_m11545_MethodInfo;


// System.Void System.IO.TextReader::.ctor()
extern "C" void TextReader__ctor_m11535 (TextReader_t1904 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextReader::.cctor()
extern MethodInfo TextReader__cctor_m11536_MethodInfo;
extern "C" void TextReader__cctor_m11536 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullTextReader_t1978 * L_0 = (NullTextReader_t1978 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullTextReader_t1978_il2cpp_TypeInfo));
		NullTextReader__ctor_m11533(L_0, /*hidden argument*/&NullTextReader__ctor_m11533_MethodInfo);
		((TextReader_t1904_StaticFields*)InitializedTypeInfo(&TextReader_t1904_il2cpp_TypeInfo)->static_fields)->___Null_0 = L_0;
		return;
	}
}
// System.Void System.IO.TextReader::Dispose()
extern MethodInfo TextReader_Dispose_m11537_MethodInfo;
extern "C" void TextReader_Dispose_m11537 (TextReader_t1904 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextReader_Dispose_m11538_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.TextReader::Dispose(System.Boolean)
extern "C" void TextReader_Dispose_m11538 (TextReader_t1904 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m9452(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m9452_MethodInfo);
	}

IL_0009:
	{
		return;
	}
}
// System.Int32 System.IO.TextReader::Peek()
extern MethodInfo TextReader_Peek_m11539_MethodInfo;
extern "C" int32_t TextReader_Peek_m11539 (TextReader_t1904 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read()
extern "C" int32_t TextReader_Read_m11540 (TextReader_t1904 * __this, MethodInfo* method)
{
	{
		return (-1);
	}
}
// System.Int32 System.IO.TextReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo TextReader_Read_m11541_MethodInfo;
extern "C" int32_t TextReader_Read_m11541 (TextReader_t1904 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Read_m11540_MethodInfo, __this);
		int32_t L_1 = L_0;
		V_0 = L_1;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		return L_2;
	}

IL_0011:
	{
		CharU5BU5D_t395* L_3 = ___buffer;
		int32_t L_4 = ___index;
		int32_t L_5 = V_1;
		int32_t L_6 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_3, ((int32_t)((int32_t)L_4+(int32_t)L_5)))) = (uint16_t)(((uint16_t)L_6));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_001c:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = ___count;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}
}
// System.String System.IO.TextReader::ReadLine()
extern MethodInfo TextReader_ReadLine_m11542_MethodInfo;
extern "C" String_t* TextReader_ReadLine_m11542 (TextReader_t1904 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.String System.IO.TextReader::ReadToEnd()
extern MethodInfo TextReader_ReadToEnd_m11543_MethodInfo;
extern "C" String_t* TextReader_ReadToEnd_m11543 (TextReader_t1904 * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_0 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_0;
	}
}
// System.IO.TextReader System.IO.TextReader::Synchronized(System.IO.TextReader)
extern MethodInfo TextReader_Synchronized_m11544_MethodInfo;
extern "C" TextReader_t1904 * TextReader_Synchronized_m11544 (Object_t * __this /* static, unused */, TextReader_t1904 * ___reader, MethodInfo* method)
{
	{
		TextReader_t1904 * L_0 = ___reader;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1876, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TextReader_t1904 * L_2 = ___reader;
		if (!((SynchronizedReader_t1979 *)IsInst(L_2, InitializedTypeInfo(&SynchronizedReader_t1979_il2cpp_TypeInfo))))
		{
			goto IL_0018;
		}
	}
	{
		TextReader_t1904 * L_3 = ___reader;
		return L_3;
	}

IL_0018:
	{
		TextReader_t1904 * L_4 = ___reader;
		SynchronizedReader_t1979 * L_5 = (SynchronizedReader_t1979 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SynchronizedReader_t1979_il2cpp_TypeInfo));
		SynchronizedReader__ctor_m11545(L_5, L_4, /*hidden argument*/&SynchronizedReader__ctor_m11545_MethodInfo);
		return L_5;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C" void SynchronizedReader__ctor_m11545 (SynchronizedReader_t1979 * __this, TextReader_t1904 * ___reader, MethodInfo* method)
{
	{
		TextReader__ctor_m11535(__this, /*hidden argument*/&TextReader__ctor_m11535_MethodInfo);
		TextReader_t1904 * L_0 = ___reader;
		__this->___reader_1 = L_0;
		return;
	}
}
// System.Int32 System.IO.SynchronizedReader::Peek()
extern MethodInfo SynchronizedReader_Peek_m11546_MethodInfo;
extern "C" int32_t SynchronizedReader_Peek_m11546 (SynchronizedReader_t1979 * __this, MethodInfo* method)
{
	SynchronizedReader_t1979 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1979 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1904 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Peek_m11539_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1979 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.String System.IO.SynchronizedReader::ReadLine()
extern MethodInfo SynchronizedReader_ReadLine_m11547_MethodInfo;
extern "C" String_t* SynchronizedReader_ReadLine_m11547 (SynchronizedReader_t1979 * __this, MethodInfo* method)
{
	SynchronizedReader_t1979 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1979 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1904 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TextReader_ReadLine_m11542_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1979 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001f:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern MethodInfo SynchronizedReader_ReadToEnd_m11548_MethodInfo;
extern "C" String_t* SynchronizedReader_ReadToEnd_m11548 (SynchronizedReader_t1979 * __this, MethodInfo* method)
{
	SynchronizedReader_t1979 * V_0 = {0};
	String_t* V_1 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1979 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1904 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TextReader_ReadToEnd_m11543_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1979 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001f:
	{
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read()
extern MethodInfo SynchronizedReader_Read_m11549_MethodInfo;
extern "C" int32_t SynchronizedReader_Read_m11549 (SynchronizedReader_t1979 * __this, MethodInfo* method)
{
	SynchronizedReader_t1979 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1979 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1904 * L_1 = (__this->___reader_1);
			NullCheck(L_1);
			int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&TextReader_Read_m11540_MethodInfo, L_1);
			V_1 = L_2;
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}

IL_0016:
		{
			IL2CPP_LEAVE(0x1F, FINALLY_0018);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1979 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo SynchronizedReader_Read_m11550_MethodInfo;
extern "C" int32_t SynchronizedReader_Read_m11550 (SynchronizedReader_t1979 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	SynchronizedReader_t1979 * V_0 = {0};
	int32_t V_1 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedReader_t1979 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			TextReader_t1904 * L_1 = (__this->___reader_1);
			CharU5BU5D_t395* L_2 = ___buffer;
			int32_t L_3 = ___index;
			int32_t L_4 = ___count;
			NullCheck(L_1);
			int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, CharU5BU5D_t395*, int32_t, int32_t >::Invoke(&TextReader_Read_m11541_MethodInfo, L_1, L_2, L_3, L_4);
			V_1 = L_5;
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x22, FINALLY_001b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_001b;
	}

FINALLY_001b:
	{ // begin finally (depth: 1)
		SynchronizedReader_t1979 * L_6 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_6, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(27)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(27)
	{
		IL2CPP_JUMP_TBL(0x22, IL_0022)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0022:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NullTextWriter_t1980_il2cpp_TypeInfo;
// System.IO.TextWriter/NullTextWriter
#include "mscorlib_System_IO_TextWriter_NullTextWriterMethodDeclarations.h"



// System.Void System.IO.TextWriter/NullTextWriter::.ctor()
extern MethodInfo NullTextWriter__ctor_m11551_MethodInfo;
extern "C" void NullTextWriter__ctor_m11551 (NullTextWriter_t1980 * __this, MethodInfo* method)
{
	{
		TextWriter__ctor_m11555(__this, /*hidden argument*/&TextWriter__ctor_m11555_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.String)
extern MethodInfo NullTextWriter_Write_m11552_MethodInfo;
extern "C" void NullTextWriter_Write_m11552 (NullTextWriter_t1980 * __this, String_t* ___s, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char)
extern MethodInfo NullTextWriter_Write_m11553_MethodInfo;
extern "C" void NullTextWriter_Write_m11553 (NullTextWriter_t1980 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter/NullTextWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo NullTextWriter_Write_m11554_MethodInfo;
extern "C" void NullTextWriter_Write_m11554 (NullTextWriter_t1980 * __this, CharU5BU5D_t395* ___value, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter
#include "mscorlib_System_IO_TextWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TextWriter_t1497_il2cpp_TypeInfo;

// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriter.h"
extern TypeInfo SynchronizedWriter_t1981_il2cpp_TypeInfo;
// System.IO.SynchronizedWriter
#include "mscorlib_System_IO_SynchronizedWriterMethodDeclarations.h"
extern MethodInfo Environment_get_NewLine_m8076_MethodInfo;
extern MethodInfo String_ToCharArray_m8018_MethodInfo;
extern MethodInfo TextWriter_Dispose_m11558_MethodInfo;
extern MethodInfo SynchronizedWriter__ctor_m11567_MethodInfo;
extern MethodInfo TextWriter_Write_m11565_MethodInfo;
extern MethodInfo TextWriter_Write_m11563_MethodInfo;
extern MethodInfo TextWriter_Write_m11562_MethodInfo;
extern MethodInfo TextWriter_Write_m11564_MethodInfo;
extern MethodInfo TextWriter_WriteLine_m11566_MethodInfo;


// System.Void System.IO.TextWriter::.ctor()
extern "C" void TextWriter__ctor_m11555 (TextWriter_t1497 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		String_t* L_0 = Environment_get_NewLine_m8076(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m8076_MethodInfo);
		NullCheck(L_0);
		CharU5BU5D_t395* L_1 = String_ToCharArray_m8018(L_0, /*hidden argument*/&String_ToCharArray_m8018_MethodInfo);
		__this->___CoreNewLine_0 = L_1;
		return;
	}
}
// System.Void System.IO.TextWriter::.cctor()
extern MethodInfo TextWriter__cctor_m11556_MethodInfo;
extern "C" void TextWriter__cctor_m11556 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		NullTextWriter_t1980 * L_0 = (NullTextWriter_t1980 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NullTextWriter_t1980_il2cpp_TypeInfo));
		NullTextWriter__ctor_m11551(L_0, /*hidden argument*/&NullTextWriter__ctor_m11551_MethodInfo);
		((TextWriter_t1497_StaticFields*)InitializedTypeInfo(&TextWriter_t1497_il2cpp_TypeInfo)->static_fields)->___Null_1 = L_0;
		return;
	}
}
// System.Void System.IO.TextWriter::Close()
extern MethodInfo TextWriter_Close_m11557_MethodInfo;
extern "C" void TextWriter_Close_m11557 (TextWriter_t1497 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextWriter_Dispose_m11558_MethodInfo, __this, 1);
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
extern "C" void TextWriter_Dispose_m11558 (TextWriter_t1497 * __this, bool ___disposing, MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		GC_SuppressFinalize_m9452(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m9452_MethodInfo);
	}

IL_0009:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Dispose()
extern MethodInfo TextWriter_Dispose_m11559_MethodInfo;
extern "C" void TextWriter_Dispose_m11559 (TextWriter_t1497 * __this, MethodInfo* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(&TextWriter_Dispose_m11558_MethodInfo, __this, 1);
		GC_SuppressFinalize_m9452(NULL /*static, unused*/, __this, /*hidden argument*/&GC_SuppressFinalize_m9452_MethodInfo);
		return;
	}
}
// System.Void System.IO.TextWriter::Flush()
extern MethodInfo TextWriter_Flush_m11560_MethodInfo;
extern "C" void TextWriter_Flush_m11560 (TextWriter_t1497 * __this, MethodInfo* method)
{
	{
		return;
	}
}
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
extern MethodInfo TextWriter_Synchronized_m11561_MethodInfo;
extern "C" TextWriter_t1497 * TextWriter_Synchronized_m11561 (Object_t * __this /* static, unused */, TextWriter_t1497 * ___writer, bool ___neverClose, MethodInfo* method)
{
	{
		TextWriter_t1497 * L_0 = ___writer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1877, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TextWriter_t1497 * L_2 = ___writer;
		if (!((SynchronizedWriter_t1981 *)IsInst(L_2, InitializedTypeInfo(&SynchronizedWriter_t1981_il2cpp_TypeInfo))))
		{
			goto IL_0018;
		}
	}
	{
		TextWriter_t1497 * L_3 = ___writer;
		return L_3;
	}

IL_0018:
	{
		TextWriter_t1497 * L_4 = ___writer;
		bool L_5 = ___neverClose;
		SynchronizedWriter_t1981 * L_6 = (SynchronizedWriter_t1981 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SynchronizedWriter_t1981_il2cpp_TypeInfo));
		SynchronizedWriter__ctor_m11567(L_6, L_4, L_5, /*hidden argument*/&SynchronizedWriter__ctor_m11567_MethodInfo);
		return L_6;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char)
extern "C" void TextWriter_Write_m11562 (TextWriter_t1497 * __this, uint16_t ___value, MethodInfo* method)
{
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[])
extern "C" void TextWriter_Write_m11563 (TextWriter_t1497 * __this, CharU5BU5D_t395* ___buffer, MethodInfo* method)
{
	{
		CharU5BU5D_t395* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		CharU5BU5D_t395* L_1 = ___buffer;
		CharU5BU5D_t395* L_2 = ___buffer;
		NullCheck(L_2);
		VirtActionInvoker3< CharU5BU5D_t395*, int32_t, int32_t >::Invoke(&TextWriter_Write_m11565_MethodInfo, __this, L_1, 0, (((int32_t)(((Array_t *)L_2)->max_length))));
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.String)
extern "C" void TextWriter_Write_m11564 (TextWriter_t1497 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___value;
		NullCheck(L_1);
		CharU5BU5D_t395* L_2 = String_ToCharArray_m8018(L_1, /*hidden argument*/&String_ToCharArray_m8018_MethodInfo);
		VirtActionInvoker1< CharU5BU5D_t395* >::Invoke(&TextWriter_Write_m11563_MethodInfo, __this, L_2);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void TextWriter_Write_m11565 (TextWriter_t1497 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	{
		CharU5BU5D_t395* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1227, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___index;
		CharU5BU5D_t395* L_4 = ___buffer;
		NullCheck(L_4);
		if ((((int32_t)L_3) <= ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentOutOfRangeException_t1472 * L_5 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_5, (String_t*) &_stringLiteral573, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = ___index;
		CharU5BU5D_t395* L_8 = ___buffer;
		NullCheck(L_8);
		int32_t L_9 = ___count;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_8)->max_length)))-(int32_t)L_9)))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_t1472 * L_10 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7993(L_10, (String_t*) &_stringLiteral662, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7993_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_003a:
	{
		goto IL_0053;
	}

IL_003c:
	{
		CharU5BU5D_t395* L_11 = ___buffer;
		int32_t L_12 = ___index;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		VirtActionInvoker1< uint16_t >::Invoke(&TextWriter_Write_m11562_MethodInfo, __this, (*(uint16_t*)(uint16_t*)SZArrayLdElema(L_11, L_13)));
		int32_t L_14 = ___count;
		___count = ((int32_t)((int32_t)L_14-(int32_t)1));
		int32_t L_15 = ___index;
		___index = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_16 = ___count;
		if ((((int32_t)L_16) > ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine()
extern "C" void TextWriter_WriteLine_m11566 (TextWriter_t1497 * __this, MethodInfo* method)
{
	{
		CharU5BU5D_t395* L_0 = (__this->___CoreNewLine_0);
		VirtActionInvoker1< CharU5BU5D_t395* >::Invoke(&TextWriter_Write_m11563_MethodInfo, __this, L_0);
		return;
	}
}
// System.Void System.IO.TextWriter::WriteLine(System.String)
extern MethodInfo TextWriter_WriteLine_m8220_MethodInfo;
extern "C" void TextWriter_WriteLine_m8220 (TextWriter_t1497 * __this, String_t* ___value, MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_Write_m11564_MethodInfo, __this, L_0);
		VirtActionInvoker0::Invoke(&TextWriter_WriteLine_m11566_MethodInfo, __this);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m11567 (SynchronizedWriter_t1981 * __this, TextWriter_t1497 * ___writer, bool ___neverClose, MethodInfo* method)
{
	{
		TextWriter__ctor_m11555(__this, /*hidden argument*/&TextWriter__ctor_m11555_MethodInfo);
		TextWriter_t1497 * L_0 = ___writer;
		__this->___writer_2 = L_0;
		bool L_1 = ___neverClose;
		__this->___neverClose_3 = L_1;
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Close()
extern MethodInfo SynchronizedWriter_Close_m11568_MethodInfo;
extern "C" void SynchronizedWriter_Close_m11568 (SynchronizedWriter_t1981 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___neverClose_3);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_1 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_1, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_2 = (__this->___writer_2);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(&TextWriter_Close_m11557_MethodInfo, L_2);
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_0025:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Flush()
extern MethodInfo SynchronizedWriter_Flush_m11569_MethodInfo;
extern "C" void SynchronizedWriter_Flush_m11569 (SynchronizedWriter_t1981 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&TextWriter_Flush_m11560_MethodInfo, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_2 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern MethodInfo SynchronizedWriter_Write_m11570_MethodInfo;
extern "C" void SynchronizedWriter_Write_m11570 (SynchronizedWriter_t1981 * __this, uint16_t ___value, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		uint16_t L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< uint16_t >::Invoke(&TextWriter_Write_m11562_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern MethodInfo SynchronizedWriter_Write_m11571_MethodInfo;
extern "C" void SynchronizedWriter_Write_m11571 (SynchronizedWriter_t1981 * __this, CharU5BU5D_t395* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		CharU5BU5D_t395* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< CharU5BU5D_t395* >::Invoke(&TextWriter_Write_m11563_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern MethodInfo SynchronizedWriter_Write_m11572_MethodInfo;
extern "C" void SynchronizedWriter_Write_m11572 (SynchronizedWriter_t1981 * __this, String_t* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_Write_m11564_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001d:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo SynchronizedWriter_Write_m11573_MethodInfo;
extern "C" void SynchronizedWriter_Write_m11573 (SynchronizedWriter_t1981 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		CharU5BU5D_t395* L_2 = ___buffer;
		int32_t L_3 = ___index;
		int32_t L_4 = ___count;
		NullCheck(L_1);
		VirtActionInvoker3< CharU5BU5D_t395*, int32_t, int32_t >::Invoke(&TextWriter_Write_m11565_MethodInfo, L_1, L_2, L_3, L_4);
		IL2CPP_LEAVE(0x1F, FINALLY_0018);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0018;
	}

FINALLY_0018:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_5 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_5, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(24)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(24)
	{
		IL2CPP_JUMP_TBL(0x1F, IL_001f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001f:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern MethodInfo SynchronizedWriter_WriteLine_m11574_MethodInfo;
extern "C" void SynchronizedWriter_WriteLine_m11574 (SynchronizedWriter_t1981 * __this, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(&TextWriter_WriteLine_m11566_MethodInfo, L_1);
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_2 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_2, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001c:
	{
		return;
	}
}
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern MethodInfo SynchronizedWriter_WriteLine_m11575_MethodInfo;
extern "C" void SynchronizedWriter_WriteLine_m11575 (SynchronizedWriter_t1981 * __this, String_t* ___value, MethodInfo* method)
{
	SynchronizedWriter_t1981 * V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		SynchronizedWriter_t1981 * L_0 = V_0;
		Monitor_Enter_m4664(NULL /*static, unused*/, L_0, /*hidden argument*/&Monitor_Enter_m4664_MethodInfo);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		TextWriter_t1497 * L_1 = (__this->___writer_2);
		String_t* L_2 = ___value;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(&TextWriter_WriteLine_m8220_MethodInfo, L_1, L_2);
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t154 *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		SynchronizedWriter_t1981 * L_3 = V_0;
		Monitor_Exit_m4665(NULL /*static, unused*/, L_3, /*hidden argument*/&Monitor_Exit_m4665_MethodInfo);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t154 *)
	}

IL_001d:
	{
		return;
	}
}
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReader.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnexceptionalStreamReader_t1982_il2cpp_TypeInfo;
// System.IO.UnexceptionalStreamReader
#include "mscorlib_System_IO_UnexceptionalStreamReaderMethodDeclarations.h"

extern TypeInfo BooleanU5BU5D_t44_il2cpp_TypeInfo;
extern Il2CppType BooleanU5BU5D_t44_0_0_0;
extern MethodInfo UnexceptionalStreamReader_CheckEOL_m11581_MethodInfo;


// System.Void System.IO.UnexceptionalStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo UnexceptionalStreamReader__ctor_m11576_MethodInfo;
extern "C" void UnexceptionalStreamReader__ctor_m11576 (UnexceptionalStreamReader_t1982 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1719 * L_0 = ___stream;
		Encoding_t1486 * L_1 = ___encoding;
		StreamReader__ctor_m11493(__this, L_0, L_1, /*hidden argument*/&StreamReader__ctor_m11493_MethodInfo);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamReader::.cctor()
extern MethodInfo UnexceptionalStreamReader__cctor_m11577_MethodInfo;
extern TypeInfo* BooleanU5BU5D_t44_il2cpp_TypeInfo_var;
extern "C" void UnexceptionalStreamReader__cctor_m11577 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool UnexceptionalStreamReader__cctor_m11577_init;
	if (!UnexceptionalStreamReader__cctor_m11577_init)
	{
		BooleanU5BU5D_t44_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&BooleanU5BU5D_t44_0_0_0);
		UnexceptionalStreamReader__cctor_m11577_init = true;
	}
	String_t* V_0 = {0};
	{
		String_t* L_0 = Environment_get_NewLine_m8076(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m8076_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m694(L_0, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14 = ((BooleanU5BU5D_t44*)SZArrayNew(BooleanU5BU5D_t44_il2cpp_TypeInfo_var, L_1));
		String_t* L_2 = Environment_get_NewLine_m8076(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m8076_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m694(L_3, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		uint16_t L_6 = String_get_Chars_m2541(L_5, 0, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newlineChar_15 = L_6;
	}

IL_002f:
	{
		return;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Peek()
extern MethodInfo UnexceptionalStreamReader_Peek_m11578_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Peek_m11578 (UnexceptionalStreamReader_t1982 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = StreamReader_Peek_m11502(__this, /*hidden argument*/&StreamReader_Peek_m11502_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1797_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read()
extern MethodInfo UnexceptionalStreamReader_Read_m11579_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Read_m11579 (UnexceptionalStreamReader_t1982 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = StreamReader_Read_m11503(__this, /*hidden argument*/&StreamReader_Read_m11503_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1797_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (-1);
	}

IL_0010:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 System.IO.UnexceptionalStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern MethodInfo UnexceptionalStreamReader_Read_m11580_MethodInfo;
extern "C" int32_t UnexceptionalStreamReader_Read_m11580 (UnexceptionalStreamReader_t1982 * __this, CharU5BU5D_t395* ___dest_buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CharU5BU5D_t395* L_0 = ___dest_buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1878, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_3 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_3, (String_t*) &_stringLiteral573, (String_t*) &_stringLiteral984, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t1472 * L_5 = (ArgumentOutOfRangeException_t1472 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t1472_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m7988(L_5, (String_t*) &_stringLiteral662, (String_t*) &_stringLiteral984, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m7988_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0036:
	{
		int32_t L_6 = ___index;
		CharU5BU5D_t395* L_7 = ___dest_buffer;
		NullCheck(L_7);
		int32_t L_8 = ___count;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))-(int32_t)L_8)))))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t521 * L_9 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_9, (String_t*) &_stringLiteral1879, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0049:
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo));
		uint16_t L_10 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newlineChar_15;
		V_1 = L_10;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0093;
		}

IL_0053:
		{
			int32_t L_11 = StreamReader_Read_m11503(__this, /*hidden argument*/&StreamReader_Read_m11503_MethodInfo);
			V_2 = L_11;
			int32_t L_12 = V_2;
			if ((((int32_t)L_12) >= ((int32_t)0)))
			{
				goto IL_0060;
			}
		}

IL_005e:
		{
			goto IL_0097;
		}

IL_0060:
		{
			int32_t L_13 = V_0;
			V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
			int32_t L_14 = ___count;
			___count = ((int32_t)((int32_t)L_14-(int32_t)1));
			CharU5BU5D_t395* L_15 = ___dest_buffer;
			int32_t L_16 = ___index;
			int32_t L_17 = V_2;
			NullCheck(L_15);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
			*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, L_16)) = (uint16_t)(((uint16_t)L_17));
			uint16_t L_18 = V_1;
			if (!L_18)
			{
				goto IL_007e;
			}
		}

IL_0073:
		{
			int32_t L_19 = V_2;
			uint16_t L_20 = V_1;
			if ((!(((uint32_t)(((uint16_t)L_19))) == ((uint32_t)L_20))))
			{
				goto IL_007c;
			}
		}

IL_0078:
		{
			int32_t L_21 = V_0;
			V_3 = L_21;
			goto IL_009e;
		}

IL_007c:
		{
			goto IL_008c;
		}

IL_007e:
		{
			int32_t L_22 = V_2;
			bool L_23 = UnexceptionalStreamReader_CheckEOL_m11581(__this, (((uint16_t)L_22)), /*hidden argument*/&UnexceptionalStreamReader_CheckEOL_m11581_MethodInfo);
			if (!L_23)
			{
				goto IL_008c;
			}
		}

IL_0088:
		{
			int32_t L_24 = V_0;
			V_3 = L_24;
			goto IL_009e;
		}

IL_008c:
		{
			int32_t L_25 = ___index;
			___index = ((int32_t)((int32_t)L_25+(int32_t)1));
		}

IL_0093:
		{
			int32_t L_26 = ___count;
			if ((((int32_t)L_26) > ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0097:
		{
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1797_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0099;
		throw e;
	}

CATCH_0099:
	{ // begin catch(System.IO.IOException)
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_009e:
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Boolean System.IO.UnexceptionalStreamReader::CheckEOL(System.Char)
extern "C" bool UnexceptionalStreamReader_CheckEOL_m11581 (UnexceptionalStreamReader_t1982 * __this, uint16_t ___current, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo));
		BooleanU5BU5D_t44* L_0 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		if ((*(uint8_t*)(bool*)SZArrayLdElema(L_0, L_2)))
		{
			goto IL_0032;
		}
	}
	{
		uint16_t L_3 = ___current;
		String_t* L_4 = Environment_get_NewLine_m8076(NULL /*static, unused*/, /*hidden argument*/&Environment_get_NewLine_m8076_MethodInfo);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint16_t L_6 = String_get_Chars_m2541(L_4, L_5, /*hidden argument*/&String_get_Chars_m2541_MethodInfo);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_6))))
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo));
		BooleanU5BU5D_t44* L_7 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		*((bool*)(bool*)SZArrayLdElema(L_7, L_8)) = (bool)1;
		int32_t L_9 = V_0;
		BooleanU5BU5D_t44* L_10 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14;
		NullCheck(L_10);
		return ((((int32_t)L_9) == ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))))? 1 : 0);
	}

IL_0030:
	{
		goto IL_0040;
	}

IL_0032:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0036:
	{
		int32_t L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo));
		BooleanU5BU5D_t44* L_13 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)(((Array_t *)L_13)->max_length))))))
		{
			goto IL_0004;
		}
	}

IL_0040:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0044:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo));
		BooleanU5BU5D_t44* L_14 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		*((bool*)(bool*)SZArrayLdElema(L_14, L_15)) = (bool)0;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo));
		BooleanU5BU5D_t44* L_18 = ((UnexceptionalStreamReader_t1982_StaticFields*)InitializedTypeInfo(&UnexceptionalStreamReader_t1982_il2cpp_TypeInfo)->static_fields)->___newline_14;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		return 0;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadLine()
extern MethodInfo UnexceptionalStreamReader_ReadLine_m11582_MethodInfo;
extern "C" String_t* UnexceptionalStreamReader_ReadLine_m11582 (UnexceptionalStreamReader_t1982 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = StreamReader_ReadLine_m11506(__this, /*hidden argument*/&StreamReader_ReadLine_m11506_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1797_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String System.IO.UnexceptionalStreamReader::ReadToEnd()
extern MethodInfo UnexceptionalStreamReader_ReadToEnd_m11583_MethodInfo;
extern "C" String_t* UnexceptionalStreamReader_ReadToEnd_m11583 (UnexceptionalStreamReader_t1982 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = StreamReader_ReadToEnd_m11507(__this, /*hidden argument*/&StreamReader_ReadToEnd_m11507_MethodInfo);
			V_0 = L_0;
			goto IL_0010;
		}

IL_0009:
		{
			goto IL_000e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&IOException_t1797_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.IO.IOException)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return (String_t*)NULL;
	}

IL_0010:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnexceptionalStreamWriter_t1983_il2cpp_TypeInfo;
// System.IO.UnexceptionalStreamWriter
#include "mscorlib_System_IO_UnexceptionalStreamWriterMethodDeclarations.h"



// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern MethodInfo UnexceptionalStreamWriter__ctor_m11584_MethodInfo;
extern "C" void UnexceptionalStreamWriter__ctor_m11584 (UnexceptionalStreamWriter_t1983 * __this, Stream_t1719 * ___stream, Encoding_t1486 * ___encoding, MethodInfo* method)
{
	{
		Stream_t1719 * L_0 = ___stream;
		Encoding_t1486 * L_1 = ___encoding;
		StreamWriter__ctor_m11508(__this, L_0, L_1, /*hidden argument*/&StreamWriter__ctor_m11508_MethodInfo);
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern MethodInfo UnexceptionalStreamWriter_Flush_m11585_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Flush_m11585 (UnexceptionalStreamWriter_t1983 * __this, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		StreamWriter_Flush_m11514(__this, /*hidden argument*/&StreamWriter_Flush_m11514_MethodInfo);
		goto IL_000b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0008;
		throw e;
	}

CATCH_0008:
	{ // begin catch(System.Exception)
		goto IL_000b;
	} // end catch (depth: 1)

IL_000b:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern MethodInfo UnexceptionalStreamWriter_Write_m11586_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m11586 (UnexceptionalStreamWriter_t1983 * __this, CharU5BU5D_t395* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		CharU5BU5D_t395* L_0 = ___buffer;
		int32_t L_1 = ___index;
		int32_t L_2 = ___count;
		StreamWriter_Write_m11517(__this, L_0, L_1, L_2, /*hidden argument*/&StreamWriter_Write_m11517_MethodInfo);
		goto IL_000e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_000b;
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.Exception)
		goto IL_000e;
	} // end catch (depth: 1)

IL_000e:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern MethodInfo UnexceptionalStreamWriter_Write_m11587_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m11587 (UnexceptionalStreamWriter_t1983 * __this, uint16_t ___value, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		uint16_t L_0 = ___value;
		StreamWriter_Write_m11520(__this, L_0, /*hidden argument*/&StreamWriter_Write_m11520_MethodInfo);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern MethodInfo UnexceptionalStreamWriter_Write_m11588_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m11588 (UnexceptionalStreamWriter_t1983 * __this, CharU5BU5D_t395* ___value, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		CharU5BU5D_t395* L_0 = ___value;
		StreamWriter_Write_m11521(__this, L_0, /*hidden argument*/&StreamWriter_Write_m11521_MethodInfo);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern MethodInfo UnexceptionalStreamWriter_Write_m11589_MethodInfo;
extern "C" void UnexceptionalStreamWriter_Write_m11589 (UnexceptionalStreamWriter_t1983 * __this, String_t* ___value, MethodInfo* method)
{
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___value;
		StreamWriter_Write_m11522(__this, L_0, /*hidden argument*/&StreamWriter_Write_m11522_MethodInfo);
		goto IL_000c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0009;
		throw e;
	}

CATCH_0009:
	{ // begin catch(System.Exception)
		goto IL_000c;
	} // end catch (depth: 1)

IL_000c:
	{
		return;
	}
}
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyBuilder_t1985_il2cpp_TypeInfo;
// System.Reflection.Emit.AssemblyBuilder
#include "mscorlib_System_Reflection_Emit_AssemblyBuilderMethodDeclarations.h"

// System.Reflection.Module
#include "mscorlib_System_Reflection_Module.h"
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilder.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyName.h"
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongName.h"
extern TypeInfo ModuleU5BU5D_t1986_il2cpp_TypeInfo;
extern TypeInfo Module_t1815_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Assembly_t1476_il2cpp_TypeInfo;
extern TypeInfo AssemblyName_t1987_il2cpp_TypeInfo;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_AssemblyMethodDeclarations.h"
// Mono.Security.StrongName
#include "mscorlib_Mono_Security_StrongNameMethodDeclarations.h"
// System.Reflection.AssemblyName
#include "mscorlib_System_Reflection_AssemblyNameMethodDeclarations.h"
extern Il2CppType ModuleU5BU5D_t1986_0_0_0;
extern MethodInfo AssemblyBuilder_not_supported_m11593_MethodInfo;
extern MethodInfo Array_Clone_m8020_MethodInfo;
extern MethodInfo Assembly_UnprotectedGetName_m11798_MethodInfo;
extern MethodInfo StrongName_get_PublicKey_m10852_MethodInfo;
extern MethodInfo AssemblyName_SetPublicKey_m11816_MethodInfo;
extern MethodInfo StrongName_get_PublicKeyToken_m10853_MethodInfo;
extern MethodInfo AssemblyName_SetPublicKeyToken_m11817_MethodInfo;


// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
extern MethodInfo AssemblyBuilder_get_Location_m11590_MethodInfo;
extern "C" String_t* AssemblyBuilder_get_Location_m11590 (AssemblyBuilder_t1985 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = AssemblyBuilder_not_supported_m11593(__this, /*hidden argument*/&AssemblyBuilder_not_supported_m11593_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
extern MethodInfo AssemblyBuilder_GetModulesInternal_m11591_MethodInfo;
extern TypeInfo* ModuleU5BU5D_t1986_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1986* AssemblyBuilder_GetModulesInternal_m11591 (AssemblyBuilder_t1985 * __this, MethodInfo* method)
{
	static bool AssemblyBuilder_GetModulesInternal_m11591_init;
	if (!AssemblyBuilder_GetModulesInternal_m11591_init)
	{
		ModuleU5BU5D_t1986_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ModuleU5BU5D_t1986_0_0_0);
		AssemblyBuilder_GetModulesInternal_m11591_init = true;
	}
	{
		ModuleBuilderU5BU5D_t1984* L_0 = (__this->___modules_10);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ModuleU5BU5D_t1986*)SZArrayNew(ModuleU5BU5D_t1986_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		ModuleBuilderU5BU5D_t1984* L_1 = (__this->___modules_10);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(&Array_Clone_m8020_MethodInfo, L_1);
		return ((ModuleU5BU5D_t1986*)Castclass(L_2, ModuleU5BU5D_t1986_il2cpp_TypeInfo_var));
	}
}
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
extern MethodInfo AssemblyBuilder_get_IsCompilerContext_m11592_MethodInfo;
extern "C" bool AssemblyBuilder_get_IsCompilerContext_m11592 (AssemblyBuilder_t1985 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_compiler_context_14);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
extern "C" Exception_t154 * AssemblyBuilder_not_supported_m11593 (AssemblyBuilder_t1985 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1880, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
extern MethodInfo AssemblyBuilder_UnprotectedGetName_m11594_MethodInfo;
extern "C" AssemblyName_t1987 * AssemblyBuilder_UnprotectedGetName_m11594 (AssemblyBuilder_t1985 * __this, MethodInfo* method)
{
	AssemblyName_t1987 * V_0 = {0};
	{
		AssemblyName_t1987 * L_0 = Assembly_UnprotectedGetName_m11798(__this, /*hidden argument*/&Assembly_UnprotectedGetName_m11798_MethodInfo);
		V_0 = L_0;
		StrongName_t1897 * L_1 = (__this->___sn_13);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		AssemblyName_t1987 * L_2 = V_0;
		StrongName_t1897 * L_3 = (__this->___sn_13);
		NullCheck(L_3);
		ByteU5BU5D_t669* L_4 = StrongName_get_PublicKey_m10852(L_3, /*hidden argument*/&StrongName_get_PublicKey_m10852_MethodInfo);
		NullCheck(L_2);
		AssemblyName_SetPublicKey_m11816(L_2, L_4, /*hidden argument*/&AssemblyName_SetPublicKey_m11816_MethodInfo);
		AssemblyName_t1987 * L_5 = V_0;
		StrongName_t1897 * L_6 = (__this->___sn_13);
		NullCheck(L_6);
		ByteU5BU5D_t669* L_7 = StrongName_get_PublicKeyToken_m10853(L_6, /*hidden argument*/&StrongName_get_PublicKeyToken_m10853_MethodInfo);
		NullCheck(L_5);
		AssemblyName_SetPublicKeyToken_m11817(L_5, L_7, /*hidden argument*/&AssemblyName_SetPublicKeyToken_m11817_MethodInfo);
	}

IL_0031:
	{
		AssemblyName_t1987 * L_8 = V_0;
		return L_8;
	}
}
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ConstructorBuilder_t1990_il2cpp_TypeInfo;
// System.Reflection.Emit.ConstructorBuilder
#include "mscorlib_System_Reflection_Emit_ConstructorBuilderMethodDeclarations.h"

// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilder.h"
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfo.h"
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilder.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_Binder.h"
extern TypeInfo ConstructorInfo_t1177_il2cpp_TypeInfo;
extern TypeInfo MemberInfo_t_il2cpp_TypeInfo;
extern TypeInfo TypeBuilder_t1988_il2cpp_TypeInfo;
extern TypeInfo ModuleBuilder_t1998_il2cpp_TypeInfo;
extern TypeInfo ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo;
extern TypeInfo ParameterInfo_t1171_il2cpp_TypeInfo;
extern TypeInfo MonoCustomAttrs_t2311_il2cpp_TypeInfo;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfoMethodDeclarations.h"
// System.Reflection.Emit.TypeBuilder
#include "mscorlib_System_Reflection_Emit_TypeBuilderMethodDeclarations.h"
// System.Reflection.Module
#include "mscorlib_System_Reflection_ModuleMethodDeclarations.h"
// System.Reflection.ParameterInfo
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
// System.MonoCustomAttrs
#include "mscorlib_System_MonoCustomAttrsMethodDeclarations.h"
extern Il2CppType ParameterInfoU5BU5D_t1170_0_0_0;
extern MethodInfo ConstructorBuilder_not_supported_m11612_MethodInfo;
extern MethodInfo MemberInfo_get_Module_m10375_MethodInfo;
extern MethodInfo ConstructorBuilder_get_TypeBuilder_m11596_MethodInfo;
extern MethodInfo TypeBuilder_get_Module_m11740_MethodInfo;
extern MethodInfo Module_get_Assembly_m11892_MethodInfo;
extern MethodInfo TypeBuilder_get_is_created_m11768_MethodInfo;
extern MethodInfo ConstructorBuilder_get_IsCompilerContext_m11611_MethodInfo;
extern MethodInfo ConstructorBuilder_not_created_m11613_MethodInfo;
extern MethodInfo ConstructorBuilder_GetParametersInternal_m11598_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m12020_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo;
extern MethodInfo MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo;
extern MethodInfo TypeBuilder_get_Name_m11741_MethodInfo;


// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern MethodInfo ConstructorBuilder_get_CallingConvention_m11595_MethodInfo;
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m11595 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_4);
		return L_0;
	}
}
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1988 * ConstructorBuilder_get_TypeBuilder_m11596 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern MethodInfo ConstructorBuilder_GetParameters_m11597_MethodInfo;
extern "C" ParameterInfoU5BU5D_t1170* ConstructorBuilder_GetParameters_m11597 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m11611(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m11611_MethodInfo);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t154 * L_3 = ConstructorBuilder_not_created_m11613(__this, /*hidden argument*/&ConstructorBuilder_not_created_m11613_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001c:
	{
		ParameterInfoU5BU5D_t1170* L_4 = ConstructorBuilder_GetParametersInternal_m11598(__this, /*hidden argument*/&ConstructorBuilder_GetParametersInternal_m11598_MethodInfo);
		return L_4;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern TypeInfo* ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1170* ConstructorBuilder_GetParametersInternal_m11598 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	static bool ConstructorBuilder_GetParametersInternal_m11598_init;
	if (!ConstructorBuilder_GetParametersInternal_m11598_init)
	{
		ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t1170_0_0_0);
		ConstructorBuilder_GetParametersInternal_m11598_init = true;
	}
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	ParameterInfoU5BU5D_t1170* G_B5_1 = {0};
	int32_t G_B4_0 = 0;
	ParameterInfoU5BU5D_t1170* G_B4_1 = {0};
	ParameterBuilder_t1999 * G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	ParameterInfoU5BU5D_t1170* G_B6_2 = {0};
	{
		TypeU5BU5D_t913* L_0 = (__this->___parameters_2);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ParameterInfoU5BU5D_t1170*)SZArrayNew(ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		TypeU5BU5D_t913* L_1 = (__this->___parameters_2);
		NullCheck(L_1);
		V_0 = ((ParameterInfoU5BU5D_t1170*)SZArrayNew(ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		V_1 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		ParameterInfoU5BU5D_t1170* L_2 = V_0;
		int32_t L_3 = V_1;
		ParameterBuilderU5BU5D_t1989* L_4 = (__this->___pinfo_6);
		G_B4_0 = L_3;
		G_B4_1 = L_2;
		if (L_4)
		{
			G_B5_0 = L_3;
			G_B5_1 = L_2;
			goto IL_002e;
		}
	}
	{
		G_B6_0 = ((ParameterBuilder_t1999 *)(NULL));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0038;
	}

IL_002e:
	{
		ParameterBuilderU5BU5D_t1989* L_5 = (__this->___pinfo_6);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)((int32_t)L_6+(int32_t)1)));
		int32_t L_7 = ((int32_t)((int32_t)L_6+(int32_t)1));
		G_B6_0 = (*(ParameterBuilder_t1999 **)(ParameterBuilder_t1999 **)SZArrayLdElema(L_5, L_7));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0038:
	{
		TypeU5BU5D_t913* L_8 = (__this->___parameters_2);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		int32_t L_11 = V_1;
		ParameterInfo_t1171 * L_12 = (ParameterInfo_t1171 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t1171_il2cpp_TypeInfo));
		ParameterInfo__ctor_m12020(L_12, G_B6_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_8, L_10)), __this, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/&ParameterInfo__ctor_m12020_MethodInfo);
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, L_12);
		*((ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(G_B6_2, G_B6_1)) = (ParameterInfo_t1171 *)L_12;
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_14 = V_1;
		TypeU5BU5D_t913* L_15 = (__this->___parameters_2);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_16 = V_0;
		return L_16;
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo ConstructorBuilder_Invoke_m11599_MethodInfo;
extern "C" Object_t * ConstructorBuilder_Invoke_m11599 (ConstructorBuilder_t1990 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___parameters, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ConstructorBuilder_not_supported_m11612(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m11612_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo ConstructorBuilder_Invoke_m11600_MethodInfo;
extern "C" Object_t * ConstructorBuilder_Invoke_m11600 (ConstructorBuilder_t1990 * __this, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___parameters, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ConstructorBuilder_not_supported_m11612(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m11612_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern MethodInfo ConstructorBuilder_get_MethodHandle_m11601_MethodInfo;
extern "C" RuntimeMethodHandle_t1991  ConstructorBuilder_get_MethodHandle_m11601 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ConstructorBuilder_not_supported_m11612(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m11612_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern MethodInfo ConstructorBuilder_get_Attributes_m11602_MethodInfo;
extern "C" int32_t ConstructorBuilder_get_Attributes_m11602 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_3);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern MethodInfo ConstructorBuilder_get_ReflectedType_m11603_MethodInfo;
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m11603 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern MethodInfo ConstructorBuilder_get_DeclaringType_m11604_MethodInfo;
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m11604 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern MethodInfo ConstructorBuilder_get_Name_m11605_MethodInfo;
extern "C" String_t* ConstructorBuilder_get_Name_m11605 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		int32_t L_0 = (__this->___attrs_3);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo));
		String_t* L_1 = ((ConstructorInfo_t1177_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo)->static_fields)->___TypeConstructorName_1;
		G_B3_0 = L_1;
		goto IL_0017;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo));
		String_t* L_2 = ((ConstructorInfo_t1177_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo)->static_fields)->___ConstructorName_0;
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo ConstructorBuilder_IsDefined_m11606_MethodInfo;
extern "C" bool ConstructorBuilder_IsDefined_m11606 (ConstructorBuilder_t1990 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ConstructorBuilder_not_supported_m11612(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m11612_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo ConstructorBuilder_GetCustomAttributes_m11607_MethodInfo;
extern "C" ObjectU5BU5D_t164* ConstructorBuilder_GetCustomAttributes_m11607 (ConstructorBuilder_t1990 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m11611(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m11611_MethodInfo);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_4 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_3, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_4;
	}

IL_001d:
	{
		Exception_t154 * L_5 = ConstructorBuilder_not_supported_m11612(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m11612_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ConstructorBuilder_GetCustomAttributes_m11608_MethodInfo;
extern "C" ObjectU5BU5D_t164* ConstructorBuilder_GetCustomAttributes_m11608 (ConstructorBuilder_t1990 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		bool L_2 = ConstructorBuilder_get_IsCompilerContext_m11611(__this, /*hidden argument*/&ConstructorBuilder_get_IsCompilerContext_m11611_MethodInfo);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_5 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_5;
	}

IL_001e:
	{
		Exception_t154 * L_6 = ConstructorBuilder_not_supported_m11612(__this, /*hidden argument*/&ConstructorBuilder_not_supported_m11612_MethodInfo);
		il2cpp_codegen_raise_exception(L_6);
	}
}
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern MethodInfo ConstructorBuilder_get_Module_m11609_MethodInfo;
extern "C" Module_t1815 * ConstructorBuilder_get_Module_m11609 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		Module_t1815 * L_0 = MemberInfo_get_Module_m10375(__this, /*hidden argument*/&MemberInfo_get_Module_m10375_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern MethodInfo ConstructorBuilder_ToString_m11610_MethodInfo;
extern "C" String_t* ConstructorBuilder_ToString_m11610 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_5);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m11741_MethodInfo, L_0);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m554(NULL /*static, unused*/, (String_t*) &_stringLiteral1881, L_1, (String_t*) &_stringLiteral1882, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m11611 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	ModuleBuilder_t1998 * V_0 = {0};
	AssemblyBuilder_t1985 * V_1 = {0};
	{
		TypeBuilder_t1988 * L_0 = ConstructorBuilder_get_TypeBuilder_m11596(__this, /*hidden argument*/&ConstructorBuilder_get_TypeBuilder_m11596_MethodInfo);
		NullCheck(L_0);
		Module_t1815 * L_1 = (Module_t1815 *)VirtFuncInvoker0< Module_t1815 * >::Invoke(&TypeBuilder_get_Module_m11740_MethodInfo, L_0);
		V_0 = ((ModuleBuilder_t1998 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1998_il2cpp_TypeInfo)));
		ModuleBuilder_t1998 * L_2 = V_0;
		NullCheck(L_2);
		Assembly_t1476 * L_3 = Module_get_Assembly_m11892(L_2, /*hidden argument*/&Module_get_Assembly_m11892_MethodInfo);
		V_1 = ((AssemblyBuilder_t1985 *)Castclass(L_3, InitializedTypeInfo(&AssemblyBuilder_t1985_il2cpp_TypeInfo)));
		AssemblyBuilder_t1985 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = AssemblyBuilder_get_IsCompilerContext_m11592(L_4, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m11592_MethodInfo);
		return L_5;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t154 * ConstructorBuilder_not_supported_m11612 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1880, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t154 * ConstructorBuilder_not_created_m11613 (ConstructorBuilder_t1990 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1883, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EnumBuilder_t1992_il2cpp_TypeInfo;
// System.Reflection.Emit.EnumBuilder
#include "mscorlib_System_Reflection_Emit_EnumBuilderMethodDeclarations.h"

// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifier.h"
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfo.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo RuntimeTypeHandle_t1814_il2cpp_TypeInfo;
extern TypeInfo BindingFlags_t169_il2cpp_TypeInfo;
extern TypeInfo Binder_t1162_il2cpp_TypeInfo;
extern TypeInfo CallingConventions_t2012_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t913_il2cpp_TypeInfo;
extern TypeInfo ParameterModifierU5BU5D_t1163_il2cpp_TypeInfo;
extern TypeInfo ParameterModifier_t1164_il2cpp_TypeInfo;
extern TypeInfo ConstructorInfoU5BU5D_t1816_il2cpp_TypeInfo;
extern TypeInfo EventInfo_t_il2cpp_TypeInfo;
extern TypeInfo FieldInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodInfo_t_il2cpp_TypeInfo;
extern TypeInfo MethodInfoU5BU5D_t168_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t43_il2cpp_TypeInfo;
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
extern MethodInfo TypeBuilder_get_Assembly_m11734_MethodInfo;
extern MethodInfo TypeBuilder_get_AssemblyQualifiedName_m11735_MethodInfo;
extern MethodInfo TypeBuilder_get_BaseType_m11736_MethodInfo;
extern MethodInfo TypeBuilder_get_DeclaringType_m11737_MethodInfo;
extern MethodInfo TypeBuilder_get_FullName_m11739_MethodInfo;
extern MethodInfo TypeBuilder_get_Namespace_m11742_MethodInfo;
extern MethodInfo TypeBuilder_get_ReflectedType_m11743_MethodInfo;
extern MethodInfo TypeBuilder_get_TypeHandle_m11766_MethodInfo;
extern MethodInfo Type_GetConstructor_m10361_MethodInfo;
extern MethodInfo TypeBuilder_GetConstructors_m11748_MethodInfo;
extern MethodInfo TypeBuilder_GetCustomAttributes_m11746_MethodInfo;
extern MethodInfo TypeBuilder_GetCustomAttributes_m11747_MethodInfo;
extern MethodInfo TypeBuilder_GetElementType_m11750_MethodInfo;
extern MethodInfo TypeBuilder_GetEvent_m11751_MethodInfo;
extern MethodInfo TypeBuilder_GetField_m11752_MethodInfo;
extern MethodInfo TypeBuilder_GetInterfaces_m11753_MethodInfo;
extern MethodInfo Type_GetMethod_m10350_MethodInfo;
extern MethodInfo Type_GetMethod_m10351_MethodInfo;
extern MethodInfo TypeBuilder_GetMethods_m11755_MethodInfo;
extern MethodInfo EnumBuilder_CreateNotSupportedException_m11645_MethodInfo;
extern MethodInfo Type_get_HasElementType_m10322_MethodInfo;
extern MethodInfo TypeBuilder_InvokeMember_m11759_MethodInfo;
extern MethodInfo TypeBuilder_IsDefined_m11745_MethodInfo;


// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern MethodInfo EnumBuilder_get_Assembly_m11614_MethodInfo;
extern "C" Assembly_t1476 * EnumBuilder_get_Assembly_m11614 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Assembly_t1476 * L_1 = (Assembly_t1476 *)VirtFuncInvoker0< Assembly_t1476 * >::Invoke(&TypeBuilder_get_Assembly_m11734_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern MethodInfo EnumBuilder_get_AssemblyQualifiedName_m11615_MethodInfo;
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m11615 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_AssemblyQualifiedName_m11735_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern MethodInfo EnumBuilder_get_BaseType_m11616_MethodInfo;
extern "C" Type_t * EnumBuilder_get_BaseType_m11616 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_BaseType_m11736_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern MethodInfo EnumBuilder_get_DeclaringType_m11617_MethodInfo;
extern "C" Type_t * EnumBuilder_get_DeclaringType_m11617 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_DeclaringType_m11737_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern MethodInfo EnumBuilder_get_FullName_m11618_MethodInfo;
extern "C" String_t* EnumBuilder_get_FullName_m11618 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_FullName_m11739_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern MethodInfo EnumBuilder_get_Module_m11619_MethodInfo;
extern "C" Module_t1815 * EnumBuilder_get_Module_m11619 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Module_t1815 * L_1 = (Module_t1815 *)VirtFuncInvoker0< Module_t1815 * >::Invoke(&TypeBuilder_get_Module_m11740_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern MethodInfo EnumBuilder_get_Name_m11620_MethodInfo;
extern "C" String_t* EnumBuilder_get_Name_m11620 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m11741_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern MethodInfo EnumBuilder_get_Namespace_m11621_MethodInfo;
extern "C" String_t* EnumBuilder_get_Namespace_m11621 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Namespace_m11742_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern MethodInfo EnumBuilder_get_ReflectedType_m11622_MethodInfo;
extern "C" Type_t * EnumBuilder_get_ReflectedType_m11622 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_get_ReflectedType_m11743_MethodInfo, L_0);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern MethodInfo EnumBuilder_get_TypeHandle_m11623_MethodInfo;
extern "C" RuntimeTypeHandle_t1814  EnumBuilder_get_TypeHandle_m11623 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		RuntimeTypeHandle_t1814  L_1 = (RuntimeTypeHandle_t1814 )VirtFuncInvoker0< RuntimeTypeHandle_t1814  >::Invoke(&TypeBuilder_get_TypeHandle_m11766_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern MethodInfo EnumBuilder_get_UnderlyingSystemType_m11624_MethodInfo;
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m11624 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->____underlyingType_9);
		return L_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern MethodInfo EnumBuilder_GetAttributeFlagsImpl_m11625_MethodInfo;
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m11625 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		int32_t L_1 = (L_0->___attrs_16);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetConstructorImpl_m11626_MethodInfo;
extern "C" ConstructorInfo_t1177 * EnumBuilder_GetConstructorImpl_m11626 (EnumBuilder_t1992 * __this, int32_t ___bindingAttr, Binder_t1162 * ___binder, int32_t ___callConvention, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		Binder_t1162 * L_2 = ___binder;
		int32_t L_3 = ___callConvention;
		TypeU5BU5D_t913* L_4 = ___types;
		ParameterModifierU5BU5D_t1163* L_5 = ___modifiers;
		NullCheck(L_0);
		ConstructorInfo_t1177 * L_6 = (ConstructorInfo_t1177 *)VirtFuncInvoker5< ConstructorInfo_t1177 *, int32_t, Binder_t1162 *, int32_t, TypeU5BU5D_t913*, ParameterModifierU5BU5D_t1163* >::Invoke(&Type_GetConstructor_m10361_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetConstructors_m11627_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t1816* EnumBuilder_GetConstructors_m11627 (EnumBuilder_t1992 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t1816* L_2 = (ConstructorInfoU5BU5D_t1816*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1816*, int32_t >::Invoke(&TypeBuilder_GetConstructors_m11748_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo EnumBuilder_GetCustomAttributes_m11628_MethodInfo;
extern "C" ObjectU5BU5D_t164* EnumBuilder_GetCustomAttributes_m11628 (EnumBuilder_t1992 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t164* L_2 = (ObjectU5BU5D_t164*)VirtFuncInvoker1< ObjectU5BU5D_t164*, bool >::Invoke(&TypeBuilder_GetCustomAttributes_m11746_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo EnumBuilder_GetCustomAttributes_m11629_MethodInfo;
extern "C" ObjectU5BU5D_t164* EnumBuilder_GetCustomAttributes_m11629 (EnumBuilder_t1992 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t164* L_3 = (ObjectU5BU5D_t164*)VirtFuncInvoker2< ObjectU5BU5D_t164*, Type_t *, bool >::Invoke(&TypeBuilder_GetCustomAttributes_m11747_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern MethodInfo EnumBuilder_GetElementType_m11630_MethodInfo;
extern "C" Type_t * EnumBuilder_GetElementType_m11630 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&TypeBuilder_GetElementType_m11750_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetEvent_m11631_MethodInfo;
extern "C" EventInfo_t * EnumBuilder_GetEvent_m11631 (EnumBuilder_t1992 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&TypeBuilder_GetEvent_m11751_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetField_m11632_MethodInfo;
extern "C" FieldInfo_t * EnumBuilder_GetField_m11632 (EnumBuilder_t1992 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		FieldInfo_t * L_3 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&TypeBuilder_GetField_m11752_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern MethodInfo EnumBuilder_GetInterfaces_m11633_MethodInfo;
extern "C" TypeU5BU5D_t913* EnumBuilder_GetInterfaces_m11633 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		TypeU5BU5D_t913* L_1 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&TypeBuilder_GetInterfaces_m11753_MethodInfo, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetMethodImpl_m11634_MethodInfo;
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m11634 (EnumBuilder_t1992 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1162 * ___binder, int32_t ___callConvention, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		TypeU5BU5D_t913* L_0 = ___types;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		TypeBuilder_t1988 * L_1 = (__this->____tb_8);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m10350_MethodInfo, L_1, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		TypeBuilder_t1988 * L_5 = (__this->____tb_8);
		String_t* L_6 = ___name;
		int32_t L_7 = ___bindingAttr;
		Binder_t1162 * L_8 = ___binder;
		int32_t L_9 = ___callConvention;
		TypeU5BU5D_t913* L_10 = ___types;
		ParameterModifierU5BU5D_t1163* L_11 = ___modifiers;
		NullCheck(L_5);
		MethodInfo_t * L_12 = (MethodInfo_t *)VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t1162 *, int32_t, TypeU5BU5D_t913*, ParameterModifierU5BU5D_t1163* >::Invoke(&Type_GetMethod_m10351_MethodInfo, L_5, L_6, L_7, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo EnumBuilder_GetMethods_m11635_MethodInfo;
extern "C" MethodInfoU5BU5D_t168* EnumBuilder_GetMethods_m11635 (EnumBuilder_t1992 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		int32_t L_1 = ___bindingAttr;
		NullCheck(L_0);
		MethodInfoU5BU5D_t168* L_2 = (MethodInfoU5BU5D_t168*)VirtFuncInvoker1< MethodInfoU5BU5D_t168*, int32_t >::Invoke(&TypeBuilder_GetMethods_m11755_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo EnumBuilder_GetPropertyImpl_m11636_MethodInfo;
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m11636 (EnumBuilder_t1992 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1162 * ___binder, Type_t * ___returnType, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = EnumBuilder_CreateNotSupportedException_m11645(__this, /*hidden argument*/&EnumBuilder_CreateNotSupportedException_m11645_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern MethodInfo EnumBuilder_HasElementTypeImpl_m11637_MethodInfo;
extern "C" bool EnumBuilder_HasElementTypeImpl_m11637 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m10322_MethodInfo, L_0);
		return L_1;
	}
}
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo EnumBuilder_InvokeMember_m11638_MethodInfo;
extern "C" Object_t * EnumBuilder_InvokeMember_m11638 (EnumBuilder_t1992 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1162 * ___binder, Object_t * ___target, ObjectU5BU5D_t164* ___args, ParameterModifierU5BU5D_t1163* ___modifiers, CultureInfo_t1165 * ___culture, StringU5BU5D_t43* ___namedParameters, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t1162 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t164* L_5 = ___args;
		ParameterModifierU5BU5D_t1163* L_6 = ___modifiers;
		CultureInfo_t1165 * L_7 = ___culture;
		StringU5BU5D_t43* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1162 *, Object_t *, ObjectU5BU5D_t164*, ParameterModifierU5BU5D_t1163*, CultureInfo_t1165 *, StringU5BU5D_t43* >::Invoke(&TypeBuilder_InvokeMember_m11759_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern MethodInfo EnumBuilder_IsArrayImpl_m11639_MethodInfo;
extern "C" bool EnumBuilder_IsArrayImpl_m11639 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern MethodInfo EnumBuilder_IsByRefImpl_m11640_MethodInfo;
extern "C" bool EnumBuilder_IsByRefImpl_m11640 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern MethodInfo EnumBuilder_IsPointerImpl_m11641_MethodInfo;
extern "C" bool EnumBuilder_IsPointerImpl_m11641 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern MethodInfo EnumBuilder_IsPrimitiveImpl_m11642_MethodInfo;
extern "C" bool EnumBuilder_IsPrimitiveImpl_m11642 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern MethodInfo EnumBuilder_IsValueTypeImpl_m11643_MethodInfo;
extern "C" bool EnumBuilder_IsValueTypeImpl_m11643 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo EnumBuilder_IsDefined_m11644_MethodInfo;
extern "C" bool EnumBuilder_IsDefined_m11644 (EnumBuilder_t1992 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->____tb_8);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		bool L_3 = (bool)VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(&TypeBuilder_IsDefined_m11745_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t154 * EnumBuilder_CreateNotSupportedException_m11645 (EnumBuilder_t1992 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1880, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo FieldBuilder_t1994_il2cpp_TypeInfo;
// System.Reflection.Emit.FieldBuilder
#include "mscorlib_System_Reflection_Emit_FieldBuilderMethodDeclarations.h"

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshal.h"
extern MethodInfo FieldBuilder_CreateNotSupportedException_m11659_MethodInfo;


// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern MethodInfo FieldBuilder_get_Attributes_m11646_MethodInfo;
extern "C" int32_t FieldBuilder_get_Attributes_m11646 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern MethodInfo FieldBuilder_get_DeclaringType_m11647_MethodInfo;
extern "C" Type_t * FieldBuilder_get_DeclaringType_m11647 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern MethodInfo FieldBuilder_get_FieldHandle_m11648_MethodInfo;
extern "C" RuntimeFieldHandle_t1817  FieldBuilder_get_FieldHandle_m11648 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = FieldBuilder_CreateNotSupportedException_m11659(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m11659_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern MethodInfo FieldBuilder_get_FieldType_m11649_MethodInfo;
extern "C" Type_t * FieldBuilder_get_FieldType_m11649 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern MethodInfo FieldBuilder_get_Name_m11650_MethodInfo;
extern "C" String_t* FieldBuilder_get_Name_m11650 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern MethodInfo FieldBuilder_get_ReflectedType_m11651_MethodInfo;
extern "C" Type_t * FieldBuilder_get_ReflectedType_m11651 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___typeb_3);
		return L_0;
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo FieldBuilder_GetCustomAttributes_m11652_MethodInfo;
extern "C" ObjectU5BU5D_t164* FieldBuilder_GetCustomAttributes_m11652 (FieldBuilder_t1994 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_3 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_2, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_3;
	}

IL_0015:
	{
		Exception_t154 * L_4 = FieldBuilder_CreateNotSupportedException_m11659(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m11659_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo FieldBuilder_GetCustomAttributes_m11653_MethodInfo;
extern "C" ObjectU5BU5D_t164* FieldBuilder_GetCustomAttributes_m11653 (FieldBuilder_t1994 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___typeb_3);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_4 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_4;
	}

IL_0016:
	{
		Exception_t154 * L_5 = FieldBuilder_CreateNotSupportedException_m11659(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m11659_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern MethodInfo FieldBuilder_GetValue_m11654_MethodInfo;
extern "C" Object_t * FieldBuilder_GetValue_m11654 (FieldBuilder_t1994 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = FieldBuilder_CreateNotSupportedException_m11659(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m11659_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo FieldBuilder_IsDefined_m11655_MethodInfo;
extern "C" bool FieldBuilder_IsDefined_m11655 (FieldBuilder_t1994 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = FieldBuilder_CreateNotSupportedException_m11659(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m11659_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern MethodInfo FieldBuilder_GetFieldOffset_m11656_MethodInfo;
extern "C" int32_t FieldBuilder_GetFieldOffset_m11656 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern MethodInfo FieldBuilder_SetValue_m11657_MethodInfo;
extern "C" void FieldBuilder_SetValue_m11657 (FieldBuilder_t1994 * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1162 * ___binder, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = FieldBuilder_CreateNotSupportedException_m11659(__this, /*hidden argument*/&FieldBuilder_CreateNotSupportedException_m11659_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern MethodInfo FieldBuilder_get_UMarshal_m11658_MethodInfo;
extern "C" UnmanagedMarshal_t1993 * FieldBuilder_get_UMarshal_m11658 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		UnmanagedMarshal_t1993 * L_0 = (__this->___marshal_info_4);
		return L_0;
	}
}
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C" Exception_t154 * FieldBuilder_CreateNotSupportedException_m11659 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1880, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern MethodInfo FieldBuilder_get_Module_m11660_MethodInfo;
extern "C" Module_t1815 * FieldBuilder_get_Module_m11660 (FieldBuilder_t1994 * __this, MethodInfo* method)
{
	{
		Module_t1815 * L_0 = MemberInfo_get_Module_m10375(__this, /*hidden argument*/&MemberInfo_get_Module_m10375_MethodInfo);
		return L_0;
	}
}
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericTypeParameterBuilder_t1996_il2cpp_TypeInfo;
// System.Reflection.Emit.GenericTypeParameterBuilder
#include "mscorlib_System_Reflection_Emit_GenericTypeParameterBuilderMethodDeclarations.h"

// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilder.h"
extern TypeInfo MethodBuilder_t1995_il2cpp_TypeInfo;
// System.Reflection.Emit.MethodBuilder
#include "mscorlib_System_Reflection_Emit_MethodBuilderMethodDeclarations.h"
extern MethodInfo MethodBuilder_get_DeclaringType_m11710_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_get_DeclaringType_m11692_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_not_supported_m11701_MethodInfo;
extern MethodInfo GenericTypeParameterBuilder_get_BaseType_m11684_MethodInfo;
extern MethodInfo Type_IsSubclassOf_m10349_MethodInfo;
extern MethodInfo Type_get_IsValueType_m10335_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m7992_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m449_MethodInfo;
extern MethodInfo Type_Equals_m10339_MethodInfo;
extern MethodInfo Type_GetHashCode_m8425_MethodInfo;
extern MethodInfo Type_MakeGenericType_m6961_MethodInfo;


// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsSubclassOf(System.Type)
extern MethodInfo GenericTypeParameterBuilder_IsSubclassOf_m11661_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsSubclassOf_m11661 (GenericTypeParameterBuilder_t1996 * __this, Type_t * ___c, MethodInfo* method)
{
	int32_t G_B7_0 = 0;
	{
		TypeBuilder_t1988 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1815 * L_1 = (Module_t1815 *)VirtFuncInvoker0< Module_t1815 * >::Invoke(&TypeBuilder_get_Module_m11740_MethodInfo, L_0);
		NullCheck(((ModuleBuilder_t1998 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1998_il2cpp_TypeInfo))));
		AssemblyBuilder_t1985 * L_2 = (((ModuleBuilder_t1998 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1998_il2cpp_TypeInfo)))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m11592(L_2, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m11592_MethodInfo);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t154 * L_4 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0023:
	{
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m11684_MethodInfo, __this);
		if (L_5)
		{
			goto IL_002d;
		}
	}
	{
		return 0;
	}

IL_002d:
	{
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m11684_MethodInfo, __this);
		Type_t * L_7 = ___c;
		if ((((Object_t*)(Type_t *)L_6) == ((Object_t*)(Type_t *)L_7)))
		{
			goto IL_0044;
		}
	}
	{
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_BaseType_m11684_MethodInfo, __this);
		Type_t * L_9 = ___c;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m10349_MethodInfo, L_8, L_9);
		G_B7_0 = ((int32_t)(L_10));
		goto IL_0045;
	}

IL_0044:
	{
		G_B7_0 = 1;
	}

IL_0045:
	{
		return G_B7_0;
	}
}
// System.Reflection.TypeAttributes System.Reflection.Emit.GenericTypeParameterBuilder::GetAttributeFlagsImpl()
extern MethodInfo GenericTypeParameterBuilder_GetAttributeFlagsImpl_m11662_MethodInfo;
extern "C" int32_t GenericTypeParameterBuilder_GetAttributeFlagsImpl_m11662 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1815 * L_1 = (Module_t1815 *)VirtFuncInvoker0< Module_t1815 * >::Invoke(&TypeBuilder_get_Module_m11740_MethodInfo, L_0);
		NullCheck(((ModuleBuilder_t1998 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1998_il2cpp_TypeInfo))));
		AssemblyBuilder_t1985 * L_2 = (((ModuleBuilder_t1998 *)Castclass(L_1, InitializedTypeInfo(&ModuleBuilder_t1998_il2cpp_TypeInfo)))->___assemblyb_10);
		NullCheck(L_2);
		bool L_3 = AssemblyBuilder_get_IsCompilerContext_m11592(L_2, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m11592_MethodInfo);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(1);
	}

IL_001e:
	{
		Exception_t154 * L_4 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetConstructorImpl_m11663_MethodInfo;
extern "C" ConstructorInfo_t1177 * GenericTypeParameterBuilder_GetConstructorImpl_m11663 (GenericTypeParameterBuilder_t1996 * __this, int32_t ___bindingAttr, Binder_t1162 * ___binder, int32_t ___callConvention, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetConstructors(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetConstructors_m11664_MethodInfo;
extern "C" ConstructorInfoU5BU5D_t1816* GenericTypeParameterBuilder_GetConstructors_m11664 (GenericTypeParameterBuilder_t1996 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetEvent_m11665_MethodInfo;
extern "C" EventInfo_t * GenericTypeParameterBuilder_GetEvent_m11665 (GenericTypeParameterBuilder_t1996 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetField_m11666_MethodInfo;
extern "C" FieldInfo_t * GenericTypeParameterBuilder_GetField_m11666 (GenericTypeParameterBuilder_t1996 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetInterfaces()
extern MethodInfo GenericTypeParameterBuilder_GetInterfaces_m11667_MethodInfo;
extern "C" TypeU5BU5D_t913* GenericTypeParameterBuilder_GetInterfaces_m11667 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.GenericTypeParameterBuilder::GetMethods(System.Reflection.BindingFlags)
extern MethodInfo GenericTypeParameterBuilder_GetMethods_m11668_MethodInfo;
extern "C" MethodInfoU5BU5D_t168* GenericTypeParameterBuilder_GetMethods_m11668 (GenericTypeParameterBuilder_t1996 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetMethodImpl_m11669_MethodInfo;
extern "C" MethodInfo_t * GenericTypeParameterBuilder_GetMethodImpl_m11669 (GenericTypeParameterBuilder_t1996 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1162 * ___binder, int32_t ___callConvention, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.GenericTypeParameterBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo GenericTypeParameterBuilder_GetPropertyImpl_m11670_MethodInfo;
extern "C" PropertyInfo_t * GenericTypeParameterBuilder_GetPropertyImpl_m11670 (GenericTypeParameterBuilder_t1996 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1162 * ___binder, Type_t * ___returnType, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::HasElementTypeImpl()
extern MethodInfo GenericTypeParameterBuilder_HasElementTypeImpl_m11671_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_HasElementTypeImpl_m11671 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsAssignableFrom(System.Type)
extern MethodInfo GenericTypeParameterBuilder_IsAssignableFrom_m11672_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsAssignableFrom_m11672 (GenericTypeParameterBuilder_t1996 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsInstanceOfType(System.Object)
extern MethodInfo GenericTypeParameterBuilder_IsInstanceOfType_m11673_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsInstanceOfType_m11673 (GenericTypeParameterBuilder_t1996 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsArrayImpl()
extern MethodInfo GenericTypeParameterBuilder_IsArrayImpl_m11674_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsArrayImpl_m11674 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsByRefImpl()
extern MethodInfo GenericTypeParameterBuilder_IsByRefImpl_m11675_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsByRefImpl_m11675 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPointerImpl()
extern MethodInfo GenericTypeParameterBuilder_IsPointerImpl_m11676_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsPointerImpl_m11676 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsPrimitiveImpl()
extern MethodInfo GenericTypeParameterBuilder_IsPrimitiveImpl_m11677_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsPrimitiveImpl_m11677 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsValueTypeImpl()
extern MethodInfo GenericTypeParameterBuilder_IsValueTypeImpl_m11678_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsValueTypeImpl_m11678 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		Type_t * L_0 = (__this->___base_type_11);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___base_type_11);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10335_MethodInfo, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Object System.Reflection.Emit.GenericTypeParameterBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern MethodInfo GenericTypeParameterBuilder_InvokeMember_m11679_MethodInfo;
extern "C" Object_t * GenericTypeParameterBuilder_InvokeMember_m11679 (GenericTypeParameterBuilder_t1996 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1162 * ___binder, Object_t * ___target, ObjectU5BU5D_t164* ___args, ParameterModifierU5BU5D_t1163* ___modifiers, CultureInfo_t1165 * ___culture, StringU5BU5D_t43* ___namedParameters, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetElementType()
extern MethodInfo GenericTypeParameterBuilder_GetElementType_m11680_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_GetElementType_m11680 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_UnderlyingSystemType()
extern MethodInfo GenericTypeParameterBuilder_get_UnderlyingSystemType_m11681_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_get_UnderlyingSystemType_m11681 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.GenericTypeParameterBuilder::get_Assembly()
extern MethodInfo GenericTypeParameterBuilder_get_Assembly_m11682_MethodInfo;
extern "C" Assembly_t1476 * GenericTypeParameterBuilder_get_Assembly_m11682 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Assembly_t1476 * L_1 = (Assembly_t1476 *)VirtFuncInvoker0< Assembly_t1476 * >::Invoke(&TypeBuilder_get_Assembly_m11734_MethodInfo, L_0);
		return L_1;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_AssemblyQualifiedName()
extern MethodInfo GenericTypeParameterBuilder_get_AssemblyQualifiedName_m11683_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_AssemblyQualifiedName_m11683 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_BaseType()
extern "C" Type_t * GenericTypeParameterBuilder_get_BaseType_m11684 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___base_type_11);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_FullName()
extern MethodInfo GenericTypeParameterBuilder_get_FullName_m11685_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_FullName_m11685 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_IsDefined_m11686_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_IsDefined_m11686 (GenericTypeParameterBuilder_t1996 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_GetCustomAttributes_m11687_MethodInfo;
extern "C" ObjectU5BU5D_t164* GenericTypeParameterBuilder_GetCustomAttributes_m11687 (GenericTypeParameterBuilder_t1996 * __this, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.GenericTypeParameterBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo GenericTypeParameterBuilder_GetCustomAttributes_m11688_MethodInfo;
extern "C" ObjectU5BU5D_t164* GenericTypeParameterBuilder_GetCustomAttributes_m11688 (GenericTypeParameterBuilder_t1996 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Name()
extern MethodInfo GenericTypeParameterBuilder_get_Name_m11689_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_Name_m11689 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::get_Namespace()
extern MethodInfo GenericTypeParameterBuilder_get_Namespace_m11690_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_get_Namespace_m11690 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return (String_t*)NULL;
	}
}
// System.Reflection.Module System.Reflection.Emit.GenericTypeParameterBuilder::get_Module()
extern MethodInfo GenericTypeParameterBuilder_get_Module_m11691_MethodInfo;
extern "C" Module_t1815 * GenericTypeParameterBuilder_get_Module_m11691 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___tbuilder_8);
		NullCheck(L_0);
		Module_t1815 * L_1 = (Module_t1815 *)VirtFuncInvoker0< Module_t1815 * >::Invoke(&TypeBuilder_get_Module_m11740_MethodInfo, L_0);
		return L_1;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_DeclaringType()
extern "C" Type_t * GenericTypeParameterBuilder_get_DeclaringType_m11692 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	Type_t * G_B3_0 = {0};
	{
		MethodBuilder_t1995 * L_0 = (__this->___mbuilder_9);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		MethodBuilder_t1995 * L_1 = (__this->___mbuilder_9);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodBuilder_get_DeclaringType_m11710_MethodInfo, L_1);
		G_B3_0 = L_2;
		goto IL_001b;
	}

IL_0015:
	{
		TypeBuilder_t1988 * L_3 = (__this->___tbuilder_8);
		G_B3_0 = ((Type_t *)(L_3));
	}

IL_001b:
	{
		return G_B3_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::get_ReflectedType()
extern MethodInfo GenericTypeParameterBuilder_get_ReflectedType_m11693_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_get_ReflectedType_m11693 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&GenericTypeParameterBuilder_get_DeclaringType_m11692_MethodInfo, __this);
		return L_0;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.GenericTypeParameterBuilder::get_TypeHandle()
extern MethodInfo GenericTypeParameterBuilder_get_TypeHandle_m11694_MethodInfo;
extern "C" RuntimeTypeHandle_t1814  GenericTypeParameterBuilder_get_TypeHandle_m11694 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = GenericTypeParameterBuilder_not_supported_m11701(__this, /*hidden argument*/&GenericTypeParameterBuilder_not_supported_m11701_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type[] System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericArguments()
extern MethodInfo GenericTypeParameterBuilder_GetGenericArguments_m11695_MethodInfo;
extern "C" TypeU5BU5D_t913* GenericTypeParameterBuilder_GetGenericArguments_m11695 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		InvalidOperationException_t1471 * L_0 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7992(L_0, /*hidden argument*/&InvalidOperationException__ctor_m7992_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::GetGenericTypeDefinition()
extern MethodInfo GenericTypeParameterBuilder_GetGenericTypeDefinition_m11696_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_GetGenericTypeDefinition_m11696 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		InvalidOperationException_t1471 * L_0 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7992(L_0, /*hidden argument*/&InvalidOperationException__ctor_m7992_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_ContainsGenericParameters()
extern MethodInfo GenericTypeParameterBuilder_get_ContainsGenericParameters_m11697_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_ContainsGenericParameters_m11697 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericParameter()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericParameter_m11698_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericParameter_m11698 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericType()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericType_m11699_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericType_m11699 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::get_IsGenericTypeDefinition()
extern MethodInfo GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m11700_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_get_IsGenericTypeDefinition_m11700 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Exception System.Reflection.Emit.GenericTypeParameterBuilder::not_supported()
extern "C" Exception_t154 * GenericTypeParameterBuilder_not_supported_m11701 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.Emit.GenericTypeParameterBuilder::ToString()
extern MethodInfo GenericTypeParameterBuilder_ToString_m11702_MethodInfo;
extern "C" String_t* GenericTypeParameterBuilder_ToString_m11702 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_10);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.GenericTypeParameterBuilder::Equals(System.Object)
extern MethodInfo GenericTypeParameterBuilder_Equals_m11703_MethodInfo;
extern "C" bool GenericTypeParameterBuilder_Equals_m11703 (GenericTypeParameterBuilder_t1996 * __this, Object_t * ___o, MethodInfo* method)
{
	{
		Object_t * L_0 = ___o;
		bool L_1 = Type_Equals_m10339(__this, L_0, /*hidden argument*/&Type_Equals_m10339_MethodInfo);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.GenericTypeParameterBuilder::GetHashCode()
extern MethodInfo GenericTypeParameterBuilder_GetHashCode_m11704_MethodInfo;
extern "C" int32_t GenericTypeParameterBuilder_GetHashCode_m11704 (GenericTypeParameterBuilder_t1996 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = Type_GetHashCode_m8425(__this, /*hidden argument*/&Type_GetHashCode_m8425_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::MakeGenericType(System.Type[])
extern MethodInfo GenericTypeParameterBuilder_MakeGenericType_m11705_MethodInfo;
extern "C" Type_t * GenericTypeParameterBuilder_MakeGenericType_m11705 (GenericTypeParameterBuilder_t1996 * __this, TypeU5BU5D_t913* ___typeArguments, MethodInfo* method)
{
	{
		TypeU5BU5D_t913* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m6961(__this, L_0, /*hidden argument*/&Type_MakeGenericType_m6961_MethodInfo);
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif

extern Il2CppType StringU5BU5D_t43_0_0_0;
extern Il2CppType TypeU5BU5D_t913_0_0_0;
extern MethodInfo MethodBuilder_NotSupported_m11723_MethodInfo;
extern MethodInfo String_Concat_m8022_MethodInfo;
extern MethodInfo Object_Equals_m713_MethodInfo;
extern MethodInfo String_GetHashCode_m6857_MethodInfo;


// System.Boolean System.Reflection.Emit.MethodBuilder::get_ContainsGenericParameters()
extern MethodInfo MethodBuilder_get_ContainsGenericParameters_m11706_MethodInfo;
extern "C" bool MethodBuilder_get_ContainsGenericParameters_m11706 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.RuntimeMethodHandle System.Reflection.Emit.MethodBuilder::get_MethodHandle()
extern MethodInfo MethodBuilder_get_MethodHandle_m11707_MethodInfo;
extern "C" RuntimeMethodHandle_t1991  MethodBuilder_get_MethodHandle_m11707 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = MethodBuilder_NotSupported_m11723(__this, /*hidden argument*/&MethodBuilder_NotSupported_m11723_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReturnType()
extern MethodInfo MethodBuilder_get_ReturnType_m11708_MethodInfo;
extern "C" Type_t * MethodBuilder_get_ReturnType_m11708 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___rtype_0);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_ReflectedType()
extern MethodInfo MethodBuilder_get_ReflectedType_m11709_MethodInfo;
extern "C" Type_t * MethodBuilder_get_ReflectedType_m11709 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.MethodBuilder::get_DeclaringType()
extern "C" Type_t * MethodBuilder_get_DeclaringType_m11710 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_4);
		return L_0;
	}
}
// System.String System.Reflection.Emit.MethodBuilder::get_Name()
extern MethodInfo MethodBuilder_get_Name_m11711_MethodInfo;
extern "C" String_t* MethodBuilder_get_Name_m11711 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		return L_0;
	}
}
// System.Reflection.MethodAttributes System.Reflection.Emit.MethodBuilder::get_Attributes()
extern MethodInfo MethodBuilder_get_Attributes_m11712_MethodInfo;
extern "C" int32_t MethodBuilder_get_Attributes_m11712 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_2);
		return L_0;
	}
}
// System.Reflection.CallingConventions System.Reflection.Emit.MethodBuilder::get_CallingConvention()
extern MethodInfo MethodBuilder_get_CallingConvention_m11713_MethodInfo;
extern "C" int32_t MethodBuilder_get_CallingConvention_m11713 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___call_conv_6);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::GetBaseDefinition()
extern MethodInfo MethodBuilder_GetBaseDefinition_m11714_MethodInfo;
extern "C" MethodInfo_t * MethodBuilder_GetBaseDefinition_m11714 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		return __this;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.Emit.MethodBuilder::GetParameters()
extern MethodInfo MethodBuilder_GetParameters_m11715_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1170* MethodBuilder_GetParameters_m11715 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	static bool MethodBuilder_GetParameters_m11715_init;
	if (!MethodBuilder_GetParameters_m11715_init)
	{
		ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t1170_0_0_0);
		MethodBuilder_GetParameters_m11715_init = true;
	}
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B7_0 = 0;
	ParameterInfoU5BU5D_t1170* G_B7_1 = {0};
	int32_t G_B6_0 = 0;
	ParameterInfoU5BU5D_t1170* G_B6_1 = {0};
	ParameterBuilder_t1999 * G_B8_0 = {0};
	int32_t G_B8_1 = 0;
	ParameterInfoU5BU5D_t1170* G_B8_2 = {0};
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t154 * L_2 = MethodBuilder_NotSupported_m11723(__this, /*hidden argument*/&MethodBuilder_NotSupported_m11723_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0014:
	{
		TypeU5BU5D_t913* L_3 = (__this->___parameters_1);
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (ParameterInfoU5BU5D_t1170*)NULL;
	}

IL_001e:
	{
		TypeU5BU5D_t913* L_4 = (__this->___parameters_1);
		NullCheck(L_4);
		V_0 = ((ParameterInfoU5BU5D_t1170*)SZArrayNew(ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		V_1 = 0;
		goto IL_005d;
	}

IL_0030:
	{
		ParameterInfoU5BU5D_t1170* L_5 = V_0;
		int32_t L_6 = V_1;
		ParameterBuilderU5BU5D_t1989* L_7 = (__this->___pinfo_5);
		G_B6_0 = L_6;
		G_B6_1 = L_5;
		if (L_7)
		{
			G_B7_0 = L_6;
			G_B7_1 = L_5;
			goto IL_003d;
		}
	}
	{
		G_B8_0 = ((ParameterBuilder_t1999 *)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0047;
	}

IL_003d:
	{
		ParameterBuilderU5BU5D_t1989* L_8 = (__this->___pinfo_5);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9+(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)L_9+(int32_t)1));
		G_B8_0 = (*(ParameterBuilder_t1999 **)(ParameterBuilder_t1999 **)SZArrayLdElema(L_8, L_10));
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0047:
	{
		TypeU5BU5D_t913* L_11 = (__this->___parameters_1);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		int32_t L_14 = V_1;
		ParameterInfo_t1171 * L_15 = (ParameterInfo_t1171 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t1171_il2cpp_TypeInfo));
		ParameterInfo__ctor_m12020(L_15, G_B8_0, (*(Type_t **)(Type_t **)SZArrayLdElema(L_11, L_13)), __this, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/&ParameterInfo__ctor_m12020_MethodInfo);
		NullCheck(G_B8_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B8_2, G_B8_1);
		ArrayElementTypeCheck (G_B8_2, L_15);
		*((ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(G_B8_2, G_B8_1)) = (ParameterInfo_t1171 *)L_15;
		int32_t L_16 = V_1;
		V_1 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_005d:
	{
		int32_t L_17 = V_1;
		TypeU5BU5D_t913* L_18 = (__this->___parameters_1);
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0030;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_19 = V_0;
		return L_19;
	}
}
// System.Object System.Reflection.Emit.MethodBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MethodBuilder_Invoke_m11716_MethodInfo;
extern "C" Object_t * MethodBuilder_Invoke_m11716 (MethodBuilder_t1995 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___parameters, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = MethodBuilder_NotSupported_m11723(__this, /*hidden argument*/&MethodBuilder_NotSupported_m11723_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::IsDefined(System.Type,System.Boolean)
extern MethodInfo MethodBuilder_IsDefined_m11717_MethodInfo;
extern "C" bool MethodBuilder_IsDefined_m11717 (MethodBuilder_t1995 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = MethodBuilder_NotSupported_m11723(__this, /*hidden argument*/&MethodBuilder_NotSupported_m11723_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Boolean)
extern MethodInfo MethodBuilder_GetCustomAttributes_m11718_MethodInfo;
extern "C" ObjectU5BU5D_t164* MethodBuilder_GetCustomAttributes_m11718 (MethodBuilder_t1995 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		bool L_2 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_3 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_2, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_3;
	}

IL_0015:
	{
		Exception_t154 * L_4 = MethodBuilder_NotSupported_m11723(__this, /*hidden argument*/&MethodBuilder_NotSupported_m11723_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}
}
// System.Object[] System.Reflection.Emit.MethodBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MethodBuilder_GetCustomAttributes_m11719_MethodInfo;
extern "C" ObjectU5BU5D_t164* MethodBuilder_GetCustomAttributes_m11719 (MethodBuilder_t1995 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_t1988 * L_0 = (__this->___type_4);
		NullCheck(L_0);
		bool L_1 = TypeBuilder_get_is_created_m11768(L_0, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___attributeType;
		bool L_3 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_4 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_4;
	}

IL_0016:
	{
		Exception_t154 * L_5 = MethodBuilder_NotSupported_m11723(__this, /*hidden argument*/&MethodBuilder_NotSupported_m11723_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}
}
// System.String System.Reflection.Emit.MethodBuilder::ToString()
extern MethodInfo MethodBuilder_ToString_m11720_MethodInfo;
extern TypeInfo* StringU5BU5D_t43_il2cpp_TypeInfo_var;
extern "C" String_t* MethodBuilder_ToString_m11720 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	static bool MethodBuilder_ToString_m11720_init;
	if (!MethodBuilder_ToString_m11720_init)
	{
		StringU5BU5D_t43_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&StringU5BU5D_t43_0_0_0);
		MethodBuilder_ToString_m11720_init = true;
	}
	{
		StringU5BU5D_t43* L_0 = ((StringU5BU5D_t43*)SZArrayNew(StringU5BU5D_t43_il2cpp_TypeInfo_var, 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral1884);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral1884;
		StringU5BU5D_t43* L_1 = L_0;
		TypeBuilder_t1988 * L_2 = (__this->___type_4);
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_Name_m11741_MethodInfo, L_2);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		ArrayElementTypeCheck (L_1, L_3);
		*((String_t**)(String_t**)SZArrayLdElema(L_1, 1)) = (String_t*)L_3;
		StringU5BU5D_t43* L_4 = L_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 2);
		ArrayElementTypeCheck (L_4, (String_t*) &_stringLiteral646);
		*((String_t**)(String_t**)SZArrayLdElema(L_4, 2)) = (String_t*)(String_t*) &_stringLiteral646;
		StringU5BU5D_t43* L_5 = L_4;
		String_t* L_6 = (__this->___name_3);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 3);
		ArrayElementTypeCheck (L_5, L_6);
		*((String_t**)(String_t**)SZArrayLdElema(L_5, 3)) = (String_t*)L_6;
		StringU5BU5D_t43* L_7 = L_5;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 4);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral551);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 4)) = (String_t*)(String_t*) &_stringLiteral551;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_8 = String_Concat_m8022(NULL /*static, unused*/, L_7, /*hidden argument*/&String_Concat_m8022_MethodInfo);
		return L_8;
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::Equals(System.Object)
extern MethodInfo MethodBuilder_Equals_m11721_MethodInfo;
extern "C" bool MethodBuilder_Equals_m11721 (MethodBuilder_t1995 * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		bool L_1 = Object_Equals_m713(__this, L_0, /*hidden argument*/&Object_Equals_m713_MethodInfo);
		return L_1;
	}
}
// System.Int32 System.Reflection.Emit.MethodBuilder::GetHashCode()
extern MethodInfo MethodBuilder_GetHashCode_m11722_MethodInfo;
extern "C" int32_t MethodBuilder_GetHashCode_m11722 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&String_GetHashCode_m6857_MethodInfo, L_0);
		return L_1;
	}
}
// System.Exception System.Reflection.Emit.MethodBuilder::NotSupported()
extern "C" Exception_t154 * MethodBuilder_NotSupported_m11723 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1880, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])
extern MethodInfo MethodBuilder_MakeGenericMethod_m11724_MethodInfo;
extern "C" MethodInfo_t * MethodBuilder_MakeGenericMethod_m11724 (MethodBuilder_t1995 * __this, TypeU5BU5D_t913* ___typeArguments, MethodInfo* method)
{
	typedef MethodInfo_t * (*MethodBuilder_MakeGenericMethod_m11724_ftn) (MethodBuilder_t1995 *, TypeU5BU5D_t913*);
	static MethodBuilder_MakeGenericMethod_m11724_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBuilder_MakeGenericMethod_m11724_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.MethodBuilder::MakeGenericMethod(System.Type[])");
	return _il2cpp_icall_func(__this, ___typeArguments);
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethodDefinition()
extern MethodInfo MethodBuilder_get_IsGenericMethodDefinition_m11725_MethodInfo;
extern "C" bool MethodBuilder_get_IsGenericMethodDefinition_m11725 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1997*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.MethodBuilder::get_IsGenericMethod()
extern MethodInfo MethodBuilder_get_IsGenericMethod_m11726_MethodInfo;
extern "C" bool MethodBuilder_get_IsGenericMethod_m11726 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_7);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1997*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.Emit.MethodBuilder::GetGenericArguments()
extern MethodInfo MethodBuilder_GetGenericArguments_m11727_MethodInfo;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t913* MethodBuilder_GetGenericArguments_m11727 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	static bool MethodBuilder_GetGenericArguments_m11727_init;
	if (!MethodBuilder_GetGenericArguments_m11727_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		MethodBuilder_GetGenericArguments_m11727_init = true;
	}
	TypeU5BU5D_t913* V_0 = {0};
	int32_t V_1 = 0;
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_7);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_1 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_1;
	}

IL_000e:
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_2 = (__this->___generic_params_7);
		NullCheck(L_2);
		V_0 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		V_1 = 0;
		goto IL_002f;
	}

IL_0020:
	{
		TypeU5BU5D_t913* L_3 = V_0;
		int32_t L_4 = V_1;
		GenericTypeParameterBuilderU5BU5D_t1997* L_5 = (__this->___generic_params_7);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		ArrayElementTypeCheck (L_3, (*(GenericTypeParameterBuilder_t1996 **)(GenericTypeParameterBuilder_t1996 **)SZArrayLdElema(L_5, L_7)));
		*((Type_t **)(Type_t **)SZArrayLdElema(L_3, L_4)) = (Type_t *)(*(GenericTypeParameterBuilder_t1996 **)(GenericTypeParameterBuilder_t1996 **)SZArrayLdElema(L_5, L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		GenericTypeParameterBuilderU5BU5D_t1997* L_10 = (__this->___generic_params_7);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0020;
		}
	}
	{
		TypeU5BU5D_t913* L_11 = V_0;
		return L_11;
	}
}
// System.Reflection.Module System.Reflection.Emit.MethodBuilder::get_Module()
extern MethodInfo MethodBuilder_get_Module_m11728_MethodInfo;
extern "C" Module_t1815 * MethodBuilder_get_Module_m11728 (MethodBuilder_t1995 * __this, MethodInfo* method)
{
	{
		Module_t1815 * L_0 = MemberInfo_get_Module_m10375(__this, /*hidden argument*/&MemberInfo_get_Module_m10375_MethodInfo);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.Emit.ModuleBuilder
#include "mscorlib_System_Reflection_Emit_ModuleBuilderMethodDeclarations.h"



// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern MethodInfo ModuleBuilder__cctor_m11729_MethodInfo;
extern TypeInfo* CharU5BU5D_t395_il2cpp_TypeInfo_var;
extern "C" void ModuleBuilder__cctor_m11729 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	static bool ModuleBuilder__cctor_m11729_init;
	if (!ModuleBuilder__cctor_m11729_init)
	{
		CharU5BU5D_t395_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&CharU5BU5D_t395_0_0_0);
		ModuleBuilder__cctor_m11729_init = true;
	}
	{
		CharU5BU5D_t395* L_0 = ((CharU5BU5D_t395*)SZArrayNew(CharU5BU5D_t395_il2cpp_TypeInfo_var, 3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_0, 0)) = (uint16_t)((int32_t)38);
		CharU5BU5D_t395* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_1, 1)) = (uint16_t)((int32_t)91);
		CharU5BU5D_t395* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_2, 2)) = (uint16_t)((int32_t)42);
		((ModuleBuilder_t1998_StaticFields*)InitializedTypeInfo(&ModuleBuilder_t1998_il2cpp_TypeInfo)->static_fields)->___type_modifiers_11 = L_2;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterBuilder_t1999_il2cpp_TypeInfo;
// System.Reflection.Emit.ParameterBuilder
#include "mscorlib_System_Reflection_Emit_ParameterBuilderMethodDeclarations.h"

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Attributes()
extern MethodInfo ParameterBuilder_get_Attributes_m11730_MethodInfo;
extern "C" int32_t ParameterBuilder_get_Attributes_m11730 (ParameterBuilder_t1999 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_1);
		return L_0;
	}
}
// System.String System.Reflection.Emit.ParameterBuilder::get_Name()
extern MethodInfo ParameterBuilder_get_Name_m11731_MethodInfo;
extern "C" String_t* ParameterBuilder_get_Name_m11731 (ParameterBuilder_t1999 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Int32 System.Reflection.Emit.ParameterBuilder::get_Position()
extern MethodInfo ParameterBuilder_get_Position_m11732_MethodInfo;
extern "C" int32_t ParameterBuilder_get_Position_m11732 (ParameterBuilder_t1999 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___position_2);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchException.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
extern TypeInfo AmbiguousMatchException_t2003_il2cpp_TypeInfo;
extern TypeInfo MethodBaseU5BU5D_t2010_il2cpp_TypeInfo;
extern TypeInfo MethodBase_t1169_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t1304_il2cpp_TypeInfo;
extern TypeInfo MethodAttributes_t2017_il2cpp_TypeInfo;
extern TypeInfo FieldAttributes_t2015_il2cpp_TypeInfo;
// System.Reflection.AmbiguousMatchException
#include "mscorlib_System_Reflection_AmbiguousMatchExceptionMethodDeclarations.h"
// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
// System.Reflection.Binder
#include "mscorlib_System_Reflection_BinderMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfoMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodBaseU5BU5D_t2010_0_0_0;
extern Il2CppType ConstructorInfoU5BU5D_t1816_0_0_0;
extern Il2CppType MethodInfoU5BU5D_t168_0_0_0;
extern Il2CppType ValueType_t211_0_0_0;
extern MethodInfo Assembly_get_FullName_m11789_MethodInfo;
extern MethodInfo Type_get_UnderlyingSystemType_m13980_MethodInfo;
extern MethodInfo Type_get_IsEnum_m10328_MethodInfo;
extern MethodInfo TypeBuilder_get_IsCompilerContext_m11767_MethodInfo;
extern MethodInfo TypeBuilder_check_created_m11770_MethodInfo;
extern MethodInfo Type_get_TypeHandle_m10338_MethodInfo;
extern MethodInfo TypeBuilder_get_IsGenericTypeDefinition_m11779_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m498_MethodInfo;
extern MethodInfo AmbiguousMatchException__ctor_m11782_MethodInfo;
extern MethodInfo MethodBase_get_CallingConvention_m11873_MethodInfo;
extern MethodInfo Binder_get_DefaultBinder_m11837_MethodInfo;
extern MethodInfo Binder_SelectMethod_m14023_MethodInfo;
extern MethodInfo MonoCustomAttrs_IsDefined_m13645_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m570_MethodInfo;
extern MethodInfo MemberInfo_GetCustomAttributes_m6910_MethodInfo;
extern MethodInfo Type_GetConstructors_m14024_MethodInfo;
extern MethodInfo TypeBuilder_GetConstructorsInternal_m11749_MethodInfo;
extern MethodInfo ArrayList__ctor_m7998_MethodInfo;
extern MethodInfo ArrayList_Add_m8008_MethodInfo;
extern MethodInfo ArrayList_get_Count_m7994_MethodInfo;
extern MethodInfo ArrayList_CopyTo_m8200_MethodInfo;
extern MethodInfo Type_GetEvent_m14025_MethodInfo;
extern MethodInfo Type_GetField_m14026_MethodInfo;
extern MethodInfo MemberInfo_get_Name_m6929_MethodInfo;
extern MethodInfo String_op_Inequality_m2540_MethodInfo;
extern MethodInfo FieldInfo_get_Attributes_m13990_MethodInfo;
extern MethodInfo Type_GetInterfaces_m14027_MethodInfo;
extern MethodInfo Array_CopyTo_m8174_MethodInfo;
extern MethodInfo Type_GetMethods_m569_MethodInfo;
extern MethodInfo ArrayList__ctor_m8155_MethodInfo;
extern MethodInfo MethodBase_get_Attributes_m13989_MethodInfo;
extern MethodInfo MethodBase_get_IsStatic_m6953_MethodInfo;
extern MethodInfo ArrayList_CopyTo_m8152_MethodInfo;
extern MethodInfo String_Compare_m9922_MethodInfo;
extern MethodInfo TypeBuilder_GetMethodsByName_m11754_MethodInfo;
extern MethodInfo Binder_FindMostDerivedMatch_m11840_MethodInfo;
extern MethodInfo TypeBuilder_not_supported_m11769_MethodInfo;
extern MethodInfo Type_InvokeMember_m6916_MethodInfo;
extern MethodInfo Type_type_is_subtype_of_m10347_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m6867_MethodInfo;
extern MethodInfo Type_get_IsInterface_m10330_MethodInfo;


// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern MethodInfo TypeBuilder_GetAttributeFlagsImpl_m11733_MethodInfo;
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m11733 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_16);
		return L_0;
	}
}
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1476 * TypeBuilder_get_Assembly_m11734 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1998 * L_0 = (__this->___pmodule_17);
		NullCheck(L_0);
		Assembly_t1476 * L_1 = Module_get_Assembly_m11892(L_0, /*hidden argument*/&Module_get_Assembly_m11892_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m11735 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_20);
		Assembly_t1476 * L_1 = (Assembly_t1476 *)VirtFuncInvoker0< Assembly_t1476 * >::Invoke(&TypeBuilder_get_Assembly_m11734_MethodInfo, __this);
		NullCheck(L_1);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m11789_MethodInfo, L_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m554(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral559, L_2, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_3;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m11736 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___parent_10);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m11737 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern MethodInfo TypeBuilder_get_UnderlyingSystemType_m11738_MethodInfo;
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m11738 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_UnderlyingSystemType_m13980_MethodInfo, L_1);
		return L_2;
	}

IL_0014:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, __this);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m11767(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m11767_MethodInfo);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		Type_t * L_5 = (__this->___underlying_type_21);
		if (!L_5)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_6 = (__this->___underlying_type_21);
		return L_6;
	}

IL_0033:
	{
		InvalidOperationException_t1471 * L_7 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_7, (String_t*) &_stringLiteral1885, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_003e:
	{
		return __this;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m11739 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fullname_20);
		return L_0;
	}
}
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1815 * TypeBuilder_get_Module_m11740 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1998 * L_0 = (__this->___pmodule_17);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m11741 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___tname_8);
		return L_0;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m11742 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___nspace_9);
		return L_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m11743 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___nesting_type_11);
		return L_0;
	}
}
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetConstructorImpl_m11744_MethodInfo;
extern TypeInfo* MethodBaseU5BU5D_t2010_il2cpp_TypeInfo_var;
extern "C" ConstructorInfo_t1177 * TypeBuilder_GetConstructorImpl_m11744 (TypeBuilder_t1988 * __this, int32_t ___bindingAttr, Binder_t1162 * ___binder, int32_t ___callConvention, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	static bool TypeBuilder_GetConstructorImpl_m11744_init;
	if (!TypeBuilder_GetConstructorImpl_m11744_init)
	{
		MethodBaseU5BU5D_t2010_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodBaseU5BU5D_t2010_0_0_0);
		TypeBuilder_GetConstructorImpl_m11744_init = true;
	}
	ConstructorBuilder_t1990 * V_0 = {0};
	int32_t V_1 = 0;
	ConstructorBuilder_t1990 * V_2 = {0};
	ConstructorBuilderU5BU5D_t2001* V_3 = {0};
	int32_t V_4 = 0;
	MethodBaseU5BU5D_t2010* V_5 = {0};
	ConstructorInfo_t1177 * V_6 = {0};
	ConstructorBuilderU5BU5D_t2001* V_7 = {0};
	int32_t V_8 = 0;
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_00e1;
		}
	}
	{
		ConstructorBuilderU5BU5D_t2001* L_2 = (__this->___ctors_14);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		return (ConstructorInfo_t1177 *)NULL;
	}

IL_0025:
	{
		V_0 = (ConstructorBuilder_t1990 *)NULL;
		V_1 = 0;
		ConstructorBuilderU5BU5D_t2001* L_3 = (__this->___ctors_14);
		V_3 = L_3;
		V_4 = 0;
		goto IL_0055;
	}

IL_0035:
	{
		ConstructorBuilderU5BU5D_t2001* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		V_2 = (*(ConstructorBuilder_t1990 **)(ConstructorBuilder_t1990 **)SZArrayLdElema(L_4, L_6));
		int32_t L_7 = ___callConvention;
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_0049;
		}
	}
	{
		ConstructorBuilder_t1990 * L_8 = V_2;
		NullCheck(L_8);
		int32_t L_9 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ConstructorBuilder_get_CallingConvention_m11595_MethodInfo, L_8);
		int32_t L_10 = ___callConvention;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_0049:
	{
		ConstructorBuilder_t1990 * L_11 = V_2;
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004f:
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_4;
		ConstructorBuilderU5BU5D_t2001* L_15 = V_3;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)(((Array_t *)L_15)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_16 = V_1;
		if (L_16)
		{
			goto IL_0061;
		}
	}
	{
		return (ConstructorInfo_t1177 *)NULL;
	}

IL_0061:
	{
		TypeU5BU5D_t913* L_17 = ___types;
		if (L_17)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = V_1;
		if ((((int32_t)L_18) <= ((int32_t)1)))
		{
			goto IL_006f;
		}
	}
	{
		AmbiguousMatchException_t2003 * L_19 = (AmbiguousMatchException_t2003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t2003_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m11782(L_19, /*hidden argument*/&AmbiguousMatchException__ctor_m11782_MethodInfo);
		il2cpp_codegen_raise_exception(L_19);
	}

IL_006f:
	{
		ConstructorBuilder_t1990 * L_20 = V_0;
		return L_20;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		V_5 = ((MethodBaseU5BU5D_t2010*)SZArrayNew(MethodBaseU5BU5D_t2010_il2cpp_TypeInfo_var, L_21));
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0084;
		}
	}
	{
		MethodBaseU5BU5D_t2010* L_23 = V_5;
		ConstructorBuilder_t1990 * L_24 = V_0;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, 0);
		ArrayElementTypeCheck (L_23, L_24);
		*((MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_23, 0)) = (MethodBase_t1169 *)L_24;
		goto IL_00c2;
	}

IL_0084:
	{
		V_1 = 0;
		ConstructorBuilderU5BU5D_t2001* L_25 = (__this->___ctors_14);
		V_7 = L_25;
		V_8 = 0;
		goto IL_00ba;
	}

IL_0093:
	{
		ConstructorBuilderU5BU5D_t2001* L_26 = V_7;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		int32_t L_28 = L_27;
		V_6 = (*(ConstructorBuilder_t1990 **)(ConstructorBuilder_t1990 **)SZArrayLdElema(L_26, L_28));
		int32_t L_29 = ___callConvention;
		if ((((int32_t)L_29) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		ConstructorInfo_t1177 * L_30 = V_6;
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m11873_MethodInfo, L_30);
		int32_t L_32 = ___callConvention;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_00aa;
		}
	}
	{
		goto IL_00b4;
	}

IL_00aa:
	{
		MethodBaseU5BU5D_t2010* L_33 = V_5;
		int32_t L_34 = V_1;
		int32_t L_35 = L_34;
		V_1 = ((int32_t)((int32_t)L_35+(int32_t)1));
		ConstructorInfo_t1177 * L_36 = V_6;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_35);
		ArrayElementTypeCheck (L_33, L_36);
		*((MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_33, L_35)) = (MethodBase_t1169 *)L_36;
	}

IL_00b4:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)((int32_t)L_37+(int32_t)1));
	}

IL_00ba:
	{
		int32_t L_38 = V_8;
		ConstructorBuilderU5BU5D_t2001* L_39 = V_7;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)(((int32_t)(((Array_t *)L_39)->max_length))))))
		{
			goto IL_0093;
		}
	}

IL_00c2:
	{
		Binder_t1162 * L_40 = ___binder;
		if (L_40)
		{
			goto IL_00ce;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		Binder_t1162 * L_41 = Binder_get_DefaultBinder_m11837(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m11837_MethodInfo);
		___binder = L_41;
	}

IL_00ce:
	{
		Binder_t1162 * L_42 = ___binder;
		int32_t L_43 = ___bindingAttr;
		MethodBaseU5BU5D_t2010* L_44 = V_5;
		TypeU5BU5D_t913* L_45 = ___types;
		ParameterModifierU5BU5D_t1163* L_46 = ___modifiers;
		NullCheck(L_42);
		MethodBase_t1169 * L_47 = (MethodBase_t1169 *)VirtFuncInvoker4< MethodBase_t1169 *, int32_t, MethodBaseU5BU5D_t2010*, TypeU5BU5D_t913*, ParameterModifierU5BU5D_t1163* >::Invoke(&Binder_SelectMethod_m14023_MethodInfo, L_42, L_43, L_44, L_45, L_46);
		return ((ConstructorInfo_t1177 *)Castclass(L_47, InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo)));
	}

IL_00e1:
	{
		Type_t * L_48 = (__this->___created_19);
		int32_t L_49 = ___bindingAttr;
		Binder_t1162 * L_50 = ___binder;
		int32_t L_51 = ___callConvention;
		TypeU5BU5D_t913* L_52 = ___types;
		ParameterModifierU5BU5D_t1163* L_53 = ___modifiers;
		NullCheck(L_48);
		ConstructorInfo_t1177 * L_54 = (ConstructorInfo_t1177 *)VirtFuncInvoker5< ConstructorInfo_t1177 *, int32_t, Binder_t1162 *, int32_t, TypeU5BU5D_t913*, ParameterModifierU5BU5D_t1163* >::Invoke(&Type_GetConstructor_m10361_MethodInfo, L_48, L_49, L_50, L_51, L_52, L_53);
		return L_54;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m11745 (TypeBuilder_t1988 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = TypeBuilder_get_IsCompilerContext_m11767(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m11767_MethodInfo);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		NotSupportedException_t146 * L_2 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_2, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		Type_t * L_3 = ___attributeType;
		bool L_4 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_5 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_5;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t164* TypeBuilder_GetCustomAttributes_m11746 (TypeBuilder_t1988 * __this, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		bool L_1 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t164* L_2 = (ObjectU5BU5D_t164*)VirtFuncInvoker1< ObjectU5BU5D_t164*, bool >::Invoke(&MemberInfo_GetCustomAttributes_m570_MethodInfo, L_0, L_1);
		return L_2;
	}
}
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t164* TypeBuilder_GetCustomAttributes_m11747 (TypeBuilder_t1988 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		Type_t * L_1 = ___attributeType;
		bool L_2 = ___inherit;
		NullCheck(L_0);
		ObjectU5BU5D_t164* L_3 = (ObjectU5BU5D_t164*)VirtFuncInvoker2< ObjectU5BU5D_t164*, Type_t *, bool >::Invoke(&MemberInfo_GetCustomAttributes_m6910_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1816* TypeBuilder_GetConstructors_m11748 (TypeBuilder_t1988 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_1);
		ConstructorInfoU5BU5D_t1816* L_3 = (ConstructorInfoU5BU5D_t1816*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1816*, int32_t >::Invoke(&Type_GetConstructors_m14024_MethodInfo, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		bool L_4 = TypeBuilder_get_IsCompilerContext_m11767(__this, /*hidden argument*/&TypeBuilder_get_IsCompilerContext_m11767_MethodInfo);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		NotSupportedException_t146 * L_5 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_5, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0023:
	{
		int32_t L_6 = ___bindingAttr;
		ConstructorInfoU5BU5D_t1816* L_7 = TypeBuilder_GetConstructorsInternal_m11749(__this, L_6, /*hidden argument*/&TypeBuilder_GetConstructorsInternal_m11749_MethodInfo);
		return L_7;
	}
}
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern TypeInfo* ConstructorInfoU5BU5D_t1816_il2cpp_TypeInfo_var;
extern "C" ConstructorInfoU5BU5D_t1816* TypeBuilder_GetConstructorsInternal_m11749 (TypeBuilder_t1988 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	static bool TypeBuilder_GetConstructorsInternal_m11749_init;
	if (!TypeBuilder_GetConstructorsInternal_m11749_init)
	{
		ConstructorInfoU5BU5D_t1816_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ConstructorInfoU5BU5D_t1816_0_0_0);
		TypeBuilder_GetConstructorsInternal_m11749_init = true;
	}
	ArrayList_t1304 * V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	ConstructorBuilder_t1990 * V_3 = {0};
	ConstructorBuilderU5BU5D_t2001* V_4 = {0};
	int32_t V_5 = 0;
	ConstructorInfoU5BU5D_t1816* V_6 = {0};
	{
		ConstructorBuilderU5BU5D_t2001* L_0 = (__this->___ctors_14);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		return ((ConstructorInfoU5BU5D_t1816*)SZArrayNew(ConstructorInfoU5BU5D_t1816_il2cpp_TypeInfo_var, 0));
	}

IL_000f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList_t1304 * L_1 = (ArrayList_t1304 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList__ctor_m7998(L_1, /*hidden argument*/&ArrayList__ctor_m7998_MethodInfo);
		V_0 = L_1;
		ConstructorBuilderU5BU5D_t2001* L_2 = (__this->___ctors_14);
		V_4 = L_2;
		V_5 = 0;
		goto IL_0079;
	}

IL_0022:
	{
		ConstructorBuilderU5BU5D_t2001* L_3 = V_4;
		int32_t L_4 = V_5;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_3 = (*(ConstructorBuilder_t1990 **)(ConstructorBuilder_t1990 **)SZArrayLdElema(L_3, L_5));
		V_1 = 0;
		ConstructorBuilder_t1990 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ConstructorBuilder_get_Attributes_m11602_MethodInfo, L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_9&(int32_t)((int32_t)16))))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = 1;
	}

IL_003f:
	{
		goto IL_0049;
	}

IL_0041:
	{
		int32_t L_10 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_10&(int32_t)((int32_t)32))))
		{
			goto IL_0049;
		}
	}
	{
		V_1 = 1;
	}

IL_0049:
	{
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0073;
	}

IL_004e:
	{
		V_1 = 0;
		int32_t L_12 = V_2;
		if (!((int32_t)((int32_t)L_12&(int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_13 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_13&(int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		V_1 = 1;
	}

IL_005d:
	{
		goto IL_0066;
	}

IL_005f:
	{
		int32_t L_14 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_14&(int32_t)4)))
		{
			goto IL_0066;
		}
	}
	{
		V_1 = 1;
	}

IL_0066:
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_006b:
	{
		ArrayList_t1304 * L_16 = V_0;
		ConstructorBuilder_t1990 * L_17 = V_3;
		NullCheck(L_16);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8008_MethodInfo, L_16, L_17);
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_5;
		ConstructorBuilderU5BU5D_t2001* L_20 = V_4;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t1304 * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m7994_MethodInfo, L_21);
		V_6 = ((ConstructorInfoU5BU5D_t1816*)SZArrayNew(ConstructorInfoU5BU5D_t1816_il2cpp_TypeInfo_var, L_22));
		ArrayList_t1304 * L_23 = V_0;
		ConstructorInfoU5BU5D_t1816* L_24 = V_6;
		NullCheck(L_23);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m8200_MethodInfo, L_23, (Array_t *)(Array_t *)L_24);
		ConstructorInfoU5BU5D_t1816* L_25 = V_6;
		return L_25;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m11750 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m11751 (TypeBuilder_t1988 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		NullCheck(L_0);
		EventInfo_t * L_3 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&Type_GetEvent_m14025_MethodInfo, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m11752 (TypeBuilder_t1988 * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = {0};
	FieldInfo_t * V_2 = {0};
	FieldBuilderU5BU5D_t2002* V_3 = {0};
	int32_t V_4 = 0;
	{
		Type_t * L_0 = (__this->___created_19);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		String_t* L_2 = ___name;
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_1);
		FieldInfo_t * L_4 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m14026_MethodInfo, L_1, L_2, L_3);
		return L_4;
	}

IL_0016:
	{
		FieldBuilderU5BU5D_t2002* L_5 = (__this->___fields_15);
		if (L_5)
		{
			goto IL_0020;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}

IL_0020:
	{
		FieldBuilderU5BU5D_t2002* L_6 = (__this->___fields_15);
		V_3 = L_6;
		V_4 = 0;
		goto IL_0094;
	}

IL_002f:
	{
		FieldBuilderU5BU5D_t2002* L_7 = V_3;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_2 = (*(FieldBuilder_t1994 **)(FieldBuilder_t1994 **)SZArrayLdElema(L_7, L_9));
		FieldInfo_t * L_10 = V_2;
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		goto IL_008e;
	}

IL_0039:
	{
		FieldInfo_t * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_11);
		String_t* L_13 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Inequality_m2540(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/&String_op_Inequality_m2540_MethodInfo);
		if (!L_14)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_008e;
	}

IL_0049:
	{
		V_0 = 0;
		FieldInfo_t * L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m13990_MethodInfo, L_15);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)((int32_t)((int32_t)L_17&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_18 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_18&(int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		V_0 = 1;
	}

IL_0060:
	{
		goto IL_006a;
	}

IL_0062:
	{
		int32_t L_19 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_19&(int32_t)((int32_t)32))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = 1;
	}

IL_006a:
	{
		bool L_20 = V_0;
		if (L_20)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_008e;
	}

IL_006f:
	{
		V_0 = 0;
		int32_t L_21 = V_1;
		if (!((int32_t)((int32_t)L_21&(int32_t)((int32_t)16))))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_22 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_22&(int32_t)8)))
		{
			goto IL_007e;
		}
	}
	{
		V_0 = 1;
	}

IL_007e:
	{
		goto IL_0087;
	}

IL_0080:
	{
		int32_t L_23 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_23&(int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		V_0 = 1;
	}

IL_0087:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_008c;
		}
	}
	{
		goto IL_008e;
	}

IL_008c:
	{
		FieldInfo_t * L_25 = V_2;
		return L_25;
	}

IL_008e:
	{
		int32_t L_26 = V_4;
		V_4 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0094:
	{
		int32_t L_27 = V_4;
		FieldBuilderU5BU5D_t2002* L_28 = V_3;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (FieldInfo_t *)NULL;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t913* TypeBuilder_GetInterfaces_m11753 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	static bool TypeBuilder_GetInterfaces_m11753_init;
	if (!TypeBuilder_GetInterfaces_m11753_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		TypeBuilder_GetInterfaces_m11753_init = true;
	}
	TypeU5BU5D_t913* V_0 = {0};
	{
		bool L_0 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		TypeU5BU5D_t913* L_2 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&Type_GetInterfaces_m14027_MethodInfo, L_1);
		return L_2;
	}

IL_0014:
	{
		TypeU5BU5D_t913* L_3 = (__this->___interfaces_12);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		TypeU5BU5D_t913* L_4 = (__this->___interfaces_12);
		NullCheck(L_4);
		V_0 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_4)->max_length)))));
		TypeU5BU5D_t913* L_5 = (__this->___interfaces_12);
		TypeU5BU5D_t913* L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m8174_MethodInfo, L_5, (Array_t *)(Array_t *)L_6, 0);
		TypeU5BU5D_t913* L_7 = V_0;
		return L_7;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_8 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_8;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern TypeInfo* MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t168* TypeBuilder_GetMethodsByName_m11754 (TypeBuilder_t1988 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method)
{
	static bool TypeBuilder_GetMethodsByName_m11754_init;
	if (!TypeBuilder_GetMethodsByName_m11754_init)
	{
		MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t168_0_0_0);
		TypeBuilder_GetMethodsByName_m11754_init = true;
	}
	MethodInfoU5BU5D_t168* V_0 = {0};
	bool V_1 = false;
	int32_t V_2 = {0};
	MethodInfoU5BU5D_t168* V_3 = {0};
	ArrayList_t1304 * V_4 = {0};
	bool V_5 = false;
	int32_t V_6 = 0;
	MethodInfo_t * V_7 = {0};
	ArrayList_t1304 * V_8 = {0};
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t168* V_10 = {0};
	int32_t V_11 = 0;
	MethodInfoU5BU5D_t168* V_12 = {0};
	int32_t V_13 = {0};
	{
		int32_t L_0 = ___bindingAttr;
		if (((int32_t)((int32_t)L_0&(int32_t)2)))
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_1 = (__this->___parent_10);
		if (!L_1)
		{
			goto IL_011e;
		}
	}
	{
		Type_t * L_2 = (__this->___parent_10);
		int32_t L_3 = ___bindingAttr;
		NullCheck(L_2);
		MethodInfoU5BU5D_t168* L_4 = (MethodInfoU5BU5D_t168*)VirtFuncInvoker1< MethodInfoU5BU5D_t168*, int32_t >::Invoke(&Type_GetMethods_m569_MethodInfo, L_2, L_3);
		V_3 = L_4;
		MethodInfoU5BU5D_t168* L_5 = V_3;
		NullCheck(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList_t1304 * L_6 = (ArrayList_t1304 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList__ctor_m8155(L_6, (((int32_t)(((Array_t *)L_5)->max_length))), /*hidden argument*/&ArrayList__ctor_m8155_MethodInfo);
		V_4 = L_6;
		int32_t L_7 = ___bindingAttr;
		V_5 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_7&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_6 = 0;
		goto IL_00c1;
	}

IL_003e:
	{
		MethodInfoU5BU5D_t168* L_8 = V_3;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_7 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		MethodInfo_t * L_11 = V_7;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m13989_MethodInfo, L_11);
		V_2 = L_12;
		MethodInfo_t * L_13 = V_7;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m6953_MethodInfo, L_13);
		if (!L_14)
		{
			goto IL_005b;
		}
	}
	{
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		goto IL_00bb;
	}

IL_005b:
	{
		int32_t L_16 = V_2;
		V_13 = ((int32_t)((int32_t)L_16&(int32_t)7));
		int32_t L_17 = V_13;
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 0)
		{
			goto IL_009d;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 1)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 2)
		{
			goto IL_0090;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 3)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 4)
		{
			goto IL_00a1;
		}
		if (((int32_t)((int32_t)L_17-(int32_t)1)) == 5)
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00a1;
	}

IL_0083:
	{
		int32_t L_18 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_18&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_0090:
	{
		int32_t L_19 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_19&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_009d:
	{
		V_1 = 0;
		goto IL_00ae;
	}

IL_00a1:
	{
		int32_t L_20 = ___bindingAttr;
		V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_20&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00ae;
	}

IL_00ae:
	{
		bool L_21 = V_1;
		if (!L_21)
		{
			goto IL_00bb;
		}
	}
	{
		ArrayList_t1304 * L_22 = V_4;
		MethodInfo_t * L_23 = V_7;
		NullCheck(L_22);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8008_MethodInfo, L_22, L_23);
	}

IL_00bb:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_00c1:
	{
		int32_t L_25 = V_6;
		MethodInfoU5BU5D_t168* L_26 = V_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)(((Array_t *)L_26)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		MethodBuilderU5BU5D_t2000* L_27 = (__this->___methods_13);
		if (L_27)
		{
			goto IL_00ea;
		}
	}
	{
		ArrayList_t1304 * L_28 = V_4;
		NullCheck(L_28);
		int32_t L_29 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m7994_MethodInfo, L_28);
		V_0 = ((MethodInfoU5BU5D_t168*)SZArrayNew(MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var, L_29));
		ArrayList_t1304 * L_30 = V_4;
		MethodInfoU5BU5D_t168* L_31 = V_0;
		NullCheck(L_30);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m8200_MethodInfo, L_30, (Array_t *)(Array_t *)L_31);
		goto IL_011c;
	}

IL_00ea:
	{
		MethodBuilderU5BU5D_t2000* L_32 = (__this->___methods_13);
		NullCheck(L_32);
		ArrayList_t1304 * L_33 = V_4;
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m7994_MethodInfo, L_33);
		V_0 = ((MethodInfoU5BU5D_t168*)SZArrayNew(MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_32)->max_length)))+(int32_t)L_34))));
		ArrayList_t1304 * L_35 = V_4;
		MethodInfoU5BU5D_t168* L_36 = V_0;
		NullCheck(L_35);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&ArrayList_CopyTo_m8152_MethodInfo, L_35, (Array_t *)(Array_t *)L_36, 0);
		MethodBuilderU5BU5D_t2000* L_37 = (__this->___methods_13);
		MethodInfoU5BU5D_t168* L_38 = V_0;
		ArrayList_t1304 * L_39 = V_4;
		NullCheck(L_39);
		int32_t L_40 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m7994_MethodInfo, L_39);
		NullCheck(L_37);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m8174_MethodInfo, L_37, (Array_t *)(Array_t *)L_38, L_40);
	}

IL_011c:
	{
		goto IL_0125;
	}

IL_011e:
	{
		MethodBuilderU5BU5D_t2000* L_41 = (__this->___methods_13);
		V_0 = (MethodInfoU5BU5D_t168*)L_41;
	}

IL_0125:
	{
		MethodInfoU5BU5D_t168* L_42 = V_0;
		if (L_42)
		{
			goto IL_012f;
		}
	}
	{
		return ((MethodInfoU5BU5D_t168*)SZArrayNew(MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var, 0));
	}

IL_012f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList_t1304 * L_43 = (ArrayList_t1304 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList__ctor_m7998(L_43, /*hidden argument*/&ArrayList__ctor_m7998_MethodInfo);
		V_8 = L_43;
		MethodInfoU5BU5D_t168* L_44 = V_0;
		V_10 = L_44;
		V_11 = 0;
		goto IL_01ba;
	}

IL_0141:
	{
		MethodInfoU5BU5D_t168* L_45 = V_10;
		int32_t L_46 = V_11;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, L_46);
		int32_t L_47 = L_46;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_45, L_47));
		MethodInfo_t * L_48 = V_9;
		if (L_48)
		{
			goto IL_0151;
		}
	}
	{
		goto IL_01b4;
	}

IL_0151:
	{
		String_t* L_49 = ___name;
		if (!L_49)
		{
			goto IL_0166;
		}
	}
	{
		MethodInfo_t * L_50 = V_9;
		NullCheck(L_50);
		String_t* L_51 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_50);
		String_t* L_52 = ___name;
		bool L_53 = ___ignoreCase;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_54 = String_Compare_m9922(NULL /*static, unused*/, L_51, L_52, L_53, /*hidden argument*/&String_Compare_m9922_MethodInfo);
		if (!L_54)
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01b4;
	}

IL_0166:
	{
		V_1 = 0;
		MethodInfo_t * L_55 = V_9;
		NullCheck(L_55);
		int32_t L_56 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m13989_MethodInfo, L_55);
		V_2 = L_56;
		int32_t L_57 = V_2;
		if ((!(((uint32_t)((int32_t)((int32_t)L_57&(int32_t)7))) == ((uint32_t)6))))
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_58 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_58&(int32_t)((int32_t)16))))
		{
			goto IL_017e;
		}
	}
	{
		V_1 = 1;
	}

IL_017e:
	{
		goto IL_0188;
	}

IL_0180:
	{
		int32_t L_59 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_59&(int32_t)((int32_t)32))))
		{
			goto IL_0188;
		}
	}
	{
		V_1 = 1;
	}

IL_0188:
	{
		bool L_60 = V_1;
		if (L_60)
		{
			goto IL_018d;
		}
	}
	{
		goto IL_01b4;
	}

IL_018d:
	{
		V_1 = 0;
		int32_t L_61 = V_2;
		if (!((int32_t)((int32_t)L_61&(int32_t)((int32_t)16))))
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_62 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_62&(int32_t)8)))
		{
			goto IL_019c;
		}
	}
	{
		V_1 = 1;
	}

IL_019c:
	{
		goto IL_01a5;
	}

IL_019e:
	{
		int32_t L_63 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_63&(int32_t)4)))
		{
			goto IL_01a5;
		}
	}
	{
		V_1 = 1;
	}

IL_01a5:
	{
		bool L_64 = V_1;
		if (L_64)
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_01b4;
	}

IL_01aa:
	{
		ArrayList_t1304 * L_65 = V_8;
		MethodInfo_t * L_66 = V_9;
		NullCheck(L_65);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8008_MethodInfo, L_65, L_66);
	}

IL_01b4:
	{
		int32_t L_67 = V_11;
		V_11 = ((int32_t)((int32_t)L_67+(int32_t)1));
	}

IL_01ba:
	{
		int32_t L_68 = V_11;
		MethodInfoU5BU5D_t168* L_69 = V_10;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)(((int32_t)(((Array_t *)L_69)->max_length))))))
		{
			goto IL_0141;
		}
	}
	{
		ArrayList_t1304 * L_70 = V_8;
		NullCheck(L_70);
		int32_t L_71 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ArrayList_get_Count_m7994_MethodInfo, L_70);
		V_12 = ((MethodInfoU5BU5D_t168*)SZArrayNew(MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var, L_71));
		ArrayList_t1304 * L_72 = V_8;
		MethodInfoU5BU5D_t168* L_73 = V_12;
		NullCheck(L_72);
		VirtActionInvoker1< Array_t * >::Invoke(&ArrayList_CopyTo_m8200_MethodInfo, L_72, (Array_t *)(Array_t *)L_73);
		MethodInfoU5BU5D_t168* L_74 = V_12;
		return L_74;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t168* TypeBuilder_GetMethods_m11755 (TypeBuilder_t1988 * __this, int32_t ___bindingAttr, MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodInfoU5BU5D_t168* L_1 = TypeBuilder_GetMethodsByName_m11754(__this, (String_t*)NULL, L_0, 0, __this, /*hidden argument*/&TypeBuilder_GetMethodsByName_m11754_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetMethodImpl_m11756_MethodInfo;
extern TypeInfo* MethodBaseU5BU5D_t2010_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m11756 (TypeBuilder_t1988 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1162 * ___binder, int32_t ___callConvention, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	static bool TypeBuilder_GetMethodImpl_m11756_init;
	if (!TypeBuilder_GetMethodImpl_m11756_init)
	{
		MethodBaseU5BU5D_t2010_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodBaseU5BU5D_t2010_0_0_0);
		TypeBuilder_GetMethodImpl_m11756_init = true;
	}
	bool V_0 = false;
	MethodInfoU5BU5D_t168* V_1 = {0};
	MethodInfo_t * V_2 = {0};
	MethodBaseU5BU5D_t2010* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = {0};
	MethodInfoU5BU5D_t168* V_7 = {0};
	int32_t V_8 = 0;
	MethodInfo_t * V_9 = {0};
	MethodInfoU5BU5D_t168* V_10 = {0};
	int32_t V_11 = 0;
	int32_t G_B3_0 = 0;
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		int32_t L_0 = ___bindingAttr;
		V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		String_t* L_1 = ___name;
		int32_t L_2 = ___bindingAttr;
		bool L_3 = V_0;
		MethodInfoU5BU5D_t168* L_4 = TypeBuilder_GetMethodsByName_m11754(__this, L_1, L_2, L_3, __this, /*hidden argument*/&TypeBuilder_GetMethodsByName_m11754_MethodInfo);
		V_1 = L_4;
		V_2 = (MethodInfo_t *)NULL;
		TypeU5BU5D_t913* L_5 = ___types;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		TypeU5BU5D_t913* L_6 = ___types;
		NullCheck(L_6);
		G_B3_0 = (((int32_t)(((Array_t *)L_6)->max_length)));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_4 = G_B3_0;
		V_5 = 0;
		MethodInfoU5BU5D_t168* L_7 = V_1;
		V_7 = L_7;
		V_8 = 0;
		goto IL_0060;
	}

IL_0035:
	{
		MethodInfoU5BU5D_t168* L_8 = V_7;
		int32_t L_9 = V_8;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		V_6 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_8, L_10));
		int32_t L_11 = ___callConvention;
		if ((((int32_t)L_11) == ((int32_t)3)))
		{
			goto IL_0051;
		}
	}
	{
		MethodInfo_t * L_12 = V_6;
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m11873_MethodInfo, L_12);
		int32_t L_14 = ___callConvention;
		int32_t L_15 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_13&(int32_t)L_14))) == ((int32_t)L_15)))
		{
			goto IL_0051;
		}
	}
	{
		goto IL_005a;
	}

IL_0051:
	{
		MethodInfo_t * L_16 = V_6;
		V_2 = L_16;
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005a:
	{
		int32_t L_18 = V_8;
		V_8 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0060:
	{
		int32_t L_19 = V_8;
		MethodInfoU5BU5D_t168* L_20 = V_7;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_21 = V_5;
		if (L_21)
		{
			goto IL_006e;
		}
	}
	{
		return (MethodInfo_t *)NULL;
	}

IL_006e:
	{
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		int32_t L_23 = V_4;
		if (L_23)
		{
			goto IL_0079;
		}
	}
	{
		MethodInfo_t * L_24 = V_2;
		return L_24;
	}

IL_0079:
	{
		int32_t L_25 = V_5;
		V_3 = ((MethodBaseU5BU5D_t2010*)SZArrayNew(MethodBaseU5BU5D_t2010_il2cpp_TypeInfo_var, L_25));
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_008c;
		}
	}
	{
		MethodBaseU5BU5D_t2010* L_27 = V_3;
		MethodInfo_t * L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		ArrayElementTypeCheck (L_27, L_28);
		*((MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_27, 0)) = (MethodBase_t1169 *)L_28;
		goto IL_00cc;
	}

IL_008c:
	{
		V_5 = 0;
		MethodInfoU5BU5D_t168* L_29 = V_1;
		V_10 = L_29;
		V_11 = 0;
		goto IL_00c4;
	}

IL_0097:
	{
		MethodInfoU5BU5D_t168* L_30 = V_10;
		int32_t L_31 = V_11;
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, L_31);
		int32_t L_32 = L_31;
		V_9 = (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_30, L_32));
		int32_t L_33 = ___callConvention;
		if ((((int32_t)L_33) == ((int32_t)3)))
		{
			goto IL_00b3;
		}
	}
	{
		MethodInfo_t * L_34 = V_9;
		NullCheck(L_34);
		int32_t L_35 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m11873_MethodInfo, L_34);
		int32_t L_36 = ___callConvention;
		int32_t L_37 = ___callConvention;
		if ((((int32_t)((int32_t)((int32_t)L_35&(int32_t)L_36))) == ((int32_t)L_37)))
		{
			goto IL_00b3;
		}
	}
	{
		goto IL_00be;
	}

IL_00b3:
	{
		MethodBaseU5BU5D_t2010* L_38 = V_3;
		int32_t L_39 = V_5;
		int32_t L_40 = L_39;
		V_5 = ((int32_t)((int32_t)L_40+(int32_t)1));
		MethodInfo_t * L_41 = V_9;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_40);
		ArrayElementTypeCheck (L_38, L_41);
		*((MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_38, L_40)) = (MethodBase_t1169 *)L_41;
	}

IL_00be:
	{
		int32_t L_42 = V_11;
		V_11 = ((int32_t)((int32_t)L_42+(int32_t)1));
	}

IL_00c4:
	{
		int32_t L_43 = V_11;
		MethodInfoU5BU5D_t168* L_44 = V_10;
		NullCheck(L_44);
		if ((((int32_t)L_43) < ((int32_t)(((int32_t)(((Array_t *)L_44)->max_length))))))
		{
			goto IL_0097;
		}
	}

IL_00cc:
	{
		TypeU5BU5D_t913* L_45 = ___types;
		if (L_45)
		{
			goto IL_00dc;
		}
	}
	{
		MethodBaseU5BU5D_t2010* L_46 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		MethodBase_t1169 * L_47 = Binder_FindMostDerivedMatch_m11840(NULL /*static, unused*/, L_46, /*hidden argument*/&Binder_FindMostDerivedMatch_m11840_MethodInfo);
		return ((MethodInfo_t *)Castclass(L_47, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo)));
	}

IL_00dc:
	{
		Binder_t1162 * L_48 = ___binder;
		if (L_48)
		{
			goto IL_00e8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		Binder_t1162 * L_49 = Binder_get_DefaultBinder_m11837(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m11837_MethodInfo);
		___binder = L_49;
	}

IL_00e8:
	{
		Binder_t1162 * L_50 = ___binder;
		int32_t L_51 = ___bindingAttr;
		MethodBaseU5BU5D_t2010* L_52 = V_3;
		TypeU5BU5D_t913* L_53 = ___types;
		ParameterModifierU5BU5D_t1163* L_54 = ___modifiers;
		NullCheck(L_50);
		MethodBase_t1169 * L_55 = (MethodBase_t1169 *)VirtFuncInvoker4< MethodBase_t1169 *, int32_t, MethodBaseU5BU5D_t2010*, TypeU5BU5D_t913*, ParameterModifierU5BU5D_t1163* >::Invoke(&Binder_SelectMethod_m14023_MethodInfo, L_50, L_51, L_52, L_53, L_54);
		return ((MethodInfo_t *)Castclass(L_55, InitializedTypeInfo(&MethodInfo_t_il2cpp_TypeInfo)));
	}
}
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo TypeBuilder_GetPropertyImpl_m11757_MethodInfo;
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m11757 (TypeBuilder_t1988 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1162 * ___binder, Type_t * ___returnType, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = TypeBuilder_not_supported_m11769(__this, /*hidden argument*/&TypeBuilder_not_supported_m11769_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern MethodInfo TypeBuilder_HasElementTypeImpl_m11758_MethodInfo;
extern "C" bool TypeBuilder_HasElementTypeImpl_m11758 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		Type_t * L_1 = (__this->___created_19);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m10322_MethodInfo, L_1);
		return L_2;
	}
}
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m11759 (TypeBuilder_t1988 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1162 * ___binder, Object_t * ___target, ObjectU5BU5D_t164* ___args, ParameterModifierU5BU5D_t1163* ___modifiers, CultureInfo_t1165 * ___culture, StringU5BU5D_t43* ___namedParameters, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		String_t* L_1 = ___name;
		int32_t L_2 = ___invokeAttr;
		Binder_t1162 * L_3 = ___binder;
		Object_t * L_4 = ___target;
		ObjectU5BU5D_t164* L_5 = ___args;
		ParameterModifierU5BU5D_t1163* L_6 = ___modifiers;
		CultureInfo_t1165 * L_7 = ___culture;
		StringU5BU5D_t43* L_8 = ___namedParameters;
		NullCheck(L_0);
		Object_t * L_9 = (Object_t *)VirtFuncInvoker8< Object_t *, String_t*, int32_t, Binder_t1162 *, Object_t *, ObjectU5BU5D_t164*, ParameterModifierU5BU5D_t1163*, CultureInfo_t1165 *, StringU5BU5D_t43* >::Invoke(&Type_InvokeMember_m6916_MethodInfo, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern MethodInfo TypeBuilder_IsArrayImpl_m11760_MethodInfo;
extern "C" bool TypeBuilder_IsArrayImpl_m11760 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern MethodInfo TypeBuilder_IsByRefImpl_m11761_MethodInfo;
extern "C" bool TypeBuilder_IsByRefImpl_m11761 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern MethodInfo TypeBuilder_IsPointerImpl_m11762_MethodInfo;
extern "C" bool TypeBuilder_IsPointerImpl_m11762 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern MethodInfo TypeBuilder_IsPrimitiveImpl_m11763_MethodInfo;
extern "C" bool TypeBuilder_IsPrimitiveImpl_m11763 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern MethodInfo TypeBuilder_IsValueTypeImpl_m11764_MethodInfo;
extern "C" bool TypeBuilder_IsValueTypeImpl_m11764 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		ModuleBuilder_t1998 * L_0 = (__this->___pmodule_17);
		NullCheck(L_0);
		AssemblyBuilder_t1985 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		Type_t * L_2 = (L_1->___corlib_value_type_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		bool L_3 = Type_type_is_subtype_of_m10347(NULL /*static, unused*/, __this, L_2, 0, /*hidden argument*/&Type_type_is_subtype_of_m10347_MethodInfo);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_4 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ValueType_t211_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		bool L_5 = Type_type_is_subtype_of_m10347(NULL /*static, unused*/, __this, L_4, 0, /*hidden argument*/&Type_type_is_subtype_of_m10347_MethodInfo);
		if (!L_5)
		{
			goto IL_0057;
		}
	}

IL_002c:
	{
		ModuleBuilder_t1998 * L_6 = (__this->___pmodule_17);
		NullCheck(L_6);
		AssemblyBuilder_t1985 * L_7 = (L_6->___assemblyb_10);
		NullCheck(L_7);
		Type_t * L_8 = (L_7->___corlib_value_type_11);
		if ((((Object_t*)(TypeBuilder_t1988 *)__this) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0057;
		}
	}
	{
		ModuleBuilder_t1998 * L_9 = (__this->___pmodule_17);
		NullCheck(L_9);
		AssemblyBuilder_t1985 * L_10 = (L_9->___assemblyb_10);
		NullCheck(L_10);
		Type_t * L_11 = (L_10->___corlib_enum_type_12);
		G_B5_0 = ((((int32_t)((((Object_t*)(TypeBuilder_t1988 *)__this) == ((Object_t*)(Type_t *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B5_0 = 0;
	}

IL_0058:
	{
		return G_B5_0;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern MethodInfo TypeBuilder_MakeGenericType_m11765_MethodInfo;
extern "C" Type_t * TypeBuilder_MakeGenericType_m11765 (TypeBuilder_t1988 * __this, TypeU5BU5D_t913* ___typeArguments, MethodInfo* method)
{
	{
		TypeU5BU5D_t913* L_0 = ___typeArguments;
		Type_t * L_1 = Type_MakeGenericType_m6961(__this, L_0, /*hidden argument*/&Type_MakeGenericType_m6961_MethodInfo);
		return L_1;
	}
}
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1814  TypeBuilder_get_TypeHandle_m11766 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		TypeBuilder_check_created_m11770(__this, /*hidden argument*/&TypeBuilder_check_created_m11770_MethodInfo);
		Type_t * L_0 = (__this->___created_19);
		NullCheck(L_0);
		RuntimeTypeHandle_t1814  L_1 = (RuntimeTypeHandle_t1814 )VirtFuncInvoker0< RuntimeTypeHandle_t1814  >::Invoke(&Type_get_TypeHandle_m10338_MethodInfo, L_0);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m11767 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		ModuleBuilder_t1998 * L_0 = (__this->___pmodule_17);
		NullCheck(L_0);
		AssemblyBuilder_t1985 * L_1 = (L_0->___assemblyb_10);
		NullCheck(L_1);
		bool L_2 = AssemblyBuilder_get_IsCompilerContext_m11592(L_1, /*hidden argument*/&AssemblyBuilder_get_IsCompilerContext_m11592_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m11768 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___created_19);
		return ((((int32_t)((((Object_t*)(Type_t *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t154 * TypeBuilder_not_supported_m11769 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1880, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		return L_0;
	}
}
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m11770 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		bool L_0 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t154 * L_1 = TypeBuilder_not_supported_m11769(__this, /*hidden argument*/&TypeBuilder_not_supported_m11769_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000f:
	{
		return;
	}
}
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern MethodInfo TypeBuilder_ToString_m11771_MethodInfo;
extern "C" String_t* TypeBuilder_ToString_m11771 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&TypeBuilder_get_FullName_m11739_MethodInfo, __this);
		return L_0;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern MethodInfo TypeBuilder_IsAssignableFrom_m11772_MethodInfo;
extern "C" bool TypeBuilder_IsAssignableFrom_m11772 (TypeBuilder_t1988 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsAssignableFrom_m6867(__this, L_0, /*hidden argument*/&Type_IsAssignableFrom_m6867_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern MethodInfo TypeBuilder_IsSubclassOf_m11773_MethodInfo;
extern "C" bool TypeBuilder_IsSubclassOf_m11773 (TypeBuilder_t1988 * __this, Type_t * ___c, MethodInfo* method)
{
	{
		Type_t * L_0 = ___c;
		bool L_1 = Type_IsSubclassOf_m10349(__this, L_0, /*hidden argument*/&Type_IsSubclassOf_m10349_MethodInfo);
		return L_1;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern MethodInfo TypeBuilder_IsAssignableTo_m11774_MethodInfo;
extern "C" bool TypeBuilder_IsAssignableTo_m11774 (TypeBuilder_t1988 * __this, Type_t * ___c, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t913* V_1 = {0};
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___c;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(TypeBuilder_t1988 *)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_1 = ___c;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m10330_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_3 = (__this->___parent_10);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		bool L_4 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_5 = ___c;
		Type_t * L_6 = (__this->___parent_10);
		NullCheck(L_5);
		bool L_7 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_5, L_6);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		TypeU5BU5D_t913* L_8 = (__this->___interfaces_12);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		return 0;
	}

IL_0038:
	{
		TypeU5BU5D_t913* L_9 = (__this->___interfaces_12);
		V_1 = L_9;
		V_2 = 0;
		goto IL_0056;
	}

IL_0043:
	{
		TypeU5BU5D_t913* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_10, L_12));
		Type_t * L_13 = ___c;
		Type_t * L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_13, L_14);
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		return 1;
	}

IL_0052:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_0056:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t913* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0043;
		}
	}
	{
		bool L_19 = TypeBuilder_get_is_created_m11768(__this, /*hidden argument*/&TypeBuilder_get_is_created_m11768_MethodInfo);
		if (L_19)
		{
			goto IL_0066;
		}
	}
	{
		return 0;
	}

IL_0066:
	{
		Type_t * L_20 = (__this->___parent_10);
		if (L_20)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_21 = ___c;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_22 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		return ((((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))? 1 : 0);
	}

IL_007c:
	{
		Type_t * L_23 = ___c;
		Type_t * L_24 = (__this->___parent_10);
		NullCheck(L_23);
		bool L_25 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_23, L_24);
		return L_25;
	}
}
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern MethodInfo TypeBuilder_GetGenericArguments_m11775_MethodInfo;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" TypeU5BU5D_t913* TypeBuilder_GetGenericArguments_m11775 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	static bool TypeBuilder_GetGenericArguments_m11775_init;
	if (!TypeBuilder_GetGenericArguments_m11775_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		TypeBuilder_GetGenericArguments_m11775_init = true;
	}
	TypeU5BU5D_t913* V_0 = {0};
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_18);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (TypeU5BU5D_t913*)NULL;
	}

IL_000a:
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_1 = (__this->___generic_params_18);
		NullCheck(L_1);
		V_0 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_1)->max_length)))));
		GenericTypeParameterBuilderU5BU5D_t1997* L_2 = (__this->___generic_params_18);
		TypeU5BU5D_t913* L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m8174_MethodInfo, L_2, (Array_t *)(Array_t *)L_3, 0);
		TypeU5BU5D_t913* L_4 = V_0;
		return L_4;
	}
}
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern MethodInfo TypeBuilder_GetGenericTypeDefinition_m11776_MethodInfo;
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m11776 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_18);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t1471 * L_1 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_1, (String_t*) &_stringLiteral1886, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		return __this;
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern MethodInfo TypeBuilder_get_ContainsGenericParameters_m11777_MethodInfo;
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m11777 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_18);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1997*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern MethodInfo TypeBuilder_get_IsGenericParameter_m11778_MethodInfo;
extern "C" bool TypeBuilder_get_IsGenericParameter_m11778 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	typedef bool (*TypeBuilder_get_IsGenericParameter_m11778_ftn) (TypeBuilder_t1988 *);
	static TypeBuilder_get_IsGenericParameter_m11778_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TypeBuilder_get_IsGenericParameter_m11778_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m11779 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		GenericTypeParameterBuilderU5BU5D_t1997* L_0 = (__this->___generic_params_18);
		return ((((int32_t)((((Object_t*)(GenericTypeParameterBuilderU5BU5D_t1997*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern MethodInfo TypeBuilder_get_IsGenericType_m11780_MethodInfo;
extern "C" bool TypeBuilder_get_IsGenericType_m11780 (TypeBuilder_t1988 * __this, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&TypeBuilder_get_IsGenericTypeDefinition_m11779_MethodInfo, __this);
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnmanagedMarshal_t1993_il2cpp_TypeInfo;
// System.Reflection.Emit.UnmanagedMarshal
#include "mscorlib_System_Reflection_Emit_UnmanagedMarshalMethodDeclarations.h"

// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"
// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"
// System.Int16
#include "mscorlib_System_Int16.h"
extern TypeInfo MarshalAsAttribute_t1820_il2cpp_TypeInfo;
// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttributeMethodDeclarations.h"
extern MethodInfo MarshalAsAttribute__ctor_m10391_MethodInfo;


// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.Emit.UnmanagedMarshal::ToMarshalAsAttribute()
extern MethodInfo UnmanagedMarshal_ToMarshalAsAttribute_m11781_MethodInfo;
extern "C" MarshalAsAttribute_t1820 * UnmanagedMarshal_ToMarshalAsAttribute_m11781 (UnmanagedMarshal_t1993 * __this, MethodInfo* method)
{
	MarshalAsAttribute_t1820 * V_0 = {0};
	{
		int32_t L_0 = (__this->___t_1);
		MarshalAsAttribute_t1820 * L_1 = (MarshalAsAttribute_t1820 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MarshalAsAttribute_t1820_il2cpp_TypeInfo));
		MarshalAsAttribute__ctor_m10391(L_1, L_0, /*hidden argument*/&MarshalAsAttribute__ctor_m10391_MethodInfo);
		V_0 = L_1;
		MarshalAsAttribute_t1820 * L_2 = V_0;
		int32_t L_3 = (__this->___tbase_2);
		NullCheck(L_2);
		L_2->___ArraySubType_1 = L_3;
		MarshalAsAttribute_t1820 * L_4 = V_0;
		String_t* L_5 = (__this->___mcookie_4);
		NullCheck(L_4);
		L_4->___MarshalCookie_2 = L_5;
		MarshalAsAttribute_t1820 * L_6 = V_0;
		String_t* L_7 = (__this->___marshaltype_5);
		NullCheck(L_6);
		L_6->___MarshalType_3 = L_7;
		MarshalAsAttribute_t1820 * L_8 = V_0;
		Type_t * L_9 = (__this->___marshaltyperef_6);
		NullCheck(L_8);
		L_8->___MarshalTypeRef_4 = L_9;
		int32_t L_10 = (__this->___count_0);
		if ((!(((uint32_t)L_10) == ((uint32_t)(-1)))))
		{
			goto IL_004e;
		}
	}
	{
		MarshalAsAttribute_t1820 * L_11 = V_0;
		NullCheck(L_11);
		L_11->___SizeConst_5 = 0;
		goto IL_005a;
	}

IL_004e:
	{
		MarshalAsAttribute_t1820 * L_12 = V_0;
		int32_t L_13 = (__this->___count_0);
		NullCheck(L_12);
		L_12->___SizeConst_5 = L_13;
	}

IL_005a:
	{
		int32_t L_14 = (__this->___param_num_7);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_006c;
		}
	}
	{
		MarshalAsAttribute_t1820 * L_15 = V_0;
		NullCheck(L_15);
		L_15->___SizeParamIndex_6 = 0;
		goto IL_0079;
	}

IL_006c:
	{
		MarshalAsAttribute_t1820 * L_16 = V_0;
		int32_t L_17 = (__this->___param_num_7);
		NullCheck(L_16);
		L_16->___SizeParamIndex_6 = (((int16_t)L_17));
	}

IL_0079:
	{
		MarshalAsAttribute_t1820 * L_18 = V_0;
		return L_18;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemExceptionMethodDeclarations.h"
extern MethodInfo SystemException__ctor_m8177_MethodInfo;
extern MethodInfo SystemException__ctor_m13842_MethodInfo;


// System.Void System.Reflection.AmbiguousMatchException::.ctor()
extern "C" void AmbiguousMatchException__ctor_m11782 (AmbiguousMatchException_t2003 * __this, MethodInfo* method)
{
	{
		SystemException__ctor_m8177(__this, (String_t*) &_stringLiteral1887, /*hidden argument*/&SystemException__ctor_m8177_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.String)
extern MethodInfo AmbiguousMatchException__ctor_m11783_MethodInfo;
extern "C" void AmbiguousMatchException__ctor_m11783 (AmbiguousMatchException_t2003 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		SystemException__ctor_m8177(__this, L_0, /*hidden argument*/&SystemException__ctor_m8177_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AmbiguousMatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AmbiguousMatchException__ctor_m11784_MethodInfo;
extern "C" void AmbiguousMatchException__ctor_m11784 (AmbiguousMatchException_t2003 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		StreamingContext_t1124  L_1 = ___context;
		SystemException__ctor_m13842(__this, L_0, L_1, /*hidden argument*/&SystemException__ctor_m13842_MethodInfo);
		return;
	}
}
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ResolveEventHolder_t2004_il2cpp_TypeInfo;
// System.Reflection.Assembly/ResolveEventHolder
#include "mscorlib_System_Reflection_Assembly_ResolveEventHolderMethodDeclarations.h"



// System.Void System.Reflection.Assembly/ResolveEventHolder::.ctor()
extern MethodInfo ResolveEventHolder__ctor_m11785_MethodInfo;
extern "C" void ResolveEventHolder__ctor_m11785 (ResolveEventHolder_t2004 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.AppDomain
#include "mscorlib_System_AppDomain.h"
// System.AppDomain
#include "mscorlib_System_AppDomainMethodDeclarations.h"
extern Il2CppType Module_t1815_0_0_0;
extern MethodInfo Assembly_ToString_m11799_MethodInfo;
extern MethodInfo Assembly_get_location_m11788_MethodInfo;
extern MethodInfo Assembly_GetType_m11796_MethodInfo;
extern MethodInfo Assembly_InternalGetType_m11795_MethodInfo;
extern MethodInfo AssemblyName__ctor_m11805_MethodInfo;
extern MethodInfo Assembly_FillName_m11797_MethodInfo;
extern MethodInfo Assembly_get_fullname_m11787_MethodInfo;
extern MethodInfo AppDomain_get_CurrentDomain_m13165_MethodInfo;
extern MethodInfo AppDomain_Load_m13167_MethodInfo;
extern MethodInfo Assembly_GetModules_m11803_MethodInfo;
extern MethodInfo Module_get_ScopeName_m11893_MethodInfo;
extern MethodInfo Assembly_GetModulesInternal_m11802_MethodInfo;
extern MethodInfo Module_IsResource_m11897_MethodInfo;
extern MethodInfo ArrayList_ToArray_m8132_MethodInfo;


// System.Void System.Reflection.Assembly::.ctor()
extern MethodInfo Assembly__ctor_m11786_MethodInfo;
extern "C" void Assembly__ctor_m11786 (Assembly_t1476 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		ResolveEventHolder_t2004 * L_0 = (ResolveEventHolder_t2004 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ResolveEventHolder_t2004_il2cpp_TypeInfo));
		ResolveEventHolder__ctor_m11785(L_0, /*hidden argument*/&ResolveEventHolder__ctor_m11785_MethodInfo);
		__this->___resolve_event_holder_1 = L_0;
		return;
	}
}
// System.String System.Reflection.Assembly::get_fullname()
extern "C" String_t* Assembly_get_fullname_m11787 (Assembly_t1476 * __this, MethodInfo* method)
{
	typedef String_t* (*Assembly_get_fullname_m11787_ftn) (Assembly_t1476 *);
	static Assembly_get_fullname_m11787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_fullname_m11787_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_fullname()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_location()
extern "C" String_t* Assembly_get_location_m11788 (Assembly_t1476 * __this, MethodInfo* method)
{
	typedef String_t* (*Assembly_get_location_m11788_ftn) (Assembly_t1476 *);
	static Assembly_get_location_m11788_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_get_location_m11788_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::get_location()");
	return _il2cpp_icall_func(__this);
}
// System.String System.Reflection.Assembly::get_FullName()
extern "C" String_t* Assembly_get_FullName_m11789 (Assembly_t1476 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_ToString_m11799_MethodInfo, __this);
		return L_0;
	}
}
// System.String System.Reflection.Assembly::get_Location()
extern MethodInfo Assembly_get_Location_m11790_MethodInfo;
extern "C" String_t* Assembly_get_Location_m11790 (Assembly_t1476 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		bool L_0 = (__this->___fromByteArray_8);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = Assembly_get_location_m11788(__this, /*hidden argument*/&Assembly_get_location_m11788_MethodInfo);
		V_0 = L_2;
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
extern MethodInfo Assembly_IsDefined_m11791_MethodInfo;
extern "C" bool Assembly_IsDefined_m11791 (Assembly_t1476 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo Assembly_GetCustomAttributes_m11792_MethodInfo;
extern "C" ObjectU5BU5D_t164* Assembly_GetCustomAttributes_m11792 (Assembly_t1476 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
extern MethodInfo Assembly_GetManifestResourceInternal_m11793_MethodInfo;
extern "C" IntPtr_t Assembly_GetManifestResourceInternal_m11793 (Assembly_t1476 * __this, String_t* ___name, int32_t* ___size, Module_t1815 ** ___module, MethodInfo* method)
{
	typedef IntPtr_t (*Assembly_GetManifestResourceInternal_m11793_ftn) (Assembly_t1476 *, String_t*, int32_t*, Module_t1815 **);
	static Assembly_GetManifestResourceInternal_m11793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetManifestResourceInternal_m11793_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)");
	return _il2cpp_icall_func(__this, ___name, ___size, ___module);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
extern MethodInfo Assembly_GetType_m11794_MethodInfo;
extern "C" Type_t * Assembly_GetType_m11794 (Assembly_t1476 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		bool L_1 = ___throwOnError;
		Type_t * L_2 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m11796_MethodInfo, __this, L_0, L_1, 0);
		return L_2;
	}
}
// System.Type System.Reflection.Assembly::GetType(System.String)
extern MethodInfo Assembly_GetType_m8045_MethodInfo;
extern "C" Type_t * Assembly_GetType_m8045 (Assembly_t1476 * __this, String_t* ___name, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m11796_MethodInfo, __this, L_0, 0, 0);
		return L_1;
	}
}
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_InternalGetType_m11795 (Assembly_t1476 * __this, Module_t1815 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method)
{
	typedef Type_t * (*Assembly_InternalGetType_m11795_ftn) (Assembly_t1476 *, Module_t1815 *, String_t*, bool, bool);
	static Assembly_InternalGetType_m11795_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_InternalGetType_m11795_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)");
	return _il2cpp_icall_func(__this, ___module, ___name, ___throwOnError, ___ignoreCase);
}
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * Assembly_GetType_m11796 (Assembly_t1476 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name;
		ArgumentNullException_t1172 * L_2 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_2, L_1, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_000a:
	{
		String_t* L_3 = ___name;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m694(L_3, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t521 * L_5 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_5, (String_t*) &_stringLiteral701, (String_t*) &_stringLiteral1888, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_0022:
	{
		String_t* L_6 = ___name;
		bool L_7 = ___throwOnError;
		bool L_8 = ___ignoreCase;
		Type_t * L_9 = Assembly_InternalGetType_m11795(__this, (Module_t1815 *)NULL, L_6, L_7, L_8, /*hidden argument*/&Assembly_InternalGetType_m11795_MethodInfo);
		return L_9;
	}
}
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
extern "C" void Assembly_FillName_m11797 (Object_t * __this /* static, unused */, Assembly_t1476 * ___ass, AssemblyName_t1987 * ___aname, MethodInfo* method)
{
	typedef void (*Assembly_FillName_m11797_ftn) (Assembly_t1476 *, AssemblyName_t1987 *);
	static Assembly_FillName_m11797_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_FillName_m11797_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)");
	_il2cpp_icall_func(___ass, ___aname);
}
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
extern "C" AssemblyName_t1987 * Assembly_UnprotectedGetName_m11798 (Assembly_t1476 * __this, MethodInfo* method)
{
	AssemblyName_t1987 * V_0 = {0};
	{
		AssemblyName_t1987 * L_0 = (AssemblyName_t1987 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AssemblyName_t1987_il2cpp_TypeInfo));
		AssemblyName__ctor_m11805(L_0, /*hidden argument*/&AssemblyName__ctor_m11805_MethodInfo);
		V_0 = L_0;
		AssemblyName_t1987 * L_1 = V_0;
		Assembly_FillName_m11797(NULL /*static, unused*/, __this, L_1, /*hidden argument*/&Assembly_FillName_m11797_MethodInfo);
		AssemblyName_t1987 * L_2 = V_0;
		return L_2;
	}
}
// System.String System.Reflection.Assembly::ToString()
extern "C" String_t* Assembly_ToString_m11799 (Assembly_t1476 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___assemblyName_9);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___assemblyName_9);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = Assembly_get_fullname_m11787(__this, /*hidden argument*/&Assembly_get_fullname_m11787_MethodInfo);
		__this->___assemblyName_9 = L_2;
		String_t* L_3 = (__this->___assemblyName_9);
		return L_3;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern MethodInfo Assembly_Load_m11800_MethodInfo;
extern "C" Assembly_t1476 * Assembly_Load_m11800 (Object_t * __this /* static, unused */, String_t* ___assemblyString, MethodInfo* method)
{
	{
		AppDomain_t2260 * L_0 = AppDomain_get_CurrentDomain_m13165(NULL /*static, unused*/, /*hidden argument*/&AppDomain_get_CurrentDomain_m13165_MethodInfo);
		String_t* L_1 = ___assemblyString;
		NullCheck(L_0);
		Assembly_t1476 * L_2 = AppDomain_Load_m13167(L_0, L_1, /*hidden argument*/&AppDomain_Load_m13167_MethodInfo);
		return L_2;
	}
}
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern MethodInfo Assembly_GetModule_m11801_MethodInfo;
extern "C" Module_t1815 * Assembly_GetModule_m11801 (Assembly_t1476 * __this, String_t* ___name, MethodInfo* method)
{
	ModuleU5BU5D_t1986* V_0 = {0};
	Module_t1815 * V_1 = {0};
	ModuleU5BU5D_t1986* V_2 = {0};
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___name;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral701, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m694(L_2, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t521 * L_4 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_4, (String_t*) &_stringLiteral1889, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0021:
	{
		ModuleU5BU5D_t1986* L_5 = (ModuleU5BU5D_t1986*)VirtFuncInvoker1< ModuleU5BU5D_t1986*, bool >::Invoke(&Assembly_GetModules_m11803_MethodInfo, __this, 1);
		V_0 = L_5;
		ModuleU5BU5D_t1986* L_6 = V_0;
		V_2 = L_6;
		V_3 = 0;
		goto IL_0047;
	}

IL_002f:
	{
		ModuleU5BU5D_t1986* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_1 = (*(Module_t1815 **)(Module_t1815 **)SZArrayLdElema(L_7, L_9));
		Module_t1815 * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = Module_get_ScopeName_m11893(L_10, /*hidden argument*/&Module_get_ScopeName_m11893_MethodInfo);
		String_t* L_12 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m406(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		Module_t1815 * L_14 = V_1;
		return L_14;
	}

IL_0043:
	{
		int32_t L_15 = V_3;
		V_3 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		ModuleU5BU5D_t1986* L_17 = V_2;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)(((Array_t *)L_17)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		return (Module_t1815 *)NULL;
	}
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
extern "C" ModuleU5BU5D_t1986* Assembly_GetModulesInternal_m11802 (Assembly_t1476 * __this, MethodInfo* method)
{
	typedef ModuleU5BU5D_t1986* (*Assembly_GetModulesInternal_m11802_ftn) (Assembly_t1476 *);
	static Assembly_GetModulesInternal_m11802_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetModulesInternal_m11802_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetModulesInternal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
extern TypeInfo* ModuleU5BU5D_t1986_il2cpp_TypeInfo_var;
extern "C" ModuleU5BU5D_t1986* Assembly_GetModules_m11803 (Assembly_t1476 * __this, bool ___getResourceModules, MethodInfo* method)
{
	static bool Assembly_GetModules_m11803_init;
	if (!Assembly_GetModules_m11803_init)
	{
		ModuleU5BU5D_t1986_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ModuleU5BU5D_t1986_0_0_0);
		Assembly_GetModules_m11803_init = true;
	}
	ModuleU5BU5D_t1986* V_0 = {0};
	ArrayList_t1304 * V_1 = {0};
	Module_t1815 * V_2 = {0};
	ModuleU5BU5D_t1986* V_3 = {0};
	int32_t V_4 = 0;
	{
		ModuleU5BU5D_t1986* L_0 = (ModuleU5BU5D_t1986*)VirtFuncInvoker0< ModuleU5BU5D_t1986* >::Invoke(&Assembly_GetModulesInternal_m11802_MethodInfo, __this);
		V_0 = L_0;
		bool L_1 = ___getResourceModules;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		ModuleU5BU5D_t1986* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList_t1304 * L_3 = (ArrayList_t1304 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1304_il2cpp_TypeInfo));
		ArrayList__ctor_m8155(L_3, (((int32_t)(((Array_t *)L_2)->max_length))), /*hidden argument*/&ArrayList__ctor_m8155_MethodInfo);
		V_1 = L_3;
		ModuleU5BU5D_t1986* L_4 = V_0;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0035;
	}

IL_001a:
	{
		ModuleU5BU5D_t1986* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		V_2 = (*(Module_t1815 **)(Module_t1815 **)SZArrayLdElema(L_5, L_7));
		Module_t1815 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = Module_IsResource_m11897(L_8, /*hidden argument*/&Module_IsResource_m11897_MethodInfo);
		if (L_9)
		{
			goto IL_002f;
		}
	}
	{
		ArrayList_t1304 * L_10 = V_1;
		Module_t1815 * L_11 = V_2;
		NullCheck(L_10);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m8008_MethodInfo, L_10, L_11);
	}

IL_002f:
	{
		int32_t L_12 = V_4;
		V_4 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_4;
		ModuleU5BU5D_t1986* L_14 = V_3;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_001a;
		}
	}
	{
		ArrayList_t1304 * L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_16 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Module_t1815_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_15);
		Array_t * L_17 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m8132_MethodInfo, L_15, L_16);
		return ((ModuleU5BU5D_t1986*)Castclass(L_17, ModuleU5BU5D_t1986_il2cpp_TypeInfo_var));
	}

IL_0052:
	{
		ModuleU5BU5D_t1986* L_18 = V_0;
		return L_18;
	}
}
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
extern MethodInfo Assembly_GetExecutingAssembly_m11804_MethodInfo;
extern "C" Assembly_t1476 * Assembly_GetExecutingAssembly_m11804 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	typedef Assembly_t1476 * (*Assembly_GetExecutingAssembly_m11804_ftn) ();
	static Assembly_GetExecutingAssembly_m11804_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Assembly_GetExecutingAssembly_m11804_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.Assembly::GetExecutingAssembly()");
	return _il2cpp_icall_func();
}
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyCompanyAttribute_t596_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"

// System.Attribute
#include "mscorlib_System_AttributeMethodDeclarations.h"
extern MethodInfo Attribute__ctor_m4591_MethodInfo;


// System.Void System.Reflection.AssemblyCompanyAttribute::.ctor(System.String)
extern MethodInfo AssemblyCompanyAttribute__ctor_m2935_MethodInfo;
extern "C" void AssemblyCompanyAttribute__ctor_m2935 (AssemblyCompanyAttribute_t596 * __this, String_t* ___company, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___company;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyConfigurationAttribute_t595_il2cpp_TypeInfo;
// System.Reflection.AssemblyConfigurationAttribute
#include "mscorlib_System_Reflection_AssemblyConfigurationAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyConfigurationAttribute::.ctor(System.String)
extern MethodInfo AssemblyConfigurationAttribute__ctor_m2934_MethodInfo;
extern "C" void AssemblyConfigurationAttribute__ctor_m2934 (AssemblyConfigurationAttribute_t595 * __this, String_t* ___configuration, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___configuration;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyCopyrightAttribute_t598_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyCopyrightAttribute::.ctor(System.String)
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2937_MethodInfo;
extern "C" void AssemblyCopyrightAttribute__ctor_m2937 (AssemblyCopyrightAttribute_t598 * __this, String_t* ___copyright, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___copyright;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDefaultAliasAttribute_t1538_il2cpp_TypeInfo;
// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDefaultAliasAttribute::.ctor(System.String)
extern MethodInfo AssemblyDefaultAliasAttribute__ctor_m8369_MethodInfo;
extern "C" void AssemblyDefaultAliasAttribute__ctor_m8369 (AssemblyDefaultAliasAttribute_t1538 * __this, String_t* ___defaultAlias, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___defaultAlias;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDelaySignAttribute_t1539_il2cpp_TypeInfo;
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDelaySignAttribute::.ctor(System.Boolean)
extern MethodInfo AssemblyDelaySignAttribute__ctor_m8371_MethodInfo;
extern "C" void AssemblyDelaySignAttribute__ctor_m8371 (AssemblyDelaySignAttribute_t1539 * __this, bool ___delaySign, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		bool L_0 = ___delaySign;
		__this->___delay_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyDescriptionAttribute_t594_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyDescriptionAttribute::.ctor(System.String)
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2933_MethodInfo;
extern "C" void AssemblyDescriptionAttribute__ctor_m2933 (AssemblyDescriptionAttribute_t594 * __this, String_t* ___description, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___description;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyFileVersionAttribute_t599_il2cpp_TypeInfo;
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyFileVersionAttribute::.ctor(System.String)
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2938_MethodInfo;
extern "C" void AssemblyFileVersionAttribute__ctor_m2938 (AssemblyFileVersionAttribute_t599 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___version;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral577, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___version;
		__this->___name_0 = L_2;
		return;
	}
}
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttri.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyInformationalVersionAttribute_t1536_il2cpp_TypeInfo;
// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttriMethodDeclarations.h"



// System.Void System.Reflection.AssemblyInformationalVersionAttribute::.ctor(System.String)
extern MethodInfo AssemblyInformationalVersionAttribute__ctor_m8367_MethodInfo;
extern "C" void AssemblyInformationalVersionAttribute__ctor_m8367 (AssemblyInformationalVersionAttribute_t1536 * __this, String_t* ___informationalVersion, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___informationalVersion;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyKeyFileAttribute_t1540_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyKeyFileAttribute::.ctor(System.String)
extern MethodInfo AssemblyKeyFileAttribute__ctor_m8372_MethodInfo;
extern "C" void AssemblyKeyFileAttribute__ctor_m8372 (AssemblyKeyFileAttribute_t1540 * __this, String_t* ___keyFile, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___keyFile;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyKeyNameAttribute
#include "mscorlib_System_Reflection_AssemblyKeyNameAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyKeyNameAttribute_t1584_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyNameAttribute
#include "mscorlib_System_Reflection_AssemblyKeyNameAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyKeyNameAttribute::.ctor(System.String)
extern MethodInfo AssemblyKeyNameAttribute__ctor_m8520_MethodInfo;
extern "C" void AssemblyKeyNameAttribute__ctor_m8520 (AssemblyKeyNameAttribute_t1584 * __this, String_t* ___keyName, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___keyName;
		__this->___name_0 = L_0;
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Version
#include "mscorlib_System_Version.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "mscorlib_System_Configuration_Assemblies_AssemblyVersionComp.h"
// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPair.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityException.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1.h"
extern TypeInfo Version_t1329_il2cpp_TypeInfo;
extern TypeInfo CryptographicException_t1483_il2cpp_TypeInfo;
extern TypeInfo StrongNameKeyPair_t2007_il2cpp_TypeInfo;
extern TypeInfo SecurityException_t2217_il2cpp_TypeInfo;
extern TypeInfo AssemblyHashAlgorithm_t1929_il2cpp_TypeInfo;
extern TypeInfo AssemblyVersionCompatibility_t1930_il2cpp_TypeInfo;
extern TypeInfo AssemblyNameFlags_t2008_il2cpp_TypeInfo;
// System.Version
#include "mscorlib_System_VersionMethodDeclarations.h"
// System.Byte
#include "mscorlib_System_ByteMethodDeclarations.h"
// Mono.Security.Cryptography.CryptoConvert
#include "mscorlib_Mono_Security_Cryptography_CryptoConvertMethodDeclarations.h"
// System.Runtime.Serialization.SerializationInfo
#include "mscorlib_System_Runtime_Serialization_SerializationInfoMethodDeclarations.h"
// System.Security.SecurityException
#include "mscorlib_System_Security_SecurityExceptionMethodDeclarations.h"
// System.Security.Cryptography.SHA1
#include "mscorlib_System_Security_Cryptography_SHA1MethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
extern Il2CppType Version_t1329_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1929_0_0_0;
extern Il2CppType StrongNameKeyPair_t2007_0_0_0;
extern Il2CppType AssemblyVersionCompatibility_t1930_0_0_0;
extern Il2CppType AssemblyNameFlags_t2008_0_0_0;
extern MethodInfo StringBuilder_Append_m6931_MethodInfo;
extern MethodInfo AssemblyName_get_Version_m11810_MethodInfo;
extern MethodInfo Version_op_Inequality_m13928_MethodInfo;
extern MethodInfo Version_ToString_m13925_MethodInfo;
extern MethodInfo CultureInfo_get_LCID_m11171_MethodInfo;
extern MethodInfo CultureInfo_get_Name_m11172_MethodInfo;
extern MethodInfo AssemblyName_InternalGetPublicKeyToken_m11814_MethodInfo;
extern MethodInfo Byte_ToString_m8093_MethodInfo;
extern MethodInfo AssemblyName_get_Flags_m11808_MethodInfo;
extern MethodInfo Version_op_Equality_m13927_MethodInfo;
extern MethodInfo Version_get_Major_m13917_MethodInfo;
extern MethodInfo Version_get_Minor_m13918_MethodInfo;
extern MethodInfo Version_get_Build_m13916_MethodInfo;
extern MethodInfo Version_get_Revision_m13919_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiPublicKeyBlob_m10610_MethodInfo;
extern MethodInfo CryptoConvert_FromCapiPublicKeyBlob_m10609_MethodInfo;
extern MethodInfo SerializationInfo_GetString_m8011_MethodInfo;
extern MethodInfo SerializationInfo_GetValue_m8003_MethodInfo;
extern MethodInfo SerializationInfo_GetInt32_m8013_MethodInfo;
extern MethodInfo CultureInfo__ctor_m11163_MethodInfo;
extern MethodInfo AssemblyName_get_FullName_m11809_MethodInfo;
extern MethodInfo Object_ToString_m715_MethodInfo;
extern MethodInfo AssemblyName_get_IsPublicKeyValid_m11813_MethodInfo;
extern MethodInfo SecurityException__ctor_m12849_MethodInfo;
extern MethodInfo AssemblyName_ComputePublicKeyToken_m11815_MethodInfo;
extern MethodInfo SHA1_Create_m8169_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m8170_MethodInfo;
extern MethodInfo Array_Reverse_m9493_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8014_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8002_MethodInfo;
extern MethodInfo AssemblyName_set_Version_m11811_MethodInfo;


// System.Void System.Reflection.AssemblyName::.ctor()
extern "C" void AssemblyName__ctor_m11805 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		__this->___versioncompat_12 = 1;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AssemblyName__ctor_m11806_MethodInfo;
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" void AssemblyName__ctor_m11806 (AssemblyName_t1987 * __this, SerializationInfo_t1123 * ___si, StreamingContext_t1124  ___sc, MethodInfo* method)
{
	static bool AssemblyName__ctor_m11806_init;
	if (!AssemblyName__ctor_m11806_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		AssemblyName__ctor_m11806_init = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		SerializationInfo_t1123 * L_0 = ___si;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m8011(L_0, (String_t*) &_stringLiteral1896, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		__this->___name_0 = L_1;
		SerializationInfo_t1123 * L_2 = ___si;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m8011(L_2, (String_t*) &_stringLiteral1897, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		__this->___codebase_1 = L_3;
		SerializationInfo_t1123 * L_4 = ___si;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Version_t1329_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_4);
		Object_t * L_6 = SerializationInfo_GetValue_m8003(L_4, (String_t*) &_stringLiteral1898, L_5, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___version_13 = ((Version_t1329 *)Castclass(L_6, InitializedTypeInfo(&Version_t1329_il2cpp_TypeInfo)));
		SerializationInfo_t1123 * L_7 = ___si;
		Type_t * L_8 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t669_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m8003(L_7, (String_t*) &_stringLiteral1899, L_8, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___publicKey_10 = ((ByteU5BU5D_t669*)Castclass(L_9, ByteU5BU5D_t669_il2cpp_TypeInfo_var));
		SerializationInfo_t1123 * L_10 = ___si;
		Type_t * L_11 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t669_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_10);
		Object_t * L_12 = SerializationInfo_GetValue_m8003(L_10, (String_t*) &_stringLiteral1900, L_11, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___keyToken_11 = ((ByteU5BU5D_t669*)Castclass(L_12, ByteU5BU5D_t669_il2cpp_TypeInfo_var));
		SerializationInfo_t1123 * L_13 = ___si;
		Type_t * L_14 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&AssemblyHashAlgorithm_t1929_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_13);
		Object_t * L_15 = SerializationInfo_GetValue_m8003(L_13, (String_t*) &_stringLiteral1901, L_14, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___hashalg_8 = ((*(int32_t*)((int32_t*)UnBox (L_15, InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo)))));
		SerializationInfo_t1123 * L_16 = ___si;
		Type_t * L_17 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&StrongNameKeyPair_t2007_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_16);
		Object_t * L_18 = SerializationInfo_GetValue_m8003(L_16, (String_t*) &_stringLiteral1902, L_17, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___keypair_9 = ((StrongNameKeyPair_t2007 *)Castclass(L_18, InitializedTypeInfo(&StrongNameKeyPair_t2007_il2cpp_TypeInfo)));
		SerializationInfo_t1123 * L_19 = ___si;
		Type_t * L_20 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&AssemblyVersionCompatibility_t1930_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_19);
		Object_t * L_21 = SerializationInfo_GetValue_m8003(L_19, (String_t*) &_stringLiteral1903, L_20, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___versioncompat_12 = ((*(int32_t*)((int32_t*)UnBox (L_21, InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo)))));
		SerializationInfo_t1123 * L_22 = ___si;
		Type_t * L_23 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&AssemblyNameFlags_t2008_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_22);
		Object_t * L_24 = SerializationInfo_GetValue_m8003(L_22, (String_t*) &_stringLiteral1904, L_23, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->___flags_7 = ((*(int32_t*)((int32_t*)UnBox (L_24, InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo)))));
		SerializationInfo_t1123 * L_25 = ___si;
		NullCheck(L_25);
		int32_t L_26 = SerializationInfo_GetInt32_m8013(L_25, (String_t*) &_stringLiteral1905, /*hidden argument*/&SerializationInfo_GetInt32_m8013_MethodInfo);
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_28 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1165_il2cpp_TypeInfo));
		CultureInfo_t1165 * L_29 = (CultureInfo_t1165 *)il2cpp_codegen_object_new (InitializedTypeInfo(&CultureInfo_t1165_il2cpp_TypeInfo));
		CultureInfo__ctor_m11163(L_29, L_28, /*hidden argument*/&CultureInfo__ctor_m11163_MethodInfo);
		__this->___cultureinfo_6 = L_29;
	}

IL_0124:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::get_Name()
extern MethodInfo AssemblyName_get_Name_m11807_MethodInfo;
extern "C" String_t* AssemblyName_get_Name_m11807 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_0);
		return L_0;
	}
}
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
extern "C" int32_t AssemblyName_get_Flags_m11808 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___flags_7);
		return L_0;
	}
}
// System.String System.Reflection.AssemblyName::get_FullName()
extern "C" String_t* AssemblyName_get_FullName_m11809 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	StringBuilder_t480 * V_0 = {0};
	ByteU5BU5D_t669* V_1 = {0};
	int32_t V_2 = 0;
	{
		String_t* L_0 = (__this->___name_0);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_1 = ((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2;
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t480 * L_2 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m2206(L_2, /*hidden argument*/&StringBuilder__ctor_m2206_MethodInfo);
		V_0 = L_2;
		StringBuilder_t480 * L_3 = V_0;
		String_t* L_4 = (__this->___name_0);
		NullCheck(L_3);
		StringBuilder_Append_m6931(L_3, L_4, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		Version_t1329 * L_5 = AssemblyName_get_Version_m11810(__this, /*hidden argument*/&AssemblyName_get_Version_m11810_MethodInfo);
		bool L_6 = Version_op_Inequality_m13928(NULL /*static, unused*/, L_5, (Version_t1329 *)NULL, /*hidden argument*/&Version_op_Inequality_m13928_MethodInfo);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		StringBuilder_t480 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m6931(L_7, (String_t*) &_stringLiteral1890, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_8 = V_0;
		Version_t1329 * L_9 = AssemblyName_get_Version_m11810(__this, /*hidden argument*/&AssemblyName_get_Version_m11810_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Version_ToString_m13925_MethodInfo, L_9);
		NullCheck(L_8);
		StringBuilder_Append_m6931(L_8, L_10, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_004d:
	{
		CultureInfo_t1165 * L_11 = (__this->___cultureinfo_6);
		if (!L_11)
		{
			goto IL_0098;
		}
	}
	{
		StringBuilder_t480 * L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_Append_m6931(L_12, (String_t*) &_stringLiteral1891, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		CultureInfo_t1165 * L_13 = (__this->___cultureinfo_6);
		NullCheck(L_13);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m11171_MethodInfo, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1165_il2cpp_TypeInfo));
		CultureInfo_t1165 * L_15 = CultureInfo_get_InvariantCulture_m8023(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m8023_MethodInfo);
		NullCheck(L_15);
		int32_t L_16 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m11171_MethodInfo, L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0086;
		}
	}
	{
		StringBuilder_t480 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m6931(L_17, (String_t*) &_stringLiteral1892, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		goto IL_0098;
	}

IL_0086:
	{
		StringBuilder_t480 * L_18 = V_0;
		CultureInfo_t1165 * L_19 = (__this->___cultureinfo_6);
		NullCheck(L_19);
		String_t* L_20 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&CultureInfo_get_Name_m11172_MethodInfo, L_19);
		NullCheck(L_18);
		StringBuilder_Append_m6931(L_18, L_20, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0098:
	{
		ByteU5BU5D_t669* L_21 = AssemblyName_InternalGetPublicKeyToken_m11814(__this, /*hidden argument*/&AssemblyName_InternalGetPublicKeyToken_m11814_MethodInfo);
		V_1 = L_21;
		ByteU5BU5D_t669* L_22 = V_1;
		if (!L_22)
		{
			goto IL_00e7;
		}
	}
	{
		ByteU5BU5D_t669* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)(((Array_t *)L_23)->max_length))))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t480 * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m6931(L_24, (String_t*) &_stringLiteral1893, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		goto IL_00e7;
	}

IL_00b5:
	{
		StringBuilder_t480 * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m6931(L_25, (String_t*) &_stringLiteral1894, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		V_2 = 0;
		goto IL_00e1;
	}

IL_00c5:
	{
		StringBuilder_t480 * L_26 = V_0;
		ByteU5BU5D_t669* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, L_28);
		String_t* L_29 = Byte_ToString_m8093(((uint8_t*)(uint8_t*)SZArrayLdElema(L_27, L_28)), (String_t*) &_stringLiteral767, /*hidden argument*/&Byte_ToString_m8093_MethodInfo);
		NullCheck(L_26);
		StringBuilder_Append_m6931(L_26, L_29, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_00e1:
	{
		int32_t L_31 = V_2;
		ByteU5BU5D_t669* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_00c5;
		}
	}

IL_00e7:
	{
		int32_t L_33 = AssemblyName_get_Flags_m11808(__this, /*hidden argument*/&AssemblyName_get_Flags_m11808_MethodInfo);
		if (!((int32_t)((int32_t)L_33&(int32_t)((int32_t)256))))
		{
			goto IL_0101;
		}
	}
	{
		StringBuilder_t480 * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m6931(L_34, (String_t*) &_stringLiteral1895, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0101:
	{
		StringBuilder_t480 * L_35 = V_0;
		NullCheck(L_35);
		String_t* L_36 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_35);
		return L_36;
	}
}
// System.Version System.Reflection.AssemblyName::get_Version()
extern "C" Version_t1329 * AssemblyName_get_Version_m11810 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	{
		Version_t1329 * L_0 = (__this->___version_13);
		return L_0;
	}
}
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
extern "C" void AssemblyName_set_Version_m11811 (AssemblyName_t1987 * __this, Version_t1329 * ___value, MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		Version_t1329 * L_0 = ___value;
		__this->___version_13 = L_0;
		Version_t1329 * L_1 = ___value;
		bool L_2 = Version_op_Equality_m13927(NULL /*static, unused*/, L_1, (Version_t1329 *)NULL, /*hidden argument*/&Version_op_Equality_m13927_MethodInfo);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_3 = 0;
		V_0 = L_3;
		__this->___revision_5 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___build_4 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->___minor_3 = L_7;
		int32_t L_8 = V_0;
		__this->___major_2 = L_8;
		goto IL_0064;
	}

IL_0034:
	{
		Version_t1329 * L_9 = ___value;
		NullCheck(L_9);
		int32_t L_10 = Version_get_Major_m13917(L_9, /*hidden argument*/&Version_get_Major_m13917_MethodInfo);
		__this->___major_2 = L_10;
		Version_t1329 * L_11 = ___value;
		NullCheck(L_11);
		int32_t L_12 = Version_get_Minor_m13918(L_11, /*hidden argument*/&Version_get_Minor_m13918_MethodInfo);
		__this->___minor_3 = L_12;
		Version_t1329 * L_13 = ___value;
		NullCheck(L_13);
		int32_t L_14 = Version_get_Build_m13916(L_13, /*hidden argument*/&Version_get_Build_m13916_MethodInfo);
		__this->___build_4 = L_14;
		Version_t1329 * L_15 = ___value;
		NullCheck(L_15);
		int32_t L_16 = Version_get_Revision_m13919(L_15, /*hidden argument*/&Version_get_Revision_m13919_MethodInfo);
		__this->___revision_5 = L_16;
	}

IL_0064:
	{
		return;
	}
}
// System.String System.Reflection.AssemblyName::ToString()
extern MethodInfo AssemblyName_ToString_m11812_MethodInfo;
extern "C" String_t* AssemblyName_ToString_m11812 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = AssemblyName_get_FullName_m11809(__this, /*hidden argument*/&AssemblyName_get_FullName_m11809_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		String_t* L_2 = V_0;
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000d:
	{
		String_t* L_3 = Object_ToString_m715(__this, /*hidden argument*/&Object_ToString_m715_MethodInfo);
		G_B3_0 = L_3;
	}

IL_0013:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
extern "C" bool AssemblyName_get_IsPublicKeyValid_m11813 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	bool V_3 = false;
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t669* L_0 = (__this->___publicKey_10);
		NullCheck(L_0);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0032;
		}
	}
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0021;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		ByteU5BU5D_t669* L_2 = (__this->___publicKey_10);
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_4);
		int32_t L_5 = L_4;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_5))));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_t669* L_7 = (__this->___publicKey_10);
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)4))))
		{
			goto IL_0032;
		}
	}
	{
		return 1;
	}

IL_0032:
	{
		ByteU5BU5D_t669* L_9 = (__this->___publicKey_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		int32_t L_10 = 0;
		V_2 = (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_9, L_10));
		uint8_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)6)))
		{
			goto IL_007a;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)7)))
		{
			goto IL_0091;
		}
	}
	{
		uint8_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0093;
	}

IL_0049:
	{
		ByteU5BU5D_t669* L_14 = (__this->___publicKey_10);
		NullCheck(L_14);
		if ((((int32_t)(((int32_t)(((Array_t *)L_14)->max_length)))) <= ((int32_t)((int32_t)12))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_t669* L_15 = (__this->___publicKey_10);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)12));
		int32_t L_16 = ((int32_t)12);
		if ((!(((uint32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16))) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t669* L_17 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m10610(NULL /*static, unused*/, L_17, ((int32_t)12), /*hidden argument*/&CryptoConvert_FromCapiPublicKeyBlob_m10610_MethodInfo);
			V_3 = 1;
			goto IL_0095;
		}

IL_0073:
		{
			goto IL_0078;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&CryptographicException_t1483_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0075;
		throw e;
	}

CATCH_0075:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_0078;
	} // end catch (depth: 1)

IL_0078:
	{
		goto IL_0093;
	}

IL_007a:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t669* L_18 = (__this->___publicKey_10);
			CryptoConvert_FromCapiPublicKeyBlob_m10609(NULL /*static, unused*/, L_18, /*hidden argument*/&CryptoConvert_FromCapiPublicKeyBlob_m10609_MethodInfo);
			V_3 = 1;
			goto IL_0095;
		}

IL_008a:
		{
			goto IL_008f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&CryptographicException_t1483_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_008c;
		throw e;
	}

CATCH_008c:
	{ // begin catch(System.Security.Cryptography.CryptographicException)
		goto IL_008f;
	} // end catch (depth: 1)

IL_008f:
	{
		goto IL_0093;
	}

IL_0091:
	{
		goto IL_0093;
	}

IL_0093:
	{
		return 0;
	}

IL_0095:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t669* AssemblyName_InternalGetPublicKeyToken_m11814 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	static bool AssemblyName_InternalGetPublicKeyToken_m11814_init;
	if (!AssemblyName_InternalGetPublicKeyToken_m11814_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		AssemblyName_InternalGetPublicKeyToken_m11814_init = true;
	}
	{
		ByteU5BU5D_t669* L_0 = (__this->___keyToken_11);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_t669* L_1 = (__this->___keyToken_11);
		return L_1;
	}

IL_000f:
	{
		ByteU5BU5D_t669* L_2 = (__this->___publicKey_10);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (ByteU5BU5D_t669*)NULL;
	}

IL_0019:
	{
		ByteU5BU5D_t669* L_3 = (__this->___publicKey_10);
		NullCheck(L_3);
		if ((((int32_t)(((Array_t *)L_3)->max_length))))
		{
			goto IL_002a;
		}
	}
	{
		return ((ByteU5BU5D_t669*)SZArrayNew(ByteU5BU5D_t669_il2cpp_TypeInfo_var, 0));
	}

IL_002a:
	{
		bool L_4 = AssemblyName_get_IsPublicKeyValid_m11813(__this, /*hidden argument*/&AssemblyName_get_IsPublicKeyValid_m11813_MethodInfo);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		SecurityException_t2217 * L_5 = (SecurityException_t2217 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SecurityException_t2217_il2cpp_TypeInfo));
		SecurityException__ctor_m12849(L_5, (String_t*) &_stringLiteral1906, /*hidden argument*/&SecurityException__ctor_m12849_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_003d:
	{
		ByteU5BU5D_t669* L_6 = AssemblyName_ComputePublicKeyToken_m11815(__this, /*hidden argument*/&AssemblyName_ComputePublicKeyToken_m11815_MethodInfo);
		return L_6;
	}
}
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t669* AssemblyName_ComputePublicKeyToken_m11815 (AssemblyName_t1987 * __this, MethodInfo* method)
{
	static bool AssemblyName_ComputePublicKeyToken_m11815_init;
	if (!AssemblyName_ComputePublicKeyToken_m11815_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		AssemblyName_ComputePublicKeyToken_m11815_init = true;
	}
	HashAlgorithm_t1679 * V_0 = {0};
	ByteU5BU5D_t669* V_1 = {0};
	ByteU5BU5D_t669* V_2 = {0};
	{
		SHA1_t1494 * L_0 = SHA1_Create_m8169(NULL /*static, unused*/, /*hidden argument*/&SHA1_Create_m8169_MethodInfo);
		V_0 = L_0;
		HashAlgorithm_t1679 * L_1 = V_0;
		ByteU5BU5D_t669* L_2 = (__this->___publicKey_10);
		NullCheck(L_1);
		ByteU5BU5D_t669* L_3 = HashAlgorithm_ComputeHash_m8170(L_1, L_2, /*hidden argument*/&HashAlgorithm_ComputeHash_m8170_MethodInfo);
		V_1 = L_3;
		V_2 = ((ByteU5BU5D_t669*)SZArrayNew(ByteU5BU5D_t669_il2cpp_TypeInfo_var, 8));
		ByteU5BU5D_t669* L_4 = V_1;
		ByteU5BU5D_t669* L_5 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_t669* L_6 = V_2;
		Array_Copy_m10283(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_5)->max_length)))-(int32_t)8)), (Array_t *)(Array_t *)L_6, 0, 8, /*hidden argument*/&Array_Copy_m10283_MethodInfo);
		ByteU5BU5D_t669* L_7 = V_2;
		Array_Reverse_m9493(NULL /*static, unused*/, (Array_t *)(Array_t *)L_7, 0, 8, /*hidden argument*/&Array_Reverse_m9493_MethodInfo);
		ByteU5BU5D_t669* L_8 = V_2;
		return L_8;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
extern "C" void AssemblyName_SetPublicKey_m11816 (AssemblyName_t1987 * __this, ByteU5BU5D_t669* ___publicKey, MethodInfo* method)
{
	{
		ByteU5BU5D_t669* L_0 = ___publicKey;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_1^(int32_t)1));
		goto IL_0021;
	}

IL_0013:
	{
		int32_t L_2 = (__this->___flags_7);
		__this->___flags_7 = ((int32_t)((int32_t)L_2|(int32_t)1));
	}

IL_0021:
	{
		ByteU5BU5D_t669* L_3 = ___publicKey;
		__this->___publicKey_10 = L_3;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
extern "C" void AssemblyName_SetPublicKeyToken_m11817 (AssemblyName_t1987 * __this, ByteU5BU5D_t669* ___publicKeyToken, MethodInfo* method)
{
	{
		ByteU5BU5D_t669* L_0 = ___publicKeyToken;
		__this->___keyToken_11 = L_0;
		return;
	}
}
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo AssemblyName_GetObjectData_m11818_MethodInfo;
extern "C" void AssemblyName_GetObjectData_m11818 (AssemblyName_t1987 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	String_t* G_B4_0 = {0};
	SerializationInfo_t1123 * G_B4_1 = {0};
	String_t* G_B3_0 = {0};
	SerializationInfo_t1123 * G_B3_1 = {0};
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = {0};
	SerializationInfo_t1123 * G_B5_2 = {0};
	{
		SerializationInfo_t1123 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral588, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1123 * L_2 = ___info;
		String_t* L_3 = (__this->___name_0);
		NullCheck(L_2);
		SerializationInfo_AddValue_m8014(L_2, (String_t*) &_stringLiteral1896, L_3, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_4 = ___info;
		ByteU5BU5D_t669* L_5 = (__this->___publicKey_10);
		NullCheck(L_4);
		SerializationInfo_AddValue_m8014(L_4, (String_t*) &_stringLiteral1899, (Object_t *)(Object_t *)L_5, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_6 = ___info;
		ByteU5BU5D_t669* L_7 = (__this->___keyToken_11);
		NullCheck(L_6);
		SerializationInfo_AddValue_m8014(L_6, (String_t*) &_stringLiteral1900, (Object_t *)(Object_t *)L_7, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_8 = ___info;
		CultureInfo_t1165 * L_9 = (__this->___cultureinfo_6);
		G_B3_0 = (String_t*) &_stringLiteral1905;
		G_B3_1 = L_8;
		if (!L_9)
		{
			G_B4_0 = (String_t*) &_stringLiteral1905;
			G_B4_1 = L_8;
			goto IL_005c;
		}
	}
	{
		CultureInfo_t1165 * L_10 = (__this->___cultureinfo_6);
		NullCheck(L_10);
		int32_t L_11 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&CultureInfo_get_LCID_m11171_MethodInfo, L_10);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_005d:
	{
		NullCheck(G_B5_2);
		SerializationInfo_AddValue_m8002(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/&SerializationInfo_AddValue_m8002_MethodInfo);
		SerializationInfo_t1123 * L_12 = ___info;
		String_t* L_13 = (__this->___codebase_1);
		NullCheck(L_12);
		SerializationInfo_AddValue_m8014(L_12, (String_t*) &_stringLiteral1897, L_13, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_14 = ___info;
		Version_t1329 * L_15 = AssemblyName_get_Version_m11810(__this, /*hidden argument*/&AssemblyName_get_Version_m11810_MethodInfo);
		NullCheck(L_14);
		SerializationInfo_AddValue_m8014(L_14, (String_t*) &_stringLiteral1898, L_15, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_16 = ___info;
		int32_t L_17 = (__this->___hashalg_8);
		int32_t L_18 = L_17;
		Object_t * L_19 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1929_il2cpp_TypeInfo), &L_18);
		NullCheck(L_16);
		SerializationInfo_AddValue_m8014(L_16, (String_t*) &_stringLiteral1901, L_19, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_20 = ___info;
		int32_t L_21 = 0;
		Object_t * L_22 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1929_il2cpp_TypeInfo), &L_21);
		NullCheck(L_20);
		SerializationInfo_AddValue_m8014(L_20, (String_t*) &_stringLiteral1907, L_22, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_23 = ___info;
		StrongNameKeyPair_t2007 * L_24 = (__this->___keypair_9);
		NullCheck(L_23);
		SerializationInfo_AddValue_m8014(L_23, (String_t*) &_stringLiteral1902, L_24, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_25 = ___info;
		int32_t L_26 = (__this->___versioncompat_12);
		int32_t L_27 = L_26;
		Object_t * L_28 = Box(InitializedTypeInfo(&AssemblyVersionCompatibility_t1930_il2cpp_TypeInfo), &L_27);
		NullCheck(L_25);
		SerializationInfo_AddValue_m8014(L_25, (String_t*) &_stringLiteral1903, L_28, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_29 = ___info;
		int32_t L_30 = (__this->___flags_7);
		int32_t L_31 = L_30;
		Object_t * L_32 = Box(InitializedTypeInfo(&AssemblyNameFlags_t2008_il2cpp_TypeInfo), &L_31);
		NullCheck(L_29);
		SerializationInfo_AddValue_m8014(L_29, (String_t*) &_stringLiteral1904, L_32, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_33 = ___info;
		NullCheck(L_33);
		SerializationInfo_AddValue_m8014(L_33, (String_t*) &_stringLiteral1908, NULL, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
extern MethodInfo AssemblyName_OnDeserialization_m11819_MethodInfo;
extern "C" void AssemblyName_OnDeserialization_m11819 (AssemblyName_t1987 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		Version_t1329 * L_0 = (__this->___version_13);
		AssemblyName_set_Version_m11811(__this, L_0, /*hidden argument*/&AssemblyName_set_Version_m11811_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlagsMethodDeclarations.h"



// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyProductAttribute_t597_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyProductAttribute::.ctor(System.String)
extern MethodInfo AssemblyProductAttribute__ctor_m2936_MethodInfo;
extern "C" void AssemblyProductAttribute__ctor_m2936 (AssemblyProductAttribute_t597 * __this, String_t* ___product, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___product;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyTitleAttribute_t593_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTitleAttribute::.ctor(System.String)
extern MethodInfo AssemblyTitleAttribute__ctor_m2932_MethodInfo;
extern "C" void AssemblyTitleAttribute__ctor_m2932 (AssemblyTitleAttribute_t593 * __this, String_t* ___title, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___title;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AssemblyTrademarkAttribute_t602_il2cpp_TypeInfo;
// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttributeMethodDeclarations.h"



// System.Void System.Reflection.AssemblyTrademarkAttribute::.ctor(System.String)
extern MethodInfo AssemblyTrademarkAttribute__ctor_m2941_MethodInfo;
extern "C" void AssemblyTrademarkAttribute__ctor_m2941 (AssemblyTrademarkAttribute_t602 * __this, String_t* ___trademark, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___trademark;
		__this->___name_0 = L_0;
		return;
	}
}
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_Default.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Default_t2009_il2cpp_TypeInfo;
// System.Reflection.Binder/Default
#include "mscorlib_System_Reflection_Binder_DefaultMethodDeclarations.h"

// System.Double
#include "mscorlib_System_Double.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"
extern TypeInfo Enum_t207_il2cpp_TypeInfo;
extern TypeInfo Double_t939_il2cpp_TypeInfo;
extern TypeInfo Single_t139_il2cpp_TypeInfo;
extern TypeInfo Convert_t1159_il2cpp_TypeInfo;
extern TypeInfo PropertyInfo_t_il2cpp_TypeInfo;
// System.Enum
#include "mscorlib_System_EnumMethodDeclarations.h"
// System.Convert
#include "mscorlib_System_ConvertMethodDeclarations.h"
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfoMethodDeclarations.h"
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Double_t939_0_0_0;
extern Il2CppType Single_t139_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
extern Il2CppType Nullable_1_t2359_0_0_0;
extern Il2CppType Enum_t207_0_0_0;
extern Il2CppType ParamArrayAttribute_t565_0_0_0;
extern MethodInfo Binder__ctor_m11835_MethodInfo;
extern MethodInfo Object_GetType_m568_MethodInfo;
extern MethodInfo Default_SelectMethod_m11829_MethodInfo;
extern MethodInfo Default_ReorderParameters_m11822_MethodInfo;
extern MethodInfo Array_Copy_m10282_MethodInfo;
extern MethodInfo MethodBase_GetParameters_m6940_MethodInfo;
extern MethodInfo ParameterInfo_get_Name_m12029_MethodInfo;
extern MethodInfo Type_get_IsArray_m10324_MethodInfo;
extern MethodInfo Type_GetElementType_m13981_MethodInfo;
extern MethodInfo Default_IsArrayAssignable_m11823_MethodInfo;
extern MethodInfo Type_get_IsByRef_m10325_MethodInfo;
extern MethodInfo Type_IsInstanceOfType_m8432_MethodInfo;
extern MethodInfo Default_check_type_m11826_MethodInfo;
extern MethodInfo Enum_ToObject_m10210_MethodInfo;
extern MethodInfo Type_get_IsPointer_m10332_MethodInfo;
extern MethodInfo Convert_ChangeType_m13418_MethodInfo;
extern MethodInfo Enum_GetUnderlyingType_m10201_MethodInfo;
extern MethodInfo Type_get_IsGenericType_m10369_MethodInfo;
extern MethodInfo Type_GetGenericTypeDefinition_m10368_MethodInfo;
extern MethodInfo Type_GetGenericArguments_m10364_MethodInfo;
extern MethodInfo Type_GetTypeCode_m8433_MethodInfo;
extern MethodInfo ParameterInfo_get_ParameterType_m6941_MethodInfo;
extern MethodInfo Attribute_IsDefined_m9629_MethodInfo;
extern MethodInfo Default_check_arguments_m11827_MethodInfo;
extern MethodInfo Default_GetBetterMethod_m11830_MethodInfo;
extern MethodInfo MethodBase_get_IsGenericMethodDefinition_m11878_MethodInfo;
extern MethodInfo Default_CompareCloserType_m11831_MethodInfo;
extern MethodInfo MemberInfo_get_DeclaringType_m6938_MethodInfo;
extern MethodInfo Type_get_IsGenericParameter_m10371_MethodInfo;
extern MethodInfo PropertyInfo_GetIndexParameters_m14028_MethodInfo;
extern MethodInfo PropertyInfo_get_PropertyType_m14029_MethodInfo;
extern MethodInfo Default_check_arguments_with_score_m11833_MethodInfo;
extern MethodInfo Binder_GetDerivedLevel_m11839_MethodInfo;
extern MethodInfo Default_check_type_with_score_m11834_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
extern "C" int32_t Array_IndexOf_TisObject_t_m14031_gshared (Object_t * __this /* static, unused */, ObjectU5BU5D_t164* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14031(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, ObjectU5BU5D_t164*, Object_t *, MethodInfo*))Array_IndexOf_TisObject_t_m14031_gshared)(__this /* static, unused */, p0, p1, method)
// Declaration System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Type>(!!0[],!!0)
#define Array_IndexOf_TisType_t_m14030(__this /* static, unused */, p0, p1, method) (( int32_t (*) (Object_t * /* static, unused */, TypeU5BU5D_t913*, Type_t *, MethodInfo*))Array_IndexOf_TisObject_t_m14031_gshared)(__this /* static, unused */, p0, p1, method)
extern Il2CppGenericMethod Array_IndexOf_TisType_t_m14030_GenericMethod;


// System.Void System.Reflection.Binder/Default::.ctor()
extern MethodInfo Default__ctor_m11820_MethodInfo;
extern "C" void Default__ctor_m11820 (Default_t2009 * __this, MethodInfo* method)
{
	{
		Binder__ctor_m11835(__this, /*hidden argument*/&Binder__ctor_m11835_MethodInfo);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
extern MethodInfo Default_BindToMethod_m11821_MethodInfo;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" MethodBase_t1169 * Default_BindToMethod_m11821 (Default_t2009 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t2010* ___match, ObjectU5BU5D_t164** ___args, ParameterModifierU5BU5D_t1163* ___modifiers, CultureInfo_t1165 * ___culture, StringU5BU5D_t43* ___names, Object_t ** ___state, MethodInfo* method)
{
	static bool Default_BindToMethod_m11821_init;
	if (!Default_BindToMethod_m11821_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		Default_BindToMethod_m11821_init = true;
	}
	TypeU5BU5D_t913* V_0 = {0};
	int32_t V_1 = 0;
	MethodBase_t1169 * V_2 = {0};
	{
		ObjectU5BU5D_t164** L_0 = ___args;
		if ((*((ObjectU5BU5D_t164**)L_0)))
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_1 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		V_0 = L_1;
		goto IL_0037;
	}

IL_000c:
	{
		ObjectU5BU5D_t164** L_2 = ___args;
		NullCheck((*((ObjectU5BU5D_t164**)L_2)));
		V_0 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t164**)L_2)))->max_length)))));
		V_1 = 0;
		goto IL_0030;
	}

IL_001a:
	{
		ObjectU5BU5D_t164** L_3 = ___args;
		int32_t L_4 = V_1;
		NullCheck((*((ObjectU5BU5D_t164**)L_3)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t164**)L_3)), L_4);
		int32_t L_5 = L_4;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t164**)L_3)), L_5)))
		{
			goto IL_002c;
		}
	}
	{
		TypeU5BU5D_t913* L_6 = V_0;
		int32_t L_7 = V_1;
		ObjectU5BU5D_t164** L_8 = ___args;
		int32_t L_9 = V_1;
		NullCheck((*((ObjectU5BU5D_t164**)L_8)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t164**)L_8)), L_9);
		int32_t L_10 = L_9;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t164**)L_8)), L_10)));
		Type_t * L_11 = Object_GetType_m568((*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t164**)L_8)), L_10)), /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		ArrayElementTypeCheck (L_6, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, L_7)) = (Type_t *)L_11;
	}

IL_002c:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0030:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t164** L_14 = ___args;
		NullCheck((*((ObjectU5BU5D_t164**)L_14)));
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)(*((ObjectU5BU5D_t164**)L_14)))->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_0037:
	{
		int32_t L_15 = ___bindingAttr;
		MethodBaseU5BU5D_t2010* L_16 = ___match;
		TypeU5BU5D_t913* L_17 = V_0;
		ParameterModifierU5BU5D_t1163* L_18 = ___modifiers;
		MethodBase_t1169 * L_19 = Default_SelectMethod_m11829(__this, L_15, L_16, L_17, L_18, 1, /*hidden argument*/&Default_SelectMethod_m11829_MethodInfo);
		V_2 = L_19;
		Object_t ** L_20 = ___state;
		*((Object_t **)(L_20)) = (Object_t *)NULL;
		StringU5BU5D_t43* L_21 = ___names;
		if (!L_21)
		{
			goto IL_0056;
		}
	}
	{
		StringU5BU5D_t43* L_22 = ___names;
		ObjectU5BU5D_t164** L_23 = ___args;
		MethodBase_t1169 * L_24 = V_2;
		Default_ReorderParameters_m11822(__this, L_22, L_23, L_24, /*hidden argument*/&Default_ReorderParameters_m11822_MethodInfo);
	}

IL_0056:
	{
		MethodBase_t1169 * L_25 = V_2;
		return L_25;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderParameters(System.String[],System.Object[]&,System.Reflection.MethodBase)
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" void Default_ReorderParameters_m11822 (Default_t2009 * __this, StringU5BU5D_t43* ___names, ObjectU5BU5D_t164** ___args, MethodBase_t1169 * ___selected, MethodInfo* method)
{
	static bool Default_ReorderParameters_m11822_init;
	if (!Default_ReorderParameters_m11822_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		Default_ReorderParameters_m11822_init = true;
	}
	ObjectU5BU5D_t164* V_0 = {0};
	ParameterInfoU5BU5D_t1170* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ObjectU5BU5D_t164** L_0 = ___args;
		NullCheck((*((ObjectU5BU5D_t164**)L_0)));
		V_0 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t164**)L_0)))->max_length)))));
		ObjectU5BU5D_t164** L_1 = ___args;
		ObjectU5BU5D_t164* L_2 = V_0;
		ObjectU5BU5D_t164** L_3 = ___args;
		NullCheck((*((ObjectU5BU5D_t164**)L_3)));
		Array_Copy_m10282(NULL /*static, unused*/, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t164**)L_1)), (Array_t *)(Array_t *)L_2, (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t164**)L_3)))->max_length))), /*hidden argument*/&Array_Copy_m10282_MethodInfo);
		MethodBase_t1169 * L_4 = ___selected;
		NullCheck(L_4);
		ParameterInfoU5BU5D_t1170* L_5 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_4);
		V_1 = L_5;
		V_2 = 0;
		goto IL_004e;
	}

IL_0021:
	{
		V_3 = 0;
		goto IL_0044;
	}

IL_0025:
	{
		StringU5BU5D_t43* L_6 = ___names;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ParameterInfoU5BU5D_t1170* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_9, L_11)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m12029_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_9, L_11)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m406(NULL /*static, unused*/, (*(String_t**)(String_t**)SZArrayLdElema(L_6, L_8)), L_12, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		ObjectU5BU5D_t164* L_14 = V_0;
		int32_t L_15 = V_3;
		ObjectU5BU5D_t164** L_16 = ___args;
		int32_t L_17 = V_2;
		NullCheck((*((ObjectU5BU5D_t164**)L_16)));
		IL2CPP_ARRAY_BOUNDS_CHECK((*((ObjectU5BU5D_t164**)L_16)), L_17);
		int32_t L_18 = L_17;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		ArrayElementTypeCheck (L_14, (*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t164**)L_16)), L_18)));
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, L_15)) = (Object_t *)(*(Object_t **)(Object_t **)SZArrayLdElema((*((ObjectU5BU5D_t164**)L_16)), L_18));
		goto IL_004a;
	}

IL_0040:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_20 = V_3;
		ParameterInfoU5BU5D_t1170* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)(((Array_t *)L_21)->max_length))))))
		{
			goto IL_0025;
		}
	}

IL_004a:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_004e:
	{
		int32_t L_23 = V_2;
		StringU5BU5D_t43* L_24 = ___names;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0021;
		}
	}
	{
		ObjectU5BU5D_t164* L_25 = V_0;
		ObjectU5BU5D_t164** L_26 = ___args;
		ObjectU5BU5D_t164** L_27 = ___args;
		NullCheck((*((ObjectU5BU5D_t164**)L_27)));
		Array_Copy_m10282(NULL /*static, unused*/, (Array_t *)(Array_t *)L_25, (Array_t *)(Array_t *)(*((ObjectU5BU5D_t164**)L_26)), (((int32_t)(((Array_t *)(*((ObjectU5BU5D_t164**)L_27)))->max_length))), /*hidden argument*/&Array_Copy_m10282_MethodInfo);
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::IsArrayAssignable(System.Type,System.Type)
extern "C" bool Default_IsArrayAssignable_m11823 (Object_t * __this /* static, unused */, Type_t * ___object_type, Type_t * ___target_type, MethodInfo* method)
{
	{
		Type_t * L_0 = ___object_type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m10324_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_2 = ___target_type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m10324_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Type_t * L_4 = ___object_type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_4);
		Type_t * L_6 = ___target_type;
		NullCheck(L_6);
		Type_t * L_7 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_6);
		bool L_8 = Default_IsArrayAssignable_m11823(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/&Default_IsArrayAssignable_m11823_MethodInfo);
		return L_8;
	}

IL_0022:
	{
		Type_t * L_9 = ___target_type;
		Type_t * L_10 = ___object_type;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}
	{
		return 1;
	}

IL_002d:
	{
		return 0;
	}
}
// System.Object System.Reflection.Binder/Default::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
extern MethodInfo Default_ChangeType_m11824_MethodInfo;
extern "C" Object_t * Default_ChangeType_m11824 (Default_t2009 * __this, Object_t * ___value, Type_t * ___type, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	Type_t * V_0 = {0};
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		Object_t * L_1 = ___value;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m568(L_1, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		V_0 = L_2;
		Type_t * L_3 = ___type;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m10325_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_5 = ___type;
		NullCheck(L_5);
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_5);
		___type = L_6;
	}

IL_001e:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = ___type;
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_9 = ___type;
		Object_t * L_10 = ___value;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Type_IsInstanceOfType_m8432_MethodInfo, L_9, L_10);
		if (!L_11)
		{
			goto IL_002d;
		}
	}

IL_002b:
	{
		Object_t * L_12 = ___value;
		return L_12;
	}

IL_002d:
	{
		Type_t * L_13 = V_0;
		NullCheck(L_13);
		bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m10324_MethodInfo, L_13);
		if (!L_14)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_15 = ___type;
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsArray_m10324_MethodInfo, L_15);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		Type_t * L_17 = V_0;
		NullCheck(L_17);
		Type_t * L_18 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_17);
		Type_t * L_19 = ___type;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_19);
		bool L_21 = Default_IsArrayAssignable_m11823(NULL /*static, unused*/, L_18, L_20, /*hidden argument*/&Default_IsArrayAssignable_m11823_MethodInfo);
		if (!L_21)
		{
			goto IL_0052;
		}
	}
	{
		Object_t * L_22 = ___value;
		return L_22;
	}

IL_0052:
	{
		Type_t * L_23 = V_0;
		Type_t * L_24 = ___type;
		bool L_25 = Default_check_type_m11826(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/&Default_check_type_m11826_MethodInfo);
		if (!L_25)
		{
			goto IL_00ce;
		}
	}
	{
		Type_t * L_26 = ___type;
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_26);
		if (!L_27)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_28 = ___type;
		Object_t * L_29 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Enum_t207_il2cpp_TypeInfo));
		Object_t * L_30 = Enum_ToObject_m10210(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/&Enum_ToObject_m10210_MethodInfo);
		return L_30;
	}

IL_006e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Char_t389_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_00af;
		}
	}
	{
		Type_t * L_33 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_34 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Double_t939_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_33) == ((Object_t*)(Type_t *)L_34))))
		{
			goto IL_0095;
		}
	}
	{
		Object_t * L_35 = ___value;
		double L_36 = (((double)((*(uint16_t*)((uint16_t*)UnBox (L_35, InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo)))))));
		Object_t * L_37 = Box(InitializedTypeInfo(&Double_t939_il2cpp_TypeInfo), &L_36);
		return L_37;
	}

IL_0095:
	{
		Type_t * L_38 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_39 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Single_t139_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_38) == ((Object_t*)(Type_t *)L_39))))
		{
			goto IL_00af;
		}
	}
	{
		Object_t * L_40 = ___value;
		float L_41 = (((float)((*(uint16_t*)((uint16_t*)UnBox (L_40, InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo)))))));
		Object_t * L_42 = Box(InitializedTypeInfo(&Single_t139_il2cpp_TypeInfo), &L_41);
		return L_42;
	}

IL_00af:
	{
		Type_t * L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_44 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))))
		{
			goto IL_00c6;
		}
	}
	{
		Type_t * L_45 = ___type;
		NullCheck(L_45);
		bool L_46 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m10332_MethodInfo, L_45);
		if (!L_46)
		{
			goto IL_00c6;
		}
	}
	{
		Object_t * L_47 = ___value;
		return L_47;
	}

IL_00c6:
	{
		Object_t * L_48 = ___value;
		Type_t * L_49 = ___type;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Convert_t1159_il2cpp_TypeInfo));
		Object_t * L_50 = Convert_ChangeType_m13418(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/&Convert_ChangeType_m13418_MethodInfo);
		return L_50;
	}

IL_00ce:
	{
		return NULL;
	}
}
// System.Void System.Reflection.Binder/Default::ReorderArgumentArray(System.Object[]&,System.Object)
extern MethodInfo Default_ReorderArgumentArray_m11825_MethodInfo;
extern "C" void Default_ReorderArgumentArray_m11825 (Default_t2009 * __this, ObjectU5BU5D_t164** ___args, Object_t * ___state, MethodInfo* method)
{
	{
		return;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_type(System.Type,System.Type)
extern "C" bool Default_check_type_m11826 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B28_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B78_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B91_0 = 0;
	int32_t G_B95_0 = 0;
	{
		Type_t * L_0 = ___from;
		Type_t * L_1 = ___to;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 1;
	}

IL_0006:
	{
		Type_t * L_2 = ___from;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return 1;
	}

IL_000b:
	{
		Type_t * L_3 = ___to;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m10325_MethodInfo, L_3);
		Type_t * L_5 = ___from;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m10325_MethodInfo, L_5);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		Type_t * L_7 = ___to;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m10330_MethodInfo, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_9 = ___to;
		Type_t * L_10 = ___from;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_9, L_10);
		return L_11;
	}

IL_002b:
	{
		Type_t * L_12 = ___to;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_12);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_14 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Enum_t207_il2cpp_TypeInfo));
		Type_t * L_15 = Enum_GetUnderlyingType_m10201(NULL /*static, unused*/, L_14, /*hidden argument*/&Enum_GetUnderlyingType_m10201_MethodInfo);
		___to = L_15;
		Type_t * L_16 = ___from;
		Type_t * L_17 = ___to;
		if ((!(((Object_t*)(Type_t *)L_16) == ((Object_t*)(Type_t *)L_17))))
		{
			goto IL_0043;
		}
	}
	{
		return 1;
	}

IL_0043:
	{
		Type_t * L_18 = ___to;
		NullCheck(L_18);
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericType_m10369_MethodInfo, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_20 = ___to;
		NullCheck(L_20);
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetGenericTypeDefinition_m10368_MethodInfo, L_20);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_22 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Nullable_1_t2359_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_21) == ((Object_t*)(Type_t *)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_23 = ___to;
		NullCheck(L_23);
		TypeU5BU5D_t913* L_24 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&Type_GetGenericArguments_m10364_MethodInfo, L_23);
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		int32_t L_25 = 0;
		Type_t * L_26 = ___from;
		if ((!(((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_24, L_25))) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_006a;
		}
	}
	{
		return 1;
	}

IL_006a:
	{
		Type_t * L_27 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_28 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_27, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		V_0 = L_28;
		Type_t * L_29 = ___to;
		int32_t L_30 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_29, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		V_1 = L_30;
		int32_t L_31 = V_0;
		V_2 = L_31;
		int32_t L_32 = V_2;
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 0)
		{
			goto IL_00af;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 1)
		{
			goto IL_014a;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 2)
		{
			goto IL_00e7;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 3)
		{
			goto IL_01f1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 4)
		{
			goto IL_01a1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 5)
		{
			goto IL_0289;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 6)
		{
			goto IL_0241;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 7)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 8)
		{
			goto IL_02d1;
		}
		if (((int32_t)((int32_t)L_32-(int32_t)4)) == 9)
		{
			goto IL_030a;
		}
	}
	{
		goto IL_0320;
	}

IL_00af:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 0)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 1)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 2)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 3)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 4)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 5)
		{
			goto IL_00d7;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)8)) == 6)
		{
			goto IL_00d7;
		}
	}
	{
		goto IL_00d9;
	}

IL_00d7:
	{
		return 1;
	}

IL_00d9:
	{
		Type_t * L_35 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_36 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		return ((((Object_t*)(Type_t *)L_35) == ((Object_t*)(Type_t *)L_36))? 1 : 0);
	}

IL_00e7:
	{
		int32_t L_37 = V_1;
		V_3 = L_37;
		int32_t L_38 = V_3;
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 0)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 1)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 2)
		{
			goto IL_0121;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 3)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 4)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 5)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 6)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 7)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 8)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 9)
		{
			goto IL_011f;
		}
		if (((int32_t)((int32_t)L_38-(int32_t)4)) == 10)
		{
			goto IL_011f;
		}
	}
	{
		goto IL_0121;
	}

IL_011f:
	{
		return 1;
	}

IL_0121:
	{
		Type_t * L_39 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_40 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_39) == ((Object_t*)(Type_t *)L_40)))
		{
			goto IL_0148;
		}
	}
	{
		Type_t * L_41 = ___from;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_41);
		if (!L_42)
		{
			goto IL_0145;
		}
	}
	{
		Type_t * L_43 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_44 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B28_0 = ((((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))? 1 : 0);
		goto IL_0146;
	}

IL_0145:
	{
		G_B28_0 = 0;
	}

IL_0146:
	{
		G_B30_0 = G_B28_0;
		goto IL_0149;
	}

IL_0148:
	{
		G_B30_0 = 1;
	}

IL_0149:
	{
		return G_B30_0;
	}

IL_014a:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 0)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 1)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 2)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 3)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 4)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 5)
		{
			goto IL_0178;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 6)
		{
			goto IL_0176;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)7)) == 7)
		{
			goto IL_0176;
		}
	}
	{
		goto IL_0178;
	}

IL_0176:
	{
		return 1;
	}

IL_0178:
	{
		Type_t * L_47 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_48 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_47) == ((Object_t*)(Type_t *)L_48)))
		{
			goto IL_019f;
		}
	}
	{
		Type_t * L_49 = ___from;
		NullCheck(L_49);
		bool L_50 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_49);
		if (!L_50)
		{
			goto IL_019c;
		}
	}
	{
		Type_t * L_51 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_52 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B38_0 = ((((Object_t*)(Type_t *)L_51) == ((Object_t*)(Type_t *)L_52))? 1 : 0);
		goto IL_019d;
	}

IL_019c:
	{
		G_B38_0 = 0;
	}

IL_019d:
	{
		G_B40_0 = G_B38_0;
		goto IL_01a0;
	}

IL_019f:
	{
		G_B40_0 = 1;
	}

IL_01a0:
	{
		return G_B40_0;
	}

IL_01a1:
	{
		int32_t L_53 = V_1;
		V_3 = L_53;
		int32_t L_54 = V_3;
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_01c6;
		}
		if (((int32_t)((int32_t)L_54-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_01c6;
		}
	}
	{
		goto IL_01c8;
	}

IL_01c6:
	{
		return 1;
	}

IL_01c8:
	{
		Type_t * L_55 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_56 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_55) == ((Object_t*)(Type_t *)L_56)))
		{
			goto IL_01ef;
		}
	}
	{
		Type_t * L_57 = ___from;
		NullCheck(L_57);
		bool L_58 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_57);
		if (!L_58)
		{
			goto IL_01ec;
		}
	}
	{
		Type_t * L_59 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_60 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B48_0 = ((((Object_t*)(Type_t *)L_59) == ((Object_t*)(Type_t *)L_60))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B48_0 = 0;
	}

IL_01ed:
	{
		G_B50_0 = G_B48_0;
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B50_0 = 1;
	}

IL_01f0:
	{
		return G_B50_0;
	}

IL_01f1:
	{
		int32_t L_61 = V_1;
		V_3 = L_61;
		int32_t L_62 = V_3;
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0218;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0216;
		}
		if (((int32_t)((int32_t)L_62-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0216;
		}
	}
	{
		goto IL_0218;
	}

IL_0216:
	{
		return 1;
	}

IL_0218:
	{
		Type_t * L_63 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_64 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_63) == ((Object_t*)(Type_t *)L_64)))
		{
			goto IL_023f;
		}
	}
	{
		Type_t * L_65 = ___from;
		NullCheck(L_65);
		bool L_66 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_65);
		if (!L_66)
		{
			goto IL_023c;
		}
	}
	{
		Type_t * L_67 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_68 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B58_0 = ((((Object_t*)(Type_t *)L_67) == ((Object_t*)(Type_t *)L_68))? 1 : 0);
		goto IL_023d;
	}

IL_023c:
	{
		G_B58_0 = 0;
	}

IL_023d:
	{
		G_B60_0 = G_B58_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B60_0 = 1;
	}

IL_0240:
	{
		return G_B60_0;
	}

IL_0241:
	{
		int32_t L_69 = V_1;
		V_3 = L_69;
		int32_t L_70 = V_3;
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_025e;
		}
		if (((int32_t)((int32_t)L_70-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_0260;
	}

IL_025e:
	{
		return 1;
	}

IL_0260:
	{
		Type_t * L_71 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_72 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_71) == ((Object_t*)(Type_t *)L_72)))
		{
			goto IL_0287;
		}
	}
	{
		Type_t * L_73 = ___from;
		NullCheck(L_73);
		bool L_74 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_73);
		if (!L_74)
		{
			goto IL_0284;
		}
	}
	{
		Type_t * L_75 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_76 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B68_0 = ((((Object_t*)(Type_t *)L_75) == ((Object_t*)(Type_t *)L_76))? 1 : 0);
		goto IL_0285;
	}

IL_0284:
	{
		G_B68_0 = 0;
	}

IL_0285:
	{
		G_B70_0 = G_B68_0;
		goto IL_0288;
	}

IL_0287:
	{
		G_B70_0 = 1;
	}

IL_0288:
	{
		return G_B70_0;
	}

IL_0289:
	{
		int32_t L_77 = V_1;
		V_3 = L_77;
		int32_t L_78 = V_3;
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_02a8;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_02a6;
		}
		if (((int32_t)((int32_t)L_78-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_02a6;
		}
	}
	{
		goto IL_02a8;
	}

IL_02a6:
	{
		return 1;
	}

IL_02a8:
	{
		Type_t * L_79 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_80 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_79) == ((Object_t*)(Type_t *)L_80)))
		{
			goto IL_02cf;
		}
	}
	{
		Type_t * L_81 = ___from;
		NullCheck(L_81);
		bool L_82 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_81);
		if (!L_82)
		{
			goto IL_02cc;
		}
	}
	{
		Type_t * L_83 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_84 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B78_0 = ((((Object_t*)(Type_t *)L_83) == ((Object_t*)(Type_t *)L_84))? 1 : 0);
		goto IL_02cd;
	}

IL_02cc:
	{
		G_B78_0 = 0;
	}

IL_02cd:
	{
		G_B80_0 = G_B78_0;
		goto IL_02d0;
	}

IL_02cf:
	{
		G_B80_0 = 1;
	}

IL_02d0:
	{
		return G_B80_0;
	}

IL_02d1:
	{
		int32_t L_85 = V_1;
		V_3 = L_85;
		int32_t L_86 = V_3;
		if ((((int32_t)L_86) == ((int32_t)((int32_t)13))))
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_87 = V_3;
		if ((((int32_t)L_87) == ((int32_t)((int32_t)14))))
		{
			goto IL_02df;
		}
	}
	{
		goto IL_02e1;
	}

IL_02df:
	{
		return 1;
	}

IL_02e1:
	{
		Type_t * L_88 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_89 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_88) == ((Object_t*)(Type_t *)L_89)))
		{
			goto IL_0308;
		}
	}
	{
		Type_t * L_90 = ___from;
		NullCheck(L_90);
		bool L_91 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_90);
		if (!L_91)
		{
			goto IL_0305;
		}
	}
	{
		Type_t * L_92 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_93 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B89_0 = ((((Object_t*)(Type_t *)L_92) == ((Object_t*)(Type_t *)L_93))? 1 : 0);
		goto IL_0306;
	}

IL_0305:
	{
		G_B89_0 = 0;
	}

IL_0306:
	{
		G_B91_0 = G_B89_0;
		goto IL_0309;
	}

IL_0308:
	{
		G_B91_0 = 1;
	}

IL_0309:
	{
		return G_B91_0;
	}

IL_030a:
	{
		int32_t L_94 = V_1;
		if ((((int32_t)L_94) == ((int32_t)((int32_t)14))))
		{
			goto IL_031e;
		}
	}
	{
		Type_t * L_95 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_96 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		G_B95_0 = ((((Object_t*)(Type_t *)L_95) == ((Object_t*)(Type_t *)L_96))? 1 : 0);
		goto IL_031f;
	}

IL_031e:
	{
		G_B95_0 = 1;
	}

IL_031f:
	{
		return G_B95_0;
	}

IL_0320:
	{
		Type_t * L_97 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_98 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_97) == ((Object_t*)(Type_t *)L_98))))
		{
			goto IL_0337;
		}
	}
	{
		Type_t * L_99 = ___from;
		NullCheck(L_99);
		bool L_100 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10335_MethodInfo, L_99);
		if (!L_100)
		{
			goto IL_0337;
		}
	}
	{
		return 1;
	}

IL_0337:
	{
		Type_t * L_101 = ___to;
		NullCheck(L_101);
		bool L_102 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m10332_MethodInfo, L_101);
		if (!L_102)
		{
			goto IL_034e;
		}
	}
	{
		Type_t * L_103 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_104 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&IntPtr_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_103) == ((Object_t*)(Type_t *)L_104))))
		{
			goto IL_034e;
		}
	}
	{
		return 1;
	}

IL_034e:
	{
		Type_t * L_105 = ___to;
		Type_t * L_106 = ___from;
		NullCheck(L_105);
		bool L_107 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_105, L_106);
		return L_107;
	}
}
// System.Boolean System.Reflection.Binder/Default::check_arguments(System.Type[],System.Reflection.ParameterInfo[],System.Boolean)
extern "C" bool Default_check_arguments_m11827 (Object_t * __this /* static, unused */, TypeU5BU5D_t913* ___types, ParameterInfoU5BU5D_t1170* ___args, bool ___allowByRefMatch, MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	Type_t * V_2 = {0};
	{
		V_0 = 0;
		goto IL_0044;
	}

IL_0004:
	{
		TypeU5BU5D_t913* L_0 = ___types;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ParameterInfoU5BU5D_t1170* L_3 = ___args;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_3, L_5)));
		bool L_7 = Default_check_type_m11826(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2)), L_6, /*hidden argument*/&Default_check_type_m11826_MethodInfo);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		bool L_9 = ___allowByRefMatch;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_10 = ___args;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_10, L_12)));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_10, L_12)));
		V_2 = L_13;
		Type_t * L_14 = V_2;
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m10325_MethodInfo, L_14);
		if (!L_15)
		{
			goto IL_003b;
		}
	}
	{
		TypeU5BU5D_t913* L_16 = ___types;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		Type_t * L_19 = V_2;
		NullCheck(L_19);
		Type_t * L_20 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_19);
		bool L_21 = Default_check_type_m11826(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_16, L_18)), L_20, /*hidden argument*/&Default_check_type_m11826_MethodInfo);
		V_1 = L_21;
	}

IL_003b:
	{
		bool L_22 = V_1;
		if (L_22)
		{
			goto IL_0040;
		}
	}
	{
		return 0;
	}

IL_0040:
	{
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0044:
	{
		int32_t L_24 = V_0;
		TypeU5BU5D_t913* L_25 = ___types;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		return 1;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo Default_SelectMethod_m11828_MethodInfo;
extern "C" MethodBase_t1169 * Default_SelectMethod_m11828 (Default_t2009 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t2010* ___match, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	{
		int32_t L_0 = ___bindingAttr;
		MethodBaseU5BU5D_t2010* L_1 = ___match;
		TypeU5BU5D_t913* L_2 = ___types;
		ParameterModifierU5BU5D_t1163* L_3 = ___modifiers;
		MethodBase_t1169 * L_4 = Default_SelectMethod_m11829(__this, L_0, L_1, L_2, L_3, 0, /*hidden argument*/&Default_SelectMethod_m11829_MethodInfo);
		return L_4;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[],System.Boolean)
extern "C" MethodBase_t1169 * Default_SelectMethod_m11829 (Default_t2009 * __this, int32_t ___bindingAttr, MethodBaseU5BU5D_t2010* ___match, TypeU5BU5D_t913* ___types, ParameterModifierU5BU5D_t1163* ___modifiers, bool ___allowByRefMatch, MethodInfo* method)
{
	MethodBase_t1169 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ParameterInfoU5BU5D_t1170* V_3 = {0};
	bool V_4 = false;
	Type_t * V_5 = {0};
	ParameterInfoU5BU5D_t1170* V_6 = {0};
	MethodBase_t1169 * V_7 = {0};
	ParameterInfoU5BU5D_t1170* V_8 = {0};
	{
		MethodBaseU5BU5D_t2010* L_0 = ___match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1420, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		V_1 = 0;
		goto IL_0050;
	}

IL_0012:
	{
		MethodBaseU5BU5D_t2010* L_2 = ___match;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_2, L_4));
		MethodBase_t1169 * L_5 = V_0;
		NullCheck(L_5);
		ParameterInfoU5BU5D_t1170* L_6 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_5);
		V_3 = L_6;
		ParameterInfoU5BU5D_t1170* L_7 = V_3;
		NullCheck(L_7);
		TypeU5BU5D_t913* L_8 = ___types;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_004c;
	}

IL_0027:
	{
		V_2 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		TypeU5BU5D_t913* L_9 = ___types;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		ParameterInfoU5BU5D_t1170* L_12 = V_3;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_12, L_14)));
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_12, L_14)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_9, L_11))) == ((Object_t*)(Type_t *)L_15)))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0044;
	}

IL_003a:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)((int32_t)L_16+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_17 = V_2;
		TypeU5BU5D_t913* L_18 = ___types;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_002b;
		}
	}

IL_0044:
	{
		int32_t L_19 = V_2;
		TypeU5BU5D_t913* L_20 = ___types;
		NullCheck(L_20);
		if ((!(((uint32_t)L_19) == ((uint32_t)(((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_004c;
		}
	}
	{
		MethodBase_t1169 * L_21 = V_0;
		return L_21;
	}

IL_004c:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0050:
	{
		int32_t L_23 = V_1;
		MethodBaseU5BU5D_t2010* L_24 = ___match;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)(((Array_t *)L_24)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_4 = 0;
		V_5 = (Type_t *)NULL;
		V_1 = 0;
		goto IL_0102;
	}

IL_0063:
	{
		MethodBaseU5BU5D_t2010* L_25 = ___match;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, L_26);
		int32_t L_27 = L_26;
		V_0 = (*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_25, L_27));
		MethodBase_t1169 * L_28 = V_0;
		NullCheck(L_28);
		ParameterInfoU5BU5D_t1170* L_29 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_28);
		V_6 = L_29;
		ParameterInfoU5BU5D_t1170* L_30 = V_6;
		NullCheck(L_30);
		TypeU5BU5D_t913* L_31 = ___types;
		NullCheck(L_31);
		if ((((int32_t)(((int32_t)(((Array_t *)L_30)->max_length)))) <= ((int32_t)(((int32_t)(((Array_t *)L_31)->max_length))))))
		{
			goto IL_007d;
		}
	}
	{
		goto IL_00fe;
	}

IL_007d:
	{
		ParameterInfoU5BU5D_t1170* L_32 = V_6;
		NullCheck(L_32);
		if ((((int32_t)(((Array_t *)L_32)->max_length))))
		{
			goto IL_0088;
		}
	}
	{
		goto IL_00fe;
	}

IL_0088:
	{
		ParameterInfoU5BU5D_t1170* L_33 = V_6;
		ParameterInfoU5BU5D_t1170* L_34 = V_6;
		NullCheck(L_34);
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))-(int32_t)1)));
		int32_t L_35 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_34)->max_length)))-(int32_t)1));
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_36 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ParamArrayAttribute_t565_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		bool L_37 = Attribute_IsDefined_m9629(NULL /*static, unused*/, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_33, L_35)), L_36, /*hidden argument*/&Attribute_IsDefined_m9629_MethodInfo);
		V_4 = L_37;
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00fe;
	}

IL_00a8:
	{
		ParameterInfoU5BU5D_t1170* L_39 = V_6;
		ParameterInfoU5BU5D_t1170* L_40 = V_6;
		NullCheck(L_40);
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))-(int32_t)1)));
		int32_t L_41 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_40)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_39, L_41)));
		Type_t * L_42 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_39, L_41)));
		NullCheck(L_42);
		Type_t * L_43 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_42);
		V_5 = L_43;
		V_2 = 0;
		goto IL_00f0;
	}

IL_00c1:
	{
		int32_t L_44 = V_2;
		ParameterInfoU5BU5D_t1170* L_45 = V_6;
		NullCheck(L_45);
		if ((((int32_t)L_44) >= ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_45)->max_length)))-(int32_t)1)))))
		{
			goto IL_00da;
		}
	}
	{
		TypeU5BU5D_t913* L_46 = ___types;
		int32_t L_47 = V_2;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, L_47);
		int32_t L_48 = L_47;
		ParameterInfoU5BU5D_t1170* L_49 = V_6;
		int32_t L_50 = V_2;
		NullCheck(L_49);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_49, L_50);
		int32_t L_51 = L_50;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_49, L_51)));
		Type_t * L_52 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_49, L_51)));
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_46, L_48))) == ((Object_t*)(Type_t *)L_52)))
		{
			goto IL_00da;
		}
	}
	{
		goto IL_00f6;
	}

IL_00da:
	{
		int32_t L_53 = V_2;
		ParameterInfoU5BU5D_t1170* L_54 = V_6;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))-(int32_t)1)))))
		{
			goto IL_00ec;
		}
	}
	{
		TypeU5BU5D_t913* L_55 = ___types;
		int32_t L_56 = V_2;
		NullCheck(L_55);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_55, L_56);
		int32_t L_57 = L_56;
		Type_t * L_58 = V_5;
		if ((((Object_t*)(Type_t *)(*(Type_t **)(Type_t **)SZArrayLdElema(L_55, L_57))) == ((Object_t*)(Type_t *)L_58)))
		{
			goto IL_00ec;
		}
	}
	{
		goto IL_00f6;
	}

IL_00ec:
	{
		int32_t L_59 = V_2;
		V_2 = ((int32_t)((int32_t)L_59+(int32_t)1));
	}

IL_00f0:
	{
		int32_t L_60 = V_2;
		TypeU5BU5D_t913* L_61 = ___types;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)(((Array_t *)L_61)->max_length))))))
		{
			goto IL_00c1;
		}
	}

IL_00f6:
	{
		int32_t L_62 = V_2;
		TypeU5BU5D_t913* L_63 = ___types;
		NullCheck(L_63);
		if ((!(((uint32_t)L_62) == ((uint32_t)(((int32_t)(((Array_t *)L_63)->max_length)))))))
		{
			goto IL_00fe;
		}
	}
	{
		MethodBase_t1169 * L_64 = V_0;
		return L_64;
	}

IL_00fe:
	{
		int32_t L_65 = V_1;
		V_1 = ((int32_t)((int32_t)L_65+(int32_t)1));
	}

IL_0102:
	{
		int32_t L_66 = V_1;
		MethodBaseU5BU5D_t2010* L_67 = ___match;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)(((Array_t *)L_67)->max_length))))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_68 = ___bindingAttr;
		if (!((int32_t)((int32_t)L_68&(int32_t)((int32_t)65536))))
		{
			goto IL_0116;
		}
	}
	{
		return (MethodBase_t1169 *)NULL;
	}

IL_0116:
	{
		V_7 = (MethodBase_t1169 *)NULL;
		V_1 = 0;
		goto IL_015b;
	}

IL_011d:
	{
		MethodBaseU5BU5D_t2010* L_69 = ___match;
		int32_t L_70 = V_1;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, L_70);
		int32_t L_71 = L_70;
		V_0 = (*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_69, L_71));
		MethodBase_t1169 * L_72 = V_0;
		NullCheck(L_72);
		ParameterInfoU5BU5D_t1170* L_73 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_72);
		V_8 = L_73;
		ParameterInfoU5BU5D_t1170* L_74 = V_8;
		NullCheck(L_74);
		TypeU5BU5D_t913* L_75 = ___types;
		NullCheck(L_75);
		if ((((int32_t)(((int32_t)(((Array_t *)L_74)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_75)->max_length))))))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0157;
	}

IL_0134:
	{
		TypeU5BU5D_t913* L_76 = ___types;
		ParameterInfoU5BU5D_t1170* L_77 = V_8;
		bool L_78 = ___allowByRefMatch;
		bool L_79 = Default_check_arguments_m11827(NULL /*static, unused*/, L_76, L_77, L_78, /*hidden argument*/&Default_check_arguments_m11827_MethodInfo);
		if (L_79)
		{
			goto IL_0142;
		}
	}
	{
		goto IL_0157;
	}

IL_0142:
	{
		MethodBase_t1169 * L_80 = V_7;
		if (!L_80)
		{
			goto IL_0154;
		}
	}
	{
		MethodBase_t1169 * L_81 = V_7;
		MethodBase_t1169 * L_82 = V_0;
		TypeU5BU5D_t913* L_83 = ___types;
		MethodBase_t1169 * L_84 = Default_GetBetterMethod_m11830(__this, L_81, L_82, L_83, /*hidden argument*/&Default_GetBetterMethod_m11830_MethodInfo);
		V_7 = L_84;
		goto IL_0157;
	}

IL_0154:
	{
		MethodBase_t1169 * L_85 = V_0;
		V_7 = L_85;
	}

IL_0157:
	{
		int32_t L_86 = V_1;
		V_1 = ((int32_t)((int32_t)L_86+(int32_t)1));
	}

IL_015b:
	{
		int32_t L_87 = V_1;
		MethodBaseU5BU5D_t2010* L_88 = ___match;
		NullCheck(L_88);
		if ((((int32_t)L_87) < ((int32_t)(((int32_t)(((Array_t *)L_88)->max_length))))))
		{
			goto IL_011d;
		}
	}
	{
		MethodBase_t1169 * L_89 = V_7;
		return L_89;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder/Default::GetBetterMethod(System.Reflection.MethodBase,System.Reflection.MethodBase,System.Type[])
extern "C" MethodBase_t1169 * Default_GetBetterMethod_m11830 (Default_t2009 * __this, MethodBase_t1169 * ___m1, MethodBase_t1169 * ___m2, TypeU5BU5D_t913* ___types, MethodInfo* method)
{
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	ParameterInfoU5BU5D_t1170* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Type_t * V_5 = {0};
	Type_t * V_6 = {0};
	bool V_7 = false;
	bool V_8 = false;
	MethodBase_t1169 * G_B19_0 = {0};
	{
		MethodBase_t1169 * L_0 = ___m1;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m11878_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		MethodBase_t1169 * L_2 = ___m2;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m11878_MethodInfo, L_2);
		if (L_3)
		{
			goto IL_0012;
		}
	}
	{
		MethodBase_t1169 * L_4 = ___m2;
		return L_4;
	}

IL_0012:
	{
		MethodBase_t1169 * L_5 = ___m2;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m11878_MethodInfo, L_5);
		if (!L_6)
		{
			goto IL_0024;
		}
	}
	{
		MethodBase_t1169 * L_7 = ___m1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsGenericMethodDefinition_m11878_MethodInfo, L_7);
		if (L_8)
		{
			goto IL_0024;
		}
	}
	{
		MethodBase_t1169 * L_9 = ___m1;
		return L_9;
	}

IL_0024:
	{
		MethodBase_t1169 * L_10 = ___m1;
		NullCheck(L_10);
		ParameterInfoU5BU5D_t1170* L_11 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_10);
		V_0 = L_11;
		MethodBase_t1169 * L_12 = ___m2;
		NullCheck(L_12);
		ParameterInfoU5BU5D_t1170* L_13 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_12);
		V_1 = L_13;
		V_2 = 0;
		V_3 = 0;
		goto IL_006d;
	}

IL_0038:
	{
		ParameterInfoU5BU5D_t1170* L_14 = V_0;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_14, L_16)));
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_14, L_16)));
		ParameterInfoU5BU5D_t1170* L_18 = V_1;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_19);
		int32_t L_20 = L_19;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_18, L_20)));
		Type_t * L_21 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_18, L_20)));
		int32_t L_22 = Default_CompareCloserType_m11831(__this, L_17, L_21, /*hidden argument*/&Default_CompareCloserType_m11831_MethodInfo);
		V_4 = L_22;
		int32_t L_23 = V_4;
		if (!L_23)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_24 = V_2;
		if (!L_24)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_25 = V_2;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) == ((int32_t)L_26)))
		{
			goto IL_0062;
		}
	}
	{
		AmbiguousMatchException_t2003 * L_27 = (AmbiguousMatchException_t2003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t2003_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m11782(L_27, /*hidden argument*/&AmbiguousMatchException__ctor_m11782_MethodInfo);
		il2cpp_codegen_raise_exception(L_27);
	}

IL_0062:
	{
		int32_t L_28 = V_4;
		if (!L_28)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_29 = V_4;
		V_2 = L_29;
	}

IL_0069:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)((int32_t)L_30+(int32_t)1));
	}

IL_006d:
	{
		int32_t L_31 = V_3;
		ParameterInfoU5BU5D_t1170* L_32 = V_0;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)(((Array_t *)L_32)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_33 = V_2;
		if (!L_33)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_34 = V_2;
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		MethodBase_t1169 * L_35 = ___m2;
		G_B19_0 = L_35;
		goto IL_007e;
	}

IL_007d:
	{
		MethodBase_t1169 * L_36 = ___m1;
		G_B19_0 = L_36;
	}

IL_007e:
	{
		return G_B19_0;
	}

IL_007f:
	{
		MethodBase_t1169 * L_37 = ___m1;
		NullCheck(L_37);
		Type_t * L_38 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_37);
		V_5 = L_38;
		MethodBase_t1169 * L_39 = ___m2;
		NullCheck(L_39);
		Type_t * L_40 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_39);
		V_6 = L_40;
		Type_t * L_41 = V_5;
		Type_t * L_42 = V_6;
		if ((((Object_t*)(Type_t *)L_41) == ((Object_t*)(Type_t *)L_42)))
		{
			goto IL_00af;
		}
	}
	{
		Type_t * L_43 = V_5;
		Type_t * L_44 = V_6;
		NullCheck(L_43);
		bool L_45 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m10349_MethodInfo, L_43, L_44);
		if (!L_45)
		{
			goto IL_00a2;
		}
	}
	{
		MethodBase_t1169 * L_46 = ___m1;
		return L_46;
	}

IL_00a2:
	{
		Type_t * L_47 = V_6;
		Type_t * L_48 = V_5;
		NullCheck(L_47);
		bool L_49 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m10349_MethodInfo, L_47, L_48);
		if (!L_49)
		{
			goto IL_00af;
		}
	}
	{
		MethodBase_t1169 * L_50 = ___m2;
		return L_50;
	}

IL_00af:
	{
		MethodBase_t1169 * L_51 = ___m1;
		NullCheck(L_51);
		int32_t L_52 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m11873_MethodInfo, L_51);
		V_7 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_52&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		MethodBase_t1169 * L_53 = ___m2;
		NullCheck(L_53);
		int32_t L_54 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_CallingConvention_m11873_MethodInfo, L_53);
		V_8 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_54&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_55 = V_7;
		if (!L_55)
		{
			goto IL_00d9;
		}
	}
	{
		bool L_56 = V_8;
		if (L_56)
		{
			goto IL_00d9;
		}
	}
	{
		MethodBase_t1169 * L_57 = ___m2;
		return L_57;
	}

IL_00d9:
	{
		bool L_58 = V_8;
		if (!L_58)
		{
			goto IL_00e3;
		}
	}
	{
		bool L_59 = V_7;
		if (L_59)
		{
			goto IL_00e3;
		}
	}
	{
		MethodBase_t1169 * L_60 = ___m1;
		return L_60;
	}

IL_00e3:
	{
		AmbiguousMatchException_t2003 * L_61 = (AmbiguousMatchException_t2003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t2003_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m11782(L_61, /*hidden argument*/&AmbiguousMatchException__ctor_m11782_MethodInfo);
		il2cpp_codegen_raise_exception(L_61);
	}
}
// System.Int32 System.Reflection.Binder/Default::CompareCloserType(System.Type,System.Type)
extern MethodInfo* Array_IndexOf_TisType_t_m14030_MethodInfo_var;
extern "C" int32_t Default_CompareCloserType_m11831 (Default_t2009 * __this, Type_t * ___t1, Type_t * ___t2, MethodInfo* method)
{
	static bool Default_CompareCloserType_m11831_init;
	if (!Default_CompareCloserType_m11831_init)
	{
		Array_IndexOf_TisType_t_m14030_MethodInfo_var = il2cpp_codegen_genericmethod_get_method(&Array_IndexOf_TisType_t_m14030_GenericMethod);
		Default_CompareCloserType_m11831_init = true;
	}
	{
		Type_t * L_0 = ___t1;
		Type_t * L_1 = ___t2;
		if ((!(((Object_t*)(Type_t *)L_0) == ((Object_t*)(Type_t *)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		Type_t * L_2 = ___t1;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m10371_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Type_t * L_4 = ___t2;
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m10371_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_0018;
		}
	}
	{
		return 1;
	}

IL_0018:
	{
		Type_t * L_6 = ___t1;
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m10371_MethodInfo, L_6);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		Type_t * L_8 = ___t2;
		NullCheck(L_8);
		bool L_9 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericParameter_m10371_MethodInfo, L_8);
		if (!L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (-1);
	}

IL_002a:
	{
		Type_t * L_10 = ___t1;
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m10322_MethodInfo, L_10);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_12 = ___t2;
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m10322_MethodInfo, L_12);
		if (!L_13)
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_14 = ___t1;
		NullCheck(L_14);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_14);
		Type_t * L_16 = ___t2;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_16);
		int32_t L_18 = Default_CompareCloserType_m11831(__this, L_15, L_17, /*hidden argument*/&Default_CompareCloserType_m11831_MethodInfo);
		return L_18;
	}

IL_004d:
	{
		Type_t * L_19 = ___t1;
		Type_t * L_20 = ___t2;
		NullCheck(L_19);
		bool L_21 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m10349_MethodInfo, L_19, L_20);
		if (!L_21)
		{
			goto IL_0058;
		}
	}
	{
		return (-1);
	}

IL_0058:
	{
		Type_t * L_22 = ___t2;
		Type_t * L_23 = ___t1;
		NullCheck(L_22);
		bool L_24 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsSubclassOf_m10349_MethodInfo, L_22, L_23);
		if (!L_24)
		{
			goto IL_0063;
		}
	}
	{
		return 1;
	}

IL_0063:
	{
		Type_t * L_25 = ___t1;
		NullCheck(L_25);
		bool L_26 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m10330_MethodInfo, L_25);
		if (!L_26)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_27 = ___t2;
		NullCheck(L_27);
		TypeU5BU5D_t913* L_28 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&Type_GetInterfaces_m14027_MethodInfo, L_27);
		Type_t * L_29 = ___t1;
		int32_t L_30 = Array_IndexOf_TisType_t_m14030(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/Array_IndexOf_TisType_t_m14030_MethodInfo_var);
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		return 1;
	}

IL_007c:
	{
		Type_t * L_31 = ___t2;
		NullCheck(L_31);
		bool L_32 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsInterface_m10330_MethodInfo, L_31);
		if (!L_32)
		{
			goto IL_0095;
		}
	}
	{
		Type_t * L_33 = ___t1;
		NullCheck(L_33);
		TypeU5BU5D_t913* L_34 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&Type_GetInterfaces_m14027_MethodInfo, L_33);
		Type_t * L_35 = ___t2;
		int32_t L_36 = Array_IndexOf_TisType_t_m14030(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/Array_IndexOf_TisType_t_m14030_MethodInfo_var);
		if ((((int32_t)L_36) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return (-1);
	}

IL_0095:
	{
		return 0;
	}
}
// System.Reflection.PropertyInfo System.Reflection.Binder/Default::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern MethodInfo Default_SelectProperty_m11832_MethodInfo;
extern "C" PropertyInfo_t * Default_SelectProperty_m11832 (Default_t2009 * __this, int32_t ___bindingAttr, PropertyInfoU5BU5D_t2011* ___match, Type_t * ___returnType, TypeU5BU5D_t913* ___indexes, ParameterModifierU5BU5D_t1163* ___modifiers, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	PropertyInfo_t * V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PropertyInfo_t * V_7 = {0};
	ParameterInfoU5BU5D_t1170* V_8 = {0};
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B6_0 = 0;
	{
		PropertyInfoU5BU5D_t2011* L_0 = ___match;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		PropertyInfoU5BU5D_t2011* L_1 = ___match;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_t521 * L_2 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_2, (String_t*) &_stringLiteral1909, (String_t*) &_stringLiteral1420, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		Type_t * L_3 = ___returnType;
		V_0 = ((((int32_t)((((Object_t*)(Type_t *)L_3) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		TypeU5BU5D_t913* L_4 = ___indexes;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		TypeU5BU5D_t913* L_5 = ___indexes;
		NullCheck(L_5);
		G_B6_0 = (((int32_t)(((Array_t *)L_5)->max_length)));
		goto IL_002b;
	}

IL_002a:
	{
		G_B6_0 = (-1);
	}

IL_002b:
	{
		V_1 = G_B6_0;
		V_2 = (PropertyInfo_t *)NULL;
		V_4 = ((int32_t)2147483646);
		V_5 = ((int32_t)2147483647);
		V_6 = 0;
		PropertyInfoU5BU5D_t2011* L_6 = ___match;
		NullCheck(L_6);
		V_3 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))-(int32_t)1));
		goto IL_00d6;
	}

IL_004a:
	{
		PropertyInfoU5BU5D_t2011* L_7 = ___match;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		V_7 = (*(PropertyInfo_t **)(PropertyInfo_t **)SZArrayLdElema(L_7, L_9));
		PropertyInfo_t * L_10 = V_7;
		NullCheck(L_10);
		ParameterInfoU5BU5D_t1170* L_11 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&PropertyInfo_GetIndexParameters_m14028_MethodInfo, L_10);
		V_8 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_13 = V_1;
		ParameterInfoU5BU5D_t1170* L_14 = V_8;
		NullCheck(L_14);
		if ((((int32_t)L_13) == ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0068;
		}
	}
	{
		goto IL_00d2;
	}

IL_0068:
	{
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		PropertyInfo_t * L_16 = V_7;
		NullCheck(L_16);
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&PropertyInfo_get_PropertyType_m14029_MethodInfo, L_16);
		Type_t * L_18 = ___returnType;
		if ((((Object_t*)(Type_t *)L_17) == ((Object_t*)(Type_t *)L_18)))
		{
			goto IL_0077;
		}
	}
	{
		goto IL_00d2;
	}

IL_0077:
	{
		V_9 = ((int32_t)2147483646);
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		TypeU5BU5D_t913* L_20 = ___indexes;
		ParameterInfoU5BU5D_t1170* L_21 = V_8;
		int32_t L_22 = Default_check_arguments_with_score_m11833(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/&Default_check_arguments_with_score_m11833_MethodInfo);
		V_9 = L_22;
		int32_t L_23 = V_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)(-1)))))
		{
			goto IL_0094;
		}
	}
	{
		goto IL_00d2;
	}

IL_0094:
	{
		PropertyInfo_t * L_24 = V_7;
		NullCheck(L_24);
		Type_t * L_25 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_24);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		int32_t L_26 = Binder_GetDerivedLevel_m11839(NULL /*static, unused*/, L_25, /*hidden argument*/&Binder_GetDerivedLevel_m11839_MethodInfo);
		V_10 = L_26;
		PropertyInfo_t * L_27 = V_2;
		if (!L_27)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_9;
		if ((((int32_t)L_28) >= ((int32_t)L_29)))
		{
			goto IL_00ad;
		}
	}
	{
		goto IL_00d2;
	}

IL_00ad:
	{
		int32_t L_30 = V_4;
		int32_t L_31 = V_9;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_32 = V_6;
		int32_t L_33 = V_10;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_34 = V_9;
		V_5 = L_34;
		goto IL_00d2;
	}

IL_00bf:
	{
		int32_t L_35 = V_6;
		int32_t L_36 = V_10;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_00c7;
		}
	}
	{
		goto IL_00d2;
	}

IL_00c7:
	{
		PropertyInfo_t * L_37 = V_7;
		V_2 = L_37;
		int32_t L_38 = V_9;
		V_4 = L_38;
		int32_t L_39 = V_10;
		V_6 = L_39;
	}

IL_00d2:
	{
		int32_t L_40 = V_3;
		V_3 = ((int32_t)((int32_t)L_40-(int32_t)1));
	}

IL_00d6:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_42 = V_5;
		int32_t L_43 = V_4;
		if ((((int32_t)L_42) > ((int32_t)L_43)))
		{
			goto IL_00e9;
		}
	}
	{
		AmbiguousMatchException_t2003 * L_44 = (AmbiguousMatchException_t2003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t2003_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m11782(L_44, /*hidden argument*/&AmbiguousMatchException__ctor_m11782_MethodInfo);
		il2cpp_codegen_raise_exception(L_44);
	}

IL_00e9:
	{
		PropertyInfo_t * L_45 = V_2;
		return L_45;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_arguments_with_score(System.Type[],System.Reflection.ParameterInfo[])
extern "C" int32_t Default_check_arguments_with_score_m11833 (Object_t * __this /* static, unused */, TypeU5BU5D_t913* ___types, ParameterInfoU5BU5D_t1170* ___args, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		TypeU5BU5D_t913* L_0 = ___types;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		ParameterInfoU5BU5D_t1170* L_3 = ___args;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_3, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_3, L_5)));
		int32_t L_7 = Default_check_type_with_score_m11834(NULL /*static, unused*/, (*(Type_t **)(Type_t **)SZArrayLdElema(L_0, L_2)), L_6, /*hidden argument*/&Default_check_type_with_score_m11834_MethodInfo);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		return (-1);
	}

IL_001d:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)L_10)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_11 = V_2;
		V_0 = L_11;
	}

IL_0023:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0027:
	{
		int32_t L_13 = V_1;
		TypeU5BU5D_t913* L_14 = ___types;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)(((Array_t *)L_14)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 System.Reflection.Binder/Default::check_type_with_score(System.Type,System.Type)
extern "C" int32_t Default_check_type_with_score_m11834 (Object_t * __this /* static, unused */, Type_t * ___from, Type_t * ___to, MethodInfo* method)
{
	int32_t V_0 = {0};
	int32_t V_1 = {0};
	int32_t V_2 = {0};
	int32_t V_3 = {0};
	int32_t G_B4_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B63_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B76_0 = 0;
	int32_t G_B80_0 = 0;
	{
		Type_t * L_0 = ___from;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		Type_t * L_1 = ___to;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsValueType_m10335_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_000f;
	}

IL_000e:
	{
		G_B4_0 = 0;
	}

IL_000f:
	{
		return G_B4_0;
	}

IL_0010:
	{
		Type_t * L_3 = ___from;
		Type_t * L_4 = ___to;
		if ((!(((Object_t*)(Type_t *)L_3) == ((Object_t*)(Type_t *)L_4))))
		{
			goto IL_0016;
		}
	}
	{
		return 0;
	}

IL_0016:
	{
		Type_t * L_5 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_6 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Object_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_5) == ((Object_t*)(Type_t *)L_6))))
		{
			goto IL_0025;
		}
	}
	{
		return 4;
	}

IL_0025:
	{
		Type_t * L_7 = ___from;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		int32_t L_8 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_7, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		V_0 = L_8;
		Type_t * L_9 = ___to;
		int32_t L_10 = Type_GetTypeCode_m8433(NULL /*static, unused*/, L_9, /*hidden argument*/&Type_GetTypeCode_m8433_MethodInfo);
		V_1 = L_10;
		int32_t L_11 = V_0;
		V_2 = L_11;
		int32_t L_12 = V_2;
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 0)
		{
			goto IL_006a;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 1)
		{
			goto IL_00ec;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 2)
		{
			goto IL_0098;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 3)
		{
			goto IL_0175;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 4)
		{
			goto IL_0134;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 5)
		{
			goto IL_01ef;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 6)
		{
			goto IL_01b6;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 7)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 8)
		{
			goto IL_0228;
		}
		if (((int32_t)((int32_t)L_12-(int32_t)4)) == 9)
		{
			goto IL_0252;
		}
	}
	{
		goto IL_025c;
	}

IL_006a:
	{
		int32_t L_13 = V_1;
		V_3 = L_13;
		int32_t L_14 = V_3;
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 0)
		{
			goto IL_0092;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 1)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 2)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 3)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 4)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 5)
		{
			goto IL_0094;
		}
		if (((int32_t)((int32_t)L_14-(int32_t)8)) == 6)
		{
			goto IL_0094;
		}
	}
	{
		goto IL_0096;
	}

IL_0092:
	{
		return 0;
	}

IL_0094:
	{
		return 2;
	}

IL_0096:
	{
		return (-1);
	}

IL_0098:
	{
		int32_t L_15 = V_1;
		V_3 = L_15;
		int32_t L_16 = V_3;
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 0)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 1)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 2)
		{
			goto IL_00d2;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 3)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 4)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 5)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 6)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 7)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 8)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 9)
		{
			goto IL_00d0;
		}
		if (((int32_t)((int32_t)L_16-(int32_t)4)) == 10)
		{
			goto IL_00d0;
		}
	}
	{
		goto IL_00d2;
	}

IL_00d0:
	{
		return 2;
	}

IL_00d2:
	{
		Type_t * L_17 = ___from;
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_17);
		if (!L_18)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_19 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_20 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_20))))
		{
			goto IL_00ea;
		}
	}
	{
		G_B23_0 = 1;
		goto IL_00eb;
	}

IL_00ea:
	{
		G_B23_0 = (-1);
	}

IL_00eb:
	{
		return G_B23_0;
	}

IL_00ec:
	{
		int32_t L_21 = V_1;
		V_3 = L_21;
		int32_t L_22 = V_3;
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 0)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 1)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 2)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 3)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 4)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 5)
		{
			goto IL_011a;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 6)
		{
			goto IL_0118;
		}
		if (((int32_t)((int32_t)L_22-(int32_t)7)) == 7)
		{
			goto IL_0118;
		}
	}
	{
		goto IL_011a;
	}

IL_0118:
	{
		return 2;
	}

IL_011a:
	{
		Type_t * L_23 = ___from;
		NullCheck(L_23);
		bool L_24 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_23);
		if (!L_24)
		{
			goto IL_0132;
		}
	}
	{
		Type_t * L_25 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_26 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_25) == ((Object_t*)(Type_t *)L_26))))
		{
			goto IL_0132;
		}
	}
	{
		G_B31_0 = 1;
		goto IL_0133;
	}

IL_0132:
	{
		G_B31_0 = (-1);
	}

IL_0133:
	{
		return G_B31_0;
	}

IL_0134:
	{
		int32_t L_27 = V_1;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_28-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_0159;
		}
	}
	{
		goto IL_015b;
	}

IL_0159:
	{
		return 2;
	}

IL_015b:
	{
		Type_t * L_29 = ___from;
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_29);
		if (!L_30)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_31 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_32 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32))))
		{
			goto IL_0173;
		}
	}
	{
		G_B39_0 = 1;
		goto IL_0174;
	}

IL_0173:
	{
		G_B39_0 = (-1);
	}

IL_0174:
	{
		return G_B39_0;
	}

IL_0175:
	{
		int32_t L_33 = V_1;
		V_3 = L_33;
		int32_t L_34 = V_3;
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 0)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 1)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 2)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 3)
		{
			goto IL_019c;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 4)
		{
			goto IL_019a;
		}
		if (((int32_t)((int32_t)L_34-(int32_t)((int32_t)9))) == 5)
		{
			goto IL_019a;
		}
	}
	{
		goto IL_019c;
	}

IL_019a:
	{
		return 2;
	}

IL_019c:
	{
		Type_t * L_35 = ___from;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_35);
		if (!L_36)
		{
			goto IL_01b4;
		}
	}
	{
		Type_t * L_37 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_38 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_37) == ((Object_t*)(Type_t *)L_38))))
		{
			goto IL_01b4;
		}
	}
	{
		G_B47_0 = 1;
		goto IL_01b5;
	}

IL_01b4:
	{
		G_B47_0 = (-1);
	}

IL_01b5:
	{
		return G_B47_0;
	}

IL_01b6:
	{
		int32_t L_39 = V_1;
		V_3 = L_39;
		int32_t L_40 = V_3;
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_01d3;
		}
		if (((int32_t)((int32_t)L_40-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_01d3;
		}
	}
	{
		goto IL_01d5;
	}

IL_01d3:
	{
		return 2;
	}

IL_01d5:
	{
		Type_t * L_41 = ___from;
		NullCheck(L_41);
		bool L_42 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_41);
		if (!L_42)
		{
			goto IL_01ed;
		}
	}
	{
		Type_t * L_43 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_44 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_43) == ((Object_t*)(Type_t *)L_44))))
		{
			goto IL_01ed;
		}
	}
	{
		G_B55_0 = 1;
		goto IL_01ee;
	}

IL_01ed:
	{
		G_B55_0 = (-1);
	}

IL_01ee:
	{
		return G_B55_0;
	}

IL_01ef:
	{
		int32_t L_45 = V_1;
		V_3 = L_45;
		int32_t L_46 = V_3;
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_020e;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_020c;
		}
		if (((int32_t)((int32_t)L_46-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_020c;
		}
	}
	{
		goto IL_020e;
	}

IL_020c:
	{
		return 2;
	}

IL_020e:
	{
		Type_t * L_47 = ___from;
		NullCheck(L_47);
		bool L_48 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_47);
		if (!L_48)
		{
			goto IL_0226;
		}
	}
	{
		Type_t * L_49 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_50 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_49) == ((Object_t*)(Type_t *)L_50))))
		{
			goto IL_0226;
		}
	}
	{
		G_B63_0 = 1;
		goto IL_0227;
	}

IL_0226:
	{
		G_B63_0 = (-1);
	}

IL_0227:
	{
		return G_B63_0;
	}

IL_0228:
	{
		int32_t L_51 = V_1;
		V_3 = L_51;
		int32_t L_52 = V_3;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)13))))
		{
			goto IL_0236;
		}
	}
	{
		int32_t L_53 = V_3;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)14))))
		{
			goto IL_0236;
		}
	}
	{
		goto IL_0238;
	}

IL_0236:
	{
		return 2;
	}

IL_0238:
	{
		Type_t * L_54 = ___from;
		NullCheck(L_54);
		bool L_55 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsEnum_m10328_MethodInfo, L_54);
		if (!L_55)
		{
			goto IL_0250;
		}
	}
	{
		Type_t * L_56 = ___to;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_57 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Enum_t207_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((!(((Object_t*)(Type_t *)L_56) == ((Object_t*)(Type_t *)L_57))))
		{
			goto IL_0250;
		}
	}
	{
		G_B72_0 = 1;
		goto IL_0251;
	}

IL_0250:
	{
		G_B72_0 = (-1);
	}

IL_0251:
	{
		return G_B72_0;
	}

IL_0252:
	{
		int32_t L_58 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_025a;
		}
	}
	{
		G_B76_0 = 2;
		goto IL_025b;
	}

IL_025a:
	{
		G_B76_0 = (-1);
	}

IL_025b:
	{
		return G_B76_0;
	}

IL_025c:
	{
		Type_t * L_59 = ___to;
		Type_t * L_60 = ___from;
		NullCheck(L_59);
		bool L_61 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(&Type_IsAssignableFrom_m6867_MethodInfo, L_59, L_60);
		if (!L_61)
		{
			goto IL_0268;
		}
	}
	{
		G_B80_0 = 3;
		goto IL_0269;
	}

IL_0268:
	{
		G_B80_0 = (-1);
	}

IL_0269:
	{
		return G_B80_0;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountException.h"
extern TypeInfo TargetParameterCountException_t2034_il2cpp_TypeInfo;
// System.Reflection.TargetParameterCountException
#include "mscorlib_System_Reflection_TargetParameterCountExceptionMethodDeclarations.h"
extern MethodInfo TargetParameterCountException__ctor_m12050_MethodInfo;
extern MethodInfo Binder_ChangeType_m14032_MethodInfo;
extern MethodInfo Type_get_BaseType_m6909_MethodInfo;


// System.Void System.Reflection.Binder::.ctor()
extern "C" void Binder__ctor_m11835 (Binder_t1162 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Binder::.cctor()
extern MethodInfo Binder__cctor_m11836_MethodInfo;
extern "C" void Binder__cctor_m11836 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Default_t2009 * L_0 = (Default_t2009 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Default_t2009_il2cpp_TypeInfo));
		Default__ctor_m11820(L_0, /*hidden argument*/&Default__ctor_m11820_MethodInfo);
		((Binder_t1162_StaticFields*)InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo)->static_fields)->___default_binder_0 = L_0;
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C" Binder_t1162 * Binder_get_DefaultBinder_m11837 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		Binder_t1162 * L_0 = ((Binder_t1162_StaticFields*)InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo)->static_fields)->___default_binder_0;
		return L_0;
	}
}
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern MethodInfo Binder_ConvertArgs_m11838_MethodInfo;
extern "C" bool Binder_ConvertArgs_m11838 (Object_t * __this /* static, unused */, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___args, ParameterInfoU5BU5D_t1170* ___pinfo, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	{
		ObjectU5BU5D_t164* L_0 = ___args;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_1 = ___pinfo;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_000a;
		}
	}
	{
		return 1;
	}

IL_000a:
	{
		TargetParameterCountException_t2034 * L_2 = (TargetParameterCountException_t2034 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t2034_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m12050(L_2, /*hidden argument*/&TargetParameterCountException__ctor_m12050_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0010:
	{
		ParameterInfoU5BU5D_t1170* L_3 = ___pinfo;
		NullCheck(L_3);
		ObjectU5BU5D_t164* L_4 = ___args;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_4)->max_length))))))
		{
			goto IL_001e;
		}
	}
	{
		TargetParameterCountException_t2034 * L_5 = (TargetParameterCountException_t2034 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t2034_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m12050(L_5, /*hidden argument*/&TargetParameterCountException__ctor_m12050_MethodInfo);
		il2cpp_codegen_raise_exception(L_5);
	}

IL_001e:
	{
		V_0 = 0;
		goto IL_0047;
	}

IL_0022:
	{
		Binder_t1162 * L_6 = ___binder;
		ObjectU5BU5D_t164* L_7 = ___args;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		ParameterInfoU5BU5D_t1170* L_10 = ___pinfo;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_10, L_12)));
		Type_t * L_13 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_10, L_12)));
		CultureInfo_t1165 * L_14 = ___culture;
		NullCheck(L_6);
		Object_t * L_15 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t1165 * >::Invoke(&Binder_ChangeType_m14032_MethodInfo, L_6, (*(Object_t **)(Object_t **)SZArrayLdElema(L_7, L_9)), L_13, L_14);
		V_1 = L_15;
		Object_t * L_16 = V_1;
		if (L_16)
		{
			goto IL_003f;
		}
	}
	{
		ObjectU5BU5D_t164* L_17 = ___args;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		if (!(*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)))
		{
			goto IL_003f;
		}
	}
	{
		return 0;
	}

IL_003f:
	{
		ObjectU5BU5D_t164* L_20 = ___args;
		int32_t L_21 = V_0;
		Object_t * L_22 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		ArrayElementTypeCheck (L_20, L_22);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, L_21)) = (Object_t *)L_22;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0047:
	{
		int32_t L_24 = V_0;
		ObjectU5BU5D_t164* L_25 = ___args;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C" int32_t Binder_GetDerivedLevel_m11839 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	Type_t * V_0 = {0};
	int32_t V_1 = 0;
	{
		Type_t * L_0 = ___type;
		V_0 = L_0;
		V_1 = 1;
		goto IL_0011;
	}

IL_0006:
	{
		int32_t L_1 = V_1;
		V_1 = ((int32_t)((int32_t)L_1+(int32_t)1));
		Type_t * L_2 = V_0;
		NullCheck(L_2);
		Type_t * L_3 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_2);
		V_0 = L_3;
	}

IL_0011:
	{
		Type_t * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_get_BaseType_m6909_MethodInfo, L_4);
		if (L_5)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C" MethodBase_t1169 * Binder_FindMostDerivedMatch_m11840 (Object_t * __this /* static, unused */, MethodBaseU5BU5D_t2010* ___match, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	MethodBase_t1169 * V_4 = {0};
	int32_t V_5 = 0;
	ParameterInfoU5BU5D_t1170* V_6 = {0};
	ParameterInfoU5BU5D_t1170* V_7 = {0};
	bool V_8 = false;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = (-1);
		MethodBaseU5BU5D_t2010* L_0 = ___match;
		NullCheck(L_0);
		V_2 = (((int32_t)(((Array_t *)L_0)->max_length)));
		V_3 = 0;
		goto IL_009c;
	}

IL_000f:
	{
		MethodBaseU5BU5D_t2010* L_1 = ___match;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		V_4 = (*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_1, L_3));
		MethodBase_t1169 * L_4 = V_4;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		int32_t L_6 = Binder_GetDerivedLevel_m11839(NULL /*static, unused*/, L_5, /*hidden argument*/&Binder_GetDerivedLevel_m11839_MethodInfo);
		V_5 = L_6;
		int32_t L_7 = V_5;
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_002d;
		}
	}
	{
		AmbiguousMatchException_t2003 * L_9 = (AmbiguousMatchException_t2003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t2003_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m11782(L_9, /*hidden argument*/&AmbiguousMatchException__ctor_m11782_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_002d:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		MethodBase_t1169 * L_11 = V_4;
		NullCheck(L_11);
		ParameterInfoU5BU5D_t1170* L_12 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_11);
		V_6 = L_12;
		MethodBaseU5BU5D_t2010* L_13 = ___match;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		int32_t L_15 = L_14;
		NullCheck((*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_13, L_15)));
		ParameterInfoU5BU5D_t1170* L_16 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, (*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_13, L_15)));
		V_7 = L_16;
		V_8 = 1;
		ParameterInfoU5BU5D_t1170* L_17 = V_6;
		NullCheck(L_17);
		ParameterInfoU5BU5D_t1170* L_18 = V_7;
		NullCheck(L_18);
		if ((((int32_t)(((int32_t)(((Array_t *)L_17)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_18)->max_length))))))
		{
			goto IL_0056;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0056:
	{
		V_9 = 0;
		goto IL_007c;
	}

IL_005b:
	{
		ParameterInfoU5BU5D_t1170* L_19 = V_6;
		int32_t L_20 = V_9;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_19, L_21)));
		Type_t * L_22 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_19, L_21)));
		ParameterInfoU5BU5D_t1170* L_23 = V_7;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_23, L_25)));
		Type_t * L_26 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_23, L_25)));
		if ((((Object_t*)(Type_t *)L_22) == ((Object_t*)(Type_t *)L_26)))
		{
			goto IL_0076;
		}
	}
	{
		V_8 = 0;
		goto IL_0084;
	}

IL_0076:
	{
		int32_t L_27 = V_9;
		V_9 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_28 = V_9;
		ParameterInfoU5BU5D_t1170* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)(((Array_t *)L_29)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0084:
	{
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_008e;
		}
	}
	{
		AmbiguousMatchException_t2003 * L_31 = (AmbiguousMatchException_t2003 *)il2cpp_codegen_object_new (InitializedTypeInfo(&AmbiguousMatchException_t2003_il2cpp_TypeInfo));
		AmbiguousMatchException__ctor_m11782(L_31, /*hidden argument*/&AmbiguousMatchException__ctor_m11782_MethodInfo);
		il2cpp_codegen_raise_exception(L_31);
	}

IL_008e:
	{
		int32_t L_32 = V_5;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_34 = V_5;
		V_0 = L_34;
		int32_t L_35 = V_3;
		V_1 = L_35;
	}

IL_0098:
	{
		int32_t L_36 = V_3;
		V_3 = ((int32_t)((int32_t)L_36+(int32_t)1));
	}

IL_009c:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_000f;
		}
	}
	{
		MethodBaseU5BU5D_t2010* L_39 = ___match;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, L_40);
		int32_t L_41 = L_40;
		return (*(MethodBase_t1169 **)(MethodBase_t1169 **)SZArrayLdElema(L_39, L_41));
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlagsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventionsMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
extern MethodInfo MethodBase__ctor_m11868_MethodInfo;
extern MethodInfo ConstructorInfo_Invoke_m14033_MethodInfo;


// System.Void System.Reflection.ConstructorInfo::.ctor()
extern MethodInfo ConstructorInfo__ctor_m11841_MethodInfo;
extern "C" void ConstructorInfo__ctor_m11841 (ConstructorInfo_t1177 * __this, MethodInfo* method)
{
	{
		MethodBase__ctor_m11868(__this, /*hidden argument*/&MethodBase__ctor_m11868_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ConstructorInfo::.cctor()
extern MethodInfo ConstructorInfo__cctor_m11842_MethodInfo;
extern "C" void ConstructorInfo__cctor_m11842 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		((ConstructorInfo_t1177_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo)->static_fields)->___ConstructorName_0 = (String_t*) &_stringLiteral1910;
		((ConstructorInfo_t1177_StaticFields*)InitializedTypeInfo(&ConstructorInfo_t1177_il2cpp_TypeInfo)->static_fields)->___TypeConstructorName_1 = (String_t*) &_stringLiteral1911;
		return;
	}
}
// System.Reflection.MemberTypes System.Reflection.ConstructorInfo::get_MemberType()
extern MethodInfo ConstructorInfo_get_MemberType_m11843_MethodInfo;
extern "C" int32_t ConstructorInfo_get_MemberType_m11843 (ConstructorInfo_t1177 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
extern MethodInfo ConstructorInfo_Invoke_m6963_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" Object_t * ConstructorInfo_Invoke_m6963 (ConstructorInfo_t1177 * __this, ObjectU5BU5D_t164* ___parameters, MethodInfo* method)
{
	static bool ConstructorInfo_Invoke_m6963_init;
	if (!ConstructorInfo_Invoke_m6963_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		ConstructorInfo_Invoke_m6963_init = true;
	}
	{
		ObjectU5BU5D_t164* L_0 = ___parameters;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		___parameters = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 0));
	}

IL_000d:
	{
		ObjectU5BU5D_t164* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker4< Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&ConstructorInfo_Invoke_m14033_MethodInfo, __this, ((int32_t)512), (Binder_t1162 *)NULL, L_1, (CultureInfo_t1165 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EventAttributes_t2013_il2cpp_TypeInfo;
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributesMethodDeclarations.h"



// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo AddEventAdapter_t2014_il2cpp_TypeInfo;
// System.Reflection.EventInfo/AddEventAdapter
#include "mscorlib_System_Reflection_EventInfo_AddEventAdapterMethodDeclarations.h"

// System.Delegate
#include "mscorlib_System_Delegate.h"


// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo AddEventAdapter__ctor_m11844_MethodInfo;
extern "C" void AddEventAdapter__ctor_m11844 (AddEventAdapter_t2014 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
extern MethodInfo AddEventAdapter_Invoke_m11845_MethodInfo;
extern "C" void AddEventAdapter_Invoke_m11845 (AddEventAdapter_t2014 * __this, Object_t * ____this, Delegate_t148 * ___dele, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		AddEventAdapter_Invoke_m11845((AddEventAdapter_t2014 *)__this->___prev_9,____this, ___dele, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, Delegate_t148 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Object_t * ____this, Delegate_t148 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, Delegate_t148 * ___dele, MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(____this, ___dele,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_AddEventAdapter_t2014(Il2CppObject* delegate, Object_t * ____this, Delegate_t148 * ___dele)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
extern MethodInfo AddEventAdapter_BeginInvoke_m11846_MethodInfo;
extern "C" Object_t * AddEventAdapter_BeginInvoke_m11846 (AddEventAdapter_t2014 * __this, Object_t * ____this, Delegate_t148 * ___dele, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ____this;
	__d_args[1] = ___dele;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo AddEventAdapter_EndInvoke_m11847_MethodInfo;
extern "C" void AddEventAdapter_EndInvoke_m11847 (AddEventAdapter_t2014 * __this, Object_t * ___result, MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.EventInfo
#include "mscorlib_System_Reflection_EventInfoMethodDeclarations.h"

extern MethodInfo EventInfo_GetAddMethod_m14034_MethodInfo;
extern MethodInfo MemberInfo__ctor_m10374_MethodInfo;


// System.Void System.Reflection.EventInfo::.ctor()
extern MethodInfo EventInfo__ctor_m11848_MethodInfo;
extern "C" void EventInfo__ctor_m11848 (EventInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m10374(__this, /*hidden argument*/&MemberInfo__ctor_m10374_MethodInfo);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes()
// System.Type System.Reflection.EventInfo::get_EventHandlerType()
extern MethodInfo EventInfo_get_EventHandlerType_m11849_MethodInfo;
extern "C" Type_t * EventInfo_get_EventHandlerType_m11849 (EventInfo_t * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	MethodInfo_t * V_1 = {0};
	Type_t * V_2 = {0};
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&EventInfo_GetAddMethod_m14034_MethodInfo, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		NullCheck(L_1);
		ParameterInfoU5BU5D_t1170* L_2 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_1);
		V_0 = L_2;
		ParameterInfoU5BU5D_t1170* L_3 = V_0;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)(((Array_t *)L_3)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_4 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_4, L_5)));
		Type_t * L_6 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_4, L_5)));
		V_2 = L_6;
		Type_t * L_7 = V_2;
		return L_7;
	}

IL_0020:
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MemberTypes System.Reflection.EventInfo::get_MemberType()
extern MethodInfo EventInfo_get_MemberType_m11850_MethodInfo;
extern "C" int32_t EventInfo_get_MemberType_m11850 (EventInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Reflection.MethodInfo System.Reflection.EventInfo::GetAddMethod(System.Boolean)
#ifndef _MSC_VER
#else
#endif
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"
extern TypeInfo IntPtr_t_il2cpp_TypeInfo;
extern TypeInfo SystemException_t1495_il2cpp_TypeInfo;
extern TypeInfo NonSerializedAttribute_t2316_il2cpp_TypeInfo;
extern TypeInfo FieldOffsetAttribute_t1825_il2cpp_TypeInfo;
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandleMethodDeclarations.h"
// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttributeMethodDeclarations.h"
extern MethodInfo FieldInfo_GetUnmanagedMarshal_m11860_MethodInfo;
extern MethodInfo FieldInfo_SetValue_m14035_MethodInfo;
extern MethodInfo RuntimeFieldHandle_get_Value_m10379_MethodInfo;
extern MethodInfo IntPtr_op_Equality_m4790_MethodInfo;
extern MethodInfo FieldInfo_internal_from_handle_type_m11857_MethodInfo;
extern MethodInfo FieldInfo_get_IsNotSerialized_m11855_MethodInfo;
extern MethodInfo Type_get_IsExplicitLayout_m10329_MethodInfo;
extern MethodInfo FieldInfo_get_UMarshal_m11861_MethodInfo;
extern MethodInfo NonSerializedAttribute__ctor_m13702_MethodInfo;
extern MethodInfo FieldInfo_GetFieldOffset_m11859_MethodInfo;
extern MethodInfo FieldOffsetAttribute__ctor_m10397_MethodInfo;


// System.Void System.Reflection.FieldInfo::.ctor()
extern MethodInfo FieldInfo__ctor_m11851_MethodInfo;
extern "C" void FieldInfo__ctor_m11851 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m10374(__this, /*hidden argument*/&MemberInfo__ctor_m10374_MethodInfo);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes()
// System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle()
// System.Type System.Reflection.FieldInfo::get_FieldType()
// System.Object System.Reflection.FieldInfo::GetValue(System.Object)
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern MethodInfo FieldInfo_get_MemberType_m11852_MethodInfo;
extern "C" int32_t FieldInfo_get_MemberType_m11852 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern MethodInfo FieldInfo_get_IsLiteral_m11853_MethodInfo;
extern "C" bool FieldInfo_get_IsLiteral_m11853 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m13990_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern MethodInfo FieldInfo_get_IsStatic_m11854_MethodInfo;
extern "C" bool FieldInfo_get_IsStatic_m11854 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m13990_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C" bool FieldInfo_get_IsNotSerialized_m11855 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_get_Attributes_m13990_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)((int32_t)128)))? 1 : 0);
	}
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern MethodInfo FieldInfo_SetValue_m11856_MethodInfo;
extern "C" void FieldInfo_SetValue_m11856 (FieldInfo_t * __this, Object_t * ___obj, Object_t * ___value, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		VirtActionInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, CultureInfo_t1165 * >::Invoke(&FieldInfo_SetValue_m14035_MethodInfo, __this, L_0, L_1, 0, (Binder_t1162 *)NULL, (CultureInfo_t1165 *)NULL);
		return;
	}
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C" FieldInfo_t * FieldInfo_internal_from_handle_type_m11857 (Object_t * __this /* static, unused */, IntPtr_t ___field_handle, IntPtr_t ___type_handle, MethodInfo* method)
{
	typedef FieldInfo_t * (*FieldInfo_internal_from_handle_type_m11857_ftn) (IntPtr_t, IntPtr_t);
	static FieldInfo_internal_from_handle_type_m11857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_internal_from_handle_type_m11857_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___field_handle, ___type_handle);
}
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern MethodInfo FieldInfo_GetFieldFromHandle_m11858_MethodInfo;
extern "C" FieldInfo_t * FieldInfo_GetFieldFromHandle_m11858 (Object_t * __this /* static, unused */, RuntimeFieldHandle_t1817  ___handle, MethodInfo* method)
{
	{
		IntPtr_t L_0 = RuntimeFieldHandle_get_Value_m10379((&___handle), /*hidden argument*/&RuntimeFieldHandle_get_Value_m10379_MethodInfo);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m4790(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&IntPtr_op_Equality_m4790_MethodInfo);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t521 * L_3 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_3, (String_t*) &_stringLiteral1912, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_001e:
	{
		IntPtr_t L_4 = RuntimeFieldHandle_get_Value_m10379((&___handle), /*hidden argument*/&RuntimeFieldHandle_get_Value_m10379_MethodInfo);
		IntPtr_t L_5 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		FieldInfo_t * L_6 = FieldInfo_internal_from_handle_type_m11857(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&FieldInfo_internal_from_handle_type_m11857_MethodInfo);
		return L_6;
	}
}
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern "C" int32_t FieldInfo_GetFieldOffset_m11859 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		SystemException_t1495 * L_0 = (SystemException_t1495 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SystemException_t1495_il2cpp_TypeInfo));
		SystemException__ctor_m8177(L_0, (String_t*) &_stringLiteral1913, /*hidden argument*/&SystemException__ctor_m8177_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C" UnmanagedMarshal_t1993 * FieldInfo_GetUnmanagedMarshal_m11860 (FieldInfo_t * __this, MethodInfo* method)
{
	typedef UnmanagedMarshal_t1993 * (*FieldInfo_GetUnmanagedMarshal_m11860_ftn) (FieldInfo_t *);
	static FieldInfo_GetUnmanagedMarshal_m11860_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (FieldInfo_GetUnmanagedMarshal_m11860_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.FieldInfo::GetUnmanagedMarshal()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C" UnmanagedMarshal_t1993 * FieldInfo_get_UMarshal_m11861 (FieldInfo_t * __this, MethodInfo* method)
{
	{
		UnmanagedMarshal_t1993 * L_0 = FieldInfo_GetUnmanagedMarshal_m11860(__this, /*hidden argument*/&FieldInfo_GetUnmanagedMarshal_m11860_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern MethodInfo FieldInfo_GetPseudoCustomAttributes_m11862_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t164* FieldInfo_GetPseudoCustomAttributes_m11862 (FieldInfo_t * __this, MethodInfo* method)
{
	static bool FieldInfo_GetPseudoCustomAttributes_m11862_init;
	if (!FieldInfo_GetPseudoCustomAttributes_m11862_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		FieldInfo_GetPseudoCustomAttributes_m11862_init = true;
	}
	int32_t V_0 = 0;
	UnmanagedMarshal_t1993 * V_1 = {0};
	ObjectU5BU5D_t164* V_2 = {0};
	{
		V_0 = 0;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsNotSerialized_m11855_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, __this);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsExplicitLayout_m10329_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_001f:
	{
		UnmanagedMarshal_t1993 * L_5 = (UnmanagedMarshal_t1993 *)VirtFuncInvoker0< UnmanagedMarshal_t1993 * >::Invoke(&FieldInfo_get_UMarshal_m11861_MethodInfo, __this);
		V_1 = L_5;
		UnmanagedMarshal_t1993 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0032;
		}
	}
	{
		return (ObjectU5BU5D_t164*)NULL;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_2 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsNotSerialized_m11855_MethodInfo, __this);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		ObjectU5BU5D_t164* L_11 = V_2;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		NonSerializedAttribute_t2316 * L_14 = (NonSerializedAttribute_t2316 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NonSerializedAttribute_t2316_il2cpp_TypeInfo));
		NonSerializedAttribute__ctor_m13702(L_14, /*hidden argument*/&NonSerializedAttribute__ctor_m13702_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_004f:
	{
		Type_t * L_15 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, __this);
		NullCheck(L_15);
		bool L_16 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsExplicitLayout_m10329_MethodInfo, L_15);
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_t164* L_17 = V_2;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		V_0 = ((int32_t)((int32_t)L_19+(int32_t)1));
		int32_t L_20 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&FieldInfo_GetFieldOffset_m11859_MethodInfo, __this);
		FieldOffsetAttribute_t1825 * L_21 = (FieldOffsetAttribute_t1825 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FieldOffsetAttribute_t1825_il2cpp_TypeInfo));
		FieldOffsetAttribute__ctor_m10397(L_21, L_20, /*hidden argument*/&FieldOffsetAttribute__ctor_m10397_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_19);
		ArrayElementTypeCheck (L_17, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)) = (Object_t *)L_21;
	}

IL_006e:
	{
		UnmanagedMarshal_t1993 * L_22 = V_1;
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		ObjectU5BU5D_t164* L_23 = V_2;
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		V_0 = ((int32_t)((int32_t)L_25+(int32_t)1));
		UnmanagedMarshal_t1993 * L_26 = V_1;
		NullCheck(L_26);
		MarshalAsAttribute_t1820 * L_27 = UnmanagedMarshal_ToMarshalAsAttribute_m11781(L_26, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m11781_MethodInfo);
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_25);
		ArrayElementTypeCheck (L_23, L_27);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_23, L_25)) = (Object_t *)L_27;
	}

IL_007e:
	{
		ObjectU5BU5D_t164* L_28 = V_2;
		return L_28;
	}
}
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolder.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MemberInfoSerializationHolder_t2016_il2cpp_TypeInfo;
// System.Reflection.MemberInfoSerializationHolder
#include "mscorlib_System_Reflection_MemberInfoSerializationHolderMethodDeclarations.h"

// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationException.h"
extern TypeInfo SerializationException_t1473_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t1564_il2cpp_TypeInfo;
// System.Runtime.Serialization.SerializationException
#include "mscorlib_System_Runtime_Serialization_SerializationExceptionMethodDeclarations.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfoMethodDeclarations.h"
extern Il2CppType MemberInfoSerializationHolder_t2016_0_0_0;
extern Il2CppType String_t_0_0_0;
extern MethodInfo MemberInfoSerializationHolder_Serialize_m11865_MethodInfo;
extern MethodInfo SerializationInfo_SetType_m12472_MethodInfo;
extern MethodInfo Type_get_Module_m13996_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8000_MethodInfo;
extern MethodInfo Type_get_FullName_m6981_MethodInfo;
extern MethodInfo String_Equals_m4751_MethodInfo;
extern MethodInfo SerializationException__ctor_m8004_MethodInfo;
extern MethodInfo MethodInfo_get_IsGenericMethod_m11884_MethodInfo;
extern MethodInfo MethodInfo_GetGenericArguments_m11883_MethodInfo;
extern MethodInfo MethodInfo_MakeGenericMethod_m11882_MethodInfo;
extern MethodInfo Type_GetProperty_m10352_MethodInfo;


// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder__ctor_m11863_MethodInfo;
extern "C" void MemberInfoSerializationHolder__ctor_m11863 (MemberInfoSerializationHolder_t2016 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___ctx, MethodInfo* method)
{
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	Assembly_t1476 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		SerializationInfo_t1123 * L_0 = ___info;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m8011(L_0, (String_t*) &_stringLiteral1914, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		V_0 = L_1;
		SerializationInfo_t1123 * L_2 = ___info;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m8011(L_2, (String_t*) &_stringLiteral1444, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		V_1 = L_3;
		SerializationInfo_t1123 * L_4 = ___info;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m8011(L_4, (String_t*) &_stringLiteral1915, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		__this->____memberName_0 = L_5;
		SerializationInfo_t1123 * L_6 = ___info;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m8011(L_6, (String_t*) &_stringLiteral825, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		__this->____memberSignature_1 = L_7;
		SerializationInfo_t1123 * L_8 = ___info;
		NullCheck(L_8);
		int32_t L_9 = SerializationInfo_GetInt32_m8013(L_8, (String_t*) &_stringLiteral1916, /*hidden argument*/&SerializationInfo_GetInt32_m8013_MethodInfo);
		__this->____memberType_2 = L_9;
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		__this->____genericArguments_4 = (TypeU5BU5D_t913*)NULL;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SerializationException_t1473_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_005a;
		throw e;
	}

CATCH_005a:
	{ // begin catch(System.Runtime.Serialization.SerializationException)
		goto IL_005d;
	} // end catch (depth: 1)

IL_005d:
	{
		String_t* L_10 = V_0;
		Assembly_t1476 * L_11 = Assembly_Load_m11800(NULL /*static, unused*/, L_10, /*hidden argument*/&Assembly_Load_m11800_MethodInfo);
		V_2 = L_11;
		Assembly_t1476 * L_12 = V_2;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		Type_t * L_14 = (Type_t *)VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(&Assembly_GetType_m11796_MethodInfo, L_12, L_13, 1, 1);
		__this->____reflectedType_3 = L_14;
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
extern MethodInfo MemberInfoSerializationHolder_Serialize_m11864_MethodInfo;
extern "C" void MemberInfoSerializationHolder_Serialize_m11864 (Object_t * __this /* static, unused */, SerializationInfo_t1123 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		String_t* L_1 = ___name;
		Type_t * L_2 = ___klass;
		String_t* L_3 = ___signature;
		int32_t L_4 = ___type;
		MemberInfoSerializationHolder_Serialize_m11865(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, (TypeU5BU5D_t913*)(TypeU5BU5D_t913*)NULL, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m11865_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
extern "C" void MemberInfoSerializationHolder_Serialize_m11865 (Object_t * __this /* static, unused */, SerializationInfo_t1123 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t913* ___genericArguments, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MemberInfoSerializationHolder_t2016_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_SetType_m12472(L_0, L_1, /*hidden argument*/&SerializationInfo_SetType_m12472_MethodInfo);
		SerializationInfo_t1123 * L_2 = ___info;
		Type_t * L_3 = ___klass;
		NullCheck(L_3);
		Module_t1815 * L_4 = (Module_t1815 *)VirtFuncInvoker0< Module_t1815 * >::Invoke(&Type_get_Module_m13996_MethodInfo, L_3);
		NullCheck(L_4);
		Assembly_t1476 * L_5 = Module_get_Assembly_m11892(L_4, /*hidden argument*/&Module_get_Assembly_m11892_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Assembly_get_FullName_m11789_MethodInfo, L_5);
		Type_t * L_7 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_2);
		SerializationInfo_AddValue_m8000(L_2, (String_t*) &_stringLiteral1914, L_6, L_7, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		SerializationInfo_t1123 * L_8 = ___info;
		Type_t * L_9 = ___klass;
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m6981_MethodInfo, L_9);
		Type_t * L_11 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_8);
		SerializationInfo_AddValue_m8000(L_8, (String_t*) &_stringLiteral1444, L_10, L_11, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		SerializationInfo_t1123 * L_12 = ___info;
		String_t* L_13 = ___name;
		Type_t * L_14 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_12);
		SerializationInfo_AddValue_m8000(L_12, (String_t*) &_stringLiteral1915, L_13, L_14, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		SerializationInfo_t1123 * L_15 = ___info;
		String_t* L_16 = ___signature;
		Type_t * L_17 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&String_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_15);
		SerializationInfo_AddValue_m8000(L_15, (String_t*) &_stringLiteral825, L_16, L_17, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		SerializationInfo_t1123 * L_18 = ___info;
		int32_t L_19 = ___type;
		NullCheck(L_18);
		SerializationInfo_AddValue_m8002(L_18, (String_t*) &_stringLiteral1916, L_19, /*hidden argument*/&SerializationInfo_AddValue_m8002_MethodInfo);
		SerializationInfo_t1123 * L_20 = ___info;
		TypeU5BU5D_t913* L_21 = ___genericArguments;
		Type_t * L_22 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&TypeU5BU5D_t913_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_20);
		SerializationInfo_AddValue_m8000(L_20, (String_t*) &_stringLiteral1917, (Object_t *)(Object_t *)L_21, L_22, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder_GetObjectData_m11866_MethodInfo;
extern "C" void MemberInfoSerializationHolder_GetObjectData_m11866 (MemberInfoSerializationHolder_t2016 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern MethodInfo MemberInfoSerializationHolder_GetRealObject_m11867_MethodInfo;
extern "C" Object_t * MemberInfoSerializationHolder_GetRealObject_m11867 (MemberInfoSerializationHolder_t2016 * __this, StreamingContext_t1124  ___context, MethodInfo* method)
{
	ConstructorInfoU5BU5D_t1816* V_0 = {0};
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t168* V_2 = {0};
	int32_t V_3 = 0;
	MethodInfo_t * V_4 = {0};
	FieldInfo_t * V_5 = {0};
	PropertyInfo_t * V_6 = {0};
	EventInfo_t * V_7 = {0};
	int32_t V_8 = {0};
	{
		int32_t L_0 = (__this->____memberType_2);
		V_8 = L_0;
		int32_t L_1 = V_8;
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 0)
		{
			goto IL_003f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 1)
		{
			goto IL_019e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 2)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 3)
		{
			goto IL_012e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 4)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 5)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 6)
		{
			goto IL_0031;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)1)) == 7)
		{
			goto IL_0090;
		}
	}

IL_0031:
	{
		int32_t L_2 = V_8;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01d6;
	}

IL_003f:
	{
		Type_t * L_3 = (__this->____reflectedType_3);
		NullCheck(L_3);
		ConstructorInfoU5BU5D_t1816* L_4 = (ConstructorInfoU5BU5D_t1816*)VirtFuncInvoker1< ConstructorInfoU5BU5D_t1816*, int32_t >::Invoke(&Type_GetConstructors_m14024_MethodInfo, L_3, ((int32_t)60));
		V_0 = L_4;
		V_1 = 0;
		goto IL_006e;
	}

IL_0051:
	{
		ConstructorInfoU5BU5D_t1816* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ConstructorInfo_t1177 **)(ConstructorInfo_t1177 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_8 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, (*(ConstructorInfo_t1177 **)(ConstructorInfo_t1177 **)SZArrayLdElema(L_5, L_7)));
		String_t* L_9 = (__this->____memberSignature_1);
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&String_Equals_m4751_MethodInfo, L_8, L_9);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		ConstructorInfoU5BU5D_t1816* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		int32_t L_13 = L_12;
		return (*(ConstructorInfo_t1177 **)(ConstructorInfo_t1177 **)SZArrayLdElema(L_11, L_13));
	}

IL_006a:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_006e:
	{
		int32_t L_15 = V_1;
		ConstructorInfoU5BU5D_t1816* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_17 = (__this->____memberSignature_1);
		Type_t * L_18 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_19 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1918, L_17, L_18, /*hidden argument*/&String_Format_m4796_MethodInfo);
		SerializationException_t1473 * L_20 = (SerializationException_t1473 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1473_il2cpp_TypeInfo));
		SerializationException__ctor_m8004(L_20, L_19, /*hidden argument*/&SerializationException__ctor_m8004_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0090:
	{
		Type_t * L_21 = (__this->____reflectedType_3);
		NullCheck(L_21);
		MethodInfoU5BU5D_t168* L_22 = (MethodInfoU5BU5D_t168*)VirtFuncInvoker1< MethodInfoU5BU5D_t168*, int32_t >::Invoke(&Type_GetMethods_m569_MethodInfo, L_21, ((int32_t)60));
		V_2 = L_22;
		V_3 = 0;
		goto IL_010c;
	}

IL_00a2:
	{
		MethodInfoU5BU5D_t168* L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_26 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_23, L_25)));
		String_t* L_27 = (__this->____memberSignature_1);
		NullCheck(L_26);
		bool L_28 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(&String_Equals_m4751_MethodInfo, L_26, L_27);
		if (!L_28)
		{
			goto IL_00bb;
		}
	}
	{
		MethodInfoU5BU5D_t168* L_29 = V_2;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		int32_t L_31 = L_30;
		return (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_29, L_31));
	}

IL_00bb:
	{
		TypeU5BU5D_t913* L_32 = (__this->____genericArguments_4);
		if (!L_32)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t168* L_33 = V_2;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, L_34);
		int32_t L_35 = L_34;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodInfo_get_IsGenericMethod_m11884_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_33, L_35)));
		if (!L_36)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t168* L_37 = V_2;
		int32_t L_38 = V_3;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, L_38);
		int32_t L_39 = L_38;
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		TypeU5BU5D_t913* L_40 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&MethodInfo_GetGenericArguments_m11883_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_37, L_39)));
		NullCheck(L_40);
		TypeU5BU5D_t913* L_41 = (__this->____genericArguments_4);
		NullCheck(L_41);
		if ((!(((uint32_t)(((int32_t)(((Array_t *)L_40)->max_length)))) == ((uint32_t)(((int32_t)(((Array_t *)L_41)->max_length)))))))
		{
			goto IL_0108;
		}
	}
	{
		MethodInfoU5BU5D_t168* L_42 = V_2;
		int32_t L_43 = V_3;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		int32_t L_44 = L_43;
		TypeU5BU5D_t913* L_45 = (__this->____genericArguments_4);
		NullCheck((*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)));
		MethodInfo_t * L_46 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t913* >::Invoke(&MethodInfo_MakeGenericMethod_m11882_MethodInfo, (*(MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_42, L_44)), L_45);
		V_4 = L_46;
		MethodInfo_t * L_47 = V_4;
		NullCheck(L_47);
		String_t* L_48 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m715_MethodInfo, L_47);
		String_t* L_49 = (__this->____memberSignature_1);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_50 = String_op_Equality_m406(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		if (!L_50)
		{
			goto IL_0108;
		}
	}
	{
		MethodInfo_t * L_51 = V_4;
		return L_51;
	}

IL_0108:
	{
		int32_t L_52 = V_3;
		V_3 = ((int32_t)((int32_t)L_52+(int32_t)1));
	}

IL_010c:
	{
		int32_t L_53 = V_3;
		MethodInfoU5BU5D_t168* L_54 = V_2;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)(((int32_t)(((Array_t *)L_54)->max_length))))))
		{
			goto IL_00a2;
		}
	}
	{
		String_t* L_55 = (__this->____memberSignature_1);
		Type_t * L_56 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_57 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1919, L_55, L_56, /*hidden argument*/&String_Format_m4796_MethodInfo);
		SerializationException_t1473 * L_58 = (SerializationException_t1473 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1473_il2cpp_TypeInfo));
		SerializationException__ctor_m8004(L_58, L_57, /*hidden argument*/&SerializationException__ctor_m8004_MethodInfo);
		il2cpp_codegen_raise_exception(L_58);
	}

IL_012e:
	{
		Type_t * L_59 = (__this->____reflectedType_3);
		String_t* L_60 = (__this->____memberName_0);
		NullCheck(L_59);
		FieldInfo_t * L_61 = (FieldInfo_t *)VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(&Type_GetField_m14026_MethodInfo, L_59, L_60, ((int32_t)60));
		V_5 = L_61;
		FieldInfo_t * L_62 = V_5;
		if (!L_62)
		{
			goto IL_014a;
		}
	}
	{
		FieldInfo_t * L_63 = V_5;
		return L_63;
	}

IL_014a:
	{
		String_t* L_64 = (__this->____memberName_0);
		Type_t * L_65 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_66 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1920, L_64, L_65, /*hidden argument*/&String_Format_m4796_MethodInfo);
		SerializationException_t1473 * L_67 = (SerializationException_t1473 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1473_il2cpp_TypeInfo));
		SerializationException__ctor_m8004(L_67, L_66, /*hidden argument*/&SerializationException__ctor_m8004_MethodInfo);
		il2cpp_codegen_raise_exception(L_67);
	}

IL_0166:
	{
		Type_t * L_68 = (__this->____reflectedType_3);
		String_t* L_69 = (__this->____memberName_0);
		NullCheck(L_68);
		PropertyInfo_t * L_70 = (PropertyInfo_t *)VirtFuncInvoker2< PropertyInfo_t *, String_t*, int32_t >::Invoke(&Type_GetProperty_m10352_MethodInfo, L_68, L_69, ((int32_t)60));
		V_6 = L_70;
		PropertyInfo_t * L_71 = V_6;
		if (!L_71)
		{
			goto IL_0182;
		}
	}
	{
		PropertyInfo_t * L_72 = V_6;
		return L_72;
	}

IL_0182:
	{
		String_t* L_73 = (__this->____memberName_0);
		Type_t * L_74 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_75 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1921, L_73, L_74, /*hidden argument*/&String_Format_m4796_MethodInfo);
		SerializationException_t1473 * L_76 = (SerializationException_t1473 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1473_il2cpp_TypeInfo));
		SerializationException__ctor_m8004(L_76, L_75, /*hidden argument*/&SerializationException__ctor_m8004_MethodInfo);
		il2cpp_codegen_raise_exception(L_76);
	}

IL_019e:
	{
		Type_t * L_77 = (__this->____reflectedType_3);
		String_t* L_78 = (__this->____memberName_0);
		NullCheck(L_77);
		EventInfo_t * L_79 = (EventInfo_t *)VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(&Type_GetEvent_m14025_MethodInfo, L_77, L_78, ((int32_t)60));
		V_7 = L_79;
		EventInfo_t * L_80 = V_7;
		if (!L_80)
		{
			goto IL_01ba;
		}
	}
	{
		EventInfo_t * L_81 = V_7;
		return L_81;
	}

IL_01ba:
	{
		String_t* L_82 = (__this->____memberName_0);
		Type_t * L_83 = (__this->____reflectedType_3);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_84 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1922, L_82, L_83, /*hidden argument*/&String_Format_m4796_MethodInfo);
		SerializationException_t1473 * L_85 = (SerializationException_t1473 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1473_il2cpp_TypeInfo));
		SerializationException__ctor_m8004(L_85, L_84, /*hidden argument*/&SerializationException__ctor_m8004_MethodInfo);
		il2cpp_codegen_raise_exception(L_85);
	}

IL_01d6:
	{
		int32_t L_86 = (__this->____memberType_2);
		int32_t L_87 = L_86;
		Object_t * L_88 = Box(InitializedTypeInfo(&MemberTypes_t1564_il2cpp_TypeInfo), &L_87);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_89 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1923, L_88, /*hidden argument*/&String_Format_m2378_MethodInfo);
		SerializationException_t1473 * L_90 = (SerializationException_t1473 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SerializationException_t1473_il2cpp_TypeInfo));
		SerializationException__ctor_m8004(L_90, L_89, /*hidden argument*/&SerializationException__ctor_m8004_MethodInfo);
		il2cpp_codegen_raise_exception(L_90);
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandleMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle_get_Value_m13824_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromIntPtr_m11870_MethodInfo;
extern MethodInfo MethodBase_GetMethodFromHandleInternalType_m11872_MethodInfo;
extern MethodInfo Type_get_IsGenericTypeDefinition_m10366_MethodInfo;
extern MethodInfo MethodBase_Invoke_m14036_MethodInfo;


// System.Void System.Reflection.MethodBase::.ctor()
extern "C" void MethodBase__ctor_m11868 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m10374(__this, /*hidden argument*/&MemberInfo__ctor_m10374_MethodInfo);
		return;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern MethodInfo MethodBase_GetMethodFromHandleNoGenericCheck_m11869_MethodInfo;
extern "C" MethodBase_t1169 * MethodBase_GetMethodFromHandleNoGenericCheck_m11869 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1991  ___handle, MethodInfo* method)
{
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m13824((&___handle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m13824_MethodInfo);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		MethodBase_t1169 * L_2 = MethodBase_GetMethodFromIntPtr_m11870(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MethodBase_GetMethodFromIntPtr_m11870_MethodInfo);
		return L_2;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t1169 * MethodBase_GetMethodFromIntPtr_m11870 (Object_t * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, MethodInfo* method)
{
	MethodBase_t1169 * V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		bool L_2 = IntPtr_op_Equality_m4790(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&IntPtr_op_Equality_m4790_MethodInfo);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t521 * L_3 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_3, (String_t*) &_stringLiteral1912, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0018:
	{
		IntPtr_t L_4 = ___handle;
		IntPtr_t L_5 = ___declaringType;
		MethodBase_t1169 * L_6 = MethodBase_GetMethodFromHandleInternalType_m11872(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/&MethodBase_GetMethodFromHandleInternalType_m11872_MethodInfo);
		V_0 = L_6;
		MethodBase_t1169 * L_7 = V_0;
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		ArgumentException_t521 * L_8 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_8, (String_t*) &_stringLiteral1912, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_002e:
	{
		MethodBase_t1169 * L_9 = V_0;
		return L_9;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern MethodInfo MethodBase_GetMethodFromHandle_m11871_MethodInfo;
extern "C" MethodBase_t1169 * MethodBase_GetMethodFromHandle_m11871 (Object_t * __this /* static, unused */, RuntimeMethodHandle_t1991  ___handle, MethodInfo* method)
{
	MethodBase_t1169 * V_0 = {0};
	Type_t * V_1 = {0};
	{
		IntPtr_t L_0 = RuntimeMethodHandle_get_Value_m13824((&___handle), /*hidden argument*/&RuntimeMethodHandle_get_Value_m13824_MethodInfo);
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)InitializedTypeInfo(&IntPtr_t_il2cpp_TypeInfo)->static_fields)->___Zero_1;
		MethodBase_t1169 * L_2 = MethodBase_GetMethodFromIntPtr_m11870(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MethodBase_GetMethodFromIntPtr_m11870_MethodInfo);
		V_0 = L_2;
		MethodBase_t1169 * L_3 = V_0;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_3);
		V_1 = L_4;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericType_m10369_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Type_t * L_7 = V_1;
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsGenericTypeDefinition_m10366_MethodInfo, L_7);
		if (!L_8)
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		ArgumentException_t521 * L_9 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_9, (String_t*) &_stringLiteral1924, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_0034:
	{
		MethodBase_t1169 * L_10 = V_0;
		return L_10;
	}
}
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C" MethodBase_t1169 * MethodBase_GetMethodFromHandleInternalType_m11872 (Object_t * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, MethodInfo* method)
{
	typedef MethodBase_t1169 * (*MethodBase_GetMethodFromHandleInternalType_m11872_ftn) (IntPtr_t, IntPtr_t);
	static MethodBase_GetMethodFromHandleInternalType_m11872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MethodBase_GetMethodFromHandleInternalType_m11872_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)");
	return _il2cpp_icall_func(___method_handle, ___type_handle);
}
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern MethodInfo MethodBase_Invoke_m8431_MethodInfo;
extern "C" Object_t * MethodBase_Invoke_m8431 (MethodBase_t1169 * __this, Object_t * ___obj, ObjectU5BU5D_t164* ___parameters, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t164* L_1 = ___parameters;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&MethodBase_Invoke_m14036_MethodInfo, __this, L_0, 0, (Binder_t1162 *)NULL, L_1, (CultureInfo_t1165 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C" int32_t MethodBase_get_CallingConvention_m11873 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		return (int32_t)(1);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern MethodInfo MethodBase_get_IsPublic_m11874_MethodInfo;
extern "C" bool MethodBase_get_IsPublic_m11874 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m13989_MethodInfo, __this);
		return ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C" bool MethodBase_get_IsStatic_m6953 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m13989_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern MethodInfo MethodBase_get_IsVirtual_m11875_MethodInfo;
extern "C" bool MethodBase_get_IsVirtual_m11875 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MethodBase_get_Attributes_m13989_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern MethodInfo MethodBase_GetGenericArguments_m11876_MethodInfo;
extern "C" TypeU5BU5D_t913* MethodBase_GetGenericArguments_m11876 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m449(L_0, /*hidden argument*/&NotSupportedException__ctor_m449_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern MethodInfo MethodBase_get_ContainsGenericParameters_m11877_MethodInfo;
extern "C" bool MethodBase_get_ContainsGenericParameters_m11877 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C" bool MethodBase_get_IsGenericMethodDefinition_m11878 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern MethodInfo MethodBase_get_IsGenericMethod_m11879_MethodInfo;
extern "C" bool MethodBase_get_IsGenericMethod_m11879 (MethodBase_t1169 * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MethodImplAttributes_t2018_il2cpp_TypeInfo;
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo Type_ToString_m10362_MethodInfo;


// System.Void System.Reflection.MethodInfo::.ctor()
extern MethodInfo MethodInfo__ctor_m11880_MethodInfo;
extern "C" void MethodInfo__ctor_m11880 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		MethodBase__ctor_m11868(__this, /*hidden argument*/&MethodBase__ctor_m11868_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition()
// System.Reflection.MemberTypes System.Reflection.MethodInfo::get_MemberType()
extern MethodInfo MethodInfo_get_MemberType_m11881_MethodInfo;
extern "C" int32_t MethodInfo_get_MemberType_m11881 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(8);
	}
}
// System.Type System.Reflection.MethodInfo::get_ReturnType()
extern MethodInfo MethodInfo_get_ReturnType_m8448_MethodInfo;
extern "C" Type_t * MethodInfo_get_ReturnType_m8448 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[])
extern "C" MethodInfo_t * MethodInfo_MakeGenericMethod_m11882 (MethodInfo_t * __this, TypeU5BU5D_t913* ___typeArguments, MethodInfo* method)
{
	{
		Type_t * L_0 = Object_GetType_m568(__this, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10362_MethodInfo, L_0);
		NotSupportedException_t146 * L_2 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_2, L_1, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}
}
// System.Type[] System.Reflection.MethodInfo::GetGenericArguments()
extern "C" TypeU5BU5D_t913* MethodInfo_GetGenericArguments_m11883 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethod()
extern "C" bool MethodInfo_get_IsGenericMethod_m11884 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_IsGenericMethodDefinition()
extern MethodInfo MethodInfo_get_IsGenericMethodDefinition_m11885_MethodInfo;
extern "C" bool MethodInfo_get_IsGenericMethodDefinition_m11885 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean System.Reflection.MethodInfo::get_ContainsGenericParameters()
extern MethodInfo MethodInfo_get_ContainsGenericParameters_m11886_MethodInfo;
extern "C" bool MethodInfo_get_ContainsGenericParameters_m11886 (MethodInfo_t * __this, MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Reflection.Missing
#include "mscorlib_System_Reflection_Missing.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Missing_t2019_il2cpp_TypeInfo;
// System.Reflection.Missing
#include "mscorlib_System_Reflection_MissingMethodDeclarations.h"

extern MethodInfo Missing__ctor_m11887_MethodInfo;


// System.Void System.Reflection.Missing::.ctor()
extern "C" void Missing__ctor_m11887 (Missing_t2019 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Missing::.cctor()
extern MethodInfo Missing__cctor_m11888_MethodInfo;
extern "C" void Missing__cctor_m11888 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		Missing_t2019 * L_0 = (Missing_t2019 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Missing_t2019_il2cpp_TypeInfo));
		Missing__ctor_m11887(L_0, /*hidden argument*/&Missing__ctor_m11887_MethodInfo);
		((Missing_t2019_StaticFields*)InitializedTypeInfo(&Missing_t2019_il2cpp_TypeInfo)->static_fields)->___Value_0 = L_0;
		return;
	}
}
// System.Void System.Reflection.Missing::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m11889_MethodInfo;
extern "C" void Missing_System_Runtime_Serialization_ISerializable_GetObjectData_m11889 (Missing_t2019 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilter.h"
extern TypeInfo TypeFilter_t2020_il2cpp_TypeInfo;
// System.Reflection.TypeFilter
#include "mscorlib_System_Reflection_TypeFilterMethodDeclarations.h"
// System.UnitySerializationHolder
#include "mscorlib_System_UnitySerializationHolderMethodDeclarations.h"
extern MethodInfo Module_filter_by_type_name_m11899_MethodInfo;
extern MethodInfo TypeFilter__ctor_m13946_MethodInfo;
extern MethodInfo Module_filter_by_type_name_ignore_case_m11900_MethodInfo;
extern MethodInfo UnitySerializationHolder_GetModuleData_m13909_MethodInfo;
extern MethodInfo String_StartsWith_m6926_MethodInfo;
extern MethodInfo String_ToLower_m5369_MethodInfo;


// System.Void System.Reflection.Module::.ctor()
extern MethodInfo Module__ctor_m11890_MethodInfo;
extern "C" void Module__ctor_m11890 (Module_t1815 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Module::.cctor()
extern MethodInfo Module__cctor_m11891_MethodInfo;
extern "C" void Module__cctor_m11891 (Object_t * __this /* static, unused */, MethodInfo* method)
{
	{
		IntPtr_t L_0 = { &Module_filter_by_type_name_m11899_MethodInfo };
		TypeFilter_t2020 * L_1 = (TypeFilter_t2020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeFilter_t2020_il2cpp_TypeInfo));
		TypeFilter__ctor_m13946(L_1, NULL, L_0, /*hidden argument*/&TypeFilter__ctor_m13946_MethodInfo);
		((Module_t1815_StaticFields*)InitializedTypeInfo(&Module_t1815_il2cpp_TypeInfo)->static_fields)->___FilterTypeName_1 = L_1;
		IntPtr_t L_2 = { &Module_filter_by_type_name_ignore_case_m11900_MethodInfo };
		TypeFilter_t2020 * L_3 = (TypeFilter_t2020 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TypeFilter_t2020_il2cpp_TypeInfo));
		TypeFilter__ctor_m13946(L_3, NULL, L_2, /*hidden argument*/&TypeFilter__ctor_m13946_MethodInfo);
		((Module_t1815_StaticFields*)InitializedTypeInfo(&Module_t1815_il2cpp_TypeInfo)->static_fields)->___FilterTypeNameIgnoreCase_2 = L_3;
		return;
	}
}
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C" Assembly_t1476 * Module_get_Assembly_m11892 (Module_t1815 * __this, MethodInfo* method)
{
	{
		Assembly_t1476 * L_0 = (__this->___assembly_4);
		return L_0;
	}
}
// System.String System.Reflection.Module::get_ScopeName()
extern "C" String_t* Module_get_ScopeName_m11893 (Module_t1815 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___scopename_7);
		return L_0;
	}
}
// System.Object[] System.Reflection.Module::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo Module_GetCustomAttributes_m11894_MethodInfo;
extern "C" ObjectU5BU5D_t164* Module_GetCustomAttributes_m11894 (Module_t1815 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.Module::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Module_GetObjectData_m11895_MethodInfo;
extern "C" void Module_GetObjectData_m11895 (Module_t1815 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral588, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		SerializationInfo_t1123 * L_2 = ___info;
		StreamingContext_t1124  L_3 = ___context;
		UnitySerializationHolder_GetModuleData_m13909(NULL /*static, unused*/, __this, L_2, L_3, /*hidden argument*/&UnitySerializationHolder_GetModuleData_m13909_MethodInfo);
		return;
	}
}
// System.Boolean System.Reflection.Module::IsDefined(System.Type,System.Boolean)
extern MethodInfo Module_IsDefined_m11896_MethodInfo;
extern "C" bool Module_IsDefined_m11896 (Module_t1815 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.Module::IsResource()
extern "C" bool Module_IsResource_m11897 (Module_t1815 * __this, MethodInfo* method)
{
	{
		bool L_0 = (__this->___is_resource_8);
		return L_0;
	}
}
// System.String System.Reflection.Module::ToString()
extern MethodInfo Module_ToString_m11898_MethodInfo;
extern "C" String_t* Module_ToString_m11898 (Module_t1815 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_6);
		return L_0;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_m11899 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m4752(L_1, (String_t*) &_stringLiteral893, /*hidden argument*/&String_EndsWith_m4752_MethodInfo);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_3);
		String_t* L_5 = V_0;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m694(L_6, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_5);
		String_t* L_8 = String_Substring_m2542(L_5, 0, ((int32_t)((int32_t)L_7-(int32_t)1)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		NullCheck(L_4);
		bool L_9 = String_StartsWith_m6926(L_4, L_8, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		return L_9;
	}

IL_002f:
	{
		Type_t * L_10 = ___m;
		NullCheck(L_10);
		String_t* L_11 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_10);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_13 = String_op_Equality_m406(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		return L_13;
	}
}
// System.Boolean System.Reflection.Module::filter_by_type_name_ignore_case(System.Type,System.Object)
extern "C" bool Module_filter_by_type_name_ignore_case_m11900 (Object_t * __this /* static, unused */, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method)
{
	String_t* V_0 = {0};
	{
		Object_t * L_0 = ___filterCriteria;
		V_0 = ((String_t*)Castclass(L_0, (&String_t_il2cpp_TypeInfo)));
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = String_EndsWith_m4752(L_1, (String_t*) &_stringLiteral893, /*hidden argument*/&String_EndsWith_m4752_MethodInfo);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		Type_t * L_3 = ___m;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_3);
		NullCheck(L_4);
		String_t* L_5 = String_ToLower_m5369(L_4, /*hidden argument*/&String_ToLower_m5369_MethodInfo);
		String_t* L_6 = V_0;
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = String_get_Length_m694(L_7, /*hidden argument*/&String_get_Length_m694_MethodInfo);
		NullCheck(L_6);
		String_t* L_9 = String_Substring_m2542(L_6, 0, ((int32_t)((int32_t)L_8-(int32_t)1)), /*hidden argument*/&String_Substring_m2542_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = String_ToLower_m5369(L_9, /*hidden argument*/&String_ToLower_m5369_MethodInfo);
		NullCheck(L_5);
		bool L_11 = String_StartsWith_m6926(L_5, L_10, /*hidden argument*/&String_StartsWith_m6926_MethodInfo);
		return L_11;
	}

IL_0039:
	{
		Type_t * L_12 = ___m;
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_12);
		String_t* L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_15 = String_Compare_m9922(NULL /*static, unused*/, L_13, L_14, 1, /*hidden argument*/&String_Compare_m9922_MethodInfo);
		return ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoEventInfo_t2021_il2cpp_TypeInfo;
// System.Reflection.MonoEventInfo
#include "mscorlib_System_Reflection_MonoEventInfoMethodDeclarations.h"

// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEvent.h"
extern MethodInfo MonoEventInfo_get_event_info_m11901_MethodInfo;


// System.Void System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)
extern "C" void MonoEventInfo_get_event_info_m11901 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MonoEventInfo_t2021 * ___info, MethodInfo* method)
{
	typedef void (*MonoEventInfo_get_event_info_m11901_ftn) (MonoEvent_t *, MonoEventInfo_t2021 *);
	static MonoEventInfo_get_event_info_m11901_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoEventInfo_get_event_info_m11901_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoEventInfo::get_event_info(System.Reflection.MonoEvent,System.Reflection.MonoEventInfo&)");
	_il2cpp_icall_func(___ev, ___info);
}
// System.Reflection.MonoEventInfo System.Reflection.MonoEventInfo::GetEventInfo(System.Reflection.MonoEvent)
extern MethodInfo MonoEventInfo_GetEventInfo_m11902_MethodInfo;
extern "C" MonoEventInfo_t2021  MonoEventInfo_GetEventInfo_m11902 (Object_t * __this /* static, unused */, MonoEvent_t * ___ev, MethodInfo* method)
{
	MonoEventInfo_t2021  V_0 = {0};
	{
		MonoEvent_t * L_0 = ___ev;
		MonoEventInfo_get_event_info_m11901(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&MonoEventInfo_get_event_info_m11901_MethodInfo);
		MonoEventInfo_t2021  L_1 = V_0;
		return L_1;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoEvent_t_il2cpp_TypeInfo;
// System.Reflection.MonoEvent
#include "mscorlib_System_Reflection_MonoEventMethodDeclarations.h"

extern MethodInfo MonoEvent_get_Name_m11908_MethodInfo;
extern MethodInfo String_Concat_m407_MethodInfo;
extern MethodInfo MonoEvent_get_ReflectedType_m11907_MethodInfo;
extern MethodInfo MonoEvent_ToString_m11909_MethodInfo;


// System.Void System.Reflection.MonoEvent::.ctor()
extern MethodInfo MonoEvent__ctor_m11903_MethodInfo;
extern "C" void MonoEvent__ctor_m11903 (MonoEvent_t * __this, MethodInfo* method)
{
	{
		EventInfo__ctor_m11848(__this, /*hidden argument*/&EventInfo__ctor_m11848_MethodInfo);
		return;
	}
}
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern MethodInfo MonoEvent_get_Attributes_m11904_MethodInfo;
extern "C" int32_t MonoEvent_get_Attributes_m11904 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t2021  V_0 = {0};
	{
		MonoEventInfo_t2021  L_0 = MonoEventInfo_GetEventInfo_m11902(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m11902_MethodInfo);
		V_0 = L_0;
		int32_t L_1 = ((&V_0)->___attrs_6);
		return L_1;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern MethodInfo MonoEvent_GetAddMethod_m11905_MethodInfo;
extern "C" MethodInfo_t * MonoEvent_GetAddMethod_m11905 (MonoEvent_t * __this, bool ___nonPublic, MethodInfo* method)
{
	MonoEventInfo_t2021  V_0 = {0};
	{
		MonoEventInfo_t2021  L_0 = MonoEventInfo_GetEventInfo_m11902(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m11902_MethodInfo);
		V_0 = L_0;
		bool L_1 = ___nonPublic;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MethodInfo_t * L_2 = ((&V_0)->___add_method_3);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		MethodInfo_t * L_3 = ((&V_0)->___add_method_3);
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m11874_MethodInfo, L_3);
		if (!L_4)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		MethodInfo_t * L_5 = ((&V_0)->___add_method_3);
		return L_5;
	}

IL_0029:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern MethodInfo MonoEvent_get_DeclaringType_m11906_MethodInfo;
extern "C" Type_t * MonoEvent_get_DeclaringType_m11906 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t2021  V_0 = {0};
	{
		MonoEventInfo_t2021  L_0 = MonoEventInfo_GetEventInfo_m11902(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m11902_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___declaring_type_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m11907 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t2021  V_0 = {0};
	{
		MonoEventInfo_t2021  L_0 = MonoEventInfo_GetEventInfo_m11902(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m11902_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = ((&V_0)->___reflected_type_1);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m11908 (MonoEvent_t * __this, MethodInfo* method)
{
	MonoEventInfo_t2021  V_0 = {0};
	{
		MonoEventInfo_t2021  L_0 = MonoEventInfo_GetEventInfo_m11902(NULL /*static, unused*/, __this, /*hidden argument*/&MonoEventInfo_GetEventInfo_m11902_MethodInfo);
		V_0 = L_0;
		String_t* L_1 = ((&V_0)->___name_2);
		return L_1;
	}
}
// System.String System.Reflection.MonoEvent::ToString()
extern "C" String_t* MonoEvent_ToString_m11909 (MonoEvent_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&EventInfo_get_EventHandlerType_m11849_MethodInfo, __this);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_get_Name_m11908_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Concat_m407(NULL /*static, unused*/, L_0, (String_t*) &_stringLiteral260, L_1, /*hidden argument*/&String_Concat_m407_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoEvent_IsDefined_m11910_MethodInfo;
extern "C" bool MonoEvent_IsDefined_m11910 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoEvent_GetCustomAttributes_m11911_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoEvent_GetCustomAttributes_m11911 (MonoEvent_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_1 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoEvent_GetCustomAttributes_m11912_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoEvent_GetCustomAttributes_m11912 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoEvent_GetObjectData_m11913_MethodInfo;
extern "C" void MonoEvent_GetObjectData_m11913 (MonoEvent_t * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_get_Name_m11908_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoEvent_get_ReflectedType_m11907_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoEvent_ToString_m11909_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m11864(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 2, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m11864_MethodInfo);
		return;
	}
}
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoField.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoField_t_il2cpp_TypeInfo;
// System.Reflection.MonoField
#include "mscorlib_System_Reflection_MonoFieldMethodDeclarations.h"

// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetException.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessException.h"
extern TypeInfo TargetException_t2032_il2cpp_TypeInfo;
extern TypeInfo FieldAccessException_t2298_il2cpp_TypeInfo;
// System.Reflection.TargetException
#include "mscorlib_System_Reflection_TargetExceptionMethodDeclarations.h"
// System.FieldAccessException
#include "mscorlib_System_FieldAccessExceptionMethodDeclarations.h"
extern MethodInfo MonoField_GetParentType_m11918_MethodInfo;
extern MethodInfo TargetException__ctor_m12046_MethodInfo;
extern MethodInfo MonoField_CheckGeneric_m11932_MethodInfo;
extern MethodInfo MonoField_GetValueInternal_m11926_MethodInfo;
extern MethodInfo FieldAccessException__ctor_m13577_MethodInfo;
extern MethodInfo String_Concat_m621_MethodInfo;
extern MethodInfo MonoField_SetValueInternal_m11929_MethodInfo;
extern MethodInfo MonoField_get_Name_m11921_MethodInfo;
extern MethodInfo MonoField_get_ReflectedType_m11919_MethodInfo;
extern MethodInfo MonoField_ToString_m11928_MethodInfo;
extern MethodInfo MonoField_get_DeclaringType_m11920_MethodInfo;
extern MethodInfo Type_get_ContainsGenericParameters_m10365_MethodInfo;


// System.Void System.Reflection.MonoField::.ctor()
extern MethodInfo MonoField__ctor_m11914_MethodInfo;
extern "C" void MonoField__ctor_m11914 (MonoField_t * __this, MethodInfo* method)
{
	{
		FieldInfo__ctor_m11851(__this, /*hidden argument*/&FieldInfo__ctor_m11851_MethodInfo);
		return;
	}
}
// System.Reflection.FieldAttributes System.Reflection.MonoField::get_Attributes()
extern MethodInfo MonoField_get_Attributes_m11915_MethodInfo;
extern "C" int32_t MonoField_get_Attributes_m11915 (MonoField_t * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___attrs_4);
		return L_0;
	}
}
// System.RuntimeFieldHandle System.Reflection.MonoField::get_FieldHandle()
extern MethodInfo MonoField_get_FieldHandle_m11916_MethodInfo;
extern "C" RuntimeFieldHandle_t1817  MonoField_get_FieldHandle_m11916 (MonoField_t * __this, MethodInfo* method)
{
	{
		RuntimeFieldHandle_t1817  L_0 = (__this->___fhandle_1);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_FieldType()
extern MethodInfo MonoField_get_FieldType_m11917_MethodInfo;
extern "C" Type_t * MonoField_get_FieldType_m11917 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::GetParentType(System.Boolean)
extern "C" Type_t * MonoField_GetParentType_m11918 (MonoField_t * __this, bool ___declaring, MethodInfo* method)
{
	typedef Type_t * (*MonoField_GetParentType_m11918_ftn) (MonoField_t *, bool);
	static MonoField_GetParentType_m11918_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetParentType_m11918_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetParentType(System.Boolean)");
	return _il2cpp_icall_func(__this, ___declaring);
}
// System.Type System.Reflection.MonoField::get_ReflectedType()
extern "C" Type_t * MonoField_get_ReflectedType_m11919 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m11918(__this, 0, /*hidden argument*/&MonoField_GetParentType_m11918_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoField::get_DeclaringType()
extern "C" Type_t * MonoField_get_DeclaringType_m11920 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = MonoField_GetParentType_m11918(__this, 1, /*hidden argument*/&MonoField_GetParentType_m11918_MethodInfo);
		return L_0;
	}
}
// System.String System.Reflection.MonoField::get_Name()
extern "C" String_t* MonoField_get_Name_m11921 (MonoField_t * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_2);
		return L_0;
	}
}
// System.Boolean System.Reflection.MonoField::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoField_IsDefined_m11922_MethodInfo;
extern "C" bool MonoField_IsDefined_m11922 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoField_GetCustomAttributes_m11923_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoField_GetCustomAttributes_m11923 (MonoField_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_1 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoField::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoField_GetCustomAttributes_m11924_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoField_GetCustomAttributes_m11924 (MonoField_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.Int32 System.Reflection.MonoField::GetFieldOffset()
extern MethodInfo MonoField_GetFieldOffset_m11925_MethodInfo;
extern "C" int32_t MonoField_GetFieldOffset_m11925 (MonoField_t * __this, MethodInfo* method)
{
	typedef int32_t (*MonoField_GetFieldOffset_m11925_ftn) (MonoField_t *);
	static MonoField_GetFieldOffset_m11925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetFieldOffset_m11925_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetFieldOffset()");
	return _il2cpp_icall_func(__this);
}
// System.Object System.Reflection.MonoField::GetValueInternal(System.Object)
extern "C" Object_t * MonoField_GetValueInternal_m11926 (MonoField_t * __this, Object_t * ___obj, MethodInfo* method)
{
	typedef Object_t * (*MonoField_GetValueInternal_m11926_ftn) (MonoField_t *, Object_t *);
	static MonoField_GetValueInternal_m11926_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_GetValueInternal_m11926_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::GetValueInternal(System.Object)");
	return _il2cpp_icall_func(__this, ___obj);
}
// System.Object System.Reflection.MonoField::GetValue(System.Object)
extern MethodInfo MonoField_GetValue_m11927_MethodInfo;
extern "C" Object_t * MonoField_GetValue_m11927 (MonoField_t * __this, Object_t * ___obj, MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m11854_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t2032 * L_2 = (TargetException_t2032 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetException_t2032_il2cpp_TypeInfo));
		TargetException__ctor_m12046(L_2, (String_t*) &_stringLiteral1925, /*hidden argument*/&TargetException__ctor_m12046_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsLiteral_m11853_MethodInfo, __this);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		MonoField_CheckGeneric_m11932(__this, /*hidden argument*/&MonoField_CheckGeneric_m11932_MethodInfo);
	}

IL_0024:
	{
		Object_t * L_4 = ___obj;
		Object_t * L_5 = MonoField_GetValueInternal_m11926(__this, L_4, /*hidden argument*/&MonoField_GetValueInternal_m11926_MethodInfo);
		return L_5;
	}
}
// System.String System.Reflection.MonoField::ToString()
extern "C" String_t* MonoField_ToString_m11928 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___type_3);
		String_t* L_1 = (__this->___name_2);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_2 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1926, L_0, L_1, /*hidden argument*/&String_Format_m4796_MethodInfo);
		return L_2;
	}
}
// System.Void System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)
extern "C" void MonoField_SetValueInternal_m11929 (Object_t * __this /* static, unused */, FieldInfo_t * ___fi, Object_t * ___obj, Object_t * ___value, MethodInfo* method)
{
	typedef void (*MonoField_SetValueInternal_m11929_ftn) (FieldInfo_t *, Object_t *, Object_t *);
	static MonoField_SetValueInternal_m11929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoField_SetValueInternal_m11929_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoField::SetValueInternal(System.Reflection.FieldInfo,System.Object,System.Object)");
	_il2cpp_icall_func(___fi, ___obj, ___value);
}
// System.Void System.Reflection.MonoField::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern MethodInfo MonoField_SetValue_m11930_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" void MonoField_SetValue_m11930 (MonoField_t * __this, Object_t * ___obj, Object_t * ___val, int32_t ___invokeAttr, Binder_t1162 * ___binder, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	static bool MonoField_SetValue_m11930_init;
	if (!MonoField_SetValue_m11930_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		MonoField_SetValue_m11930_init = true;
	}
	Object_t * V_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsStatic_m11854_MethodInfo, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Object_t * L_1 = ___obj;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		TargetException_t2032 * L_2 = (TargetException_t2032 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetException_t2032_il2cpp_TypeInfo));
		TargetException__ctor_m12046(L_2, (String_t*) &_stringLiteral1925, /*hidden argument*/&TargetException__ctor_m12046_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0016:
	{
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&FieldInfo_get_IsLiteral_m11853_MethodInfo, __this);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		FieldAccessException_t2298 * L_4 = (FieldAccessException_t2298 *)il2cpp_codegen_object_new (InitializedTypeInfo(&FieldAccessException_t2298_il2cpp_TypeInfo));
		FieldAccessException__ctor_m13577(L_4, (String_t*) &_stringLiteral1927, /*hidden argument*/&FieldAccessException__ctor_m13577_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0029:
	{
		Binder_t1162 * L_5 = ___binder;
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		Binder_t1162 * L_6 = Binder_get_DefaultBinder_m11837(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m11837_MethodInfo);
		___binder = L_6;
	}

IL_0036:
	{
		MonoField_CheckGeneric_m11932(__this, /*hidden argument*/&MonoField_CheckGeneric_m11932_MethodInfo);
		Object_t * L_7 = ___val;
		if (!L_7)
		{
			goto IL_0090;
		}
	}
	{
		Binder_t1162 * L_8 = ___binder;
		Object_t * L_9 = ___val;
		Type_t * L_10 = (__this->___type_3);
		CultureInfo_t1165 * L_11 = ___culture;
		NullCheck(L_8);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker3< Object_t *, Object_t *, Type_t *, CultureInfo_t1165 * >::Invoke(&Binder_ChangeType_m14032_MethodInfo, L_8, L_9, L_10, L_11);
		V_0 = L_12;
		Object_t * L_13 = V_0;
		if (L_13)
		{
			goto IL_008b;
		}
	}
	{
		ObjectU5BU5D_t164* L_14 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 4));
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 0);
		ArrayElementTypeCheck (L_14, (String_t*) &_stringLiteral1928);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_14, 0)) = (Object_t *)(String_t*) &_stringLiteral1928;
		ObjectU5BU5D_t164* L_15 = L_14;
		Object_t * L_16 = ___val;
		NullCheck(L_16);
		Type_t * L_17 = Object_GetType_m568(L_16, /*hidden argument*/&Object_GetType_m568_MethodInfo);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 1);
		ArrayElementTypeCheck (L_15, L_17);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 1)) = (Object_t *)L_17;
		ObjectU5BU5D_t164* L_18 = L_15;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 2);
		ArrayElementTypeCheck (L_18, (String_t*) &_stringLiteral1929);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, 2)) = (Object_t *)(String_t*) &_stringLiteral1929;
		ObjectU5BU5D_t164* L_19 = L_18;
		Type_t * L_20 = (__this->___type_3);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 3);
		ArrayElementTypeCheck (L_19, L_20);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_19, 3)) = (Object_t *)L_20;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_21 = String_Concat_m621(NULL /*static, unused*/, L_19, /*hidden argument*/&String_Concat_m621_MethodInfo);
		ArgumentException_t521 * L_22 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m7991(L_22, L_21, (String_t*) &_stringLiteral1930, /*hidden argument*/&ArgumentException__ctor_m7991_MethodInfo);
		il2cpp_codegen_raise_exception(L_22);
	}

IL_008b:
	{
		Object_t * L_23 = V_0;
		___val = L_23;
	}

IL_0090:
	{
		Object_t * L_24 = ___obj;
		Object_t * L_25 = ___val;
		MonoField_SetValueInternal_m11929(NULL /*static, unused*/, __this, L_24, L_25, /*hidden argument*/&MonoField_SetValueInternal_m11929_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoField::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoField_GetObjectData_m11931_MethodInfo;
extern "C" void MonoField_GetObjectData_m11931 (MonoField_t * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoField_get_Name_m11921_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoField_get_ReflectedType_m11919_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoField_ToString_m11928_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m11864(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 4, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m11864_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoField::CheckGeneric()
extern "C" void MonoField_CheckGeneric_m11932 (MonoField_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoField_get_DeclaringType_m11920_MethodInfo, __this);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m10365_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		InvalidOperationException_t1471 * L_2 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_2, (String_t*) &_stringLiteral1931, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_2);
	}

IL_0018:
	{
		return;
	}
}
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericMethod_t_il2cpp_TypeInfo;
// System.Reflection.MonoGenericMethod
#include "mscorlib_System_Reflection_MonoGenericMethodMethodDeclarations.h"

// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethodMethodDeclarations.h"
extern MethodInfo MonoMethod__ctor_m11945_MethodInfo;


// System.Void System.Reflection.MonoGenericMethod::.ctor()
extern MethodInfo MonoGenericMethod__ctor_m11933_MethodInfo;
extern "C" void MonoGenericMethod__ctor_m11933 (MonoGenericMethod_t * __this, MethodInfo* method)
{
	{
		MonoMethod__ctor_m11945(__this, /*hidden argument*/&MonoMethod__ctor_m11945_MethodInfo);
		InvalidOperationException_t1471 * L_0 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7992(L_0, /*hidden argument*/&InvalidOperationException__ctor_m7992_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericMethod::get_ReflectedType()
extern MethodInfo MonoGenericMethod_get_ReflectedType_m11934_MethodInfo;
extern "C" Type_t * MonoGenericMethod_get_ReflectedType_m11934 (MonoGenericMethod_t * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericMethod_get_ReflectedType_m11934_ftn) (MonoGenericMethod_t *);
	static MonoGenericMethod_get_ReflectedType_m11934_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericMethod_get_ReflectedType_m11934_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoGenericCMethod_t2022_il2cpp_TypeInfo;
// System.Reflection.MonoGenericCMethod
#include "mscorlib_System_Reflection_MonoGenericCMethodMethodDeclarations.h"

// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethodMethodDeclarations.h"
extern MethodInfo MonoCMethod__ctor_m11973_MethodInfo;


// System.Void System.Reflection.MonoGenericCMethod::.ctor()
extern MethodInfo MonoGenericCMethod__ctor_m11935_MethodInfo;
extern "C" void MonoGenericCMethod__ctor_m11935 (MonoGenericCMethod_t2022 * __this, MethodInfo* method)
{
	{
		MonoCMethod__ctor_m11973(__this, /*hidden argument*/&MonoCMethod__ctor_m11973_MethodInfo);
		InvalidOperationException_t1471 * L_0 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7992(L_0, /*hidden argument*/&InvalidOperationException__ctor_m7992_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Type System.Reflection.MonoGenericCMethod::get_ReflectedType()
extern MethodInfo MonoGenericCMethod_get_ReflectedType_m11936_MethodInfo;
extern "C" Type_t * MonoGenericCMethod_get_ReflectedType_m11936 (MonoGenericCMethod_t2022 * __this, MethodInfo* method)
{
	typedef Type_t * (*MonoGenericCMethod_get_ReflectedType_m11936_ftn) (MonoGenericCMethod_t2022 *);
	static MonoGenericCMethod_get_ReflectedType_m11936_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoGenericCMethod_get_ReflectedType_m11936_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoGenericCMethod::get_ReflectedType()");
	return _il2cpp_icall_func(__this);
}
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethodInfo_t2024_il2cpp_TypeInfo;
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfoMethodDeclarations.h"

extern MethodInfo MonoMethodInfo_get_method_info_m11937_MethodInfo;
extern MethodInfo MonoMethodInfo_GetMethodInfo_m11938_MethodInfo;
extern MethodInfo MonoMethodInfo_get_parameter_info_m11943_MethodInfo;


// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m11937 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t2024 * ___info, MethodInfo* method)
{
	typedef void (*MonoMethodInfo_get_method_info_m11937_ftn) (IntPtr_t, MonoMethodInfo_t2024 *);
	static MonoMethodInfo_get_method_info_m11937_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_method_info_m11937_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)");
	_il2cpp_icall_func(___handle, ___info);
}
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t2024  MonoMethodInfo_GetMethodInfo_m11938 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t2024  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_get_method_info_m11937(NULL /*static, unused*/, L_0, (&V_0), /*hidden argument*/&MonoMethodInfo_get_method_info_m11937_MethodInfo);
		MonoMethodInfo_t2024  L_1 = V_0;
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetDeclaringType_m11939_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m11939 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t2024  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t2024  L_1 = MonoMethodInfo_GetMethodInfo_m11938(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m11938_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___parent_0);
		return L_2;
	}
}
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetReturnType_m11940_MethodInfo;
extern "C" Type_t * MonoMethodInfo_GetReturnType_m11940 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t2024  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t2024  L_1 = MonoMethodInfo_GetMethodInfo_m11938(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m11938_MethodInfo);
		V_0 = L_1;
		Type_t * L_2 = ((&V_0)->___ret_1);
		return L_2;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetAttributes_m11941_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetAttributes_m11941 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t2024  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t2024  L_1 = MonoMethodInfo_GetMethodInfo_m11938(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m11938_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___attrs_2);
		return L_2;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern MethodInfo MonoMethodInfo_GetCallingConvention_m11942_MethodInfo;
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m11942 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MethodInfo* method)
{
	MonoMethodInfo_t2024  V_0 = {0};
	{
		IntPtr_t L_0 = ___handle;
		MonoMethodInfo_t2024  L_1 = MonoMethodInfo_GetMethodInfo_m11938(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m11938_MethodInfo);
		V_0 = L_1;
		int32_t L_2 = ((&V_0)->___callconv_4);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t1170* MonoMethodInfo_get_parameter_info_m11943 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method)
{
	typedef ParameterInfoU5BU5D_t1170* (*MonoMethodInfo_get_parameter_info_m11943_ftn) (IntPtr_t, MemberInfo_t *);
	static MonoMethodInfo_get_parameter_info_m11943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethodInfo_get_parameter_info_m11943_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)");
	return _il2cpp_icall_func(___handle, ___member);
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern MethodInfo MonoMethodInfo_GetParametersInfo_m11944_MethodInfo;
extern "C" ParameterInfoU5BU5D_t1170* MonoMethodInfo_GetParametersInfo_m11944 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, MethodInfo* method)
{
	{
		IntPtr_t L_0 = ___handle;
		MemberInfo_t * L_1 = ___member;
		ParameterInfoU5BU5D_t1170* L_2 = MonoMethodInfo_get_parameter_info_m11943(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/&MonoMethodInfo_get_parameter_info_m11943_MethodInfo);
		return L_2;
	}
}
// System.Reflection.MonoMethod
#include "mscorlib_System_Reflection_MonoMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoMethod_t_il2cpp_TypeInfo;

// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationException.h"
// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"
extern TypeInfo RuntimeMethodHandle_t1991_il2cpp_TypeInfo;
extern TypeInfo TargetInvocationException_t2033_il2cpp_TypeInfo;
extern TypeInfo ThreadAbortException_t2253_il2cpp_TypeInfo;
extern TypeInfo MethodAccessException_t2305_il2cpp_TypeInfo;
extern TypeInfo PreserveSigAttribute_t2056_il2cpp_TypeInfo;
extern TypeInfo DllImportAttribute_t1819_il2cpp_TypeInfo;
// System.Reflection.TargetInvocationException
#include "mscorlib_System_Reflection_TargetInvocationExceptionMethodDeclarations.h"
// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttributeMethodDeclarations.h"
extern MethodInfo RuntimeMethodHandle__ctor_m13822_MethodInfo;
extern MethodInfo MonoMethod_get_name_m11946_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethod_m11971_MethodInfo;
extern MethodInfo MonoMethod_GetGenericArguments_m11969_MethodInfo;
extern MethodInfo MonoMethod_get_DeclaringType_m11957_MethodInfo;
extern MethodInfo MonoMethod_get_base_definition_m11947_MethodInfo;
extern MethodInfo TargetParameterCountException__ctor_m12051_MethodInfo;
extern MethodInfo MonoMethod_get_ContainsGenericParameters_m11972_MethodInfo;
extern MethodInfo MonoMethod_InternalInvoke_m11951_MethodInfo;
extern MethodInfo TargetInvocationException__ctor_m12048_MethodInfo;
extern MethodInfo PreserveSigAttribute__ctor_m12079_MethodInfo;
extern MethodInfo MonoMethod_GetDllImportAttribute_m11962_MethodInfo;
extern MethodInfo Type_get_IsClass_m10326_MethodInfo;
extern MethodInfo Type_get_IsPrimitive_m6983_MethodInfo;
extern MethodInfo Type_get_IsNested_m10372_MethodInfo;
extern MethodInfo MonoMethod_get_ReturnType_m11949_MethodInfo;
extern MethodInfo MonoMethod_ShouldPrintFullName_m11964_MethodInfo;
extern MethodInfo MonoMethod_get_Name_m11958_MethodInfo;
extern MethodInfo MonoMethod_GetParameters_m11950_MethodInfo;
extern MethodInfo MonoMethod_get_CallingConvention_m11955_MethodInfo;
extern MethodInfo MonoMethod_get_IsGenericMethodDefinition_m11970_MethodInfo;
extern MethodInfo MonoMethod_get_ReflectedType_m11956_MethodInfo;
extern MethodInfo MonoMethod_ToString_m11965_MethodInfo;
extern MethodInfo ArgumentNullException__ctor_m13186_MethodInfo;
extern MethodInfo MonoMethod_MakeGenericMethod_impl_m11968_MethodInfo;


// System.Void System.Reflection.MonoMethod::.ctor()
extern "C" void MonoMethod__ctor_m11945 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		MethodInfo__ctor_m11880(__this, /*hidden argument*/&MethodInfo__ctor_m11880_MethodInfo);
		return;
	}
}
// System.String System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)
extern "C" String_t* MonoMethod_get_name_m11946 (Object_t * __this /* static, unused */, MethodBase_t1169 * ___method, MethodInfo* method)
{
	typedef String_t* (*MonoMethod_get_name_m11946_ftn) (MethodBase_t1169 *);
	static MonoMethod_get_name_m11946_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_name_m11946_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_name(System.Reflection.MethodBase)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MonoMethod System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)
extern "C" MonoMethod_t * MonoMethod_get_base_definition_m11947 (Object_t * __this /* static, unused */, MonoMethod_t * ___method, MethodInfo* method)
{
	typedef MonoMethod_t * (*MonoMethod_get_base_definition_m11947_ftn) (MonoMethod_t *);
	static MonoMethod_get_base_definition_m11947_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_base_definition_m11947_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_base_definition(System.Reflection.MonoMethod)");
	return _il2cpp_icall_func(___method);
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::GetBaseDefinition()
extern MethodInfo MonoMethod_GetBaseDefinition_m11948_MethodInfo;
extern "C" MethodInfo_t * MonoMethod_GetBaseDefinition_m11948 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		MonoMethod_t * L_0 = MonoMethod_get_base_definition_m11947(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_base_definition_m11947_MethodInfo);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReturnType()
extern "C" Type_t * MonoMethod_get_ReturnType_m11949 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetReturnType_m11940(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetReturnType_m11940_MethodInfo);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethod::GetParameters()
extern TypeInfo* ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1170* MonoMethod_GetParameters_m11950 (MonoMethod_t * __this, MethodInfo* method)
{
	static bool MonoMethod_GetParameters_m11950_init;
	if (!MonoMethod_GetParameters_m11950_init)
	{
		ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t1170_0_0_0);
		MonoMethod_GetParameters_m11950_init = true;
	}
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	ParameterInfoU5BU5D_t1170* V_1 = {0};
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t1170* L_1 = MonoMethodInfo_GetParametersInfo_m11944(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m11944_MethodInfo);
		V_0 = L_1;
		ParameterInfoU5BU5D_t1170* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((ParameterInfoU5BU5D_t1170*)SZArrayNew(ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var, (((int32_t)(((Array_t *)L_2)->max_length)))));
		ParameterInfoU5BU5D_t1170* L_3 = V_0;
		ParameterInfoU5BU5D_t1170* L_4 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m8174_MethodInfo, L_3, (Array_t *)(Array_t *)L_4, 0);
		ParameterInfoU5BU5D_t1170* L_5 = V_1;
		return L_5;
	}
}
// System.Object System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoMethod_InternalInvoke_m11951 (MonoMethod_t * __this, Object_t * ___obj, ObjectU5BU5D_t164* ___parameters, Exception_t154 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoMethod_InternalInvoke_m11951_ftn) (MonoMethod_t *, Object_t *, ObjectU5BU5D_t164*, Exception_t154 **);
	static MonoMethod_InternalInvoke_m11951_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_InternalInvoke_m11951_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoMethod_Invoke_m11952_MethodInfo;
extern "C" Object_t * MonoMethod_Invoke_m11952 (MonoMethod_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___parameters, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t154 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t154 * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Binder_t1162 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		Binder_t1162 * L_1 = Binder_get_DefaultBinder_m11837(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m11837_MethodInfo);
		___binder = L_1;
	}

IL_000c:
	{
		IntPtr_t L_2 = (__this->___mhandle_0);
		ParameterInfoU5BU5D_t1170* L_3 = MonoMethodInfo_GetParametersInfo_m11944(NULL /*static, unused*/, L_2, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m11944_MethodInfo);
		V_0 = L_3;
		ObjectU5BU5D_t164* L_4 = ___parameters;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((Array_t *)L_5)->max_length))))
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		ObjectU5BU5D_t164* L_6 = ___parameters;
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		ObjectU5BU5D_t164* L_7 = ___parameters;
		NullCheck(L_7);
		ParameterInfoU5BU5D_t1170* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)(((Array_t *)L_7)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_003a;
		}
	}

IL_002f:
	{
		TargetParameterCountException_t2034 * L_9 = (TargetParameterCountException_t2034 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t2034_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m12051(L_9, (String_t*) &_stringLiteral1932, /*hidden argument*/&TargetParameterCountException__ctor_m12051_MethodInfo);
		il2cpp_codegen_raise_exception(L_9);
	}

IL_003a:
	{
		int32_t L_10 = ___invokeAttr;
		if (((int32_t)((int32_t)L_10&(int32_t)((int32_t)65536))))
		{
			goto IL_005d;
		}
	}
	{
		Binder_t1162 * L_11 = ___binder;
		ObjectU5BU5D_t164* L_12 = ___parameters;
		ParameterInfoU5BU5D_t1170* L_13 = V_0;
		CultureInfo_t1165 * L_14 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		bool L_15 = Binder_ConvertArgs_m11838(NULL /*static, unused*/, L_11, L_12, L_13, L_14, /*hidden argument*/&Binder_ConvertArgs_m11838_MethodInfo);
		if (L_15)
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_t521 * L_16 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_16, (String_t*) &_stringLiteral1933, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_16);
	}

IL_005b:
	{
		goto IL_0089;
	}

IL_005d:
	{
		V_1 = 0;
		goto IL_0083;
	}

IL_0061:
	{
		ObjectU5BU5D_t164* L_17 = ___parameters;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		int32_t L_19 = L_18;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)));
		Type_t * L_20 = Object_GetType_m568((*(Object_t **)(Object_t **)SZArrayLdElema(L_17, L_19)), /*hidden argument*/&Object_GetType_m568_MethodInfo);
		ParameterInfoU5BU5D_t1170* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_21, L_23)));
		Type_t * L_24 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_21, L_23)));
		if ((((Object_t*)(Type_t *)L_20) == ((Object_t*)(Type_t *)L_24)))
		{
			goto IL_007f;
		}
	}
	{
		ArgumentException_t521 * L_25 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_25, (String_t*) &_stringLiteral1932, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_25);
	}

IL_007f:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_0083:
	{
		int32_t L_27 = V_1;
		ParameterInfoU5BU5D_t1170* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)(((Array_t *)L_28)->max_length))))))
		{
			goto IL_0061;
		}
	}

IL_0089:
	{
		bool L_29 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_ContainsGenericParameters_m11972_MethodInfo, __this);
		if (!L_29)
		{
			goto IL_009c;
		}
	}
	{
		InvalidOperationException_t1471 * L_30 = (InvalidOperationException_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t1471_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m7984(L_30, (String_t*) &_stringLiteral1934, /*hidden argument*/&InvalidOperationException__ctor_m7984_MethodInfo);
		il2cpp_codegen_raise_exception(L_30);
	}

IL_009c:
	{
		V_3 = NULL;
	}

IL_009e:
	try
	{ // begin try (depth: 1)
		Object_t * L_31 = ___obj;
		ObjectU5BU5D_t164* L_32 = ___parameters;
		Object_t * L_33 = MonoMethod_InternalInvoke_m11951(__this, L_31, L_32, (&V_2), /*hidden argument*/&MonoMethod_InternalInvoke_m11951_MethodInfo);
		V_3 = L_33;
		goto IL_00c2;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&ThreadAbortException_t2253_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00ac;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t2305_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b1;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00b6;
		throw e;
	}

CATCH_00ac:
	{ // begin catch(System.Threading.ThreadAbortException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b1:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00c2;
	} // end catch (depth: 1)

CATCH_00b6:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t154 *)__exception_local);
		Exception_t154 * L_34 = V_4;
		TargetInvocationException_t2033 * L_35 = (TargetInvocationException_t2033 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t2033_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m12048(L_35, L_34, /*hidden argument*/&TargetInvocationException__ctor_m12048_MethodInfo);
		il2cpp_codegen_raise_exception(L_35);
		goto IL_00c2;
	} // end catch (depth: 1)

IL_00c2:
	{
		Exception_t154 * L_36 = V_2;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		Exception_t154 * L_37 = V_2;
		il2cpp_codegen_raise_exception(L_37);
	}

IL_00c7:
	{
		Object_t * L_38 = V_3;
		return L_38;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoMethod::get_MethodHandle()
extern MethodInfo MonoMethod_get_MethodHandle_m11953_MethodInfo;
extern "C" RuntimeMethodHandle_t1991  MonoMethod_get_MethodHandle_m11953 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		RuntimeMethodHandle_t1991  L_1 = {0};
		RuntimeMethodHandle__ctor_m13822(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m13822_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoMethod::get_Attributes()
extern MethodInfo MonoMethod_get_Attributes_m11954_MethodInfo;
extern "C" int32_t MonoMethod_get_Attributes_m11954 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m11941(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m11941_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoMethod::get_CallingConvention()
extern "C" int32_t MonoMethod_get_CallingConvention_m11955 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m11942(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m11942_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoMethod::get_ReflectedType()
extern "C" Type_t * MonoMethod_get_ReflectedType_m11956 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_2);
		return L_0;
	}
}
// System.Type System.Reflection.MonoMethod::get_DeclaringType()
extern "C" Type_t * MonoMethod_get_DeclaringType_m11957 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_0);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m11939(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m11939_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoMethod::get_Name()
extern "C" String_t* MonoMethod_get_Name_m11958 (MonoMethod_t * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_1);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_1);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m11946(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m11946_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoMethod_IsDefined_m11959_MethodInfo;
extern "C" bool MonoMethod_IsDefined_m11959 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m11960_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoMethod_GetCustomAttributes_m11960 (MonoMethod_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_1 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoMethod_GetCustomAttributes_m11961_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoMethod_GetCustomAttributes_m11961 (MonoMethod_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.Runtime.InteropServices.DllImportAttribute System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)
extern "C" DllImportAttribute_t1819 * MonoMethod_GetDllImportAttribute_m11962 (Object_t * __this /* static, unused */, IntPtr_t ___mhandle, MethodInfo* method)
{
	typedef DllImportAttribute_t1819 * (*MonoMethod_GetDllImportAttribute_m11962_ftn) (IntPtr_t);
	static MonoMethod_GetDllImportAttribute_m11962_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetDllImportAttribute_m11962_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetDllImportAttribute(System.IntPtr)");
	return _il2cpp_icall_func(___mhandle);
}
// System.Object[] System.Reflection.MonoMethod::GetPseudoCustomAttributes()
extern MethodInfo MonoMethod_GetPseudoCustomAttributes_m11963_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t164* MonoMethod_GetPseudoCustomAttributes_m11963 (MonoMethod_t * __this, MethodInfo* method)
{
	static bool MonoMethod_GetPseudoCustomAttributes_m11963_init;
	if (!MonoMethod_GetPseudoCustomAttributes_m11963_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		MonoMethod_GetPseudoCustomAttributes_m11963_init = true;
	}
	int32_t V_0 = 0;
	MonoMethodInfo_t2024  V_1 = {0};
	ObjectU5BU5D_t164* V_2 = {0};
	DllImportAttribute_t1819 * V_3 = {0};
	{
		V_0 = 0;
		IntPtr_t L_0 = (__this->___mhandle_0);
		MonoMethodInfo_t2024  L_1 = MonoMethodInfo_GetMethodInfo_m11938(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetMethodInfo_m11938_MethodInfo);
		V_1 = L_1;
		int32_t L_2 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)128))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_0021:
	{
		int32_t L_4 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_4&(int32_t)((int32_t)8192))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0034:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0039;
		}
	}
	{
		return (ObjectU5BU5D_t164*)NULL;
	}

IL_0039:
	{
		int32_t L_7 = V_0;
		V_2 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, L_7));
		V_0 = 0;
		int32_t L_8 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_8&(int32_t)((int32_t)128))))
		{
			goto IL_005d;
		}
	}
	{
		ObjectU5BU5D_t164* L_9 = V_2;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
		PreserveSigAttribute_t2056 * L_12 = (PreserveSigAttribute_t2056 *)il2cpp_codegen_object_new (InitializedTypeInfo(&PreserveSigAttribute_t2056_il2cpp_TypeInfo));
		PreserveSigAttribute__ctor_m12079(L_12, /*hidden argument*/&PreserveSigAttribute__ctor_m12079_MethodInfo);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_11);
		ArrayElementTypeCheck (L_9, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_9, L_11)) = (Object_t *)L_12;
	}

IL_005d:
	{
		int32_t L_13 = ((&V_1)->___attrs_2);
		if (!((int32_t)((int32_t)L_13&(int32_t)((int32_t)8192))))
		{
			goto IL_0096;
		}
	}
	{
		IntPtr_t L_14 = (__this->___mhandle_0);
		DllImportAttribute_t1819 * L_15 = MonoMethod_GetDllImportAttribute_m11962(NULL /*static, unused*/, L_14, /*hidden argument*/&MonoMethod_GetDllImportAttribute_m11962_MethodInfo);
		V_3 = L_15;
		int32_t L_16 = ((&V_1)->___iattrs_3);
		if (!((int32_t)((int32_t)L_16&(int32_t)((int32_t)128))))
		{
			goto IL_008e;
		}
	}
	{
		DllImportAttribute_t1819 * L_17 = V_3;
		NullCheck(L_17);
		L_17->___PreserveSig_5 = 1;
	}

IL_008e:
	{
		ObjectU5BU5D_t164* L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		V_0 = ((int32_t)((int32_t)L_20+(int32_t)1));
		DllImportAttribute_t1819 * L_21 = V_3;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, L_20);
		ArrayElementTypeCheck (L_18, L_21);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_18, L_20)) = (Object_t *)L_21;
	}

IL_0096:
	{
		ObjectU5BU5D_t164* L_22 = V_2;
		return L_22;
	}
}
// System.Boolean System.Reflection.MonoMethod::ShouldPrintFullName(System.Type)
extern "C" bool MonoMethod_ShouldPrintFullName_m11964 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	{
		Type_t * L_0 = ___type;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsClass_m10326_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		Type_t * L_2 = ___type;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPointer_m10332_MethodInfo, L_2);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_4 = ___type;
		NullCheck(L_4);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_4);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m6983_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_002d;
		}
	}
	{
		Type_t * L_7 = ___type;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_7);
		NullCheck(L_8);
		bool L_9 = Type_get_IsNested_m10372(L_8, /*hidden argument*/&Type_get_IsNested_m10372_MethodInfo);
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B5_0 = 0;
	}

IL_002e:
	{
		G_B7_0 = G_B5_0;
		goto IL_0031;
	}

IL_0030:
	{
		G_B7_0 = 1;
	}

IL_0031:
	{
		G_B9_0 = G_B7_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B9_0 = 0;
	}

IL_0034:
	{
		return G_B9_0;
	}
}
// System.String System.Reflection.MonoMethod::ToString()
extern "C" String_t* MonoMethod_ToString_m11965 (MonoMethod_t * __this, MethodInfo* method)
{
	StringBuilder_t480 * V_0 = {0};
	Type_t * V_1 = {0};
	TypeU5BU5D_t913* V_2 = {0};
	int32_t V_3 = 0;
	ParameterInfoU5BU5D_t1170* V_4 = {0};
	int32_t V_5 = 0;
	Type_t * V_6 = {0};
	bool V_7 = false;
	{
		StringBuilder_t480 * L_0 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m2206(L_0, /*hidden argument*/&StringBuilder__ctor_m2206_MethodInfo);
		V_0 = L_0;
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReturnType_m11949_MethodInfo, __this);
		V_1 = L_1;
		Type_t * L_2 = V_1;
		bool L_3 = MonoMethod_ShouldPrintFullName_m11964(NULL /*static, unused*/, L_2, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m11964_MethodInfo);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		StringBuilder_t480 * L_4 = V_0;
		Type_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10362_MethodInfo, L_5);
		NullCheck(L_4);
		StringBuilder_Append_m6931(L_4, L_6, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		goto IL_0031;
	}

IL_0024:
	{
		StringBuilder_t480 * L_7 = V_0;
		Type_t * L_8 = V_1;
		NullCheck(L_8);
		String_t* L_9 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_8);
		NullCheck(L_7);
		StringBuilder_Append_m6931(L_7, L_9, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0031:
	{
		StringBuilder_t480 * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_Append_m6931(L_10, (String_t*) &_stringLiteral260, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_11 = V_0;
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m11958_MethodInfo, __this);
		NullCheck(L_11);
		StringBuilder_Append_m6931(L_11, L_12, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		bool L_13 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m11971_MethodInfo, __this);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		TypeU5BU5D_t913* L_14 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&MonoMethod_GetGenericArguments_m11969_MethodInfo, __this);
		V_2 = L_14;
		StringBuilder_t480 * L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_Append_m6931(L_15, (String_t*) &_stringLiteral550, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		V_3 = 0;
		goto IL_008c;
	}

IL_0069:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t480 * L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_Append_m6931(L_17, (String_t*) &_stringLiteral128, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0079:
	{
		StringBuilder_t480 * L_18 = V_0;
		TypeU5BU5D_t913* L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		int32_t L_21 = L_20;
		NullCheck((*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, (*(Type_t **)(Type_t **)SZArrayLdElema(L_19, L_21)));
		NullCheck(L_18);
		StringBuilder_Append_m6931(L_18, L_22, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		int32_t L_23 = V_3;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_008c:
	{
		int32_t L_24 = V_3;
		TypeU5BU5D_t913* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)(((Array_t *)L_25)->max_length))))))
		{
			goto IL_0069;
		}
	}
	{
		StringBuilder_t480 * L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m6931(L_26, (String_t*) &_stringLiteral551, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_009e:
	{
		StringBuilder_t480 * L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_Append_m6931(L_27, (String_t*) &_stringLiteral558, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		ParameterInfoU5BU5D_t1170* L_28 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MonoMethod_GetParameters_m11950_MethodInfo, __this);
		V_4 = L_28;
		V_5 = 0;
		goto IL_0127;
	}

IL_00b7:
	{
		int32_t L_29 = V_5;
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		StringBuilder_t480 * L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_Append_m6931(L_30, (String_t*) &_stringLiteral559, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_00c8:
	{
		ParameterInfoU5BU5D_t1170* L_31 = V_4;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, L_32);
		int32_t L_33 = L_32;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_31, L_33)));
		Type_t * L_34 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_31, L_33)));
		V_6 = L_34;
		Type_t * L_35 = V_6;
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsByRef_m10325_MethodInfo, L_35);
		V_7 = L_36;
		bool L_37 = V_7;
		if (!L_37)
		{
			goto IL_00ea;
		}
	}
	{
		Type_t * L_38 = V_6;
		NullCheck(L_38);
		Type_t * L_39 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_38);
		V_6 = L_39;
	}

IL_00ea:
	{
		Type_t * L_40 = V_6;
		bool L_41 = MonoMethod_ShouldPrintFullName_m11964(NULL /*static, unused*/, L_40, /*hidden argument*/&MonoMethod_ShouldPrintFullName_m11964_MethodInfo);
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t480 * L_42 = V_0;
		Type_t * L_43 = V_6;
		NullCheck(L_43);
		String_t* L_44 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10362_MethodInfo, L_43);
		NullCheck(L_42);
		StringBuilder_Append_m6931(L_42, L_44, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		goto IL_0111;
	}

IL_0103:
	{
		StringBuilder_t480 * L_45 = V_0;
		Type_t * L_46 = V_6;
		NullCheck(L_46);
		String_t* L_47 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_46);
		NullCheck(L_45);
		StringBuilder_Append_m6931(L_45, L_47, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0111:
	{
		bool L_48 = V_7;
		if (!L_48)
		{
			goto IL_0121;
		}
	}
	{
		StringBuilder_t480 * L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_Append_m6931(L_49, (String_t*) &_stringLiteral1624, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0121:
	{
		int32_t L_50 = V_5;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)1));
	}

IL_0127:
	{
		int32_t L_51 = V_5;
		ParameterInfoU5BU5D_t1170* L_52 = V_4;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)(((Array_t *)L_52)->max_length))))))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_53 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoMethod_get_CallingConvention_m11955_MethodInfo, __this);
		if (!((int32_t)((int32_t)L_53&(int32_t)2)))
		{
			goto IL_0158;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_54 = V_4;
		NullCheck(L_54);
		if ((((int32_t)(((int32_t)(((Array_t *)L_54)->max_length)))) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t480 * L_55 = V_0;
		NullCheck(L_55);
		StringBuilder_Append_m6931(L_55, (String_t*) &_stringLiteral559, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_014c:
	{
		StringBuilder_t480 * L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_Append_m6931(L_56, (String_t*) &_stringLiteral1935, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0158:
	{
		StringBuilder_t480 * L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_Append_m6931(L_57, (String_t*) &_stringLiteral215, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_58 = V_0;
		NullCheck(L_58);
		String_t* L_59 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_58);
		return L_59;
	}
}
// System.Void System.Reflection.MonoMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoMethod_GetObjectData_m11966_MethodInfo;
extern "C" void MonoMethod_GetObjectData_m11966 (MonoMethod_t * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	TypeU5BU5D_t913* V_0 = {0};
	TypeU5BU5D_t913* G_B4_0 = {0};
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m11971_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethodDefinition_m11970_MethodInfo, __this);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		TypeU5BU5D_t913* L_2 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&MonoMethod_GetGenericArguments_m11969_MethodInfo, __this);
		G_B4_0 = L_2;
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = ((TypeU5BU5D_t913*)(NULL));
	}

IL_0019:
	{
		V_0 = G_B4_0;
		SerializationInfo_t1123 * L_3 = ___info;
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_get_Name_m11958_MethodInfo, __this);
		Type_t * L_5 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_ReflectedType_m11956_MethodInfo, __this);
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoMethod_ToString_m11965_MethodInfo, __this);
		TypeU5BU5D_t913* L_7 = V_0;
		MemberInfoSerializationHolder_Serialize_m11865(NULL /*static, unused*/, L_3, L_4, L_5, L_6, 8, L_7, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m11865_MethodInfo);
		return;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod(System.Type[])
extern MethodInfo MonoMethod_MakeGenericMethod_m11967_MethodInfo;
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_m11967 (MonoMethod_t * __this, TypeU5BU5D_t913* ___methodInstantiation, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t913* V_1 = {0};
	int32_t V_2 = 0;
	MethodInfo_t * V_3 = {0};
	{
		TypeU5BU5D_t913* L_0 = ___methodInstantiation;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1936, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_000e:
	{
		TypeU5BU5D_t913* L_2 = ___methodInstantiation;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		TypeU5BU5D_t913* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_3, L_5));
		Type_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t1172 * L_7 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m13186(L_7, /*hidden argument*/&ArgumentNullException__ctor_m13186_MethodInfo);
		il2cpp_codegen_raise_exception(L_7);
	}

IL_0021:
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		TypeU5BU5D_t913* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)(((Array_t *)L_10)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		TypeU5BU5D_t913* L_11 = ___methodInstantiation;
		MethodInfo_t * L_12 = MonoMethod_MakeGenericMethod_impl_m11968(__this, L_11, /*hidden argument*/&MonoMethod_MakeGenericMethod_impl_m11968_MethodInfo);
		V_3 = L_12;
		MethodInfo_t * L_13 = V_3;
		if (L_13)
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t913* L_14 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&MonoMethod_GetGenericArguments_m11969_MethodInfo, __this);
		NullCheck(L_14);
		int32_t L_15 = (((int32_t)(((Array_t *)L_14)->max_length)));
		Object_t * L_16 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_15);
		TypeU5BU5D_t913* L_17 = ___methodInstantiation;
		NullCheck(L_17);
		int32_t L_18 = (((int32_t)(((Array_t *)L_17)->max_length)));
		Object_t * L_19 = Box(InitializedTypeInfo(&Int32_t141_il2cpp_TypeInfo), &L_18);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_20 = String_Format_m4796(NULL /*static, unused*/, (String_t*) &_stringLiteral1937, L_16, L_19, /*hidden argument*/&String_Format_m4796_MethodInfo);
		ArgumentException_t521 * L_21 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_21, L_20, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
	}

IL_005b:
	{
		MethodInfo_t * L_22 = V_3;
		return L_22;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])
extern "C" MethodInfo_t * MonoMethod_MakeGenericMethod_impl_m11968 (MonoMethod_t * __this, TypeU5BU5D_t913* ___types, MethodInfo* method)
{
	typedef MethodInfo_t * (*MonoMethod_MakeGenericMethod_impl_m11968_ftn) (MonoMethod_t *, TypeU5BU5D_t913*);
	static MonoMethod_MakeGenericMethod_impl_m11968_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_MakeGenericMethod_impl_m11968_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::MakeGenericMethod_impl(System.Type[])");
	return _il2cpp_icall_func(__this, ___types);
}
// System.Type[] System.Reflection.MonoMethod::GetGenericArguments()
extern "C" TypeU5BU5D_t913* MonoMethod_GetGenericArguments_m11969 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef TypeU5BU5D_t913* (*MonoMethod_GetGenericArguments_m11969_ftn) (MonoMethod_t *);
	static MonoMethod_GetGenericArguments_m11969_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_GetGenericArguments_m11969_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::GetGenericArguments()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethodDefinition()
extern "C" bool MonoMethod_get_IsGenericMethodDefinition_m11970 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethodDefinition_m11970_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethodDefinition_m11970_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethodDefinition_m11970_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethodDefinition()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_IsGenericMethod()
extern "C" bool MonoMethod_get_IsGenericMethod_m11971 (MonoMethod_t * __this, MethodInfo* method)
{
	typedef bool (*MonoMethod_get_IsGenericMethod_m11971_ftn) (MonoMethod_t *);
	static MonoMethod_get_IsGenericMethod_m11971_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoMethod_get_IsGenericMethod_m11971_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoMethod::get_IsGenericMethod()");
	return _il2cpp_icall_func(__this);
}
// System.Boolean System.Reflection.MonoMethod::get_ContainsGenericParameters()
extern "C" bool MonoMethod_get_ContainsGenericParameters_m11972 (MonoMethod_t * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	TypeU5BU5D_t913* V_1 = {0};
	int32_t V_2 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(&MonoMethod_get_IsGenericMethod_m11971_MethodInfo, __this);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		TypeU5BU5D_t913* L_1 = (TypeU5BU5D_t913*)VirtFuncInvoker0< TypeU5BU5D_t913* >::Invoke(&MonoMethod_GetGenericArguments_m11969_MethodInfo, __this);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		TypeU5BU5D_t913* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_0 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_2, L_4));
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m10365_MethodInfo, L_5);
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_8 = V_2;
		TypeU5BU5D_t913* L_9 = V_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_002b:
	{
		Type_t * L_10 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoMethod_get_DeclaringType_m11957_MethodInfo, __this);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m10365_MethodInfo, L_10);
		return L_11;
	}
}
// System.Reflection.MonoCMethod
#include "mscorlib_System_Reflection_MonoCMethod.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoCMethod_t2023_il2cpp_TypeInfo;

// System.MemberAccessException
#include "mscorlib_System_MemberAccessException.h"
extern TypeInfo MemberAccessException_t2299_il2cpp_TypeInfo;
// System.MemberAccessException
#include "mscorlib_System_MemberAccessExceptionMethodDeclarations.h"
extern MethodInfo MonoCMethod_GetParameters_m11974_MethodInfo;
extern MethodInfo MonoCMethod_get_DeclaringType_m11982_MethodInfo;
extern MethodInfo MemberAccessException__ctor_m13614_MethodInfo;
extern MethodInfo Type_get_IsAbstract_m10323_MethodInfo;
extern MethodInfo MonoCMethod_InternalInvoke_m11975_MethodInfo;
extern MethodInfo MonoCMethod_Invoke_m11976_MethodInfo;
extern MethodInfo MonoCMethod_get_Name_m11983_MethodInfo;
extern MethodInfo MonoCMethod_get_CallingConvention_m11980_MethodInfo;
extern MethodInfo MonoCMethod_get_ReflectedType_m11981_MethodInfo;
extern MethodInfo MonoCMethod_ToString_m11987_MethodInfo;


// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m11973 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		ConstructorInfo__ctor_m11841(__this, /*hidden argument*/&ConstructorInfo__ctor_m11841_MethodInfo);
		return;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t1170* MonoCMethod_GetParameters_m11974 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		ParameterInfoU5BU5D_t1170* L_1 = MonoMethodInfo_GetParametersInfo_m11944(NULL /*static, unused*/, L_0, __this, /*hidden argument*/&MonoMethodInfo_GetParametersInfo_m11944_MethodInfo);
		return L_1;
	}
}
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m11975 (MonoCMethod_t2023 * __this, Object_t * ___obj, ObjectU5BU5D_t164* ___parameters, Exception_t154 ** ___exc, MethodInfo* method)
{
	typedef Object_t * (*MonoCMethod_InternalInvoke_m11975_ftn) (MonoCMethod_t2023 *, Object_t *, ObjectU5BU5D_t164*, Exception_t154 **);
	static MonoCMethod_InternalInvoke_m11975_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoCMethod_InternalInvoke_m11975_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)");
	return _il2cpp_icall_func(__this, ___obj, ___parameters, ___exc);
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m11976 (MonoCMethod_t2023 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___parameters, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	int32_t V_1 = 0;
	Exception_t154 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t154 * V_4 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	Object_t * G_B31_0 = {0};
	{
		Binder_t1162 * L_0 = ___binder;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		Binder_t1162 * L_1 = Binder_get_DefaultBinder_m11837(NULL /*static, unused*/, /*hidden argument*/&Binder_get_DefaultBinder_m11837_MethodInfo);
		___binder = L_1;
	}

IL_000c:
	{
		ParameterInfoU5BU5D_t1170* L_2 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MonoCMethod_GetParameters_m11974_MethodInfo, __this);
		V_0 = L_2;
		ObjectU5BU5D_t164* L_3 = ___parameters;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)(((Array_t *)L_4)->max_length))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		ObjectU5BU5D_t164* L_5 = ___parameters;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		ObjectU5BU5D_t164* L_6 = ___parameters;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t1170* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)(((Array_t *)L_6)->max_length)))) == ((int32_t)(((int32_t)(((Array_t *)L_7)->max_length))))))
		{
			goto IL_0034;
		}
	}

IL_0029:
	{
		TargetParameterCountException_t2034 * L_8 = (TargetParameterCountException_t2034 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetParameterCountException_t2034_il2cpp_TypeInfo));
		TargetParameterCountException__ctor_m12051(L_8, (String_t*) &_stringLiteral1932, /*hidden argument*/&TargetParameterCountException__ctor_m12051_MethodInfo);
		il2cpp_codegen_raise_exception(L_8);
	}

IL_0034:
	{
		int32_t L_9 = ___invokeAttr;
		if (((int32_t)((int32_t)L_9&(int32_t)((int32_t)65536))))
		{
			goto IL_0057;
		}
	}
	{
		Binder_t1162 * L_10 = ___binder;
		ObjectU5BU5D_t164* L_11 = ___parameters;
		ParameterInfoU5BU5D_t1170* L_12 = V_0;
		CultureInfo_t1165 * L_13 = ___culture;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Binder_t1162_il2cpp_TypeInfo));
		bool L_14 = Binder_ConvertArgs_m11838(NULL /*static, unused*/, L_10, L_11, L_12, L_13, /*hidden argument*/&Binder_ConvertArgs_m11838_MethodInfo);
		if (L_14)
		{
			goto IL_0055;
		}
	}
	{
		ArgumentException_t521 * L_15 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_15, (String_t*) &_stringLiteral1933, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_0055:
	{
		goto IL_0083;
	}

IL_0057:
	{
		V_1 = 0;
		goto IL_007d;
	}

IL_005b:
	{
		ObjectU5BU5D_t164* L_16 = ___parameters;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_17);
		int32_t L_18 = L_17;
		NullCheck((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)));
		Type_t * L_19 = Object_GetType_m568((*(Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)), /*hidden argument*/&Object_GetType_m568_MethodInfo);
		ParameterInfoU5BU5D_t1170* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, L_21);
		int32_t L_22 = L_21;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_20, L_22)));
		Type_t * L_23 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_20, L_22)));
		if ((((Object_t*)(Type_t *)L_19) == ((Object_t*)(Type_t *)L_23)))
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_t521 * L_24 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_24, (String_t*) &_stringLiteral1932, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_24);
	}

IL_0079:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)((int32_t)L_25+(int32_t)1));
	}

IL_007d:
	{
		int32_t L_26 = V_1;
		ParameterInfoU5BU5D_t1170* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)(((Array_t *)L_27)->max_length))))))
		{
			goto IL_005b;
		}
	}

IL_0083:
	{
		Object_t * L_28 = ___obj;
		if (L_28)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_29 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m11982_MethodInfo, __this);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_ContainsGenericParameters_m10365_MethodInfo, L_29);
		if (!L_30)
		{
			goto IL_00ae;
		}
	}
	{
		Type_t * L_31 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m11982_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_32 = String_Concat_m407(NULL /*static, unused*/, (String_t*) &_stringLiteral1938, L_31, (String_t*) &_stringLiteral1939, /*hidden argument*/&String_Concat_m407_MethodInfo);
		MemberAccessException_t2299 * L_33 = (MemberAccessException_t2299 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t2299_il2cpp_TypeInfo));
		MemberAccessException__ctor_m13614(L_33, L_32, /*hidden argument*/&MemberAccessException__ctor_m13614_MethodInfo);
		il2cpp_codegen_raise_exception(L_33);
	}

IL_00ae:
	{
		int32_t L_34 = ___invokeAttr;
		if (!((int32_t)((int32_t)L_34&(int32_t)((int32_t)512))))
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_35 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m11982_MethodInfo, __this);
		NullCheck(L_35);
		bool L_36 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsAbstract_m10323_MethodInfo, L_35);
		if (!L_36)
		{
			goto IL_00da;
		}
	}
	{
		Type_t * L_37 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_DeclaringType_m11982_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_38 = String_Format_m2378(NULL /*static, unused*/, (String_t*) &_stringLiteral1940, L_37, /*hidden argument*/&String_Format_m2378_MethodInfo);
		MemberAccessException_t2299 * L_39 = (MemberAccessException_t2299 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MemberAccessException_t2299_il2cpp_TypeInfo));
		MemberAccessException__ctor_m13614(L_39, L_38, /*hidden argument*/&MemberAccessException__ctor_m13614_MethodInfo);
		il2cpp_codegen_raise_exception(L_39);
	}

IL_00da:
	{
		V_2 = (Exception_t154 *)NULL;
		V_3 = NULL;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		Object_t * L_40 = ___obj;
		ObjectU5BU5D_t164* L_41 = ___parameters;
		Object_t * L_42 = MonoCMethod_InternalInvoke_m11975(__this, L_40, L_41, (&V_2), /*hidden argument*/&MonoCMethod_InternalInvoke_m11975_MethodInfo);
		V_3 = L_42;
		goto IL_00fd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&MethodAccessException_t2305_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00ec;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t154_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_00f1;
		throw e;
	}

CATCH_00ec:
	{ // begin catch(System.MethodAccessException)
		il2cpp_codegen_raise_exception(__exception_local);
		goto IL_00fd;
	} // end catch (depth: 1)

CATCH_00f1:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t154 *)__exception_local);
		Exception_t154 * L_43 = V_4;
		TargetInvocationException_t2033 * L_44 = (TargetInvocationException_t2033 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t2033_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m12048(L_44, L_43, /*hidden argument*/&TargetInvocationException__ctor_m12048_MethodInfo);
		il2cpp_codegen_raise_exception(L_44);
		goto IL_00fd;
	} // end catch (depth: 1)

IL_00fd:
	{
		Exception_t154 * L_45 = V_2;
		if (!L_45)
		{
			goto IL_0102;
		}
	}
	{
		Exception_t154 * L_46 = V_2;
		il2cpp_codegen_raise_exception(L_46);
	}

IL_0102:
	{
		Object_t * L_47 = ___obj;
		if (L_47)
		{
			goto IL_0108;
		}
	}
	{
		Object_t * L_48 = V_3;
		G_B31_0 = L_48;
		goto IL_0109;
	}

IL_0108:
	{
		G_B31_0 = NULL;
	}

IL_0109:
	{
		return G_B31_0;
	}
}
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoCMethod_Invoke_m11977_MethodInfo;
extern "C" Object_t * MonoCMethod_Invoke_m11977 (MonoCMethod_t2023 * __this, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___parameters, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	{
		int32_t L_0 = ___invokeAttr;
		Binder_t1162 * L_1 = ___binder;
		ObjectU5BU5D_t164* L_2 = ___parameters;
		CultureInfo_t1165 * L_3 = ___culture;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&MonoCMethod_Invoke_m11976_MethodInfo, __this, NULL, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern MethodInfo MonoCMethod_get_MethodHandle_m11978_MethodInfo;
extern "C" RuntimeMethodHandle_t1991  MonoCMethod_get_MethodHandle_m11978 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		RuntimeMethodHandle_t1991  L_1 = {0};
		RuntimeMethodHandle__ctor_m13822(&L_1, L_0, /*hidden argument*/&RuntimeMethodHandle__ctor_m13822_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern MethodInfo MonoCMethod_get_Attributes_m11979_MethodInfo;
extern "C" int32_t MonoCMethod_get_Attributes_m11979 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetAttributes_m11941(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetAttributes_m11941_MethodInfo);
		return L_1;
	}
}
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m11980 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		int32_t L_1 = MonoMethodInfo_GetCallingConvention_m11942(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetCallingConvention_m11942_MethodInfo);
		return L_1;
	}
}
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m11981 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___reftype_4);
		return L_0;
	}
}
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m11982 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		IntPtr_t L_0 = (__this->___mhandle_2);
		Type_t * L_1 = MonoMethodInfo_GetDeclaringType_m11939(NULL /*static, unused*/, L_0, /*hidden argument*/&MonoMethodInfo_GetDeclaringType_m11939_MethodInfo);
		return L_1;
	}
}
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m11983 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name_3);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = (__this->___name_3);
		return L_1;
	}

IL_000f:
	{
		String_t* L_2 = MonoMethod_get_name_m11946(NULL /*static, unused*/, __this, /*hidden argument*/&MonoMethod_get_name_m11946_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_IsDefined_m11984_MethodInfo;
extern "C" bool MonoCMethod_IsDefined_m11984 (MonoCMethod_t2023 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m11985_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoCMethod_GetCustomAttributes_m11985 (MonoCMethod_t2023 * __this, bool ___inherit, MethodInfo* method)
{
	{
		bool L_0 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_1 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, L_0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoCMethod_GetCustomAttributes_m11986_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoCMethod_GetCustomAttributes_m11986 (MonoCMethod_t2023 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m11987 (MonoCMethod_t2023 * __this, MethodInfo* method)
{
	StringBuilder_t480 * V_0 = {0};
	ParameterInfoU5BU5D_t1170* V_1 = {0};
	int32_t V_2 = 0;
	{
		StringBuilder_t480 * L_0 = (StringBuilder_t480 *)il2cpp_codegen_object_new (InitializedTypeInfo(&StringBuilder_t480_il2cpp_TypeInfo));
		StringBuilder__ctor_m2206(L_0, /*hidden argument*/&StringBuilder__ctor_m2206_MethodInfo);
		V_0 = L_0;
		StringBuilder_t480 * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_Append_m6931(L_1, (String_t*) &_stringLiteral1941, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_2 = V_0;
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m11983_MethodInfo, __this);
		NullCheck(L_2);
		StringBuilder_Append_m6931(L_2, L_3, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m6931(L_4, (String_t*) &_stringLiteral558, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		ParameterInfoU5BU5D_t1170* L_5 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MonoCMethod_GetParameters_m11974_MethodInfo, __this);
		V_1 = L_5;
		V_2 = 0;
		goto IL_005e;
	}

IL_0036:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		StringBuilder_t480 * L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_Append_m6931(L_7, (String_t*) &_stringLiteral559, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0046:
	{
		StringBuilder_t480 * L_8 = V_0;
		ParameterInfoU5BU5D_t1170* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_9, L_11)));
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_9, L_11)));
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_12);
		NullCheck(L_8);
		StringBuilder_Append_m6931(L_8, L_13, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		ParameterInfoU5BU5D_t1170* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)(((Array_t *)L_16)->max_length))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_17 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MonoCMethod_get_CallingConvention_m11980_MethodInfo, __this);
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0079;
		}
	}
	{
		StringBuilder_t480 * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_Append_m6931(L_18, (String_t*) &_stringLiteral1942, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
	}

IL_0079:
	{
		StringBuilder_t480 * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m6931(L_19, (String_t*) &_stringLiteral215, /*hidden argument*/&StringBuilder_Append_m6931_MethodInfo);
		StringBuilder_t480 * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&StringBuilder_ToString_m2209_MethodInfo, L_20);
		return L_21;
	}
}
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoCMethod_GetObjectData_m11988_MethodInfo;
extern "C" void MonoCMethod_GetObjectData_m11988 (MonoCMethod_t2023 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_get_Name_m11983_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoCMethod_get_ReflectedType_m11981_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoCMethod_ToString_m11987_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m11864(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 1, /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m11864_MethodInfo);
		return;
	}
}
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoPropertyInfo_t2025_il2cpp_TypeInfo;
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfoMethodDeclarations.h"

// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoProperty.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern MethodInfo MonoPropertyInfo_get_property_info_m11989_MethodInfo;
extern "C" void MonoPropertyInfo_get_property_info_m11989 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t2025 * ___info, int32_t ___req_info, MethodInfo* method)
{
	typedef void (*MonoPropertyInfo_get_property_info_m11989_ftn) (MonoProperty_t *, MonoPropertyInfo_t2025 *, int32_t);
	static MonoPropertyInfo_get_property_info_m11989_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_get_property_info_m11989_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)");
	_il2cpp_icall_func(___prop, ___info, ___req_info);
}
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern MethodInfo MonoPropertyInfo_GetTypeModifiers_m11990_MethodInfo;
extern "C" TypeU5BU5D_t913* MonoPropertyInfo_GetTypeModifiers_m11990 (Object_t * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, MethodInfo* method)
{
	typedef TypeU5BU5D_t913* (*MonoPropertyInfo_GetTypeModifiers_m11990_ftn) (MonoProperty_t *, bool);
	static MonoPropertyInfo_GetTypeModifiers_m11990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MonoPropertyInfo_GetTypeModifiers_m11990_ftn)il2cpp_codegen_resolve_icall ("System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)");
	return _il2cpp_icall_func(___prop, ___optional);
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PInfo_t2026_il2cpp_TypeInfo;
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfoMethodDeclarations.h"



// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapter.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GetterAdapter_t2027_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/GetterAdapter
#include "mscorlib_System_Reflection_MonoProperty_GetterAdapterMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
extern MethodInfo GetterAdapter__ctor_m11991_MethodInfo;
extern "C" void GetterAdapter__ctor_m11991 (GetterAdapter_t2027 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
extern MethodInfo GetterAdapter_Invoke_m11992_MethodInfo;
extern "C" Object_t * GetterAdapter_Invoke_m11992 (GetterAdapter_t2027 * __this, Object_t * ____this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		GetterAdapter_Invoke_m11992((GetterAdapter_t2027 *)__this->___prev_9,____this, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" Object_t * pinvoke_delegate_wrapper_GetterAdapter_t2027(Il2CppObject* delegate, Object_t * ____this)
{
	// Marshaling of parameter '____this' to native representation
	Object_t * _____this_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Object'."));
}
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern MethodInfo GetterAdapter_BeginInvoke_m11993_MethodInfo;
extern "C" Object_t * GetterAdapter_BeginInvoke_m11993 (GetterAdapter_t2027 * __this, Object_t * ____this, AsyncCallback_t244 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
extern MethodInfo GetterAdapter_EndInvoke_m11994_MethodInfo;
extern "C" Object_t * GetterAdapter_EndInvoke_m11994 (GetterAdapter_t2027 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo MonoProperty_t_il2cpp_TypeInfo;
// System.Reflection.MonoProperty
#include "mscorlib_System_Reflection_MonoPropertyMethodDeclarations.h"

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessException.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.MethodAccessException
#include "mscorlib_System_MethodAccessExceptionMethodDeclarations.h"
extern Il2CppType StaticGetter_1_t2360_0_0_0;
extern Il2CppType Getter_2_t2361_0_0_0;
extern Il2CppType MonoProperty_t_0_0_0;
extern Il2CppType GetterAdapter_t2027_0_0_0;
extern MethodInfo MonoProperty_CachePropertyInfo_m11996_MethodInfo;
extern MethodInfo PropertyInfo__ctor_m12036_MethodInfo;
extern MethodInfo ParameterInfo__ctor_m12021_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m10180_MethodInfo;
extern MethodInfo MethodAccessException__ctor_m13616_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m10179_MethodInfo;
extern MethodInfo MonoProperty_GetValue_m12013_MethodInfo;
extern MethodInfo MonoProperty_GetGetMethod_m12005_MethodInfo;
extern MethodInfo MonoProperty_get_Name_m12003_MethodInfo;
extern MethodInfo MonoProperty_GetSetMethod_m12007_MethodInfo;
extern MethodInfo MonoProperty_get_PropertyType_m12000_MethodInfo;
extern MethodInfo MonoProperty_get_ReflectedType_m12001_MethodInfo;
extern MethodInfo MonoProperty_ToString_m12015_MethodInfo;


// System.Void System.Reflection.MonoProperty::.ctor()
extern MethodInfo MonoProperty__ctor_m11995_MethodInfo;
extern "C" void MonoProperty__ctor_m11995 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		PropertyInfo__ctor_m12036(__this, /*hidden argument*/&PropertyInfo__ctor_m12036_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m11996 (MonoProperty_t * __this, int32_t ___flags, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___cached_3);
		int32_t L_1 = ___flags;
		int32_t L_2 = ___flags;
		if ((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2)))
		{
			goto IL_0026;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_3 = &(__this->___info_2);
		int32_t L_4 = ___flags;
		MonoPropertyInfo_get_property_info_m11989(NULL /*static, unused*/, __this, L_3, L_4, /*hidden argument*/&MonoPropertyInfo_get_property_info_m11989_MethodInfo);
		int32_t L_5 = (__this->___cached_3);
		int32_t L_6 = ___flags;
		__this->___cached_3 = ((int32_t)((int32_t)L_5|(int32_t)L_6));
	}

IL_0026:
	{
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern MethodInfo MonoProperty_get_Attributes_m11997_MethodInfo;
extern "C" int32_t MonoProperty_get_Attributes_m11997 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 1, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		int32_t L_1 = (L_0->___attrs_4);
		return L_1;
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern MethodInfo MonoProperty_get_CanRead_m11998_MethodInfo;
extern "C" bool MonoProperty_get_CanRead_m11998 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern MethodInfo MonoProperty_get_CanWrite_m11999_MethodInfo;
extern "C" bool MonoProperty_get_CanWrite_m11999 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		return ((((int32_t)((((Object_t*)(MethodInfo_t *)L_1) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m12000 (MonoProperty_t * __this, MethodInfo* method)
{
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8448_MethodInfo, L_3);
		return L_4;
	}

IL_0025:
	{
		MonoPropertyInfo_t2025 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		NullCheck(L_6);
		ParameterInfoU5BU5D_t1170* L_7 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_6);
		V_0 = L_7;
		ParameterInfoU5BU5D_t1170* L_8 = V_0;
		ParameterInfoU5BU5D_t1170* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1)));
		int32_t L_10 = ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_9)->max_length)))-(int32_t)1));
		NullCheck((*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_8, L_10)));
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_8, L_10)));
		return L_11;
	}
}
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m12001 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 8, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern MethodInfo MonoProperty_get_DeclaringType_m12002_MethodInfo;
extern "C" Type_t * MonoProperty_get_DeclaringType_m12002 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, ((int32_t)16), /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		Type_t * L_1 = (L_0->___parent_0);
		return L_1;
	}
}
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m12003 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, ((int32_t)32), /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		String_t* L_1 = (L_0->___name_1);
		return L_1;
	}
}
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern MethodInfo MonoProperty_GetAccessors_m12004_MethodInfo;
extern TypeInfo* MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var;
extern "C" MethodInfoU5BU5D_t168* MonoProperty_GetAccessors_m12004 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	static bool MonoProperty_GetAccessors_m12004_init;
	if (!MonoProperty_GetAccessors_m12004_init)
	{
		MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&MethodInfoU5BU5D_t168_0_0_0);
		MonoProperty_GetAccessors_m12004_init = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	MethodInfoU5BU5D_t168* V_2 = {0};
	int32_t V_3 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		MonoProperty_CachePropertyInfo_m11996(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m11874_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}

IL_002d:
	{
		V_1 = 1;
	}

IL_002f:
	{
		MonoPropertyInfo_t2025 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		bool L_8 = ___nonPublic;
		if (L_8)
		{
			goto IL_0051;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_9 = &(__this->___info_2);
		MethodInfo_t * L_10 = (L_9->___get_method_2);
		NullCheck(L_10);
		bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m11874_MethodInfo, L_10);
		if (!L_11)
		{
			goto IL_0053;
		}
	}

IL_0051:
	{
		V_0 = 1;
	}

IL_0053:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		V_2 = ((MethodInfoU5BU5D_t168*)SZArrayNew(MethodInfoU5BU5D_t168_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_12+(int32_t)L_13))));
		V_3 = 0;
		int32_t L_14 = V_1;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		MethodInfoU5BU5D_t168* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		V_3 = ((int32_t)((int32_t)L_17+(int32_t)1));
		MonoPropertyInfo_t2025 * L_18 = &(__this->___info_2);
		MethodInfo_t * L_19 = (L_18->___set_method_3);
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_17);
		ArrayElementTypeCheck (L_15, L_19);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_15, L_17)) = (MethodInfo_t *)L_19;
	}

IL_0073:
	{
		int32_t L_20 = V_0;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		MethodInfoU5BU5D_t168* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_3 = ((int32_t)((int32_t)L_23+(int32_t)1));
		MonoPropertyInfo_t2025 * L_24 = &(__this->___info_2);
		MethodInfo_t * L_25 = (L_24->___get_method_2);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_25);
		*((MethodInfo_t **)(MethodInfo_t **)SZArrayLdElema(L_21, L_23)) = (MethodInfo_t *)L_25;
	}

IL_0088:
	{
		MethodInfoU5BU5D_t168* L_26 = V_2;
		return L_26;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m12005 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 2, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___get_method_2);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m11874_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t2025 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___get_method_2);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern MethodInfo MonoProperty_GetIndexParameters_m12006_MethodInfo;
extern TypeInfo* ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var;
extern "C" ParameterInfoU5BU5D_t1170* MonoProperty_GetIndexParameters_m12006 (MonoProperty_t * __this, MethodInfo* method)
{
	static bool MonoProperty_GetIndexParameters_m12006_init;
	if (!MonoProperty_GetIndexParameters_m12006_init)
	{
		ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ParameterInfoU5BU5D_t1170_0_0_0);
		MonoProperty_GetIndexParameters_m12006_init = true;
	}
	ParameterInfoU5BU5D_t1170* V_0 = {0};
	ParameterInfoU5BU5D_t1170* V_1 = {0};
	int32_t V_2 = 0;
	ParameterInfo_t1171 * V_3 = {0};
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 6, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___get_method_2);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_2 = &(__this->___info_2);
		MethodInfo_t * L_3 = (L_2->___get_method_2);
		NullCheck(L_3);
		ParameterInfoU5BU5D_t1170* L_4 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_3);
		V_0 = L_4;
		goto IL_0063;
	}

IL_0027:
	{
		MonoPropertyInfo_t2025 * L_5 = &(__this->___info_2);
		MethodInfo_t * L_6 = (L_5->___set_method_3);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_7 = &(__this->___info_2);
		MethodInfo_t * L_8 = (L_7->___set_method_3);
		NullCheck(L_8);
		ParameterInfoU5BU5D_t1170* L_9 = (ParameterInfoU5BU5D_t1170*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1170* >::Invoke(&MethodBase_GetParameters_m6940_MethodInfo, L_8);
		V_1 = L_9;
		ParameterInfoU5BU5D_t1170* L_10 = V_1;
		NullCheck(L_10);
		V_0 = ((ParameterInfoU5BU5D_t1170*)SZArrayNew(ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var, ((int32_t)((int32_t)(((int32_t)(((Array_t *)L_10)->max_length)))-(int32_t)1))));
		ParameterInfoU5BU5D_t1170* L_11 = V_1;
		ParameterInfoU5BU5D_t1170* L_12 = V_0;
		ParameterInfoU5BU5D_t1170* L_13 = V_0;
		NullCheck(L_13);
		Array_Copy_m10282(NULL /*static, unused*/, (Array_t *)(Array_t *)L_11, (Array_t *)(Array_t *)L_12, (((int32_t)(((Array_t *)L_13)->max_length))), /*hidden argument*/&Array_Copy_m10282_MethodInfo);
		goto IL_0063;
	}

IL_005c:
	{
		return ((ParameterInfoU5BU5D_t1170*)SZArrayNew(ParameterInfoU5BU5D_t1170_il2cpp_TypeInfo_var, 0));
	}

IL_0063:
	{
		V_2 = 0;
		goto IL_0079;
	}

IL_0067:
	{
		ParameterInfoU5BU5D_t1170* L_14 = V_0;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_3 = (*(ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_14, L_16));
		ParameterInfoU5BU5D_t1170* L_17 = V_0;
		int32_t L_18 = V_2;
		ParameterInfo_t1171 * L_19 = V_3;
		ParameterInfo_t1171 * L_20 = (ParameterInfo_t1171 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ParameterInfo_t1171_il2cpp_TypeInfo));
		ParameterInfo__ctor_m12021(L_20, L_19, __this, /*hidden argument*/&ParameterInfo__ctor_m12021_MethodInfo);
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		ArrayElementTypeCheck (L_17, L_20);
		*((ParameterInfo_t1171 **)(ParameterInfo_t1171 **)SZArrayLdElema(L_17, L_18)) = (ParameterInfo_t1171 *)L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_2;
		ParameterInfoU5BU5D_t1170* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_0067;
		}
	}
	{
		ParameterInfoU5BU5D_t1170* L_24 = V_0;
		return L_24;
	}
}
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m12007 (MonoProperty_t * __this, bool ___nonPublic, MethodInfo* method)
{
	{
		MonoProperty_CachePropertyInfo_m11996(__this, 4, /*hidden argument*/&MonoProperty_CachePropertyInfo_m11996_MethodInfo);
		MonoPropertyInfo_t2025 * L_0 = &(__this->___info_2);
		MethodInfo_t * L_1 = (L_0->___set_method_3);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		bool L_2 = ___nonPublic;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		MonoPropertyInfo_t2025 * L_3 = &(__this->___info_2);
		MethodInfo_t * L_4 = (L_3->___set_method_3);
		NullCheck(L_4);
		bool L_5 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsPublic_m11874_MethodInfo, L_4);
		if (!L_5)
		{
			goto IL_0035;
		}
	}

IL_0029:
	{
		MonoPropertyInfo_t2025 * L_6 = &(__this->___info_2);
		MethodInfo_t * L_7 = (L_6->___set_method_3);
		return L_7;
	}

IL_0035:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern MethodInfo MonoProperty_IsDefined_m12008_MethodInfo;
extern "C" bool MonoProperty_IsDefined_m12008 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_1 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_1;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m12009_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoProperty_GetCustomAttributes_m12009 (MonoProperty_t * __this, bool ___inherit, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_0 = MonoCustomAttrs_GetCustomAttributes_m13644(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13644_MethodInfo);
		return L_0;
	}
}
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo MonoProperty_GetCustomAttributes_m12010_MethodInfo;
extern "C" ObjectU5BU5D_t164* MonoProperty_GetCustomAttributes_m12010 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_1 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, 0, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_1;
	}
}
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern MethodInfo MonoProperty_CreateGetterDelegate_m12011_MethodInfo;
extern TypeInfo* TypeU5BU5D_t913_il2cpp_TypeInfo_var;
extern "C" GetterAdapter_t2027 * MonoProperty_CreateGetterDelegate_m12011 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, MethodInfo* method)
{
	static bool MonoProperty_CreateGetterDelegate_m12011_init;
	if (!MonoProperty_CreateGetterDelegate_m12011_init)
	{
		TypeU5BU5D_t913_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&TypeU5BU5D_t913_0_0_0);
		MonoProperty_CreateGetterDelegate_m12011_init = true;
	}
	TypeU5BU5D_t913* V_0 = {0};
	Type_t * V_1 = {0};
	Object_t * V_2 = {0};
	MethodInfo_t * V_3 = {0};
	Type_t * V_4 = {0};
	String_t* V_5 = {0};
	{
		MethodInfo_t * L_0 = ___method;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(&MethodBase_get_IsStatic_m6953_MethodInfo, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		TypeU5BU5D_t913* L_2 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 1));
		MethodInfo_t * L_3 = ___method;
		NullCheck(L_3);
		Type_t * L_4 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8448_MethodInfo, L_3);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_4);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_2, 0)) = (Type_t *)L_4;
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_5 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&StaticGetter_1_t2360_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		V_4 = L_5;
		V_5 = (String_t*) &_stringLiteral1943;
		goto IL_0059;
	}

IL_002d:
	{
		TypeU5BU5D_t913* L_6 = ((TypeU5BU5D_t913*)SZArrayNew(TypeU5BU5D_t913_il2cpp_TypeInfo_var, 2));
		MethodInfo_t * L_7 = ___method;
		NullCheck(L_7);
		Type_t * L_8 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_7);
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		ArrayElementTypeCheck (L_6, L_8);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_6, 0)) = (Type_t *)L_8;
		TypeU5BU5D_t913* L_9 = L_6;
		MethodInfo_t * L_10 = ___method;
		NullCheck(L_10);
		Type_t * L_11 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MethodInfo_get_ReturnType_m8448_MethodInfo, L_10);
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 1);
		ArrayElementTypeCheck (L_9, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_9, 1)) = (Type_t *)L_11;
		V_0 = L_9;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_12 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Getter_2_t2361_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		V_4 = L_12;
		V_5 = (String_t*) &_stringLiteral1944;
	}

IL_0059:
	{
		Type_t * L_13 = V_4;
		TypeU5BU5D_t913* L_14 = V_0;
		NullCheck(L_13);
		Type_t * L_15 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t913* >::Invoke(&Type_MakeGenericType_m6961_MethodInfo, L_13, L_14);
		V_1 = L_15;
		Type_t * L_16 = V_1;
		MethodInfo_t * L_17 = ___method;
		Delegate_t148 * L_18 = Delegate_CreateDelegate_m10180(NULL /*static, unused*/, L_16, L_17, 0, /*hidden argument*/&Delegate_CreateDelegate_m10180_MethodInfo);
		V_2 = L_18;
		Object_t * L_19 = V_2;
		if (L_19)
		{
			goto IL_0074;
		}
	}
	{
		MethodAccessException_t2305 * L_20 = (MethodAccessException_t2305 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MethodAccessException_t2305_il2cpp_TypeInfo));
		MethodAccessException__ctor_m13616(L_20, /*hidden argument*/&MethodAccessException__ctor_m13616_MethodInfo);
		il2cpp_codegen_raise_exception(L_20);
	}

IL_0074:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_21 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&MonoProperty_t_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		String_t* L_22 = V_5;
		NullCheck(L_21);
		MethodInfo_t * L_23 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, int32_t >::Invoke(&Type_GetMethod_m10350_MethodInfo, L_21, L_22, ((int32_t)40));
		V_3 = L_23;
		MethodInfo_t * L_24 = V_3;
		TypeU5BU5D_t913* L_25 = V_0;
		NullCheck(L_24);
		MethodInfo_t * L_26 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, TypeU5BU5D_t913* >::Invoke(&MethodInfo_MakeGenericMethod_m11882_MethodInfo, L_24, L_25);
		V_3 = L_26;
		Type_t * L_27 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&GetterAdapter_t2027_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		Object_t * L_28 = V_2;
		MethodInfo_t * L_29 = V_3;
		Delegate_t148 * L_30 = Delegate_CreateDelegate_m10179(NULL /*static, unused*/, L_27, L_28, L_29, 1, /*hidden argument*/&Delegate_CreateDelegate_m10179_MethodInfo);
		return ((GetterAdapter_t2027 *)Castclass(L_30, InitializedTypeInfo(&GetterAdapter_t2027_il2cpp_TypeInfo)));
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern MethodInfo MonoProperty_GetValue_m12012_MethodInfo;
extern "C" Object_t * MonoProperty_GetValue_m12012 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t164* ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t164* L_0 = ___index;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		ObjectU5BU5D_t164* L_1 = ___index;
		NullCheck(L_1);
		if ((((int32_t)(((Array_t *)L_1)->max_length))))
		{
			goto IL_0008;
		}
	}

IL_0008:
	{
		Object_t * L_2 = ___obj;
		ObjectU5BU5D_t164* L_3 = ___index;
		Object_t * L_4 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&MonoProperty_GetValue_m12013_MethodInfo, __this, L_2, 0, (Binder_t1162 *)NULL, L_3, (CultureInfo_t1165 *)NULL);
		return L_4;
	}
}
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m12013 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___index, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	Object_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	SecurityException_t2217 * V_2 = {0};
	Exception_t154 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t154 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = NULL;
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&MonoProperty_GetGetMethod_m12005_MethodInfo, __this, 1);
		V_1 = L_0;
		MethodInfo_t * L_1 = V_1;
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m12003_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m554(NULL /*static, unused*/, (String_t*) &_stringLiteral1945, L_2, (String_t*) &_stringLiteral208, /*hidden argument*/&String_Concat_m554_MethodInfo);
		ArgumentException_t521 * L_4 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_t164* L_5 = ___index;
			if (!L_5)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			ObjectU5BU5D_t164* L_6 = ___index;
			NullCheck(L_6);
			if ((((int32_t)(((Array_t *)L_6)->max_length))))
			{
				goto IL_0041;
			}
		}

IL_0032:
		{
			MethodInfo_t * L_7 = V_1;
			Object_t * L_8 = ___obj;
			int32_t L_9 = ___invokeAttr;
			Binder_t1162 * L_10 = ___binder;
			CultureInfo_t1165 * L_11 = ___culture;
			NullCheck(L_7);
			Object_t * L_12 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&MethodBase_Invoke_m14036_MethodInfo, L_7, L_8, L_9, L_10, (ObjectU5BU5D_t164*)(ObjectU5BU5D_t164*)NULL, L_11);
			V_0 = L_12;
			goto IL_004f;
		}

IL_0041:
		{
			MethodInfo_t * L_13 = V_1;
			Object_t * L_14 = ___obj;
			int32_t L_15 = ___invokeAttr;
			Binder_t1162 * L_16 = ___binder;
			ObjectU5BU5D_t164* L_17 = ___index;
			CultureInfo_t1165 * L_18 = ___culture;
			NullCheck(L_13);
			Object_t * L_19 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&MethodBase_Invoke_m14036_MethodInfo, L_13, L_14, L_15, L_16, L_17, L_18);
			V_0 = L_19;
		}

IL_004f:
		{
			goto IL_005b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t154 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&SecurityException_t2217_il2cpp_TypeInfo, e.ex->object.klass))
			goto CATCH_0051;
		throw e;
	}

CATCH_0051:
	{ // begin catch(System.Security.SecurityException)
		V_2 = ((SecurityException_t2217 *)__exception_local);
		SecurityException_t2217 * L_20 = V_2;
		TargetInvocationException_t2033 * L_21 = (TargetInvocationException_t2033 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TargetInvocationException_t2033_il2cpp_TypeInfo));
		TargetInvocationException__ctor_m12048(L_21, L_20, /*hidden argument*/&TargetInvocationException__ctor_m12048_MethodInfo);
		il2cpp_codegen_raise_exception(L_21);
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		Object_t * L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern MethodInfo MonoProperty_SetValue_m12014_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" void MonoProperty_SetValue_m12014 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t1162 * ___binder, ObjectU5BU5D_t164* ___index, CultureInfo_t1165 * ___culture, MethodInfo* method)
{
	static bool MonoProperty_SetValue_m12014_init;
	if (!MonoProperty_SetValue_m12014_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		MonoProperty_SetValue_m12014_init = true;
	}
	MethodInfo_t * V_0 = {0};
	ObjectU5BU5D_t164* V_1 = {0};
	int32_t V_2 = 0;
	{
		MethodInfo_t * L_0 = (MethodInfo_t *)VirtFuncInvoker1< MethodInfo_t *, bool >::Invoke(&MonoProperty_GetSetMethod_m12007_MethodInfo, __this, 1);
		V_0 = L_0;
		MethodInfo_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m12003_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m554(NULL /*static, unused*/, (String_t*) &_stringLiteral1946, L_2, (String_t*) &_stringLiteral208, /*hidden argument*/&String_Concat_m554_MethodInfo);
		ArgumentException_t521 * L_4 = (ArgumentException_t521 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t521_il2cpp_TypeInfo));
		ArgumentException__ctor_m2726(L_4, L_3, /*hidden argument*/&ArgumentException__ctor_m2726_MethodInfo);
		il2cpp_codegen_raise_exception(L_4);
	}

IL_0026:
	{
		ObjectU5BU5D_t164* L_5 = ___index;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ObjectU5BU5D_t164* L_6 = ___index;
		NullCheck(L_6);
		if ((((int32_t)(((Array_t *)L_6)->max_length))))
		{
			goto IL_003d;
		}
	}

IL_0030:
	{
		ObjectU5BU5D_t164* L_7 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, 1));
		Object_t * L_8 = ___value;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 0);
		ArrayElementTypeCheck (L_7, L_8);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 0)) = (Object_t *)L_8;
		V_1 = L_7;
		goto IL_0058;
	}

IL_003d:
	{
		ObjectU5BU5D_t164* L_9 = ___index;
		NullCheck(L_9);
		V_2 = (((int32_t)(((Array_t *)L_9)->max_length)));
		int32_t L_10 = V_2;
		V_1 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_10+(int32_t)1))));
		ObjectU5BU5D_t164* L_11 = ___index;
		ObjectU5BU5D_t164* L_12 = V_1;
		NullCheck(L_11);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m8174_MethodInfo, L_11, (Array_t *)(Array_t *)L_12, 0);
		ObjectU5BU5D_t164* L_13 = V_1;
		int32_t L_14 = V_2;
		Object_t * L_15 = ___value;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, L_14);
		ArrayElementTypeCheck (L_13, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_13, L_14)) = (Object_t *)L_15;
	}

IL_0058:
	{
		MethodInfo_t * L_16 = V_0;
		Object_t * L_17 = ___obj;
		int32_t L_18 = ___invokeAttr;
		Binder_t1162 * L_19 = ___binder;
		ObjectU5BU5D_t164* L_20 = V_1;
		CultureInfo_t1165 * L_21 = ___culture;
		NullCheck(L_16);
		VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&MethodBase_Invoke_m14036_MethodInfo, L_16, L_17, L_18, L_19, L_20, L_21);
		return;
	}
}
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m12015 (MonoProperty_t * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_PropertyType_m12000_MethodInfo, __this);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_ToString_m10362_MethodInfo, L_0);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m12003_MethodInfo, __this);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_3 = String_Concat_m554(NULL /*static, unused*/, L_1, (String_t*) &_stringLiteral260, L_2, /*hidden argument*/&String_Concat_m554_MethodInfo);
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern MethodInfo MonoProperty_GetOptionalCustomModifiers_m12016_MethodInfo;
extern "C" TypeU5BU5D_t913* MonoProperty_GetOptionalCustomModifiers_m12016 (MonoProperty_t * __this, MethodInfo* method)
{
	TypeU5BU5D_t913* V_0 = {0};
	{
		TypeU5BU5D_t913* L_0 = MonoPropertyInfo_GetTypeModifiers_m11990(NULL /*static, unused*/, __this, 1, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m11990_MethodInfo);
		V_0 = L_0;
		TypeU5BU5D_t913* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_2 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t913* L_3 = V_0;
		return L_3;
	}
}
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern MethodInfo MonoProperty_GetRequiredCustomModifiers_m12017_MethodInfo;
extern "C" TypeU5BU5D_t913* MonoProperty_GetRequiredCustomModifiers_m12017 (MonoProperty_t * __this, MethodInfo* method)
{
	TypeU5BU5D_t913* V_0 = {0};
	{
		TypeU5BU5D_t913* L_0 = MonoPropertyInfo_GetTypeModifiers_m11990(NULL /*static, unused*/, __this, 0, /*hidden argument*/&MonoPropertyInfo_GetTypeModifiers_m11990_MethodInfo);
		V_0 = L_0;
		TypeU5BU5D_t913* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_2 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_2;
	}

IL_0011:
	{
		TypeU5BU5D_t913* L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo MonoProperty_GetObjectData_m12018_MethodInfo;
extern "C" void MonoProperty_GetObjectData_m12018 (MonoProperty_t * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_get_Name_m12003_MethodInfo, __this);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MonoProperty_get_ReflectedType_m12001_MethodInfo, __this);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MonoProperty_ToString_m12015_MethodInfo, __this);
		MemberInfoSerializationHolder_Serialize_m11864(NULL /*static, unused*/, L_0, L_1, L_2, L_3, ((int32_t)16), /*hidden argument*/&MemberInfoSerializationHolder_Serialize_m11864_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ParameterAttributes_t2028_il2cpp_TypeInfo;
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"
extern TypeInfo InAttribute_t1821_il2cpp_TypeInfo;
extern TypeInfo OptionalAttribute_t1823_il2cpp_TypeInfo;
extern TypeInfo OutAttribute_t1818_il2cpp_TypeInfo;
// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttributeMethodDeclarations.h"
// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttributeMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern MethodInfo ParameterInfo_get_Attributes_m12023_MethodInfo;
extern MethodInfo ParameterInfo_get_Position_m12030_MethodInfo;
extern MethodInfo Type_get_Namespace_m6939_MethodInfo;
extern MethodInfo ParameterInfo_get_IsRetval_m12027_MethodInfo;
extern MethodInfo ParameterInfo_get_IsIn_m12024_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOut_m12026_MethodInfo;
extern MethodInfo ParameterInfo_get_IsOptional_m12025_MethodInfo;
extern MethodInfo InAttribute__ctor_m10392_MethodInfo;
extern MethodInfo OptionalAttribute__ctor_m10394_MethodInfo;
extern MethodInfo OutAttribute__ctor_m10388_MethodInfo;


// System.Void System.Reflection.ParameterInfo::.ctor()
extern MethodInfo ParameterInfo__ctor_m12019_MethodInfo;
extern "C" void ParameterInfo__ctor_m12019 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.Emit.ParameterBuilder,System.Type,System.Reflection.MemberInfo,System.Int32)
extern "C" void ParameterInfo__ctor_m12020 (ParameterInfo_t1171 * __this, ParameterBuilder_t1999 * ___pb, Type_t * ___type, MemberInfo_t * ___member, int32_t ___position, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		Type_t * L_0 = ___type;
		__this->___ClassImpl_0 = L_0;
		MemberInfo_t * L_1 = ___member;
		__this->___MemberImpl_2 = L_1;
		ParameterBuilder_t1999 * L_2 = ___pb;
		if (!L_2)
		{
			goto IL_003f;
		}
	}
	{
		ParameterBuilder_t1999 * L_3 = ___pb;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterBuilder_get_Name_m11731_MethodInfo, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterBuilder_t1999 * L_5 = ___pb;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Position_m11732_MethodInfo, L_5);
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_6-(int32_t)1));
		ParameterBuilder_t1999 * L_7 = ___pb;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterBuilder_get_Attributes_m11730_MethodInfo, L_7);
		__this->___AttrsImpl_5 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		__this->___NameImpl_3 = (String_t*)NULL;
		int32_t L_9 = ___position;
		__this->___PositionImpl_4 = ((int32_t)((int32_t)L_9-(int32_t)1));
		__this->___AttrsImpl_5 = 0;
	}

IL_0057:
	{
		return;
	}
}
// System.Void System.Reflection.ParameterInfo::.ctor(System.Reflection.ParameterInfo,System.Reflection.MemberInfo)
extern "C" void ParameterInfo__ctor_m12021 (ParameterInfo_t1171 * __this, ParameterInfo_t1171 * ___pinfo, MemberInfo_t * ___member, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		ParameterInfo_t1171 * L_0 = ___pinfo;
		NullCheck(L_0);
		Type_t * L_1 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&ParameterInfo_get_ParameterType_m6941_MethodInfo, L_0);
		__this->___ClassImpl_0 = L_1;
		MemberInfo_t * L_2 = ___member;
		__this->___MemberImpl_2 = L_2;
		ParameterInfo_t1171 * L_3 = ___pinfo;
		NullCheck(L_3);
		String_t* L_4 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ParameterInfo_get_Name_m12029_MethodInfo, L_3);
		__this->___NameImpl_3 = L_4;
		ParameterInfo_t1171 * L_5 = ___pinfo;
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Position_m12030_MethodInfo, L_5);
		__this->___PositionImpl_4 = L_6;
		ParameterInfo_t1171 * L_7 = ___pinfo;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m12023_MethodInfo, L_7);
		__this->___AttrsImpl_5 = L_8;
		return;
	}
}
// System.String System.Reflection.ParameterInfo::ToString()
extern MethodInfo ParameterInfo_ToString_m12022_MethodInfo;
extern "C" String_t* ParameterInfo_ToString_m12022 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	Type_t * V_0 = {0};
	bool V_1 = false;
	String_t* V_2 = {0};
	int32_t G_B7_0 = 0;
	String_t* G_B10_0 = {0};
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0009:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		Type_t * L_2 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&Type_GetElementType_m13981_MethodInfo, L_1);
		V_0 = L_2;
	}

IL_0010:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_HasElementType_m10322_MethodInfo, L_3);
		if (L_4)
		{
			goto IL_0009;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(&Type_get_IsPrimitive_m6983_MethodInfo, L_5);
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_7 = (__this->___ClassImpl_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_8 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&Void_t133_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		if ((((Object_t*)(Type_t *)L_7) == ((Object_t*)(Type_t *)L_8)))
		{
			goto IL_0054;
		}
	}
	{
		Type_t * L_9 = (__this->___ClassImpl_0);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m6939_MethodInfo, L_9);
		MemberInfo_t * L_11 = (__this->___MemberImpl_2);
		NullCheck(L_11);
		Type_t * L_12 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(&MemberInfo_get_DeclaringType_m6938_MethodInfo, L_11);
		NullCheck(L_12);
		String_t* L_13 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_Namespace_m6939_MethodInfo, L_12);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_14 = String_op_Equality_m406(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/&String_op_Equality_m406_MethodInfo);
		G_B7_0 = ((int32_t)(L_14));
		goto IL_0055;
	}

IL_0054:
	{
		G_B7_0 = 1;
	}

IL_0055:
	{
		V_1 = G_B7_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		Type_t * L_16 = (__this->___ClassImpl_0);
		NullCheck(L_16);
		String_t* L_17 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&MemberInfo_get_Name_m6929_MethodInfo, L_16);
		G_B10_0 = L_17;
		goto IL_0071;
	}

IL_0066:
	{
		Type_t * L_18 = (__this->___ClassImpl_0);
		NullCheck(L_18);
		String_t* L_19 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Type_get_FullName_m6981_MethodInfo, L_18);
		G_B10_0 = L_19;
	}

IL_0071:
	{
		V_2 = G_B10_0;
		bool L_20 = ParameterInfo_get_IsRetval_m12027(__this, /*hidden argument*/&ParameterInfo_get_IsRetval_m12027_MethodInfo);
		if (L_20)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_21 = V_2;
		uint16_t L_22 = ((int32_t)32);
		Object_t * L_23 = Box(InitializedTypeInfo(&Char_t389_il2cpp_TypeInfo), &L_22);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_24 = String_Concat_m495(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/&String_Concat_m495_MethodInfo);
		V_2 = L_24;
		String_t* L_25 = V_2;
		String_t* L_26 = (__this->___NameImpl_3);
		String_t* L_27 = String_Concat_m540(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/&String_Concat_m540_MethodInfo);
		V_2 = L_27;
	}

IL_0095:
	{
		String_t* L_28 = V_2;
		return L_28;
	}
}
// System.Type System.Reflection.ParameterInfo::get_ParameterType()
extern "C" Type_t * ParameterInfo_get_ParameterType_m6941 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		Type_t * L_0 = (__this->___ClassImpl_0);
		return L_0;
	}
}
// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::get_Attributes()
extern "C" int32_t ParameterInfo_get_Attributes_m12023 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___AttrsImpl_5);
		return L_0;
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsIn()
extern "C" bool ParameterInfo_get_IsIn_m12024 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m12023_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOptional()
extern "C" bool ParameterInfo_get_IsOptional_m12025 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m12023_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsOut()
extern "C" bool ParameterInfo_get_IsOut_m12026 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m12023_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Reflection.ParameterInfo::get_IsRetval()
extern "C" bool ParameterInfo_get_IsRetval_m12027 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ParameterInfo_get_Attributes_m12023_MethodInfo, __this);
		return ((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Reflection.MemberInfo System.Reflection.ParameterInfo::get_Member()
extern MethodInfo ParameterInfo_get_Member_m12028_MethodInfo;
extern "C" MemberInfo_t * ParameterInfo_get_Member_m12028 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		MemberInfo_t * L_0 = (__this->___MemberImpl_2);
		return L_0;
	}
}
// System.String System.Reflection.ParameterInfo::get_Name()
extern "C" String_t* ParameterInfo_get_Name_m12029 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___NameImpl_3);
		return L_0;
	}
}
// System.Int32 System.Reflection.ParameterInfo::get_Position()
extern "C" int32_t ParameterInfo_get_Position_m12030 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___PositionImpl_4);
		return L_0;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetCustomAttributes(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_GetCustomAttributes_m12031_MethodInfo;
extern "C" ObjectU5BU5D_t164* ParameterInfo_GetCustomAttributes_m12031 (ParameterInfo_t1171 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		ObjectU5BU5D_t164* L_2 = MonoCustomAttrs_GetCustomAttributes_m13643(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_GetCustomAttributes_m13643_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Reflection.ParameterInfo::IsDefined(System.Type,System.Boolean)
extern MethodInfo ParameterInfo_IsDefined_m12032_MethodInfo;
extern "C" bool ParameterInfo_IsDefined_m12032 (ParameterInfo_t1171 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method)
{
	{
		Type_t * L_0 = ___attributeType;
		bool L_1 = ___inherit;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&MonoCustomAttrs_t2311_il2cpp_TypeInfo));
		bool L_2 = MonoCustomAttrs_IsDefined_m13645(NULL /*static, unused*/, __this, L_0, L_1, /*hidden argument*/&MonoCustomAttrs_IsDefined_m13645_MethodInfo);
		return L_2;
	}
}
// System.Object[] System.Reflection.ParameterInfo::GetPseudoCustomAttributes()
extern MethodInfo ParameterInfo_GetPseudoCustomAttributes_m12033_MethodInfo;
extern TypeInfo* ObjectU5BU5D_t164_il2cpp_TypeInfo_var;
extern "C" ObjectU5BU5D_t164* ParameterInfo_GetPseudoCustomAttributes_m12033 (ParameterInfo_t1171 * __this, MethodInfo* method)
{
	static bool ParameterInfo_GetPseudoCustomAttributes_m12033_init;
	if (!ParameterInfo_GetPseudoCustomAttributes_m12033_init)
	{
		ObjectU5BU5D_t164_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ObjectU5BU5D_t164_0_0_0);
		ParameterInfo_GetPseudoCustomAttributes_m12033_init = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t164* V_1 = {0};
	{
		V_0 = 0;
		bool L_0 = ParameterInfo_get_IsIn_m12024(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m12024_MethodInfo);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)((int32_t)L_1+(int32_t)1));
	}

IL_000e:
	{
		bool L_2 = ParameterInfo_get_IsOut_m12026(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m12026_MethodInfo);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)1));
	}

IL_001a:
	{
		bool L_4 = ParameterInfo_get_IsOptional_m12025(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m12025_MethodInfo);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0026:
	{
		UnmanagedMarshal_t1993 * L_6 = (__this->___marshalAs_6);
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		return (ObjectU5BU5D_t164*)NULL;
	}

IL_0037:
	{
		int32_t L_9 = V_0;
		V_1 = ((ObjectU5BU5D_t164*)SZArrayNew(ObjectU5BU5D_t164_il2cpp_TypeInfo_var, L_9));
		V_0 = 0;
		bool L_10 = ParameterInfo_get_IsIn_m12024(__this, /*hidden argument*/&ParameterInfo_get_IsIn_m12024_MethodInfo);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		ObjectU5BU5D_t164* L_11 = V_1;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)1));
		InAttribute_t1821 * L_14 = (InAttribute_t1821 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InAttribute_t1821_il2cpp_TypeInfo));
		InAttribute__ctor_m10392(L_14, /*hidden argument*/&InAttribute__ctor_m10392_MethodInfo);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_13);
		ArrayElementTypeCheck (L_11, L_14);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_11, L_13)) = (Object_t *)L_14;
	}

IL_0054:
	{
		bool L_15 = ParameterInfo_get_IsOptional_m12025(__this, /*hidden argument*/&ParameterInfo_get_IsOptional_m12025_MethodInfo);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		ObjectU5BU5D_t164* L_16 = V_1;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)1));
		OptionalAttribute_t1823 * L_19 = (OptionalAttribute_t1823 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OptionalAttribute_t1823_il2cpp_TypeInfo));
		OptionalAttribute__ctor_m10394(L_19, /*hidden argument*/&OptionalAttribute__ctor_m10394_MethodInfo);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, L_18);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, L_18)) = (Object_t *)L_19;
	}

IL_0068:
	{
		bool L_20 = ParameterInfo_get_IsOut_m12026(__this, /*hidden argument*/&ParameterInfo_get_IsOut_m12026_MethodInfo);
		if (!L_20)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t164* L_21 = V_1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)((int32_t)L_23+(int32_t)1));
		OutAttribute_t1818 * L_24 = (OutAttribute_t1818 *)il2cpp_codegen_object_new (InitializedTypeInfo(&OutAttribute_t1818_il2cpp_TypeInfo));
		OutAttribute__ctor_m10388(L_24, /*hidden argument*/&OutAttribute__ctor_m10388_MethodInfo);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_23);
		ArrayElementTypeCheck (L_21, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, L_23)) = (Object_t *)L_24;
	}

IL_007c:
	{
		UnmanagedMarshal_t1993 * L_25 = (__this->___marshalAs_6);
		if (!L_25)
		{
			goto IL_0096;
		}
	}
	{
		ObjectU5BU5D_t164* L_26 = V_1;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
		UnmanagedMarshal_t1993 * L_29 = (__this->___marshalAs_6);
		NullCheck(L_29);
		MarshalAsAttribute_t1820 * L_30 = UnmanagedMarshal_ToMarshalAsAttribute_m11781(L_29, /*hidden argument*/&UnmanagedMarshal_ToMarshalAsAttribute_m11781_MethodInfo);
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_28);
		ArrayElementTypeCheck (L_26, L_30);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_26, L_28)) = (Object_t *)L_30;
	}

IL_0096:
	{
		ObjectU5BU5D_t164* L_31 = V_1;
		return L_31;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.ParameterModifier
#include "mscorlib_System_Reflection_ParameterModifierMethodDeclarations.h"



// Conversion methods for marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t1164_marshal(const ParameterModifier_t1164& unmarshaled, ParameterModifier_t1164_marshaled& marshaled)
{
	marshaled.____byref_0 = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)unmarshaled.____byref_0);
}
void ParameterModifier_t1164_marshal_back(const ParameterModifier_t1164_marshaled& marshaled, ParameterModifier_t1164& unmarshaled)
{
	unmarshaled.____byref_0 = (BooleanU5BU5D_t44*)il2cpp_codegen_marshal_array_result(&Boolean_t147_il2cpp_TypeInfo, marshaled.____byref_0, 1);
}
// Conversion method for clean up from marshalling of: System.Reflection.ParameterModifier
void ParameterModifier_t1164_marshal_cleanup(ParameterModifier_t1164_marshaled& marshaled)
{
}
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_Pointer.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Pointer_t2029_il2cpp_TypeInfo;
// System.Reflection.Pointer
#include "mscorlib_System_Reflection_PointerMethodDeclarations.h"



// System.Void System.Reflection.Pointer::.ctor()
extern MethodInfo Pointer__ctor_m12034_MethodInfo;
extern "C" void Pointer__ctor_m12034 (Pointer_t2029 * __this, MethodInfo* method)
{
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.Pointer::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m12035_MethodInfo;
extern "C" void Pointer_System_Runtime_Serialization_ISerializable_GetObjectData_m12035 (Pointer_t2029 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		NotSupportedException_t146 * L_0 = (NotSupportedException_t146 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t146_il2cpp_TypeInfo));
		NotSupportedException__ctor_m7099(L_0, (String_t*) &_stringLiteral1947, /*hidden argument*/&NotSupportedException__ctor_m7099_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ProcessorArchitecture_t2030_il2cpp_TypeInfo;
// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitectureMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo PropertyAttributes_t2031_il2cpp_TypeInfo;
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributesMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

extern MethodInfo PropertyInfo_GetValue_m14037_MethodInfo;
extern MethodInfo PropertyInfo_SetValue_m14038_MethodInfo;


// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m12036 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		MemberInfo__ctor_m10374(__this, /*hidden argument*/&MemberInfo__ctor_m10374_MethodInfo);
		return;
	}
}
// System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes()
// System.Boolean System.Reflection.PropertyInfo::get_CanRead()
// System.Boolean System.Reflection.PropertyInfo::get_CanWrite()
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern MethodInfo PropertyInfo_get_MemberType_m12037_MethodInfo;
extern "C" int32_t PropertyInfo_get_MemberType_m12037 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		return (int32_t)(((int32_t)16));
	}
}
// System.Type System.Reflection.PropertyInfo::get_PropertyType()
// System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean)
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean)
// System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters()
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean)
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern MethodInfo PropertyInfo_GetValue_m12038_MethodInfo;
extern "C" Object_t * PropertyInfo_GetValue_m12038 (PropertyInfo_t * __this, Object_t * ___obj, ObjectU5BU5D_t164* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		ObjectU5BU5D_t164* L_1 = ___index;
		Object_t * L_2 = (Object_t *)VirtFuncInvoker5< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&PropertyInfo_GetValue_m14037_MethodInfo, __this, L_0, 0, (Binder_t1162 *)NULL, L_1, (CultureInfo_t1165 *)NULL);
		return L_2;
	}
}
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern MethodInfo PropertyInfo_SetValue_m12039_MethodInfo;
extern "C" void PropertyInfo_SetValue_m12039 (PropertyInfo_t * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t164* ___index, MethodInfo* method)
{
	{
		Object_t * L_0 = ___obj;
		Object_t * L_1 = ___value;
		ObjectU5BU5D_t164* L_2 = ___index;
		VirtActionInvoker6< Object_t *, Object_t *, int32_t, Binder_t1162 *, ObjectU5BU5D_t164*, CultureInfo_t1165 * >::Invoke(&PropertyInfo_SetValue_m14038_MethodInfo, __this, L_0, L_1, 0, (Binder_t1162 *)NULL, L_2, (CultureInfo_t1165 *)NULL);
		return;
	}
}
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern MethodInfo PropertyInfo_GetOptionalCustomModifiers_m12040_MethodInfo;
extern "C" TypeU5BU5D_t913* PropertyInfo_GetOptionalCustomModifiers_m12040 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern MethodInfo PropertyInfo_GetRequiredCustomModifiers_m12041_MethodInfo;
extern "C" TypeU5BU5D_t913* PropertyInfo_GetRequiredCustomModifiers_m12041 (PropertyInfo_t * __this, MethodInfo* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		TypeU5BU5D_t913* L_0 = ((Type_t_StaticFields*)InitializedTypeInfo(&Type_t_il2cpp_TypeInfo)->static_fields)->___EmptyTypes_3;
		return L_0;
	}
}
#ifndef _MSC_VER
#else
#endif
// System.Reflection.StrongNameKeyPair
#include "mscorlib_System_Reflection_StrongNameKeyPairMethodDeclarations.h"

extern MethodInfo SerializationInfo_GetBoolean_m8005_MethodInfo;
extern MethodInfo SerializationInfo_AddValue_m8001_MethodInfo;


// System.Void System.Reflection.StrongNameKeyPair::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair__ctor_m12042_MethodInfo;
extern TypeInfo* ByteU5BU5D_t669_il2cpp_TypeInfo_var;
extern "C" void StrongNameKeyPair__ctor_m12042 (StrongNameKeyPair_t2007 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	static bool StrongNameKeyPair__ctor_m12042_init;
	if (!StrongNameKeyPair__ctor_m12042_init)
	{
		ByteU5BU5D_t669_il2cpp_TypeInfo_var = il2cpp_codegen_class_from_type(&ByteU5BU5D_t669_0_0_0);
		StrongNameKeyPair__ctor_m12042_init = true;
	}
	{
		Object__ctor_m419(__this, /*hidden argument*/&Object__ctor_m419_MethodInfo);
		SerializationInfo_t1123 * L_0 = ___info;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_1 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t669_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_0);
		Object_t * L_2 = SerializationInfo_GetValue_m8003(L_0, (String_t*) &_stringLiteral1948, L_1, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->____publicKey_0 = ((ByteU5BU5D_t669*)Castclass(L_2, ByteU5BU5D_t669_il2cpp_TypeInfo_var));
		SerializationInfo_t1123 * L_3 = ___info;
		NullCheck(L_3);
		String_t* L_4 = SerializationInfo_GetString_m8011(L_3, (String_t*) &_stringLiteral1949, /*hidden argument*/&SerializationInfo_GetString_m8011_MethodInfo);
		__this->____keyPairContainer_1 = L_4;
		SerializationInfo_t1123 * L_5 = ___info;
		NullCheck(L_5);
		bool L_6 = SerializationInfo_GetBoolean_m8005(L_5, (String_t*) &_stringLiteral1950, /*hidden argument*/&SerializationInfo_GetBoolean_m8005_MethodInfo);
		__this->____keyPairExported_2 = L_6;
		SerializationInfo_t1123 * L_7 = ___info;
		Type_t * L_8 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t669_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_7);
		Object_t * L_9 = SerializationInfo_GetValue_m8003(L_7, (String_t*) &_stringLiteral1951, L_8, /*hidden argument*/&SerializationInfo_GetValue_m8003_MethodInfo);
		__this->____keyPairArray_3 = ((ByteU5BU5D_t669*)Castclass(L_9, ByteU5BU5D_t669_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m12043_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_ISerializable_GetObjectData_m12043 (StrongNameKeyPair_t2007 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		ByteU5BU5D_t669* L_1 = (__this->____publicKey_0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_2 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t669_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_0);
		SerializationInfo_AddValue_m8000(L_0, (String_t*) &_stringLiteral1948, (Object_t *)(Object_t *)L_1, L_2, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		SerializationInfo_t1123 * L_3 = ___info;
		String_t* L_4 = (__this->____keyPairContainer_1);
		NullCheck(L_3);
		SerializationInfo_AddValue_m8014(L_3, (String_t*) &_stringLiteral1949, L_4, /*hidden argument*/&SerializationInfo_AddValue_m8014_MethodInfo);
		SerializationInfo_t1123 * L_5 = ___info;
		bool L_6 = (__this->____keyPairExported_2);
		NullCheck(L_5);
		SerializationInfo_AddValue_m8001(L_5, (String_t*) &_stringLiteral1950, L_6, /*hidden argument*/&SerializationInfo_AddValue_m8001_MethodInfo);
		SerializationInfo_t1123 * L_7 = ___info;
		ByteU5BU5D_t669* L_8 = (__this->____keyPairArray_3);
		Type_t * L_9 = Type_GetTypeFromHandle_m498(NULL /*static, unused*/, LoadTypeToken(&ByteU5BU5D_t669_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m498_MethodInfo);
		NullCheck(L_7);
		SerializationInfo_AddValue_m8000(L_7, (String_t*) &_stringLiteral1951, (Object_t *)(Object_t *)L_8, L_9, /*hidden argument*/&SerializationInfo_AddValue_m8000_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.StrongNameKeyPair::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern MethodInfo StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m12044_MethodInfo;
extern "C" void StrongNameKeyPair_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m12044 (StrongNameKeyPair_t2007 * __this, Object_t * ___sender, MethodInfo* method)
{
	{
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Exception
#include "mscorlib_System_ExceptionMethodDeclarations.h"
extern MethodInfo Exception__ctor_m6946_MethodInfo;
extern MethodInfo Exception__ctor_m6949_MethodInfo;


// System.Void System.Reflection.TargetException::.ctor()
extern MethodInfo TargetException__ctor_m12045_MethodInfo;
extern "C" void TargetException__ctor_m12045 (TargetException_t2032 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m10406(NULL /*static, unused*/, (String_t*) &_stringLiteral1952, /*hidden argument*/&Locale_GetText_m10406_MethodInfo);
		Exception__ctor_m6946(__this, L_0, /*hidden argument*/&Exception__ctor_m6946_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.String)
extern "C" void TargetException__ctor_m12046 (TargetException_t2032 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m6946(__this, L_0, /*hidden argument*/&Exception__ctor_m6946_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetException__ctor_m12047_MethodInfo;
extern "C" void TargetException__ctor_m12047 (TargetException_t2032 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		StreamingContext_t1124  L_1 = ___context;
		Exception__ctor_m6949(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m6949_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

extern MethodInfo Exception__ctor_m6948_MethodInfo;


// System.Void System.Reflection.TargetInvocationException::.ctor(System.Exception)
extern "C" void TargetInvocationException__ctor_m12048 (TargetInvocationException_t2033 * __this, Exception_t154 * ___inner, MethodInfo* method)
{
	{
		Exception_t154 * L_0 = ___inner;
		Exception__ctor_m6948(__this, (String_t*) &_stringLiteral1953, L_0, /*hidden argument*/&Exception__ctor_m6948_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetInvocationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetInvocationException__ctor_m12049_MethodInfo;
extern "C" void TargetInvocationException__ctor_m12049 (TargetInvocationException_t2033 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___sc, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		StreamingContext_t1124  L_1 = ___sc;
		Exception__ctor_m6949(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m6949_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern "C" void TargetParameterCountException__ctor_m12050 (TargetParameterCountException_t2034 * __this, MethodInfo* method)
{
	{
		String_t* L_0 = Locale_GetText_m10406(NULL /*static, unused*/, (String_t*) &_stringLiteral1954, /*hidden argument*/&Locale_GetText_m10406_MethodInfo);
		Exception__ctor_m6946(__this, L_0, /*hidden argument*/&Exception__ctor_m6946_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m12051 (TargetParameterCountException_t2034 * __this, String_t* ___message, MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m6946(__this, L_0, /*hidden argument*/&Exception__ctor_m6946_MethodInfo);
		return;
	}
}
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern MethodInfo TargetParameterCountException__ctor_m12052_MethodInfo;
extern "C" void TargetParameterCountException__ctor_m12052 (TargetParameterCountException_t2034 * __this, SerializationInfo_t1123 * ___info, StreamingContext_t1124  ___context, MethodInfo* method)
{
	{
		SerializationInfo_t1123 * L_0 = ___info;
		StreamingContext_t1124  L_1 = ___context;
		Exception__ctor_m6949(__this, L_0, L_1, /*hidden argument*/&Exception__ctor_m6949_MethodInfo);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TypeAttributes_t2035_il2cpp_TypeInfo;
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributesMethodDeclarations.h"



// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo NeutralResourcesLanguageAttribute_t1534_il2cpp_TypeInfo;
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"



// System.Void System.Resources.NeutralResourcesLanguageAttribute::.ctor(System.String)
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m8365_MethodInfo;
extern "C" void NeutralResourcesLanguageAttribute__ctor_m8365 (NeutralResourcesLanguageAttribute_t1534 * __this, String_t* ___cultureName, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___cultureName;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t1172 * L_1 = (ArgumentNullException_t1172 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentNullException_t1172_il2cpp_TypeInfo));
		ArgumentNullException__ctor_m6951(L_1, (String_t*) &_stringLiteral1955, /*hidden argument*/&ArgumentNullException__ctor_m6951_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0014:
	{
		String_t* L_2 = ___cultureName;
		__this->___culture_0 = L_2;
		return;
	}
}
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo SatelliteContractVersionAttribute_t1537_il2cpp_TypeInfo;
// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttributeMethodDeclarations.h"

extern MethodInfo Version__ctor_m13913_MethodInfo;


// System.Void System.Resources.SatelliteContractVersionAttribute::.ctor(System.String)
extern MethodInfo SatelliteContractVersionAttribute__ctor_m8368_MethodInfo;
extern "C" void SatelliteContractVersionAttribute__ctor_m8368 (SatelliteContractVersionAttribute_t1537 * __this, String_t* ___version, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		String_t* L_0 = ___version;
		Version_t1329 * L_1 = (Version_t1329 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Version_t1329_il2cpp_TypeInfo));
		Version__ctor_m13913(L_1, L_0, /*hidden argument*/&Version__ctor_m13913_MethodInfo);
		__this->___ver_0 = L_1;
		return;
	}
}
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxations_t2036_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0MethodDeclarations.h"



// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CompilationRelaxationsAttribute_t956_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"



// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
extern MethodInfo CompilationRelaxationsAttribute__ctor_m5728_MethodInfo;
extern "C" void CompilationRelaxationsAttribute__ctor_m5728 (CompilationRelaxationsAttribute_t956 * __this, int32_t ___relaxations, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Runtime.CompilerServices.CompilationRelaxations)
extern MethodInfo CompilationRelaxationsAttribute__ctor_m8370_MethodInfo;
extern "C" void CompilationRelaxationsAttribute__ctor_m8370 (CompilationRelaxationsAttribute_t956 * __this, int32_t ___relaxations, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		int32_t L_0 = ___relaxations;
		__this->___relax_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultDependencyAttribute_t2037_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAtMethodDeclarations.h"

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// System.Void System.Runtime.CompilerServices.DefaultDependencyAttribute::.ctor(System.Runtime.CompilerServices.LoadHint)
extern MethodInfo DefaultDependencyAttribute__ctor_m12053_MethodInfo;
extern "C" void DefaultDependencyAttribute__ctor_m12053 (DefaultDependencyAttribute_t2037 * __this, int32_t ___loadHintArgument, MethodInfo* method)
{
	{
		Attribute__ctor_m4591(__this, /*hidden argument*/&Attribute__ctor_m4591_MethodInfo);
		int32_t L_0 = ___loadHintArgument;
		__this->___hint_0 = L_0;
		return;
	}
}
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatile.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IsVolatile_t2038_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.IsVolatile
#include "mscorlib_System_Runtime_CompilerServices_IsVolatileMethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif
extern TypeInfo LoadHint_t2039_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHintMethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif