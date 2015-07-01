#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCache.h"
// Metadata Definition System.Text.RegularExpressions.FactoryCache
extern TypeInfo FactoryCache_t1404_il2cpp_TypeInfo;
// System.Text.RegularExpressions.FactoryCache
#include "System_System_Text_RegularExpressions_FactoryCacheMethodDeclarations.h"
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo FactoryCache_t1404_FactoryCache__ctor_m7615_ParameterInfos[] = 
{
	{"capacity", 0, 134218200, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::.ctor(System.Int32)
MethodInfo FactoryCache__ctor_m7615_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&FactoryCache__ctor_m7615/* method */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, FactoryCache_t1404_FactoryCache__ctor_m7615_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 576/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1406_0_0_0;
extern Il2CppType RegexOptions_t1406_0_0_0;
extern Il2CppType IMachineFactory_t1405_0_0_0;
extern Il2CppType IMachineFactory_t1405_0_0_0;
static ParameterInfo FactoryCache_t1404_FactoryCache_Add_m7616_ParameterInfos[] = 
{
	{"pattern", 0, 134218201, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218202, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
	{"factory", 2, 134218203, &EmptyCustomAttributesCache, &IMachineFactory_t1405_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Add(System.String,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.IMachineFactory)
MethodInfo FactoryCache_Add_m7616_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&FactoryCache_Add_m7616/* method */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141_Object_t/* invoker_method */
	, FactoryCache_t1404_FactoryCache_Add_m7616_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 577/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.FactoryCache::Cleanup()
MethodInfo FactoryCache_Cleanup_m7617_MethodInfo = 
{
	"Cleanup"/* name */
	, (methodPointerType)&FactoryCache_Cleanup_m7617/* method */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 578/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo FactoryCache_t1404_FactoryCache_Lookup_m7618_ParameterInfos[] = 
{
	{"pattern", 0, 134218204, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218205, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType IMachineFactory_t1405_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.FactoryCache::Lookup(System.String,System.Text.RegularExpressions.RegexOptions)
MethodInfo FactoryCache_Lookup_m7618_MethodInfo = 
{
	"Lookup"/* name */
	, (methodPointerType)&FactoryCache_Lookup_m7618/* method */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1405_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t141/* invoker_method */
	, FactoryCache_t1404_FactoryCache_Lookup_m7618_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 579/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* FactoryCache_t1404_MethodInfos[] =
{
	&FactoryCache__ctor_m7615_MethodInfo,
	&FactoryCache_Add_m7616_MethodInfo,
	&FactoryCache_Cleanup_m7617_MethodInfo,
	&FactoryCache_Lookup_m7618_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo FactoryCache_t1404____capacity_0_FieldInfo = 
{
	"capacity"/* name */
	, &Int32_t141_0_0_1/* type */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1404, ___capacity_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1291_0_0_1;
FieldInfo FactoryCache_t1404____factories_1_FieldInfo = 
{
	"factories"/* name */
	, &Hashtable_t1291_0_0_1/* type */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1404, ___factories_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MRUList_t1411_0_0_1;
FieldInfo FactoryCache_t1404____mru_list_2_FieldInfo = 
{
	"mru_list"/* name */
	, &MRUList_t1411_0_0_1/* type */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* parent */
	, offsetof(FactoryCache_t1404, ___mru_list_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* FactoryCache_t1404_FieldInfos[] =
{
	&FactoryCache_t1404____capacity_0_FieldInfo,
	&FactoryCache_t1404____factories_1_FieldInfo,
	&FactoryCache_t1404____mru_list_2_FieldInfo,
	NULL
};
extern Il2CppType Key_t1410_0_0_0;
static const Il2CppType* FactoryCache_t1404_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Key_t1410_0_0_0,
};
extern MethodInfo Object_Equals_m713_MethodInfo;
extern MethodInfo Object_Finalize_m710_MethodInfo;
extern MethodInfo Object_GetHashCode_m714_MethodInfo;
extern MethodInfo Object_ToString_m715_MethodInfo;
static Il2CppMethodReference FactoryCache_t1404_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool FactoryCache_t1404_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType FactoryCache_t1404_0_0_0;
extern Il2CppType FactoryCache_t1404_1_0_0;
extern Il2CppType Object_t_0_0_0;
struct FactoryCache_t1404;
const Il2CppTypeDefinitionMetadata FactoryCache_t1404_DefinitionMetadata = 
{
	NULL/* declaringType */
	, FactoryCache_t1404_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, FactoryCache_t1404_VTable/* vtableMethods */
	, FactoryCache_t1404_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo FactoryCache_t1404_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "FactoryCache"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, FactoryCache_t1404_MethodInfos/* methods */
	, NULL/* properties */
	, FactoryCache_t1404_FieldInfos/* fields */
	, NULL/* events */
	, &FactoryCache_t1404_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &FactoryCache_t1404_0_0_0/* byval_arg */
	, &FactoryCache_t1404_1_0_0/* this_arg */
	, &FactoryCache_t1404_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (FactoryCache_t1404)/* instance_size */
	, sizeof (FactoryCache_t1404)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_Node.h"
// Metadata Definition System.Text.RegularExpressions.MRUList/Node
extern TypeInfo Node_t1412_il2cpp_TypeInfo;
// System.Text.RegularExpressions.MRUList/Node
#include "System_System_Text_RegularExpressions_MRUList_NodeMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Node_t1412_Node__ctor_m7619_ParameterInfos[] = 
{
	{"value", 0, 134218210, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList/Node::.ctor(System.Object)
MethodInfo Node__ctor_m7619_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Node__ctor_m7619/* method */
	, &Node_t1412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Node_t1412_Node__ctor_m7619_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 587/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Node_t1412_MethodInfos[] =
{
	&Node__ctor_m7619_MethodInfo,
	NULL
};
extern Il2CppType Object_t_0_0_6;
FieldInfo Node_t1412____value_0_FieldInfo = 
{
	"value"/* name */
	, &Object_t_0_0_6/* type */
	, &Node_t1412_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1412, ___value_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1412_0_0_6;
FieldInfo Node_t1412____previous_1_FieldInfo = 
{
	"previous"/* name */
	, &Node_t1412_0_0_6/* type */
	, &Node_t1412_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1412, ___previous_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1412_0_0_6;
FieldInfo Node_t1412____next_2_FieldInfo = 
{
	"next"/* name */
	, &Node_t1412_0_0_6/* type */
	, &Node_t1412_il2cpp_TypeInfo/* parent */
	, offsetof(Node_t1412, ___next_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Node_t1412_FieldInfos[] =
{
	&Node_t1412____value_0_FieldInfo,
	&Node_t1412____previous_1_FieldInfo,
	&Node_t1412____next_2_FieldInfo,
	NULL
};
static Il2CppMethodReference Node_t1412_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool Node_t1412_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Node_t1412_0_0_0;
extern Il2CppType Node_t1412_1_0_0;
extern TypeInfo MRUList_t1411_il2cpp_TypeInfo;
extern Il2CppType MRUList_t1411_0_0_0;
struct Node_t1412;
const Il2CppTypeDefinitionMetadata Node_t1412_DefinitionMetadata = 
{
	&MRUList_t1411_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Node_t1412_VTable/* vtableMethods */
	, Node_t1412_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Node_t1412_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Node"/* name */
	, ""/* namespaze */
	, Node_t1412_MethodInfos/* methods */
	, NULL/* properties */
	, Node_t1412_FieldInfos/* fields */
	, NULL/* events */
	, &Node_t1412_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Node_t1412_0_0_0/* byval_arg */
	, &Node_t1412_1_0_0/* this_arg */
	, &Node_t1412_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Node_t1412)/* instance_size */
	, sizeof (Node_t1412)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUList.h"
// Metadata Definition System.Text.RegularExpressions.MRUList
// System.Text.RegularExpressions.MRUList
#include "System_System_Text_RegularExpressions_MRUListMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::.ctor()
MethodInfo MRUList__ctor_m7620_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&MRUList__ctor_m7620/* method */
	, &MRUList_t1411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 584/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo MRUList_t1411_MRUList_Use_m7621_ParameterInfos[] = 
{
	{"o", 0, 134218209, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.MRUList::Use(System.Object)
MethodInfo MRUList_Use_m7621_MethodInfo = 
{
	"Use"/* name */
	, (methodPointerType)&MRUList_Use_m7621/* method */
	, &MRUList_t1411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, MRUList_t1411_MRUList_Use_m7621_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 585/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.MRUList::Evict()
MethodInfo MRUList_Evict_m7622_MethodInfo = 
{
	"Evict"/* name */
	, (methodPointerType)&MRUList_Evict_m7622/* method */
	, &MRUList_t1411_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 586/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* MRUList_t1411_MethodInfos[] =
{
	&MRUList__ctor_m7620_MethodInfo,
	&MRUList_Use_m7621_MethodInfo,
	&MRUList_Evict_m7622_MethodInfo,
	NULL
};
extern Il2CppType Node_t1412_0_0_1;
FieldInfo MRUList_t1411____head_0_FieldInfo = 
{
	"head"/* name */
	, &Node_t1412_0_0_1/* type */
	, &MRUList_t1411_il2cpp_TypeInfo/* parent */
	, offsetof(MRUList_t1411, ___head_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Node_t1412_0_0_1;
FieldInfo MRUList_t1411____tail_1_FieldInfo = 
{
	"tail"/* name */
	, &Node_t1412_0_0_1/* type */
	, &MRUList_t1411_il2cpp_TypeInfo/* parent */
	, offsetof(MRUList_t1411, ___tail_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* MRUList_t1411_FieldInfos[] =
{
	&MRUList_t1411____head_0_FieldInfo,
	&MRUList_t1411____tail_1_FieldInfo,
	NULL
};
static const Il2CppType* MRUList_t1411_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Node_t1412_0_0_0,
};
static Il2CppMethodReference MRUList_t1411_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool MRUList_t1411_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType MRUList_t1411_1_0_0;
struct MRUList_t1411;
const Il2CppTypeDefinitionMetadata MRUList_t1411_DefinitionMetadata = 
{
	NULL/* declaringType */
	, MRUList_t1411_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, MRUList_t1411_VTable/* vtableMethods */
	, MRUList_t1411_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo MRUList_t1411_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "MRUList"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, MRUList_t1411_MethodInfos/* methods */
	, NULL/* properties */
	, MRUList_t1411_FieldInfos/* fields */
	, NULL/* events */
	, &MRUList_t1411_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &MRUList_t1411_0_0_0/* byval_arg */
	, &MRUList_t1411_1_0_0/* this_arg */
	, &MRUList_t1411_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (MRUList_t1411)/* instance_size */
	, sizeof (MRUList_t1411)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_Category.h"
// Metadata Definition System.Text.RegularExpressions.Category
extern TypeInfo Category_t1413_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Category
#include "System_System_Text_RegularExpressions_CategoryMethodDeclarations.h"
static MethodInfo* Category_t1413_MethodInfos[] =
{
	NULL
};
extern Il2CppType UInt16_t862_0_0_1542;
FieldInfo Category_t1413____value___1_FieldInfo = 
{
	"value__"/* name */
	, &UInt16_t862_0_0_1542/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, offsetof(Category_t1413, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____None_2_FieldInfo = 
{
	"None"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____Any_3_FieldInfo = 
{
	"Any"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____AnySingleline_4_FieldInfo = 
{
	"AnySingleline"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____Word_5_FieldInfo = 
{
	"Word"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____Digit_6_FieldInfo = 
{
	"Digit"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____WhiteSpace_7_FieldInfo = 
{
	"WhiteSpace"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____EcmaAny_8_FieldInfo = 
{
	"EcmaAny"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____EcmaAnySingleline_9_FieldInfo = 
{
	"EcmaAnySingleline"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____EcmaWord_10_FieldInfo = 
{
	"EcmaWord"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____EcmaDigit_11_FieldInfo = 
{
	"EcmaDigit"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____EcmaWhiteSpace_12_FieldInfo = 
{
	"EcmaWhiteSpace"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeL_13_FieldInfo = 
{
	"UnicodeL"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeM_14_FieldInfo = 
{
	"UnicodeM"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeN_15_FieldInfo = 
{
	"UnicodeN"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeZ_16_FieldInfo = 
{
	"UnicodeZ"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeP_17_FieldInfo = 
{
	"UnicodeP"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeS_18_FieldInfo = 
{
	"UnicodeS"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeC_19_FieldInfo = 
{
	"UnicodeC"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLu_20_FieldInfo = 
{
	"UnicodeLu"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLl_21_FieldInfo = 
{
	"UnicodeLl"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLt_22_FieldInfo = 
{
	"UnicodeLt"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLm_23_FieldInfo = 
{
	"UnicodeLm"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLo_24_FieldInfo = 
{
	"UnicodeLo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMn_25_FieldInfo = 
{
	"UnicodeMn"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMe_26_FieldInfo = 
{
	"UnicodeMe"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMc_27_FieldInfo = 
{
	"UnicodeMc"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeNd_28_FieldInfo = 
{
	"UnicodeNd"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeNl_29_FieldInfo = 
{
	"UnicodeNl"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeNo_30_FieldInfo = 
{
	"UnicodeNo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeZs_31_FieldInfo = 
{
	"UnicodeZs"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeZl_32_FieldInfo = 
{
	"UnicodeZl"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeZp_33_FieldInfo = 
{
	"UnicodeZp"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePd_34_FieldInfo = 
{
	"UnicodePd"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePs_35_FieldInfo = 
{
	"UnicodePs"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePi_36_FieldInfo = 
{
	"UnicodePi"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePe_37_FieldInfo = 
{
	"UnicodePe"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePf_38_FieldInfo = 
{
	"UnicodePf"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePc_39_FieldInfo = 
{
	"UnicodePc"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePo_40_FieldInfo = 
{
	"UnicodePo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSm_41_FieldInfo = 
{
	"UnicodeSm"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSc_42_FieldInfo = 
{
	"UnicodeSc"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSk_43_FieldInfo = 
{
	"UnicodeSk"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSo_44_FieldInfo = 
{
	"UnicodeSo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCc_45_FieldInfo = 
{
	"UnicodeCc"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCf_46_FieldInfo = 
{
	"UnicodeCf"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCo_47_FieldInfo = 
{
	"UnicodeCo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCs_48_FieldInfo = 
{
	"UnicodeCs"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCn_49_FieldInfo = 
{
	"UnicodeCn"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBasicLatin_50_FieldInfo = 
{
	"UnicodeBasicLatin"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLatin1Supplement_51_FieldInfo = 
{
	"UnicodeLatin1Supplement"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLatinExtendedA_52_FieldInfo = 
{
	"UnicodeLatinExtendedA"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLatinExtendedB_53_FieldInfo = 
{
	"UnicodeLatinExtendedB"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeIPAExtensions_54_FieldInfo = 
{
	"UnicodeIPAExtensions"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSpacingModifierLetters_55_FieldInfo = 
{
	"UnicodeSpacingModifierLetters"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCombiningDiacriticalMarks_56_FieldInfo = 
{
	"UnicodeCombiningDiacriticalMarks"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGreek_57_FieldInfo = 
{
	"UnicodeGreek"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCyrillic_58_FieldInfo = 
{
	"UnicodeCyrillic"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeArmenian_59_FieldInfo = 
{
	"UnicodeArmenian"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHebrew_60_FieldInfo = 
{
	"UnicodeHebrew"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeArabic_61_FieldInfo = 
{
	"UnicodeArabic"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSyriac_62_FieldInfo = 
{
	"UnicodeSyriac"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeThaana_63_FieldInfo = 
{
	"UnicodeThaana"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeDevanagari_64_FieldInfo = 
{
	"UnicodeDevanagari"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBengali_65_FieldInfo = 
{
	"UnicodeBengali"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGurmukhi_66_FieldInfo = 
{
	"UnicodeGurmukhi"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGujarati_67_FieldInfo = 
{
	"UnicodeGujarati"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeOriya_68_FieldInfo = 
{
	"UnicodeOriya"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeTamil_69_FieldInfo = 
{
	"UnicodeTamil"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeTelugu_70_FieldInfo = 
{
	"UnicodeTelugu"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeKannada_71_FieldInfo = 
{
	"UnicodeKannada"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMalayalam_72_FieldInfo = 
{
	"UnicodeMalayalam"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSinhala_73_FieldInfo = 
{
	"UnicodeSinhala"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeThai_74_FieldInfo = 
{
	"UnicodeThai"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLao_75_FieldInfo = 
{
	"UnicodeLao"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeTibetan_76_FieldInfo = 
{
	"UnicodeTibetan"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMyanmar_77_FieldInfo = 
{
	"UnicodeMyanmar"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGeorgian_78_FieldInfo = 
{
	"UnicodeGeorgian"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHangulJamo_79_FieldInfo = 
{
	"UnicodeHangulJamo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeEthiopic_80_FieldInfo = 
{
	"UnicodeEthiopic"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCherokee_81_FieldInfo = 
{
	"UnicodeCherokee"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo = 
{
	"UnicodeUnifiedCanadianAboriginalSyllabics"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeOgham_83_FieldInfo = 
{
	"UnicodeOgham"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeRunic_84_FieldInfo = 
{
	"UnicodeRunic"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeKhmer_85_FieldInfo = 
{
	"UnicodeKhmer"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMongolian_86_FieldInfo = 
{
	"UnicodeMongolian"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLatinExtendedAdditional_87_FieldInfo = 
{
	"UnicodeLatinExtendedAdditional"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGreekExtended_88_FieldInfo = 
{
	"UnicodeGreekExtended"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGeneralPunctuation_89_FieldInfo = 
{
	"UnicodeGeneralPunctuation"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSuperscriptsandSubscripts_90_FieldInfo = 
{
	"UnicodeSuperscriptsandSubscripts"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCurrencySymbols_91_FieldInfo = 
{
	"UnicodeCurrencySymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCombiningMarksforSymbols_92_FieldInfo = 
{
	"UnicodeCombiningMarksforSymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLetterlikeSymbols_93_FieldInfo = 
{
	"UnicodeLetterlikeSymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeNumberForms_94_FieldInfo = 
{
	"UnicodeNumberForms"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeArrows_95_FieldInfo = 
{
	"UnicodeArrows"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMathematicalOperators_96_FieldInfo = 
{
	"UnicodeMathematicalOperators"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMiscellaneousTechnical_97_FieldInfo = 
{
	"UnicodeMiscellaneousTechnical"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeControlPictures_98_FieldInfo = 
{
	"UnicodeControlPictures"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeOpticalCharacterRecognition_99_FieldInfo = 
{
	"UnicodeOpticalCharacterRecognition"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeEnclosedAlphanumerics_100_FieldInfo = 
{
	"UnicodeEnclosedAlphanumerics"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBoxDrawing_101_FieldInfo = 
{
	"UnicodeBoxDrawing"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBlockElements_102_FieldInfo = 
{
	"UnicodeBlockElements"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGeometricShapes_103_FieldInfo = 
{
	"UnicodeGeometricShapes"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMiscellaneousSymbols_104_FieldInfo = 
{
	"UnicodeMiscellaneousSymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeDingbats_105_FieldInfo = 
{
	"UnicodeDingbats"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBraillePatterns_106_FieldInfo = 
{
	"UnicodeBraillePatterns"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKRadicalsSupplement_107_FieldInfo = 
{
	"UnicodeCJKRadicalsSupplement"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeKangxiRadicals_108_FieldInfo = 
{
	"UnicodeKangxiRadicals"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeIdeographicDescriptionCharacters_109_FieldInfo = 
{
	"UnicodeIdeographicDescriptionCharacters"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKSymbolsandPunctuation_110_FieldInfo = 
{
	"UnicodeCJKSymbolsandPunctuation"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHiragana_111_FieldInfo = 
{
	"UnicodeHiragana"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeKatakana_112_FieldInfo = 
{
	"UnicodeKatakana"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBopomofo_113_FieldInfo = 
{
	"UnicodeBopomofo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHangulCompatibilityJamo_114_FieldInfo = 
{
	"UnicodeHangulCompatibilityJamo"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeKanbun_115_FieldInfo = 
{
	"UnicodeKanbun"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeBopomofoExtended_116_FieldInfo = 
{
	"UnicodeBopomofoExtended"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo = 
{
	"UnicodeEnclosedCJKLettersandMonths"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKCompatibility_118_FieldInfo = 
{
	"UnicodeCJKCompatibility"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionA"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKUnifiedIdeographs_120_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographs"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeYiSyllables_121_FieldInfo = 
{
	"UnicodeYiSyllables"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeYiRadicals_122_FieldInfo = 
{
	"UnicodeYiRadicals"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHangulSyllables_123_FieldInfo = 
{
	"UnicodeHangulSyllables"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHighSurrogates_124_FieldInfo = 
{
	"UnicodeHighSurrogates"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHighPrivateUseSurrogates_125_FieldInfo = 
{
	"UnicodeHighPrivateUseSurrogates"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeLowSurrogates_126_FieldInfo = 
{
	"UnicodeLowSurrogates"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodePrivateUse_127_FieldInfo = 
{
	"UnicodePrivateUse"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKCompatibilityIdeographs_128_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographs"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeAlphabeticPresentationForms_129_FieldInfo = 
{
	"UnicodeAlphabeticPresentationForms"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeArabicPresentationFormsA_130_FieldInfo = 
{
	"UnicodeArabicPresentationFormsA"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCombiningHalfMarks_131_FieldInfo = 
{
	"UnicodeCombiningHalfMarks"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKCompatibilityForms_132_FieldInfo = 
{
	"UnicodeCJKCompatibilityForms"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSmallFormVariants_133_FieldInfo = 
{
	"UnicodeSmallFormVariants"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeArabicPresentationFormsB_134_FieldInfo = 
{
	"UnicodeArabicPresentationFormsB"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeSpecials_135_FieldInfo = 
{
	"UnicodeSpecials"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeHalfwidthandFullwidthForms_136_FieldInfo = 
{
	"UnicodeHalfwidthandFullwidthForms"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeOldItalic_137_FieldInfo = 
{
	"UnicodeOldItalic"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeGothic_138_FieldInfo = 
{
	"UnicodeGothic"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeDeseret_139_FieldInfo = 
{
	"UnicodeDeseret"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeByzantineMusicalSymbols_140_FieldInfo = 
{
	"UnicodeByzantineMusicalSymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMusicalSymbols_141_FieldInfo = 
{
	"UnicodeMusicalSymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo = 
{
	"UnicodeMathematicalAlphanumericSymbols"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo = 
{
	"UnicodeCJKUnifiedIdeographsExtensionB"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo = 
{
	"UnicodeCJKCompatibilityIdeographsSupplement"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____UnicodeTags_145_FieldInfo = 
{
	"UnicodeTags"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Category_t1413_0_0_32854;
FieldInfo Category_t1413____LastValue_146_FieldInfo = 
{
	"LastValue"/* name */
	, &Category_t1413_0_0_32854/* type */
	, &Category_t1413_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Category_t1413_FieldInfos[] =
{
	&Category_t1413____value___1_FieldInfo,
	&Category_t1413____None_2_FieldInfo,
	&Category_t1413____Any_3_FieldInfo,
	&Category_t1413____AnySingleline_4_FieldInfo,
	&Category_t1413____Word_5_FieldInfo,
	&Category_t1413____Digit_6_FieldInfo,
	&Category_t1413____WhiteSpace_7_FieldInfo,
	&Category_t1413____EcmaAny_8_FieldInfo,
	&Category_t1413____EcmaAnySingleline_9_FieldInfo,
	&Category_t1413____EcmaWord_10_FieldInfo,
	&Category_t1413____EcmaDigit_11_FieldInfo,
	&Category_t1413____EcmaWhiteSpace_12_FieldInfo,
	&Category_t1413____UnicodeL_13_FieldInfo,
	&Category_t1413____UnicodeM_14_FieldInfo,
	&Category_t1413____UnicodeN_15_FieldInfo,
	&Category_t1413____UnicodeZ_16_FieldInfo,
	&Category_t1413____UnicodeP_17_FieldInfo,
	&Category_t1413____UnicodeS_18_FieldInfo,
	&Category_t1413____UnicodeC_19_FieldInfo,
	&Category_t1413____UnicodeLu_20_FieldInfo,
	&Category_t1413____UnicodeLl_21_FieldInfo,
	&Category_t1413____UnicodeLt_22_FieldInfo,
	&Category_t1413____UnicodeLm_23_FieldInfo,
	&Category_t1413____UnicodeLo_24_FieldInfo,
	&Category_t1413____UnicodeMn_25_FieldInfo,
	&Category_t1413____UnicodeMe_26_FieldInfo,
	&Category_t1413____UnicodeMc_27_FieldInfo,
	&Category_t1413____UnicodeNd_28_FieldInfo,
	&Category_t1413____UnicodeNl_29_FieldInfo,
	&Category_t1413____UnicodeNo_30_FieldInfo,
	&Category_t1413____UnicodeZs_31_FieldInfo,
	&Category_t1413____UnicodeZl_32_FieldInfo,
	&Category_t1413____UnicodeZp_33_FieldInfo,
	&Category_t1413____UnicodePd_34_FieldInfo,
	&Category_t1413____UnicodePs_35_FieldInfo,
	&Category_t1413____UnicodePi_36_FieldInfo,
	&Category_t1413____UnicodePe_37_FieldInfo,
	&Category_t1413____UnicodePf_38_FieldInfo,
	&Category_t1413____UnicodePc_39_FieldInfo,
	&Category_t1413____UnicodePo_40_FieldInfo,
	&Category_t1413____UnicodeSm_41_FieldInfo,
	&Category_t1413____UnicodeSc_42_FieldInfo,
	&Category_t1413____UnicodeSk_43_FieldInfo,
	&Category_t1413____UnicodeSo_44_FieldInfo,
	&Category_t1413____UnicodeCc_45_FieldInfo,
	&Category_t1413____UnicodeCf_46_FieldInfo,
	&Category_t1413____UnicodeCo_47_FieldInfo,
	&Category_t1413____UnicodeCs_48_FieldInfo,
	&Category_t1413____UnicodeCn_49_FieldInfo,
	&Category_t1413____UnicodeBasicLatin_50_FieldInfo,
	&Category_t1413____UnicodeLatin1Supplement_51_FieldInfo,
	&Category_t1413____UnicodeLatinExtendedA_52_FieldInfo,
	&Category_t1413____UnicodeLatinExtendedB_53_FieldInfo,
	&Category_t1413____UnicodeIPAExtensions_54_FieldInfo,
	&Category_t1413____UnicodeSpacingModifierLetters_55_FieldInfo,
	&Category_t1413____UnicodeCombiningDiacriticalMarks_56_FieldInfo,
	&Category_t1413____UnicodeGreek_57_FieldInfo,
	&Category_t1413____UnicodeCyrillic_58_FieldInfo,
	&Category_t1413____UnicodeArmenian_59_FieldInfo,
	&Category_t1413____UnicodeHebrew_60_FieldInfo,
	&Category_t1413____UnicodeArabic_61_FieldInfo,
	&Category_t1413____UnicodeSyriac_62_FieldInfo,
	&Category_t1413____UnicodeThaana_63_FieldInfo,
	&Category_t1413____UnicodeDevanagari_64_FieldInfo,
	&Category_t1413____UnicodeBengali_65_FieldInfo,
	&Category_t1413____UnicodeGurmukhi_66_FieldInfo,
	&Category_t1413____UnicodeGujarati_67_FieldInfo,
	&Category_t1413____UnicodeOriya_68_FieldInfo,
	&Category_t1413____UnicodeTamil_69_FieldInfo,
	&Category_t1413____UnicodeTelugu_70_FieldInfo,
	&Category_t1413____UnicodeKannada_71_FieldInfo,
	&Category_t1413____UnicodeMalayalam_72_FieldInfo,
	&Category_t1413____UnicodeSinhala_73_FieldInfo,
	&Category_t1413____UnicodeThai_74_FieldInfo,
	&Category_t1413____UnicodeLao_75_FieldInfo,
	&Category_t1413____UnicodeTibetan_76_FieldInfo,
	&Category_t1413____UnicodeMyanmar_77_FieldInfo,
	&Category_t1413____UnicodeGeorgian_78_FieldInfo,
	&Category_t1413____UnicodeHangulJamo_79_FieldInfo,
	&Category_t1413____UnicodeEthiopic_80_FieldInfo,
	&Category_t1413____UnicodeCherokee_81_FieldInfo,
	&Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo,
	&Category_t1413____UnicodeOgham_83_FieldInfo,
	&Category_t1413____UnicodeRunic_84_FieldInfo,
	&Category_t1413____UnicodeKhmer_85_FieldInfo,
	&Category_t1413____UnicodeMongolian_86_FieldInfo,
	&Category_t1413____UnicodeLatinExtendedAdditional_87_FieldInfo,
	&Category_t1413____UnicodeGreekExtended_88_FieldInfo,
	&Category_t1413____UnicodeGeneralPunctuation_89_FieldInfo,
	&Category_t1413____UnicodeSuperscriptsandSubscripts_90_FieldInfo,
	&Category_t1413____UnicodeCurrencySymbols_91_FieldInfo,
	&Category_t1413____UnicodeCombiningMarksforSymbols_92_FieldInfo,
	&Category_t1413____UnicodeLetterlikeSymbols_93_FieldInfo,
	&Category_t1413____UnicodeNumberForms_94_FieldInfo,
	&Category_t1413____UnicodeArrows_95_FieldInfo,
	&Category_t1413____UnicodeMathematicalOperators_96_FieldInfo,
	&Category_t1413____UnicodeMiscellaneousTechnical_97_FieldInfo,
	&Category_t1413____UnicodeControlPictures_98_FieldInfo,
	&Category_t1413____UnicodeOpticalCharacterRecognition_99_FieldInfo,
	&Category_t1413____UnicodeEnclosedAlphanumerics_100_FieldInfo,
	&Category_t1413____UnicodeBoxDrawing_101_FieldInfo,
	&Category_t1413____UnicodeBlockElements_102_FieldInfo,
	&Category_t1413____UnicodeGeometricShapes_103_FieldInfo,
	&Category_t1413____UnicodeMiscellaneousSymbols_104_FieldInfo,
	&Category_t1413____UnicodeDingbats_105_FieldInfo,
	&Category_t1413____UnicodeBraillePatterns_106_FieldInfo,
	&Category_t1413____UnicodeCJKRadicalsSupplement_107_FieldInfo,
	&Category_t1413____UnicodeKangxiRadicals_108_FieldInfo,
	&Category_t1413____UnicodeIdeographicDescriptionCharacters_109_FieldInfo,
	&Category_t1413____UnicodeCJKSymbolsandPunctuation_110_FieldInfo,
	&Category_t1413____UnicodeHiragana_111_FieldInfo,
	&Category_t1413____UnicodeKatakana_112_FieldInfo,
	&Category_t1413____UnicodeBopomofo_113_FieldInfo,
	&Category_t1413____UnicodeHangulCompatibilityJamo_114_FieldInfo,
	&Category_t1413____UnicodeKanbun_115_FieldInfo,
	&Category_t1413____UnicodeBopomofoExtended_116_FieldInfo,
	&Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo,
	&Category_t1413____UnicodeCJKCompatibility_118_FieldInfo,
	&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo,
	&Category_t1413____UnicodeCJKUnifiedIdeographs_120_FieldInfo,
	&Category_t1413____UnicodeYiSyllables_121_FieldInfo,
	&Category_t1413____UnicodeYiRadicals_122_FieldInfo,
	&Category_t1413____UnicodeHangulSyllables_123_FieldInfo,
	&Category_t1413____UnicodeHighSurrogates_124_FieldInfo,
	&Category_t1413____UnicodeHighPrivateUseSurrogates_125_FieldInfo,
	&Category_t1413____UnicodeLowSurrogates_126_FieldInfo,
	&Category_t1413____UnicodePrivateUse_127_FieldInfo,
	&Category_t1413____UnicodeCJKCompatibilityIdeographs_128_FieldInfo,
	&Category_t1413____UnicodeAlphabeticPresentationForms_129_FieldInfo,
	&Category_t1413____UnicodeArabicPresentationFormsA_130_FieldInfo,
	&Category_t1413____UnicodeCombiningHalfMarks_131_FieldInfo,
	&Category_t1413____UnicodeCJKCompatibilityForms_132_FieldInfo,
	&Category_t1413____UnicodeSmallFormVariants_133_FieldInfo,
	&Category_t1413____UnicodeArabicPresentationFormsB_134_FieldInfo,
	&Category_t1413____UnicodeSpecials_135_FieldInfo,
	&Category_t1413____UnicodeHalfwidthandFullwidthForms_136_FieldInfo,
	&Category_t1413____UnicodeOldItalic_137_FieldInfo,
	&Category_t1413____UnicodeGothic_138_FieldInfo,
	&Category_t1413____UnicodeDeseret_139_FieldInfo,
	&Category_t1413____UnicodeByzantineMusicalSymbols_140_FieldInfo,
	&Category_t1413____UnicodeMusicalSymbols_141_FieldInfo,
	&Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo,
	&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo,
	&Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo,
	&Category_t1413____UnicodeTags_145_FieldInfo,
	&Category_t1413____LastValue_146_FieldInfo,
	NULL
};
static const uint16_t Category_t1413____None_2_DefaultValueData = 0;
extern Il2CppType UInt16_t862_0_0_0;
static Il2CppFieldDefaultValueEntry Category_t1413____None_2_DefaultValue = 
{
	&Category_t1413____None_2_FieldInfo/* field */
	, { (char*)&Category_t1413____None_2_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____Any_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Category_t1413____Any_3_DefaultValue = 
{
	&Category_t1413____Any_3_FieldInfo/* field */
	, { (char*)&Category_t1413____Any_3_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____AnySingleline_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Category_t1413____AnySingleline_4_DefaultValue = 
{
	&Category_t1413____AnySingleline_4_FieldInfo/* field */
	, { (char*)&Category_t1413____AnySingleline_4_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____Word_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry Category_t1413____Word_5_DefaultValue = 
{
	&Category_t1413____Word_5_FieldInfo/* field */
	, { (char*)&Category_t1413____Word_5_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____Digit_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry Category_t1413____Digit_6_DefaultValue = 
{
	&Category_t1413____Digit_6_FieldInfo/* field */
	, { (char*)&Category_t1413____Digit_6_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____WhiteSpace_7_DefaultValueData = 5;
static Il2CppFieldDefaultValueEntry Category_t1413____WhiteSpace_7_DefaultValue = 
{
	&Category_t1413____WhiteSpace_7_FieldInfo/* field */
	, { (char*)&Category_t1413____WhiteSpace_7_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____EcmaAny_8_DefaultValueData = 6;
static Il2CppFieldDefaultValueEntry Category_t1413____EcmaAny_8_DefaultValue = 
{
	&Category_t1413____EcmaAny_8_FieldInfo/* field */
	, { (char*)&Category_t1413____EcmaAny_8_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____EcmaAnySingleline_9_DefaultValueData = 7;
static Il2CppFieldDefaultValueEntry Category_t1413____EcmaAnySingleline_9_DefaultValue = 
{
	&Category_t1413____EcmaAnySingleline_9_FieldInfo/* field */
	, { (char*)&Category_t1413____EcmaAnySingleline_9_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____EcmaWord_10_DefaultValueData = 8;
static Il2CppFieldDefaultValueEntry Category_t1413____EcmaWord_10_DefaultValue = 
{
	&Category_t1413____EcmaWord_10_FieldInfo/* field */
	, { (char*)&Category_t1413____EcmaWord_10_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____EcmaDigit_11_DefaultValueData = 9;
static Il2CppFieldDefaultValueEntry Category_t1413____EcmaDigit_11_DefaultValue = 
{
	&Category_t1413____EcmaDigit_11_FieldInfo/* field */
	, { (char*)&Category_t1413____EcmaDigit_11_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____EcmaWhiteSpace_12_DefaultValueData = 10;
static Il2CppFieldDefaultValueEntry Category_t1413____EcmaWhiteSpace_12_DefaultValue = 
{
	&Category_t1413____EcmaWhiteSpace_12_FieldInfo/* field */
	, { (char*)&Category_t1413____EcmaWhiteSpace_12_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeL_13_DefaultValueData = 11;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeL_13_DefaultValue = 
{
	&Category_t1413____UnicodeL_13_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeL_13_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeM_14_DefaultValueData = 12;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeM_14_DefaultValue = 
{
	&Category_t1413____UnicodeM_14_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeM_14_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeN_15_DefaultValueData = 13;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeN_15_DefaultValue = 
{
	&Category_t1413____UnicodeN_15_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeN_15_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeZ_16_DefaultValueData = 14;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeZ_16_DefaultValue = 
{
	&Category_t1413____UnicodeZ_16_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeZ_16_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeP_17_DefaultValueData = 15;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeP_17_DefaultValue = 
{
	&Category_t1413____UnicodeP_17_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeP_17_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeS_18_DefaultValueData = 16;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeS_18_DefaultValue = 
{
	&Category_t1413____UnicodeS_18_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeS_18_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeC_19_DefaultValueData = 17;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeC_19_DefaultValue = 
{
	&Category_t1413____UnicodeC_19_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeC_19_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLu_20_DefaultValueData = 18;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLu_20_DefaultValue = 
{
	&Category_t1413____UnicodeLu_20_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLu_20_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLl_21_DefaultValueData = 19;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLl_21_DefaultValue = 
{
	&Category_t1413____UnicodeLl_21_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLl_21_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLt_22_DefaultValueData = 20;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLt_22_DefaultValue = 
{
	&Category_t1413____UnicodeLt_22_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLt_22_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLm_23_DefaultValueData = 21;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLm_23_DefaultValue = 
{
	&Category_t1413____UnicodeLm_23_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLm_23_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLo_24_DefaultValueData = 22;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLo_24_DefaultValue = 
{
	&Category_t1413____UnicodeLo_24_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLo_24_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMn_25_DefaultValueData = 23;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMn_25_DefaultValue = 
{
	&Category_t1413____UnicodeMn_25_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMn_25_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMe_26_DefaultValueData = 24;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMe_26_DefaultValue = 
{
	&Category_t1413____UnicodeMe_26_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMe_26_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMc_27_DefaultValueData = 25;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMc_27_DefaultValue = 
{
	&Category_t1413____UnicodeMc_27_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMc_27_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeNd_28_DefaultValueData = 26;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeNd_28_DefaultValue = 
{
	&Category_t1413____UnicodeNd_28_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeNd_28_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeNl_29_DefaultValueData = 27;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeNl_29_DefaultValue = 
{
	&Category_t1413____UnicodeNl_29_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeNl_29_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeNo_30_DefaultValueData = 28;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeNo_30_DefaultValue = 
{
	&Category_t1413____UnicodeNo_30_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeNo_30_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeZs_31_DefaultValueData = 29;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeZs_31_DefaultValue = 
{
	&Category_t1413____UnicodeZs_31_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeZs_31_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeZl_32_DefaultValueData = 30;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeZl_32_DefaultValue = 
{
	&Category_t1413____UnicodeZl_32_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeZl_32_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeZp_33_DefaultValueData = 31;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeZp_33_DefaultValue = 
{
	&Category_t1413____UnicodeZp_33_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeZp_33_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePd_34_DefaultValueData = 32;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePd_34_DefaultValue = 
{
	&Category_t1413____UnicodePd_34_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePd_34_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePs_35_DefaultValueData = 33;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePs_35_DefaultValue = 
{
	&Category_t1413____UnicodePs_35_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePs_35_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePi_36_DefaultValueData = 34;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePi_36_DefaultValue = 
{
	&Category_t1413____UnicodePi_36_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePi_36_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePe_37_DefaultValueData = 35;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePe_37_DefaultValue = 
{
	&Category_t1413____UnicodePe_37_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePe_37_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePf_38_DefaultValueData = 36;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePf_38_DefaultValue = 
{
	&Category_t1413____UnicodePf_38_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePf_38_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePc_39_DefaultValueData = 37;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePc_39_DefaultValue = 
{
	&Category_t1413____UnicodePc_39_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePc_39_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePo_40_DefaultValueData = 38;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePo_40_DefaultValue = 
{
	&Category_t1413____UnicodePo_40_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePo_40_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSm_41_DefaultValueData = 39;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSm_41_DefaultValue = 
{
	&Category_t1413____UnicodeSm_41_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSm_41_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSc_42_DefaultValueData = 40;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSc_42_DefaultValue = 
{
	&Category_t1413____UnicodeSc_42_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSc_42_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSk_43_DefaultValueData = 41;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSk_43_DefaultValue = 
{
	&Category_t1413____UnicodeSk_43_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSk_43_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSo_44_DefaultValueData = 42;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSo_44_DefaultValue = 
{
	&Category_t1413____UnicodeSo_44_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSo_44_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCc_45_DefaultValueData = 43;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCc_45_DefaultValue = 
{
	&Category_t1413____UnicodeCc_45_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCc_45_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCf_46_DefaultValueData = 44;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCf_46_DefaultValue = 
{
	&Category_t1413____UnicodeCf_46_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCf_46_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCo_47_DefaultValueData = 45;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCo_47_DefaultValue = 
{
	&Category_t1413____UnicodeCo_47_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCo_47_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCs_48_DefaultValueData = 46;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCs_48_DefaultValue = 
{
	&Category_t1413____UnicodeCs_48_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCs_48_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCn_49_DefaultValueData = 47;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCn_49_DefaultValue = 
{
	&Category_t1413____UnicodeCn_49_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCn_49_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBasicLatin_50_DefaultValueData = 48;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBasicLatin_50_DefaultValue = 
{
	&Category_t1413____UnicodeBasicLatin_50_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBasicLatin_50_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLatin1Supplement_51_DefaultValueData = 49;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLatin1Supplement_51_DefaultValue = 
{
	&Category_t1413____UnicodeLatin1Supplement_51_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLatin1Supplement_51_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLatinExtendedA_52_DefaultValueData = 50;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLatinExtendedA_52_DefaultValue = 
{
	&Category_t1413____UnicodeLatinExtendedA_52_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLatinExtendedA_52_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLatinExtendedB_53_DefaultValueData = 51;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLatinExtendedB_53_DefaultValue = 
{
	&Category_t1413____UnicodeLatinExtendedB_53_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLatinExtendedB_53_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeIPAExtensions_54_DefaultValueData = 52;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeIPAExtensions_54_DefaultValue = 
{
	&Category_t1413____UnicodeIPAExtensions_54_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeIPAExtensions_54_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSpacingModifierLetters_55_DefaultValueData = 53;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSpacingModifierLetters_55_DefaultValue = 
{
	&Category_t1413____UnicodeSpacingModifierLetters_55_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSpacingModifierLetters_55_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCombiningDiacriticalMarks_56_DefaultValueData = 54;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCombiningDiacriticalMarks_56_DefaultValue = 
{
	&Category_t1413____UnicodeCombiningDiacriticalMarks_56_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCombiningDiacriticalMarks_56_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGreek_57_DefaultValueData = 55;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGreek_57_DefaultValue = 
{
	&Category_t1413____UnicodeGreek_57_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGreek_57_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCyrillic_58_DefaultValueData = 56;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCyrillic_58_DefaultValue = 
{
	&Category_t1413____UnicodeCyrillic_58_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCyrillic_58_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeArmenian_59_DefaultValueData = 57;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeArmenian_59_DefaultValue = 
{
	&Category_t1413____UnicodeArmenian_59_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeArmenian_59_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHebrew_60_DefaultValueData = 58;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHebrew_60_DefaultValue = 
{
	&Category_t1413____UnicodeHebrew_60_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHebrew_60_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeArabic_61_DefaultValueData = 59;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeArabic_61_DefaultValue = 
{
	&Category_t1413____UnicodeArabic_61_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeArabic_61_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSyriac_62_DefaultValueData = 60;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSyriac_62_DefaultValue = 
{
	&Category_t1413____UnicodeSyriac_62_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSyriac_62_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeThaana_63_DefaultValueData = 61;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeThaana_63_DefaultValue = 
{
	&Category_t1413____UnicodeThaana_63_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeThaana_63_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeDevanagari_64_DefaultValueData = 62;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeDevanagari_64_DefaultValue = 
{
	&Category_t1413____UnicodeDevanagari_64_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeDevanagari_64_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBengali_65_DefaultValueData = 63;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBengali_65_DefaultValue = 
{
	&Category_t1413____UnicodeBengali_65_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBengali_65_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGurmukhi_66_DefaultValueData = 64;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGurmukhi_66_DefaultValue = 
{
	&Category_t1413____UnicodeGurmukhi_66_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGurmukhi_66_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGujarati_67_DefaultValueData = 65;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGujarati_67_DefaultValue = 
{
	&Category_t1413____UnicodeGujarati_67_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGujarati_67_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeOriya_68_DefaultValueData = 66;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeOriya_68_DefaultValue = 
{
	&Category_t1413____UnicodeOriya_68_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeOriya_68_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeTamil_69_DefaultValueData = 67;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeTamil_69_DefaultValue = 
{
	&Category_t1413____UnicodeTamil_69_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeTamil_69_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeTelugu_70_DefaultValueData = 68;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeTelugu_70_DefaultValue = 
{
	&Category_t1413____UnicodeTelugu_70_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeTelugu_70_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeKannada_71_DefaultValueData = 69;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeKannada_71_DefaultValue = 
{
	&Category_t1413____UnicodeKannada_71_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeKannada_71_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMalayalam_72_DefaultValueData = 70;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMalayalam_72_DefaultValue = 
{
	&Category_t1413____UnicodeMalayalam_72_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMalayalam_72_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSinhala_73_DefaultValueData = 71;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSinhala_73_DefaultValue = 
{
	&Category_t1413____UnicodeSinhala_73_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSinhala_73_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeThai_74_DefaultValueData = 72;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeThai_74_DefaultValue = 
{
	&Category_t1413____UnicodeThai_74_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeThai_74_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLao_75_DefaultValueData = 73;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLao_75_DefaultValue = 
{
	&Category_t1413____UnicodeLao_75_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLao_75_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeTibetan_76_DefaultValueData = 74;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeTibetan_76_DefaultValue = 
{
	&Category_t1413____UnicodeTibetan_76_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeTibetan_76_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMyanmar_77_DefaultValueData = 75;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMyanmar_77_DefaultValue = 
{
	&Category_t1413____UnicodeMyanmar_77_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMyanmar_77_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGeorgian_78_DefaultValueData = 76;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGeorgian_78_DefaultValue = 
{
	&Category_t1413____UnicodeGeorgian_78_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGeorgian_78_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHangulJamo_79_DefaultValueData = 77;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHangulJamo_79_DefaultValue = 
{
	&Category_t1413____UnicodeHangulJamo_79_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHangulJamo_79_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeEthiopic_80_DefaultValueData = 78;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeEthiopic_80_DefaultValue = 
{
	&Category_t1413____UnicodeEthiopic_80_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeEthiopic_80_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCherokee_81_DefaultValueData = 79;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCherokee_81_DefaultValue = 
{
	&Category_t1413____UnicodeCherokee_81_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCherokee_81_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValueData = 80;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValue = 
{
	&Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeOgham_83_DefaultValueData = 81;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeOgham_83_DefaultValue = 
{
	&Category_t1413____UnicodeOgham_83_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeOgham_83_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeRunic_84_DefaultValueData = 82;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeRunic_84_DefaultValue = 
{
	&Category_t1413____UnicodeRunic_84_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeRunic_84_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeKhmer_85_DefaultValueData = 83;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeKhmer_85_DefaultValue = 
{
	&Category_t1413____UnicodeKhmer_85_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeKhmer_85_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMongolian_86_DefaultValueData = 84;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMongolian_86_DefaultValue = 
{
	&Category_t1413____UnicodeMongolian_86_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMongolian_86_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLatinExtendedAdditional_87_DefaultValueData = 85;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLatinExtendedAdditional_87_DefaultValue = 
{
	&Category_t1413____UnicodeLatinExtendedAdditional_87_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLatinExtendedAdditional_87_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGreekExtended_88_DefaultValueData = 86;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGreekExtended_88_DefaultValue = 
{
	&Category_t1413____UnicodeGreekExtended_88_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGreekExtended_88_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGeneralPunctuation_89_DefaultValueData = 87;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGeneralPunctuation_89_DefaultValue = 
{
	&Category_t1413____UnicodeGeneralPunctuation_89_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGeneralPunctuation_89_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSuperscriptsandSubscripts_90_DefaultValueData = 88;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSuperscriptsandSubscripts_90_DefaultValue = 
{
	&Category_t1413____UnicodeSuperscriptsandSubscripts_90_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSuperscriptsandSubscripts_90_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCurrencySymbols_91_DefaultValueData = 89;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCurrencySymbols_91_DefaultValue = 
{
	&Category_t1413____UnicodeCurrencySymbols_91_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCurrencySymbols_91_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCombiningMarksforSymbols_92_DefaultValueData = 90;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCombiningMarksforSymbols_92_DefaultValue = 
{
	&Category_t1413____UnicodeCombiningMarksforSymbols_92_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCombiningMarksforSymbols_92_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLetterlikeSymbols_93_DefaultValueData = 91;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLetterlikeSymbols_93_DefaultValue = 
{
	&Category_t1413____UnicodeLetterlikeSymbols_93_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLetterlikeSymbols_93_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeNumberForms_94_DefaultValueData = 92;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeNumberForms_94_DefaultValue = 
{
	&Category_t1413____UnicodeNumberForms_94_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeNumberForms_94_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeArrows_95_DefaultValueData = 93;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeArrows_95_DefaultValue = 
{
	&Category_t1413____UnicodeArrows_95_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeArrows_95_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMathematicalOperators_96_DefaultValueData = 94;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMathematicalOperators_96_DefaultValue = 
{
	&Category_t1413____UnicodeMathematicalOperators_96_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMathematicalOperators_96_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMiscellaneousTechnical_97_DefaultValueData = 95;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMiscellaneousTechnical_97_DefaultValue = 
{
	&Category_t1413____UnicodeMiscellaneousTechnical_97_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMiscellaneousTechnical_97_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeControlPictures_98_DefaultValueData = 96;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeControlPictures_98_DefaultValue = 
{
	&Category_t1413____UnicodeControlPictures_98_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeControlPictures_98_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeOpticalCharacterRecognition_99_DefaultValueData = 97;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeOpticalCharacterRecognition_99_DefaultValue = 
{
	&Category_t1413____UnicodeOpticalCharacterRecognition_99_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeOpticalCharacterRecognition_99_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeEnclosedAlphanumerics_100_DefaultValueData = 98;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeEnclosedAlphanumerics_100_DefaultValue = 
{
	&Category_t1413____UnicodeEnclosedAlphanumerics_100_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeEnclosedAlphanumerics_100_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBoxDrawing_101_DefaultValueData = 99;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBoxDrawing_101_DefaultValue = 
{
	&Category_t1413____UnicodeBoxDrawing_101_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBoxDrawing_101_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBlockElements_102_DefaultValueData = 100;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBlockElements_102_DefaultValue = 
{
	&Category_t1413____UnicodeBlockElements_102_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBlockElements_102_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGeometricShapes_103_DefaultValueData = 101;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGeometricShapes_103_DefaultValue = 
{
	&Category_t1413____UnicodeGeometricShapes_103_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGeometricShapes_103_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMiscellaneousSymbols_104_DefaultValueData = 102;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMiscellaneousSymbols_104_DefaultValue = 
{
	&Category_t1413____UnicodeMiscellaneousSymbols_104_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMiscellaneousSymbols_104_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeDingbats_105_DefaultValueData = 103;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeDingbats_105_DefaultValue = 
{
	&Category_t1413____UnicodeDingbats_105_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeDingbats_105_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBraillePatterns_106_DefaultValueData = 104;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBraillePatterns_106_DefaultValue = 
{
	&Category_t1413____UnicodeBraillePatterns_106_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBraillePatterns_106_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKRadicalsSupplement_107_DefaultValueData = 105;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKRadicalsSupplement_107_DefaultValue = 
{
	&Category_t1413____UnicodeCJKRadicalsSupplement_107_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKRadicalsSupplement_107_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeKangxiRadicals_108_DefaultValueData = 106;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeKangxiRadicals_108_DefaultValue = 
{
	&Category_t1413____UnicodeKangxiRadicals_108_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeKangxiRadicals_108_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeIdeographicDescriptionCharacters_109_DefaultValueData = 107;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeIdeographicDescriptionCharacters_109_DefaultValue = 
{
	&Category_t1413____UnicodeIdeographicDescriptionCharacters_109_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeIdeographicDescriptionCharacters_109_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKSymbolsandPunctuation_110_DefaultValueData = 108;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKSymbolsandPunctuation_110_DefaultValue = 
{
	&Category_t1413____UnicodeCJKSymbolsandPunctuation_110_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKSymbolsandPunctuation_110_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHiragana_111_DefaultValueData = 109;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHiragana_111_DefaultValue = 
{
	&Category_t1413____UnicodeHiragana_111_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHiragana_111_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeKatakana_112_DefaultValueData = 110;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeKatakana_112_DefaultValue = 
{
	&Category_t1413____UnicodeKatakana_112_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeKatakana_112_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBopomofo_113_DefaultValueData = 111;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBopomofo_113_DefaultValue = 
{
	&Category_t1413____UnicodeBopomofo_113_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBopomofo_113_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHangulCompatibilityJamo_114_DefaultValueData = 112;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHangulCompatibilityJamo_114_DefaultValue = 
{
	&Category_t1413____UnicodeHangulCompatibilityJamo_114_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHangulCompatibilityJamo_114_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeKanbun_115_DefaultValueData = 113;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeKanbun_115_DefaultValue = 
{
	&Category_t1413____UnicodeKanbun_115_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeKanbun_115_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeBopomofoExtended_116_DefaultValueData = 114;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeBopomofoExtended_116_DefaultValue = 
{
	&Category_t1413____UnicodeBopomofoExtended_116_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeBopomofoExtended_116_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_DefaultValueData = 115;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_DefaultValue = 
{
	&Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKCompatibility_118_DefaultValueData = 116;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKCompatibility_118_DefaultValue = 
{
	&Category_t1413____UnicodeCJKCompatibility_118_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKCompatibility_118_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValueData = 117;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValue = 
{
	&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKUnifiedIdeographs_120_DefaultValueData = 118;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKUnifiedIdeographs_120_DefaultValue = 
{
	&Category_t1413____UnicodeCJKUnifiedIdeographs_120_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKUnifiedIdeographs_120_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeYiSyllables_121_DefaultValueData = 119;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeYiSyllables_121_DefaultValue = 
{
	&Category_t1413____UnicodeYiSyllables_121_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeYiSyllables_121_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeYiRadicals_122_DefaultValueData = 120;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeYiRadicals_122_DefaultValue = 
{
	&Category_t1413____UnicodeYiRadicals_122_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeYiRadicals_122_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHangulSyllables_123_DefaultValueData = 121;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHangulSyllables_123_DefaultValue = 
{
	&Category_t1413____UnicodeHangulSyllables_123_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHangulSyllables_123_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHighSurrogates_124_DefaultValueData = 122;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHighSurrogates_124_DefaultValue = 
{
	&Category_t1413____UnicodeHighSurrogates_124_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHighSurrogates_124_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHighPrivateUseSurrogates_125_DefaultValueData = 123;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHighPrivateUseSurrogates_125_DefaultValue = 
{
	&Category_t1413____UnicodeHighPrivateUseSurrogates_125_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHighPrivateUseSurrogates_125_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeLowSurrogates_126_DefaultValueData = 124;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeLowSurrogates_126_DefaultValue = 
{
	&Category_t1413____UnicodeLowSurrogates_126_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeLowSurrogates_126_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodePrivateUse_127_DefaultValueData = 125;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodePrivateUse_127_DefaultValue = 
{
	&Category_t1413____UnicodePrivateUse_127_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodePrivateUse_127_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKCompatibilityIdeographs_128_DefaultValueData = 126;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKCompatibilityIdeographs_128_DefaultValue = 
{
	&Category_t1413____UnicodeCJKCompatibilityIdeographs_128_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKCompatibilityIdeographs_128_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeAlphabeticPresentationForms_129_DefaultValueData = 127;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeAlphabeticPresentationForms_129_DefaultValue = 
{
	&Category_t1413____UnicodeAlphabeticPresentationForms_129_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeAlphabeticPresentationForms_129_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeArabicPresentationFormsA_130_DefaultValueData = 128;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeArabicPresentationFormsA_130_DefaultValue = 
{
	&Category_t1413____UnicodeArabicPresentationFormsA_130_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeArabicPresentationFormsA_130_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCombiningHalfMarks_131_DefaultValueData = 129;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCombiningHalfMarks_131_DefaultValue = 
{
	&Category_t1413____UnicodeCombiningHalfMarks_131_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCombiningHalfMarks_131_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKCompatibilityForms_132_DefaultValueData = 130;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKCompatibilityForms_132_DefaultValue = 
{
	&Category_t1413____UnicodeCJKCompatibilityForms_132_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKCompatibilityForms_132_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSmallFormVariants_133_DefaultValueData = 131;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSmallFormVariants_133_DefaultValue = 
{
	&Category_t1413____UnicodeSmallFormVariants_133_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSmallFormVariants_133_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeArabicPresentationFormsB_134_DefaultValueData = 132;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeArabicPresentationFormsB_134_DefaultValue = 
{
	&Category_t1413____UnicodeArabicPresentationFormsB_134_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeArabicPresentationFormsB_134_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeSpecials_135_DefaultValueData = 133;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeSpecials_135_DefaultValue = 
{
	&Category_t1413____UnicodeSpecials_135_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeSpecials_135_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeHalfwidthandFullwidthForms_136_DefaultValueData = 134;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeHalfwidthandFullwidthForms_136_DefaultValue = 
{
	&Category_t1413____UnicodeHalfwidthandFullwidthForms_136_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeHalfwidthandFullwidthForms_136_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeOldItalic_137_DefaultValueData = 135;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeOldItalic_137_DefaultValue = 
{
	&Category_t1413____UnicodeOldItalic_137_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeOldItalic_137_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeGothic_138_DefaultValueData = 136;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeGothic_138_DefaultValue = 
{
	&Category_t1413____UnicodeGothic_138_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeGothic_138_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeDeseret_139_DefaultValueData = 137;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeDeseret_139_DefaultValue = 
{
	&Category_t1413____UnicodeDeseret_139_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeDeseret_139_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeByzantineMusicalSymbols_140_DefaultValueData = 138;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeByzantineMusicalSymbols_140_DefaultValue = 
{
	&Category_t1413____UnicodeByzantineMusicalSymbols_140_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeByzantineMusicalSymbols_140_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMusicalSymbols_141_DefaultValueData = 139;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMusicalSymbols_141_DefaultValue = 
{
	&Category_t1413____UnicodeMusicalSymbols_141_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMusicalSymbols_141_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_DefaultValueData = 140;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_DefaultValue = 
{
	&Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValueData = 141;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValue = 
{
	&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValueData = 142;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValue = 
{
	&Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____UnicodeTags_145_DefaultValueData = 143;
static Il2CppFieldDefaultValueEntry Category_t1413____UnicodeTags_145_DefaultValue = 
{
	&Category_t1413____UnicodeTags_145_FieldInfo/* field */
	, { (char*)&Category_t1413____UnicodeTags_145_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static const uint16_t Category_t1413____LastValue_146_DefaultValueData = 144;
static Il2CppFieldDefaultValueEntry Category_t1413____LastValue_146_DefaultValue = 
{
	&Category_t1413____LastValue_146_FieldInfo/* field */
	, { (char*)&Category_t1413____LastValue_146_DefaultValueData, &UInt16_t862_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Category_t1413_FieldDefaultValues[] = 
{
	&Category_t1413____None_2_DefaultValue,
	&Category_t1413____Any_3_DefaultValue,
	&Category_t1413____AnySingleline_4_DefaultValue,
	&Category_t1413____Word_5_DefaultValue,
	&Category_t1413____Digit_6_DefaultValue,
	&Category_t1413____WhiteSpace_7_DefaultValue,
	&Category_t1413____EcmaAny_8_DefaultValue,
	&Category_t1413____EcmaAnySingleline_9_DefaultValue,
	&Category_t1413____EcmaWord_10_DefaultValue,
	&Category_t1413____EcmaDigit_11_DefaultValue,
	&Category_t1413____EcmaWhiteSpace_12_DefaultValue,
	&Category_t1413____UnicodeL_13_DefaultValue,
	&Category_t1413____UnicodeM_14_DefaultValue,
	&Category_t1413____UnicodeN_15_DefaultValue,
	&Category_t1413____UnicodeZ_16_DefaultValue,
	&Category_t1413____UnicodeP_17_DefaultValue,
	&Category_t1413____UnicodeS_18_DefaultValue,
	&Category_t1413____UnicodeC_19_DefaultValue,
	&Category_t1413____UnicodeLu_20_DefaultValue,
	&Category_t1413____UnicodeLl_21_DefaultValue,
	&Category_t1413____UnicodeLt_22_DefaultValue,
	&Category_t1413____UnicodeLm_23_DefaultValue,
	&Category_t1413____UnicodeLo_24_DefaultValue,
	&Category_t1413____UnicodeMn_25_DefaultValue,
	&Category_t1413____UnicodeMe_26_DefaultValue,
	&Category_t1413____UnicodeMc_27_DefaultValue,
	&Category_t1413____UnicodeNd_28_DefaultValue,
	&Category_t1413____UnicodeNl_29_DefaultValue,
	&Category_t1413____UnicodeNo_30_DefaultValue,
	&Category_t1413____UnicodeZs_31_DefaultValue,
	&Category_t1413____UnicodeZl_32_DefaultValue,
	&Category_t1413____UnicodeZp_33_DefaultValue,
	&Category_t1413____UnicodePd_34_DefaultValue,
	&Category_t1413____UnicodePs_35_DefaultValue,
	&Category_t1413____UnicodePi_36_DefaultValue,
	&Category_t1413____UnicodePe_37_DefaultValue,
	&Category_t1413____UnicodePf_38_DefaultValue,
	&Category_t1413____UnicodePc_39_DefaultValue,
	&Category_t1413____UnicodePo_40_DefaultValue,
	&Category_t1413____UnicodeSm_41_DefaultValue,
	&Category_t1413____UnicodeSc_42_DefaultValue,
	&Category_t1413____UnicodeSk_43_DefaultValue,
	&Category_t1413____UnicodeSo_44_DefaultValue,
	&Category_t1413____UnicodeCc_45_DefaultValue,
	&Category_t1413____UnicodeCf_46_DefaultValue,
	&Category_t1413____UnicodeCo_47_DefaultValue,
	&Category_t1413____UnicodeCs_48_DefaultValue,
	&Category_t1413____UnicodeCn_49_DefaultValue,
	&Category_t1413____UnicodeBasicLatin_50_DefaultValue,
	&Category_t1413____UnicodeLatin1Supplement_51_DefaultValue,
	&Category_t1413____UnicodeLatinExtendedA_52_DefaultValue,
	&Category_t1413____UnicodeLatinExtendedB_53_DefaultValue,
	&Category_t1413____UnicodeIPAExtensions_54_DefaultValue,
	&Category_t1413____UnicodeSpacingModifierLetters_55_DefaultValue,
	&Category_t1413____UnicodeCombiningDiacriticalMarks_56_DefaultValue,
	&Category_t1413____UnicodeGreek_57_DefaultValue,
	&Category_t1413____UnicodeCyrillic_58_DefaultValue,
	&Category_t1413____UnicodeArmenian_59_DefaultValue,
	&Category_t1413____UnicodeHebrew_60_DefaultValue,
	&Category_t1413____UnicodeArabic_61_DefaultValue,
	&Category_t1413____UnicodeSyriac_62_DefaultValue,
	&Category_t1413____UnicodeThaana_63_DefaultValue,
	&Category_t1413____UnicodeDevanagari_64_DefaultValue,
	&Category_t1413____UnicodeBengali_65_DefaultValue,
	&Category_t1413____UnicodeGurmukhi_66_DefaultValue,
	&Category_t1413____UnicodeGujarati_67_DefaultValue,
	&Category_t1413____UnicodeOriya_68_DefaultValue,
	&Category_t1413____UnicodeTamil_69_DefaultValue,
	&Category_t1413____UnicodeTelugu_70_DefaultValue,
	&Category_t1413____UnicodeKannada_71_DefaultValue,
	&Category_t1413____UnicodeMalayalam_72_DefaultValue,
	&Category_t1413____UnicodeSinhala_73_DefaultValue,
	&Category_t1413____UnicodeThai_74_DefaultValue,
	&Category_t1413____UnicodeLao_75_DefaultValue,
	&Category_t1413____UnicodeTibetan_76_DefaultValue,
	&Category_t1413____UnicodeMyanmar_77_DefaultValue,
	&Category_t1413____UnicodeGeorgian_78_DefaultValue,
	&Category_t1413____UnicodeHangulJamo_79_DefaultValue,
	&Category_t1413____UnicodeEthiopic_80_DefaultValue,
	&Category_t1413____UnicodeCherokee_81_DefaultValue,
	&Category_t1413____UnicodeUnifiedCanadianAboriginalSyllabics_82_DefaultValue,
	&Category_t1413____UnicodeOgham_83_DefaultValue,
	&Category_t1413____UnicodeRunic_84_DefaultValue,
	&Category_t1413____UnicodeKhmer_85_DefaultValue,
	&Category_t1413____UnicodeMongolian_86_DefaultValue,
	&Category_t1413____UnicodeLatinExtendedAdditional_87_DefaultValue,
	&Category_t1413____UnicodeGreekExtended_88_DefaultValue,
	&Category_t1413____UnicodeGeneralPunctuation_89_DefaultValue,
	&Category_t1413____UnicodeSuperscriptsandSubscripts_90_DefaultValue,
	&Category_t1413____UnicodeCurrencySymbols_91_DefaultValue,
	&Category_t1413____UnicodeCombiningMarksforSymbols_92_DefaultValue,
	&Category_t1413____UnicodeLetterlikeSymbols_93_DefaultValue,
	&Category_t1413____UnicodeNumberForms_94_DefaultValue,
	&Category_t1413____UnicodeArrows_95_DefaultValue,
	&Category_t1413____UnicodeMathematicalOperators_96_DefaultValue,
	&Category_t1413____UnicodeMiscellaneousTechnical_97_DefaultValue,
	&Category_t1413____UnicodeControlPictures_98_DefaultValue,
	&Category_t1413____UnicodeOpticalCharacterRecognition_99_DefaultValue,
	&Category_t1413____UnicodeEnclosedAlphanumerics_100_DefaultValue,
	&Category_t1413____UnicodeBoxDrawing_101_DefaultValue,
	&Category_t1413____UnicodeBlockElements_102_DefaultValue,
	&Category_t1413____UnicodeGeometricShapes_103_DefaultValue,
	&Category_t1413____UnicodeMiscellaneousSymbols_104_DefaultValue,
	&Category_t1413____UnicodeDingbats_105_DefaultValue,
	&Category_t1413____UnicodeBraillePatterns_106_DefaultValue,
	&Category_t1413____UnicodeCJKRadicalsSupplement_107_DefaultValue,
	&Category_t1413____UnicodeKangxiRadicals_108_DefaultValue,
	&Category_t1413____UnicodeIdeographicDescriptionCharacters_109_DefaultValue,
	&Category_t1413____UnicodeCJKSymbolsandPunctuation_110_DefaultValue,
	&Category_t1413____UnicodeHiragana_111_DefaultValue,
	&Category_t1413____UnicodeKatakana_112_DefaultValue,
	&Category_t1413____UnicodeBopomofo_113_DefaultValue,
	&Category_t1413____UnicodeHangulCompatibilityJamo_114_DefaultValue,
	&Category_t1413____UnicodeKanbun_115_DefaultValue,
	&Category_t1413____UnicodeBopomofoExtended_116_DefaultValue,
	&Category_t1413____UnicodeEnclosedCJKLettersandMonths_117_DefaultValue,
	&Category_t1413____UnicodeCJKCompatibility_118_DefaultValue,
	&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionA_119_DefaultValue,
	&Category_t1413____UnicodeCJKUnifiedIdeographs_120_DefaultValue,
	&Category_t1413____UnicodeYiSyllables_121_DefaultValue,
	&Category_t1413____UnicodeYiRadicals_122_DefaultValue,
	&Category_t1413____UnicodeHangulSyllables_123_DefaultValue,
	&Category_t1413____UnicodeHighSurrogates_124_DefaultValue,
	&Category_t1413____UnicodeHighPrivateUseSurrogates_125_DefaultValue,
	&Category_t1413____UnicodeLowSurrogates_126_DefaultValue,
	&Category_t1413____UnicodePrivateUse_127_DefaultValue,
	&Category_t1413____UnicodeCJKCompatibilityIdeographs_128_DefaultValue,
	&Category_t1413____UnicodeAlphabeticPresentationForms_129_DefaultValue,
	&Category_t1413____UnicodeArabicPresentationFormsA_130_DefaultValue,
	&Category_t1413____UnicodeCombiningHalfMarks_131_DefaultValue,
	&Category_t1413____UnicodeCJKCompatibilityForms_132_DefaultValue,
	&Category_t1413____UnicodeSmallFormVariants_133_DefaultValue,
	&Category_t1413____UnicodeArabicPresentationFormsB_134_DefaultValue,
	&Category_t1413____UnicodeSpecials_135_DefaultValue,
	&Category_t1413____UnicodeHalfwidthandFullwidthForms_136_DefaultValue,
	&Category_t1413____UnicodeOldItalic_137_DefaultValue,
	&Category_t1413____UnicodeGothic_138_DefaultValue,
	&Category_t1413____UnicodeDeseret_139_DefaultValue,
	&Category_t1413____UnicodeByzantineMusicalSymbols_140_DefaultValue,
	&Category_t1413____UnicodeMusicalSymbols_141_DefaultValue,
	&Category_t1413____UnicodeMathematicalAlphanumericSymbols_142_DefaultValue,
	&Category_t1413____UnicodeCJKUnifiedIdeographsExtensionB_143_DefaultValue,
	&Category_t1413____UnicodeCJKCompatibilityIdeographsSupplement_144_DefaultValue,
	&Category_t1413____UnicodeTags_145_DefaultValue,
	&Category_t1413____LastValue_146_DefaultValue,
	NULL
};
extern MethodInfo Enum_Equals_m716_MethodInfo;
extern MethodInfo Enum_GetHashCode_m717_MethodInfo;
extern MethodInfo Enum_ToString_m718_MethodInfo;
extern MethodInfo Enum_ToString_m719_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToBoolean_m720_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToByte_m721_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToChar_m722_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDateTime_m723_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDecimal_m724_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToDouble_m725_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt16_m726_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt32_m727_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToInt64_m728_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSByte_m729_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToSingle_m730_MethodInfo;
extern MethodInfo Enum_ToString_m731_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToType_m732_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt16_m733_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt32_m734_MethodInfo;
extern MethodInfo Enum_System_IConvertible_ToUInt64_m735_MethodInfo;
extern MethodInfo Enum_CompareTo_m736_MethodInfo;
extern MethodInfo Enum_GetTypeCode_m737_MethodInfo;
static Il2CppMethodReference Category_t1413_VTable[] =
{
	&Enum_Equals_m716_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Enum_GetHashCode_m717_MethodInfo,
	&Enum_ToString_m718_MethodInfo,
	&Enum_ToString_m719_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m720_MethodInfo,
	&Enum_System_IConvertible_ToByte_m721_MethodInfo,
	&Enum_System_IConvertible_ToChar_m722_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m723_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m724_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m725_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m726_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m727_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m728_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m729_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m730_MethodInfo,
	&Enum_ToString_m731_MethodInfo,
	&Enum_System_IConvertible_ToType_m732_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m733_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m734_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m735_MethodInfo,
	&Enum_CompareTo_m736_MethodInfo,
	&Enum_GetTypeCode_m737_MethodInfo,
};
static bool Category_t1413_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IFormattable_t204_0_0_0;
extern Il2CppType IConvertible_t205_0_0_0;
extern Il2CppType IComparable_t206_0_0_0;
static Il2CppInterfaceOffsetPair Category_t1413_InterfacesOffsets[] = 
{
	{ &IFormattable_t204_0_0_0, 4},
	{ &IConvertible_t205_0_0_0, 5},
	{ &IComparable_t206_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Category_t1413_1_0_0;
extern Il2CppType Enum_t207_0_0_0;
// System.UInt16
#include "mscorlib_System_UInt16.h"
extern TypeInfo UInt16_t862_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Category_t1413_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Category_t1413_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t207_0_0_0/* parent */
	, Category_t1413_VTable/* vtableMethods */
	, Category_t1413_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Category_t1413_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Category"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Category_t1413_MethodInfos/* methods */
	, NULL/* properties */
	, Category_t1413_FieldInfos/* fields */
	, NULL/* events */
	, &UInt16_t862_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Category_t1413_0_0_0/* byval_arg */
	, &Category_t1413_1_0_0/* this_arg */
	, &Category_t1413_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Category_t1413_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Category_t1413)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Category_t1413)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(uint16_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 256/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 146/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtils.h"
// Metadata Definition System.Text.RegularExpressions.CategoryUtils
extern TypeInfo CategoryUtils_t1414_il2cpp_TypeInfo;
// System.Text.RegularExpressions.CategoryUtils
#include "System_System_Text_RegularExpressions_CategoryUtilsMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
static ParameterInfo CategoryUtils_t1414_CategoryUtils_CategoryFromName_m7623_ParameterInfos[] = 
{
	{"name", 0, 134218211, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Category_t1413_0_0_0;
extern void* RuntimeInvoker_Category_t1413_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
MethodInfo CategoryUtils_CategoryFromName_m7623_MethodInfo = 
{
	"CategoryFromName"/* name */
	, (methodPointerType)&CategoryUtils_CategoryFromName_m7623/* method */
	, &CategoryUtils_t1414_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1413_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1413_Object_t/* invoker_method */
	, CategoryUtils_t1414_CategoryUtils_CategoryFromName_m7623_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 588/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo CategoryUtils_t1414_CategoryUtils_IsCategory_m7624_ParameterInfos[] = 
{
	{"cat", 0, 134218212, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"c", 1, 134218213, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_UInt16_t862_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
MethodInfo CategoryUtils_IsCategory_m7624_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m7624/* method */
	, &CategoryUtils_t1414_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_UInt16_t862_Int16_t563/* invoker_method */
	, CategoryUtils_t1414_CategoryUtils_IsCategory_m7624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 589/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UnicodeCategory_t1530_0_0_0;
extern Il2CppType UnicodeCategory_t1530_0_0_0;
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo CategoryUtils_t1414_CategoryUtils_IsCategory_m7625_ParameterInfos[] = 
{
	{"uc", 0, 134218214, &EmptyCustomAttributesCache, &UnicodeCategory_t1530_0_0_0},
	{"c", 1, 134218215, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
MethodInfo CategoryUtils_IsCategory_m7625_MethodInfo = 
{
	"IsCategory"/* name */
	, (methodPointerType)&CategoryUtils_IsCategory_m7625/* method */
	, &CategoryUtils_t1414_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141_Int16_t563/* invoker_method */
	, CategoryUtils_t1414_CategoryUtils_IsCategory_m7625_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 590/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CategoryUtils_t1414_MethodInfos[] =
{
	&CategoryUtils_CategoryFromName_m7623_MethodInfo,
	&CategoryUtils_IsCategory_m7624_MethodInfo,
	&CategoryUtils_IsCategory_m7625_MethodInfo,
	NULL
};
static Il2CppMethodReference CategoryUtils_t1414_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool CategoryUtils_t1414_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CategoryUtils_t1414_0_0_0;
extern Il2CppType CategoryUtils_t1414_1_0_0;
struct CategoryUtils_t1414;
const Il2CppTypeDefinitionMetadata CategoryUtils_t1414_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, CategoryUtils_t1414_VTable/* vtableMethods */
	, CategoryUtils_t1414_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CategoryUtils_t1414_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CategoryUtils"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, CategoryUtils_t1414_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &CategoryUtils_t1414_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CategoryUtils_t1414_0_0_0/* byval_arg */
	, &CategoryUtils_t1414_1_0_0/* this_arg */
	, &CategoryUtils_t1414_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CategoryUtils_t1414)/* instance_size */
	, sizeof (CategoryUtils_t1414)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRef.h"
// Metadata Definition System.Text.RegularExpressions.LinkRef
extern TypeInfo LinkRef_t1415_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkRef
#include "System_System_Text_RegularExpressions_LinkRefMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkRef::.ctor()
MethodInfo LinkRef__ctor_m7626_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkRef__ctor_m7626/* method */
	, &LinkRef_t1415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 591/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LinkRef_t1415_MethodInfos[] =
{
	&LinkRef__ctor_m7626_MethodInfo,
	NULL
};
static Il2CppMethodReference LinkRef_t1415_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool LinkRef_t1415_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType LinkRef_t1415_0_0_0;
extern Il2CppType LinkRef_t1415_1_0_0;
struct LinkRef_t1415;
const Il2CppTypeDefinitionMetadata LinkRef_t1415_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, LinkRef_t1415_VTable/* vtableMethods */
	, LinkRef_t1415_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo LinkRef_t1415_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkRef"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkRef_t1415_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &LinkRef_t1415_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LinkRef_t1415_0_0_0/* byval_arg */
	, &LinkRef_t1415_1_0_0/* this_arg */
	, &LinkRef_t1415_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkRef_t1415)/* instance_size */
	, sizeof (LinkRef_t1415)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// Metadata Definition System.Text.RegularExpressions.ICompiler
extern TypeInfo ICompiler_t1441_il2cpp_TypeInfo;
extern Il2CppType IMachineFactory_t1405_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.ICompiler::GetMachineFactory()
MethodInfo ICompiler_GetMachineFactory_m8182_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1405_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 592/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFalse()
MethodInfo ICompiler_EmitFalse_m8239_MethodInfo = 
{
	"EmitFalse"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 593/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTrue()
MethodInfo ICompiler_EmitTrue_m8226_MethodInfo = 
{
	"EmitTrue"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 594/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitCharacter_m8243_ParameterInfos[] = 
{
	{"c", 0, 134218216, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"negate", 1, 134218217, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 2, 134218218, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 3, 134218219, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitCharacter_m8243_MethodInfo = 
{
	"EmitCharacter"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitCharacter_m8243_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 595/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitCategory_m8250_ParameterInfos[] = 
{
	{"cat", 0, 134218220, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"negate", 1, 134218221, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218222, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitCategory_m8250_MethodInfo = 
{
	"EmitCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitCategory_m8250_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 596/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitNotCategory_m8251_ParameterInfos[] = 
{
	{"cat", 0, 134218223, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"negate", 1, 134218224, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218225, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitNotCategory_m8251_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitNotCategory_m8251_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 597/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitRange_m8249_ParameterInfos[] = 
{
	{"lo", 0, 134218226, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"hi", 1, 134218227, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"negate", 2, 134218228, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 3, 134218229, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 4, 134218230, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_Int16_t563_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitRange_m8249_MethodInfo = 
{
	"EmitRange"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_Int16_t563_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitRange_m8249_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 598/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType BitArray_t1421_0_0_0;
extern Il2CppType BitArray_t1421_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitSet_m8248_ParameterInfos[] = 
{
	{"lo", 0, 134218231, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"set", 1, 134218232, &EmptyCustomAttributesCache, &BitArray_t1421_0_0_0},
	{"negate", 2, 134218233, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 3, 134218234, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 4, 134218235, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_Object_t_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitSet_m8248_MethodInfo = 
{
	"EmitSet"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_Object_t_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitSet_m8248_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 599/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitString_m8225_ParameterInfos[] = 
{
	{"str", 0, 134218236, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218237, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218238, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitString(System.String,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitString_m8225_MethodInfo = 
{
	"EmitString"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitString_m8225_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 600/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1409_0_0_0;
extern Il2CppType Position_t1409_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitPosition_m8224_ParameterInfos[] = 
{
	{"pos", 0, 134218239, &EmptyCustomAttributesCache, &Position_t1409_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitPosition(System.Text.RegularExpressions.Position)
MethodInfo ICompiler_EmitPosition_m8224_MethodInfo = 
{
	"EmitPosition"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitPosition_m8224_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 601/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitOpen_m8228_ParameterInfos[] = 
{
	{"gid", 0, 134218240, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitOpen(System.Int32)
MethodInfo ICompiler_EmitOpen_m8228_MethodInfo = 
{
	"EmitOpen"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitOpen_m8228_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 602/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitClose_m8229_ParameterInfos[] = 
{
	{"gid", 0, 134218241, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitClose(System.Int32)
MethodInfo ICompiler_EmitClose_m8229_MethodInfo = 
{
	"EmitClose"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitClose_m8229_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 603/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitBalanceStart_m8230_ParameterInfos[] = 
{
	{"gid", 0, 134218242, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"balance", 1, 134218243, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"capture", 2, 134218244, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"tail", 3, 134218245, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitBalanceStart_m8230_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitBalanceStart_m8230_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 604/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBalance()
MethodInfo ICompiler_EmitBalance_m8231_MethodInfo = 
{
	"EmitBalance"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 605/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitReference_m8244_ParameterInfos[] = 
{
	{"gid", 0, 134218246, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"ignore", 1, 134218247, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218248, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
MethodInfo ICompiler_EmitReference_m8244_MethodInfo = 
{
	"EmitReference"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_SByte_t202_SByte_t202/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitReference_m8244_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 606/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitIfDefined_m8236_ParameterInfos[] = 
{
	{"gid", 0, 134218249, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"tail", 1, 134218250, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitIfDefined_m8236_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitIfDefined_m8236_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 607/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitSub_m8232_ParameterInfos[] = 
{
	{"tail", 0, 134218251, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitSub_m8232_MethodInfo = 
{
	"EmitSub"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitSub_m8232_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 608/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitTest_m8238_ParameterInfos[] = 
{
	{"yes", 0, 134218252, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
	{"tail", 1, 134218253, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitTest_m8238_MethodInfo = 
{
	"EmitTest"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitTest_m8238_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 609/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitBranch_m8240_ParameterInfos[] = 
{
	{"next", 0, 134218254, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitBranch_m8240_MethodInfo = 
{
	"EmitBranch"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitBranch_m8240_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 610/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitJump_m8237_ParameterInfos[] = 
{
	{"target", 0, 134218255, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitJump_m8237_MethodInfo = 
{
	"EmitJump"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitJump_m8237_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 611/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitRepeat_m8233_ParameterInfos[] = 
{
	{"min", 0, 134218256, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 1, 134218257, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"lazy", 2, 134218258, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"until", 3, 134218259, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitRepeat_m8233_MethodInfo = 
{
	"EmitRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitRepeat_m8233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 612/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitUntil_m8234_ParameterInfos[] = 
{
	{"repeat", 0, 134218260, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitUntil_m8234_MethodInfo = 
{
	"EmitUntil"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitUntil_m8234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 613/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitIn_m8247_ParameterInfos[] = 
{
	{"tail", 0, 134218261, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitIn_m8247_MethodInfo = 
{
	"EmitIn"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitIn_m8247_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 614/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitInfo_m8221_ParameterInfos[] = 
{
	{"count", 0, 134218262, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"min", 1, 134218263, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 2, 134218264, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
MethodInfo ICompiler_EmitInfo_m8221_MethodInfo = 
{
	"EmitInfo"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_Int32_t141/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitInfo_m8221_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 615/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitFastRepeat_m8235_ParameterInfos[] = 
{
	{"min", 0, 134218265, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 1, 134218266, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"lazy", 2, 134218267, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"tail", 3, 134218268, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitFastRepeat_m8235_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitFastRepeat_m8235_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 616/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_EmitAnchor_m8223_ParameterInfos[] = 
{
	{"reverse", 0, 134218269, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"offset", 1, 134218270, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"tail", 2, 134218271, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_EmitAnchor_m8223_MethodInfo = 
{
	"EmitAnchor"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202_Int32_t141_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_EmitAnchor_m8223_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 617/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitBranchEnd()
MethodInfo ICompiler_EmitBranchEnd_m8241_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 618/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::EmitAlternationEnd()
MethodInfo ICompiler_EmitAlternationEnd_m8242_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 619/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.ICompiler::NewLink()
MethodInfo ICompiler_NewLink_m8222_MethodInfo = 
{
	"NewLink"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1415_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 620/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo ICompiler_t1441_ICompiler_ResolveLink_m8227_ParameterInfos[] = 
{
	{"link", 0, 134218272, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.ICompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
MethodInfo ICompiler_ResolveLink_m8227_MethodInfo = 
{
	"ResolveLink"/* name */
	, NULL/* method */
	, &ICompiler_t1441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ICompiler_t1441_ICompiler_ResolveLink_m8227_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 621/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ICompiler_t1441_MethodInfos[] =
{
	&ICompiler_GetMachineFactory_m8182_MethodInfo,
	&ICompiler_EmitFalse_m8239_MethodInfo,
	&ICompiler_EmitTrue_m8226_MethodInfo,
	&ICompiler_EmitCharacter_m8243_MethodInfo,
	&ICompiler_EmitCategory_m8250_MethodInfo,
	&ICompiler_EmitNotCategory_m8251_MethodInfo,
	&ICompiler_EmitRange_m8249_MethodInfo,
	&ICompiler_EmitSet_m8248_MethodInfo,
	&ICompiler_EmitString_m8225_MethodInfo,
	&ICompiler_EmitPosition_m8224_MethodInfo,
	&ICompiler_EmitOpen_m8228_MethodInfo,
	&ICompiler_EmitClose_m8229_MethodInfo,
	&ICompiler_EmitBalanceStart_m8230_MethodInfo,
	&ICompiler_EmitBalance_m8231_MethodInfo,
	&ICompiler_EmitReference_m8244_MethodInfo,
	&ICompiler_EmitIfDefined_m8236_MethodInfo,
	&ICompiler_EmitSub_m8232_MethodInfo,
	&ICompiler_EmitTest_m8238_MethodInfo,
	&ICompiler_EmitBranch_m8240_MethodInfo,
	&ICompiler_EmitJump_m8237_MethodInfo,
	&ICompiler_EmitRepeat_m8233_MethodInfo,
	&ICompiler_EmitUntil_m8234_MethodInfo,
	&ICompiler_EmitIn_m8247_MethodInfo,
	&ICompiler_EmitInfo_m8221_MethodInfo,
	&ICompiler_EmitFastRepeat_m8235_MethodInfo,
	&ICompiler_EmitAnchor_m8223_MethodInfo,
	&ICompiler_EmitBranchEnd_m8241_MethodInfo,
	&ICompiler_EmitAlternationEnd_m8242_MethodInfo,
	&ICompiler_NewLink_m8222_MethodInfo,
	&ICompiler_ResolveLink_m8227_MethodInfo,
	NULL
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType ICompiler_t1441_1_0_0;
struct ICompiler_t1441;
const Il2CppTypeDefinitionMetadata ICompiler_t1441_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, NULL/* parent */
	, NULL/* vtableMethods */
	, NULL/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ICompiler_t1441_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, ICompiler_t1441_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ICompiler_t1441_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICompiler_t1441_0_0_0/* byval_arg */
	, &ICompiler_t1441_1_0_0/* this_arg */
	, &ICompiler_t1441_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 160/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 30/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactory.h"
// Metadata Definition System.Text.RegularExpressions.InterpreterFactory
extern TypeInfo InterpreterFactory_t1416_il2cpp_TypeInfo;
// System.Text.RegularExpressions.InterpreterFactory
#include "System_System_Text_RegularExpressions_InterpreterFactoryMethodDeclarations.h"
extern Il2CppType UInt16U5BU5D_t1333_0_0_0;
extern Il2CppType UInt16U5BU5D_t1333_0_0_0;
static ParameterInfo InterpreterFactory_t1416_InterpreterFactory__ctor_m7627_ParameterInfos[] = 
{
	{"pattern", 0, 134218273, &EmptyCustomAttributesCache, &UInt16U5BU5D_t1333_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::.ctor(System.UInt16[])
MethodInfo InterpreterFactory__ctor_m7627_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InterpreterFactory__ctor_m7627/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, InterpreterFactory_t1416_InterpreterFactory__ctor_m7627_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 622/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IMachine_t1401_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.InterpreterFactory::NewInstance()
MethodInfo InterpreterFactory_NewInstance_m7628_MethodInfo = 
{
	"NewInstance"/* name */
	, (methodPointerType)&InterpreterFactory_NewInstance_m7628/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &IMachine_t1401_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 623/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_GroupCount()
MethodInfo InterpreterFactory_get_GroupCount_m7629_MethodInfo = 
{
	"get_GroupCount"/* name */
	, (methodPointerType)&InterpreterFactory_get_GroupCount_m7629/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 624/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.InterpreterFactory::get_Gap()
MethodInfo InterpreterFactory_get_Gap_m7630_MethodInfo = 
{
	"get_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_get_Gap_m7630/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 625/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo InterpreterFactory_t1416_InterpreterFactory_set_Gap_m7631_ParameterInfos[] = 
{
	{"value", 0, 134218274, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Gap(System.Int32)
MethodInfo InterpreterFactory_set_Gap_m7631_MethodInfo = 
{
	"set_Gap"/* name */
	, (methodPointerType)&InterpreterFactory_set_Gap_m7631/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, InterpreterFactory_t1416_InterpreterFactory_set_Gap_m7631_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 626/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IDictionary_t1294_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::get_Mapping()
MethodInfo InterpreterFactory_get_Mapping_m7632_MethodInfo = 
{
	"get_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_Mapping_m7632/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &IDictionary_t1294_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 627/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IDictionary_t1294_0_0_0;
extern Il2CppType IDictionary_t1294_0_0_0;
static ParameterInfo InterpreterFactory_t1416_InterpreterFactory_set_Mapping_m7633_ParameterInfos[] = 
{
	{"value", 0, 134218275, &EmptyCustomAttributesCache, &IDictionary_t1294_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_Mapping(System.Collections.IDictionary)
MethodInfo InterpreterFactory_set_Mapping_m7633_MethodInfo = 
{
	"set_Mapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_Mapping_m7633/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, InterpreterFactory_t1416_InterpreterFactory_set_Mapping_m7633_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 628/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t43_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String[] System.Text.RegularExpressions.InterpreterFactory::get_NamesMapping()
MethodInfo InterpreterFactory_get_NamesMapping_m7634_MethodInfo = 
{
	"get_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_get_NamesMapping_m7634/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &StringU5BU5D_t43_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 629/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType StringU5BU5D_t43_0_0_0;
extern Il2CppType StringU5BU5D_t43_0_0_0;
static ParameterInfo InterpreterFactory_t1416_InterpreterFactory_set_NamesMapping_m7635_ParameterInfos[] = 
{
	{"value", 0, 134218276, &EmptyCustomAttributesCache, &StringU5BU5D_t43_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.InterpreterFactory::set_NamesMapping(System.String[])
MethodInfo InterpreterFactory_set_NamesMapping_m7635_MethodInfo = 
{
	"set_NamesMapping"/* name */
	, (methodPointerType)&InterpreterFactory_set_NamesMapping_m7635/* method */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, InterpreterFactory_t1416_InterpreterFactory_set_NamesMapping_m7635_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 630/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* InterpreterFactory_t1416_MethodInfos[] =
{
	&InterpreterFactory__ctor_m7627_MethodInfo,
	&InterpreterFactory_NewInstance_m7628_MethodInfo,
	&InterpreterFactory_get_GroupCount_m7629_MethodInfo,
	&InterpreterFactory_get_Gap_m7630_MethodInfo,
	&InterpreterFactory_set_Gap_m7631_MethodInfo,
	&InterpreterFactory_get_Mapping_m7632_MethodInfo,
	&InterpreterFactory_set_Mapping_m7633_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m7634_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m7635_MethodInfo,
	NULL
};
extern Il2CppType IDictionary_t1294_0_0_1;
FieldInfo InterpreterFactory_t1416____mapping_0_FieldInfo = 
{
	"mapping"/* name */
	, &IDictionary_t1294_0_0_1/* type */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1416, ___mapping_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UInt16U5BU5D_t1333_0_0_1;
FieldInfo InterpreterFactory_t1416____pattern_1_FieldInfo = 
{
	"pattern"/* name */
	, &UInt16U5BU5D_t1333_0_0_1/* type */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1416, ___pattern_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t43_0_0_1;
FieldInfo InterpreterFactory_t1416____namesMapping_2_FieldInfo = 
{
	"namesMapping"/* name */
	, &StringU5BU5D_t43_0_0_1/* type */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1416, ___namesMapping_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo InterpreterFactory_t1416____gap_3_FieldInfo = 
{
	"gap"/* name */
	, &Int32_t141_0_0_1/* type */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, offsetof(InterpreterFactory_t1416, ___gap_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InterpreterFactory_t1416_FieldInfos[] =
{
	&InterpreterFactory_t1416____mapping_0_FieldInfo,
	&InterpreterFactory_t1416____pattern_1_FieldInfo,
	&InterpreterFactory_t1416____namesMapping_2_FieldInfo,
	&InterpreterFactory_t1416____gap_3_FieldInfo,
	NULL
};
extern MethodInfo InterpreterFactory_get_GroupCount_m7629_MethodInfo;
static PropertyInfo InterpreterFactory_t1416____GroupCount_PropertyInfo = 
{
	&InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, &InterpreterFactory_get_GroupCount_m7629_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_Gap_m7630_MethodInfo;
extern MethodInfo InterpreterFactory_set_Gap_m7631_MethodInfo;
static PropertyInfo InterpreterFactory_t1416____Gap_PropertyInfo = 
{
	&InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, "Gap"/* name */
	, &InterpreterFactory_get_Gap_m7630_MethodInfo/* get */
	, &InterpreterFactory_set_Gap_m7631_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_Mapping_m7632_MethodInfo;
extern MethodInfo InterpreterFactory_set_Mapping_m7633_MethodInfo;
static PropertyInfo InterpreterFactory_t1416____Mapping_PropertyInfo = 
{
	&InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, "Mapping"/* name */
	, &InterpreterFactory_get_Mapping_m7632_MethodInfo/* get */
	, &InterpreterFactory_set_Mapping_m7633_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InterpreterFactory_get_NamesMapping_m7634_MethodInfo;
extern MethodInfo InterpreterFactory_set_NamesMapping_m7635_MethodInfo;
static PropertyInfo InterpreterFactory_t1416____NamesMapping_PropertyInfo = 
{
	&InterpreterFactory_t1416_il2cpp_TypeInfo/* parent */
	, "NamesMapping"/* name */
	, &InterpreterFactory_get_NamesMapping_m7634_MethodInfo/* get */
	, &InterpreterFactory_set_NamesMapping_m7635_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InterpreterFactory_t1416_PropertyInfos[] =
{
	&InterpreterFactory_t1416____GroupCount_PropertyInfo,
	&InterpreterFactory_t1416____Gap_PropertyInfo,
	&InterpreterFactory_t1416____Mapping_PropertyInfo,
	&InterpreterFactory_t1416____NamesMapping_PropertyInfo,
	NULL
};
extern MethodInfo InterpreterFactory_NewInstance_m7628_MethodInfo;
static Il2CppMethodReference InterpreterFactory_t1416_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&InterpreterFactory_NewInstance_m7628_MethodInfo,
	&InterpreterFactory_get_Mapping_m7632_MethodInfo,
	&InterpreterFactory_set_Mapping_m7633_MethodInfo,
	&InterpreterFactory_get_GroupCount_m7629_MethodInfo,
	&InterpreterFactory_get_Gap_m7630_MethodInfo,
	&InterpreterFactory_set_Gap_m7631_MethodInfo,
	&InterpreterFactory_get_NamesMapping_m7634_MethodInfo,
	&InterpreterFactory_set_NamesMapping_m7635_MethodInfo,
};
static bool InterpreterFactory_t1416_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* InterpreterFactory_t1416_InterfacesTypeInfos[] = 
{
	&IMachineFactory_t1405_0_0_0,
};
static Il2CppInterfaceOffsetPair InterpreterFactory_t1416_InterfacesOffsets[] = 
{
	{ &IMachineFactory_t1405_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType InterpreterFactory_t1416_0_0_0;
extern Il2CppType InterpreterFactory_t1416_1_0_0;
struct InterpreterFactory_t1416;
const Il2CppTypeDefinitionMetadata InterpreterFactory_t1416_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, InterpreterFactory_t1416_InterfacesTypeInfos/* implementedInterfaces */
	, InterpreterFactory_t1416_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, InterpreterFactory_t1416_VTable/* vtableMethods */
	, InterpreterFactory_t1416_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo InterpreterFactory_t1416_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "InterpreterFactory"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, InterpreterFactory_t1416_MethodInfos/* methods */
	, InterpreterFactory_t1416_PropertyInfos/* properties */
	, InterpreterFactory_t1416_FieldInfos/* fields */
	, NULL/* events */
	, &InterpreterFactory_t1416_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InterpreterFactory_t1416_0_0_0/* byval_arg */
	, &InterpreterFactory_t1416_1_0_0/* this_arg */
	, &InterpreterFactory_t1416_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InterpreterFactory_t1416)/* instance_size */
	, sizeof (InterpreterFactory_t1416)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 4/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 12/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
extern TypeInfo Link_t1417_il2cpp_TypeInfo;
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
#include "System_System_Text_RegularExpressions_PatternCompiler_PatterMethodDeclarations.h"
static MethodInfo* Link_t1417_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Link_t1417____base_addr_0_FieldInfo = 
{
	"base_addr"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Link_t1417_il2cpp_TypeInfo/* parent */
	, offsetof(Link_t1417, ___base_addr_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Link_t1417____offset_addr_1_FieldInfo = 
{
	"offset_addr"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Link_t1417_il2cpp_TypeInfo/* parent */
	, offsetof(Link_t1417, ___offset_addr_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Link_t1417_FieldInfos[] =
{
	&Link_t1417____base_addr_0_FieldInfo,
	&Link_t1417____offset_addr_1_FieldInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m743_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m744_MethodInfo;
extern MethodInfo ValueType_ToString_m745_MethodInfo;
static Il2CppMethodReference Link_t1417_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
};
static bool Link_t1417_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Link_t1417_0_0_0;
extern Il2CppType Link_t1417_1_0_0;
extern Il2CppType ValueType_t211_0_0_0;
extern TypeInfo PatternLinkStack_t1418_il2cpp_TypeInfo;
extern Il2CppType PatternLinkStack_t1418_0_0_0;
const Il2CppTypeDefinitionMetadata Link_t1417_DefinitionMetadata = 
{
	&PatternLinkStack_t1418_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, Link_t1417_VTable/* vtableMethods */
	, Link_t1417_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Link_t1417_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Link"/* name */
	, ""/* namespaze */
	, Link_t1417_MethodInfos/* methods */
	, NULL/* properties */
	, Link_t1417_FieldInfos/* fields */
	, NULL/* events */
	, &Link_t1417_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Link_t1417_0_0_0/* byval_arg */
	, &Link_t1417_1_0_0/* this_arg */
	, &Link_t1417_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Link_t1417)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Link_t1417)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Link_t1417 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
#include "System_System_Text_RegularExpressions_PatternCompiler_Patter_0MethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
MethodInfo PatternLinkStack__ctor_m7636_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternLinkStack__ctor_m7636/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 671/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternLinkStack_t1418_PatternLinkStack_set_BaseAddress_m7637_ParameterInfos[] = 
{
	{"value", 0, 134218347, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
MethodInfo PatternLinkStack_set_BaseAddress_m7637_MethodInfo = 
{
	"set_BaseAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_BaseAddress_m7637/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, PatternLinkStack_t1418_PatternLinkStack_set_BaseAddress_m7637_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 672/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
MethodInfo PatternLinkStack_get_OffsetAddress_m7638_MethodInfo = 
{
	"get_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_get_OffsetAddress_m7638/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 673/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternLinkStack_t1418_PatternLinkStack_set_OffsetAddress_m7639_ParameterInfos[] = 
{
	{"value", 0, 134218348, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
MethodInfo PatternLinkStack_set_OffsetAddress_m7639_MethodInfo = 
{
	"set_OffsetAddress"/* name */
	, (methodPointerType)&PatternLinkStack_set_OffsetAddress_m7639/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, PatternLinkStack_t1418_PatternLinkStack_set_OffsetAddress_m7639_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 674/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternLinkStack_t1418_PatternLinkStack_GetOffset_m7640_ParameterInfos[] = 
{
	{"target_addr", 0, 134218349, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
MethodInfo PatternLinkStack_GetOffset_m7640_MethodInfo = 
{
	"GetOffset"/* name */
	, (methodPointerType)&PatternLinkStack_GetOffset_m7640/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int32_t141/* invoker_method */
	, PatternLinkStack_t1418_PatternLinkStack_GetOffset_m7640_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 675/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
MethodInfo PatternLinkStack_GetCurrent_m7641_MethodInfo = 
{
	"GetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_GetCurrent_m7641/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 676/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PatternLinkStack_t1418_PatternLinkStack_SetCurrent_m7642_ParameterInfos[] = 
{
	{"l", 0, 134218350, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
MethodInfo PatternLinkStack_SetCurrent_m7642_MethodInfo = 
{
	"SetCurrent"/* name */
	, (methodPointerType)&PatternLinkStack_SetCurrent_m7642/* method */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternLinkStack_t1418_PatternLinkStack_SetCurrent_m7642_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 677/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PatternLinkStack_t1418_MethodInfos[] =
{
	&PatternLinkStack__ctor_m7636_MethodInfo,
	&PatternLinkStack_set_BaseAddress_m7637_MethodInfo,
	&PatternLinkStack_get_OffsetAddress_m7638_MethodInfo,
	&PatternLinkStack_set_OffsetAddress_m7639_MethodInfo,
	&PatternLinkStack_GetOffset_m7640_MethodInfo,
	&PatternLinkStack_GetCurrent_m7641_MethodInfo,
	&PatternLinkStack_SetCurrent_m7642_MethodInfo,
	NULL
};
extern Il2CppType Link_t1417_0_0_1;
FieldInfo PatternLinkStack_t1418____link_1_FieldInfo = 
{
	"link"/* name */
	, &Link_t1417_0_0_1/* type */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* parent */
	, offsetof(PatternLinkStack_t1418, ___link_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PatternLinkStack_t1418_FieldInfos[] =
{
	&PatternLinkStack_t1418____link_1_FieldInfo,
	NULL
};
extern MethodInfo PatternLinkStack_set_BaseAddress_m7637_MethodInfo;
static PropertyInfo PatternLinkStack_t1418____BaseAddress_PropertyInfo = 
{
	&PatternLinkStack_t1418_il2cpp_TypeInfo/* parent */
	, "BaseAddress"/* name */
	, NULL/* get */
	, &PatternLinkStack_set_BaseAddress_m7637_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo PatternLinkStack_get_OffsetAddress_m7638_MethodInfo;
extern MethodInfo PatternLinkStack_set_OffsetAddress_m7639_MethodInfo;
static PropertyInfo PatternLinkStack_t1418____OffsetAddress_PropertyInfo = 
{
	&PatternLinkStack_t1418_il2cpp_TypeInfo/* parent */
	, "OffsetAddress"/* name */
	, &PatternLinkStack_get_OffsetAddress_m7638_MethodInfo/* get */
	, &PatternLinkStack_set_OffsetAddress_m7639_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PatternLinkStack_t1418_PropertyInfos[] =
{
	&PatternLinkStack_t1418____BaseAddress_PropertyInfo,
	&PatternLinkStack_t1418____OffsetAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternLinkStack_t1418_il2cpp_TypeInfo__nestedTypes[1] =
{
	&Link_t1417_0_0_0,
};
extern MethodInfo PatternLinkStack_GetCurrent_m7641_MethodInfo;
extern MethodInfo PatternLinkStack_SetCurrent_m7642_MethodInfo;
static Il2CppMethodReference PatternLinkStack_t1418_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&PatternLinkStack_GetCurrent_m7641_MethodInfo,
	&PatternLinkStack_SetCurrent_m7642_MethodInfo,
};
static bool PatternLinkStack_t1418_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PatternLinkStack_t1418_1_0_0;
extern Il2CppType LinkStack_t1419_0_0_0;
extern TypeInfo PatternCompiler_t1420_il2cpp_TypeInfo;
extern Il2CppType PatternCompiler_t1420_0_0_0;
struct PatternLinkStack_t1418;
const Il2CppTypeDefinitionMetadata PatternLinkStack_t1418_DefinitionMetadata = 
{
	&PatternCompiler_t1420_0_0_0/* declaringType */
	, PatternLinkStack_t1418_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkStack_t1419_0_0_0/* parent */
	, PatternLinkStack_t1418_VTable/* vtableMethods */
	, PatternLinkStack_t1418_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PatternLinkStack_t1418_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternLinkStack"/* name */
	, ""/* namespaze */
	, PatternLinkStack_t1418_MethodInfos/* methods */
	, PatternLinkStack_t1418_PropertyInfos/* properties */
	, PatternLinkStack_t1418_FieldInfos/* fields */
	, NULL/* events */
	, &PatternLinkStack_t1418_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PatternLinkStack_t1418_0_0_0/* byval_arg */
	, &PatternLinkStack_t1418_1_0_0/* this_arg */
	, &PatternLinkStack_t1418_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternLinkStack_t1418)/* instance_size */
	, sizeof (PatternLinkStack_t1418)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompiler.h"
// Metadata Definition System.Text.RegularExpressions.PatternCompiler
// System.Text.RegularExpressions.PatternCompiler
#include "System_System_Text_RegularExpressions_PatternCompilerMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
MethodInfo PatternCompiler__ctor_m7643_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PatternCompiler__ctor_m7643/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 631/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1407_0_0_0;
extern Il2CppType OpCode_t1407_0_0_0;
extern Il2CppType OpFlags_t1408_0_0_0;
extern Il2CppType OpFlags_t1408_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EncodeOp_m7644_ParameterInfos[] = 
{
	{"op", 0, 134218277, &EmptyCustomAttributesCache, &OpCode_t1407_0_0_0},
	{"flags", 1, 134218278, &EmptyCustomAttributesCache, &OpFlags_t1408_0_0_0},
};
extern Il2CppType UInt16_t862_0_0_0;
extern void* RuntimeInvoker_UInt16_t862_UInt16_t862_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
MethodInfo PatternCompiler_EncodeOp_m7644_MethodInfo = 
{
	"EncodeOp"/* name */
	, (methodPointerType)&PatternCompiler_EncodeOp_m7644/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &UInt16_t862_0_0_0/* return_type */
	, RuntimeInvoker_UInt16_t862_UInt16_t862_UInt16_t862/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EncodeOp_m7644_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 632/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IMachineFactory_t1405_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
MethodInfo PatternCompiler_GetMachineFactory_m7645_MethodInfo = 
{
	"GetMachineFactory"/* name */
	, (methodPointerType)&PatternCompiler_GetMachineFactory_m7645/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &IMachineFactory_t1405_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 633/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
MethodInfo PatternCompiler_EmitFalse_m7646_MethodInfo = 
{
	"EmitFalse"/* name */
	, (methodPointerType)&PatternCompiler_EmitFalse_m7646/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 634/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
MethodInfo PatternCompiler_EmitTrue_m7647_MethodInfo = 
{
	"EmitTrue"/* name */
	, (methodPointerType)&PatternCompiler_EmitTrue_m7647/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 635/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitCount_m7648_ParameterInfos[] = 
{
	{"count", 0, 134218279, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
MethodInfo PatternCompiler_EmitCount_m7648_MethodInfo = 
{
	"EmitCount"/* name */
	, (methodPointerType)&PatternCompiler_EmitCount_m7648/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitCount_m7648_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 636/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitCharacter_m7649_ParameterInfos[] = 
{
	{"c", 0, 134218280, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"negate", 1, 134218281, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 2, 134218282, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 3, 134218283, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitCharacter_m7649_MethodInfo = 
{
	"EmitCharacter"/* name */
	, (methodPointerType)&PatternCompiler_EmitCharacter_m7649/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitCharacter_m7649_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 637/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitCategory_m7650_ParameterInfos[] = 
{
	{"cat", 0, 134218284, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"negate", 1, 134218285, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218286, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitCategory_m7650_MethodInfo = 
{
	"EmitCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitCategory_m7650/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitCategory_m7650_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 638/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitNotCategory_m7651_ParameterInfos[] = 
{
	{"cat", 0, 134218287, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"negate", 1, 134218288, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218289, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitNotCategory_m7651_MethodInfo = 
{
	"EmitNotCategory"/* name */
	, (methodPointerType)&PatternCompiler_EmitNotCategory_m7651/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitNotCategory_m7651_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 639/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitRange_m7652_ParameterInfos[] = 
{
	{"lo", 0, 134218290, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"hi", 1, 134218291, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"negate", 2, 134218292, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 3, 134218293, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 4, 134218294, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_Int16_t563_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitRange_m7652_MethodInfo = 
{
	"EmitRange"/* name */
	, (methodPointerType)&PatternCompiler_EmitRange_m7652/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_Int16_t563_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitRange_m7652_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 640/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType BitArray_t1421_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitSet_m7653_ParameterInfos[] = 
{
	{"lo", 0, 134218295, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"set", 1, 134218296, &EmptyCustomAttributesCache, &BitArray_t1421_0_0_0},
	{"negate", 2, 134218297, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 3, 134218298, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 4, 134218299, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_Object_t_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitSet_m7653_MethodInfo = 
{
	"EmitSet"/* name */
	, (methodPointerType)&PatternCompiler_EmitSet_m7653/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_Object_t_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitSet_m7653_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 641/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitString_m7654_ParameterInfos[] = 
{
	{"str", 0, 134218300, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218301, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218302, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitString_m7654_MethodInfo = 
{
	"EmitString"/* name */
	, (methodPointerType)&PatternCompiler_EmitString_m7654/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitString_m7654_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 642/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1409_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitPosition_m7655_ParameterInfos[] = 
{
	{"pos", 0, 134218303, &EmptyCustomAttributesCache, &Position_t1409_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
MethodInfo PatternCompiler_EmitPosition_m7655_MethodInfo = 
{
	"EmitPosition"/* name */
	, (methodPointerType)&PatternCompiler_EmitPosition_m7655/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitPosition_m7655_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 643/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitOpen_m7656_ParameterInfos[] = 
{
	{"gid", 0, 134218304, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
MethodInfo PatternCompiler_EmitOpen_m7656_MethodInfo = 
{
	"EmitOpen"/* name */
	, (methodPointerType)&PatternCompiler_EmitOpen_m7656/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitOpen_m7656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 644/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitClose_m7657_ParameterInfos[] = 
{
	{"gid", 0, 134218305, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
MethodInfo PatternCompiler_EmitClose_m7657_MethodInfo = 
{
	"EmitClose"/* name */
	, (methodPointerType)&PatternCompiler_EmitClose_m7657/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitClose_m7657_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 645/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitBalanceStart_m7658_ParameterInfos[] = 
{
	{"gid", 0, 134218306, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"balance", 1, 134218307, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"capture", 2, 134218308, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"tail", 3, 134218309, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitBalanceStart_m7658_MethodInfo = 
{
	"EmitBalanceStart"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalanceStart_m7658/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitBalanceStart_m7658_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 646/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
MethodInfo PatternCompiler_EmitBalance_m7659_MethodInfo = 
{
	"EmitBalance"/* name */
	, (methodPointerType)&PatternCompiler_EmitBalance_m7659/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 647/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitReference_m7660_ParameterInfos[] = 
{
	{"gid", 0, 134218310, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"ignore", 1, 134218311, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218312, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_EmitReference_m7660_MethodInfo = 
{
	"EmitReference"/* name */
	, (methodPointerType)&PatternCompiler_EmitReference_m7660/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitReference_m7660_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 18/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 648/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitIfDefined_m7661_ParameterInfos[] = 
{
	{"gid", 0, 134218313, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"tail", 1, 134218314, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitIfDefined_m7661_MethodInfo = 
{
	"EmitIfDefined"/* name */
	, (methodPointerType)&PatternCompiler_EmitIfDefined_m7661/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitIfDefined_m7661_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 19/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 649/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitSub_m7662_ParameterInfos[] = 
{
	{"tail", 0, 134218315, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitSub_m7662_MethodInfo = 
{
	"EmitSub"/* name */
	, (methodPointerType)&PatternCompiler_EmitSub_m7662/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitSub_m7662_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 20/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 650/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitTest_m7663_ParameterInfos[] = 
{
	{"yes", 0, 134218316, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
	{"tail", 1, 134218317, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitTest_m7663_MethodInfo = 
{
	"EmitTest"/* name */
	, (methodPointerType)&PatternCompiler_EmitTest_m7663/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitTest_m7663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 21/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 651/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitBranch_m7664_ParameterInfos[] = 
{
	{"next", 0, 134218318, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitBranch_m7664_MethodInfo = 
{
	"EmitBranch"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranch_m7664/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitBranch_m7664_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 22/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 652/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitJump_m7665_ParameterInfos[] = 
{
	{"target", 0, 134218319, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitJump_m7665_MethodInfo = 
{
	"EmitJump"/* name */
	, (methodPointerType)&PatternCompiler_EmitJump_m7665/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitJump_m7665_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 23/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 653/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitRepeat_m7666_ParameterInfos[] = 
{
	{"min", 0, 134218320, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 1, 134218321, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"lazy", 2, 134218322, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"until", 3, 134218323, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitRepeat_m7666_MethodInfo = 
{
	"EmitRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitRepeat_m7666/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitRepeat_m7666_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 654/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitUntil_m7667_ParameterInfos[] = 
{
	{"repeat", 0, 134218324, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitUntil_m7667_MethodInfo = 
{
	"EmitUntil"/* name */
	, (methodPointerType)&PatternCompiler_EmitUntil_m7667/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitUntil_m7667_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 655/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitFastRepeat_m7668_ParameterInfos[] = 
{
	{"min", 0, 134218325, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 1, 134218326, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"lazy", 2, 134218327, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"tail", 3, 134218328, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitFastRepeat_m7668_MethodInfo = 
{
	"EmitFastRepeat"/* name */
	, (methodPointerType)&PatternCompiler_EmitFastRepeat_m7668/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitFastRepeat_m7668_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 656/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitIn_m7669_ParameterInfos[] = 
{
	{"tail", 0, 134218329, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitIn_m7669_MethodInfo = 
{
	"EmitIn"/* name */
	, (methodPointerType)&PatternCompiler_EmitIn_m7669/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitIn_m7669_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 657/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitAnchor_m7670_ParameterInfos[] = 
{
	{"reverse", 0, 134218330, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"offset", 1, 134218331, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"tail", 2, 134218332, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitAnchor_m7670_MethodInfo = 
{
	"EmitAnchor"/* name */
	, (methodPointerType)&PatternCompiler_EmitAnchor_m7670/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202_Int32_t141_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitAnchor_m7670_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 29/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 658/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitInfo_m7671_ParameterInfos[] = 
{
	{"count", 0, 134218333, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"min", 1, 134218334, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 2, 134218335, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
MethodInfo PatternCompiler_EmitInfo_m7671_MethodInfo = 
{
	"EmitInfo"/* name */
	, (methodPointerType)&PatternCompiler_EmitInfo_m7671/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_Int32_t141/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitInfo_m7671_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 27/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 659/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
MethodInfo PatternCompiler_NewLink_m7672_MethodInfo = 
{
	"NewLink"/* name */
	, (methodPointerType)&PatternCompiler_NewLink_m7672/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &LinkRef_t1415_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 32/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 660/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_ResolveLink_m7673_ParameterInfos[] = 
{
	{"lref", 0, 134218336, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_ResolveLink_m7673_MethodInfo = 
{
	"ResolveLink"/* name */
	, (methodPointerType)&PatternCompiler_ResolveLink_m7673/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_ResolveLink_m7673_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 33/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 661/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
MethodInfo PatternCompiler_EmitBranchEnd_m7674_MethodInfo = 
{
	"EmitBranchEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitBranchEnd_m7674/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 30/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 662/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
MethodInfo PatternCompiler_EmitAlternationEnd_m7675_MethodInfo = 
{
	"EmitAlternationEnd"/* name */
	, (methodPointerType)&PatternCompiler_EmitAlternationEnd_m7675/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 31/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 663/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_MakeFlags_m7676_ParameterInfos[] = 
{
	{"negate", 0, 134218337, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 1, 134218338, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218339, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"lazy", 3, 134218340, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType OpFlags_t1408_0_0_0;
extern void* RuntimeInvoker_OpFlags_t1408_SByte_t202_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
MethodInfo PatternCompiler_MakeFlags_m7676_MethodInfo = 
{
	"MakeFlags"/* name */
	, (methodPointerType)&PatternCompiler_MakeFlags_m7676/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &OpFlags_t1408_0_0_0/* return_type */
	, RuntimeInvoker_OpFlags_t1408_SByte_t202_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_MakeFlags_m7676_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 664/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1407_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_Emit_m7677_ParameterInfos[] = 
{
	{"op", 0, 134218341, &EmptyCustomAttributesCache, &OpCode_t1407_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
MethodInfo PatternCompiler_Emit_m7677_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m7677/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_Emit_m7677_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 665/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType OpCode_t1407_0_0_0;
extern Il2CppType OpFlags_t1408_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_Emit_m7678_ParameterInfos[] = 
{
	{"op", 0, 134218342, &EmptyCustomAttributesCache, &OpCode_t1407_0_0_0},
	{"flags", 1, 134218343, &EmptyCustomAttributesCache, &OpFlags_t1408_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
MethodInfo PatternCompiler_Emit_m7678_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m7678/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_UInt16_t862/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_Emit_m7678_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 666/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UInt16_t862_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_Emit_m7679_ParameterInfos[] = 
{
	{"word", 0, 134218344, &EmptyCustomAttributesCache, &UInt16_t862_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
MethodInfo PatternCompiler_Emit_m7679_MethodInfo = 
{
	"Emit"/* name */
	, (methodPointerType)&PatternCompiler_Emit_m7679/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_Emit_m7679_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 667/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
MethodInfo PatternCompiler_get_CurrentAddress_m7680_MethodInfo = 
{
	"get_CurrentAddress"/* name */
	, (methodPointerType)&PatternCompiler_get_CurrentAddress_m7680/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 668/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_BeginLink_m7681_ParameterInfos[] = 
{
	{"lref", 0, 134218345, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_BeginLink_m7681_MethodInfo = 
{
	"BeginLink"/* name */
	, (methodPointerType)&PatternCompiler_BeginLink_m7681/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_BeginLink_m7681_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 669/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType LinkRef_t1415_0_0_0;
static ParameterInfo PatternCompiler_t1420_PatternCompiler_EmitLink_m7682_ParameterInfos[] = 
{
	{"lref", 0, 134218346, &EmptyCustomAttributesCache, &LinkRef_t1415_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
MethodInfo PatternCompiler_EmitLink_m7682_MethodInfo = 
{
	"EmitLink"/* name */
	, (methodPointerType)&PatternCompiler_EmitLink_m7682/* method */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, PatternCompiler_t1420_PatternCompiler_EmitLink_m7682_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 670/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PatternCompiler_t1420_MethodInfos[] =
{
	&PatternCompiler__ctor_m7643_MethodInfo,
	&PatternCompiler_EncodeOp_m7644_MethodInfo,
	&PatternCompiler_GetMachineFactory_m7645_MethodInfo,
	&PatternCompiler_EmitFalse_m7646_MethodInfo,
	&PatternCompiler_EmitTrue_m7647_MethodInfo,
	&PatternCompiler_EmitCount_m7648_MethodInfo,
	&PatternCompiler_EmitCharacter_m7649_MethodInfo,
	&PatternCompiler_EmitCategory_m7650_MethodInfo,
	&PatternCompiler_EmitNotCategory_m7651_MethodInfo,
	&PatternCompiler_EmitRange_m7652_MethodInfo,
	&PatternCompiler_EmitSet_m7653_MethodInfo,
	&PatternCompiler_EmitString_m7654_MethodInfo,
	&PatternCompiler_EmitPosition_m7655_MethodInfo,
	&PatternCompiler_EmitOpen_m7656_MethodInfo,
	&PatternCompiler_EmitClose_m7657_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m7658_MethodInfo,
	&PatternCompiler_EmitBalance_m7659_MethodInfo,
	&PatternCompiler_EmitReference_m7660_MethodInfo,
	&PatternCompiler_EmitIfDefined_m7661_MethodInfo,
	&PatternCompiler_EmitSub_m7662_MethodInfo,
	&PatternCompiler_EmitTest_m7663_MethodInfo,
	&PatternCompiler_EmitBranch_m7664_MethodInfo,
	&PatternCompiler_EmitJump_m7665_MethodInfo,
	&PatternCompiler_EmitRepeat_m7666_MethodInfo,
	&PatternCompiler_EmitUntil_m7667_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m7668_MethodInfo,
	&PatternCompiler_EmitIn_m7669_MethodInfo,
	&PatternCompiler_EmitAnchor_m7670_MethodInfo,
	&PatternCompiler_EmitInfo_m7671_MethodInfo,
	&PatternCompiler_NewLink_m7672_MethodInfo,
	&PatternCompiler_ResolveLink_m7673_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m7674_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m7675_MethodInfo,
	&PatternCompiler_MakeFlags_m7676_MethodInfo,
	&PatternCompiler_Emit_m7677_MethodInfo,
	&PatternCompiler_Emit_m7678_MethodInfo,
	&PatternCompiler_Emit_m7679_MethodInfo,
	&PatternCompiler_get_CurrentAddress_m7680_MethodInfo,
	&PatternCompiler_BeginLink_m7681_MethodInfo,
	&PatternCompiler_EmitLink_m7682_MethodInfo,
	NULL
};
extern Il2CppType ArrayList_t1304_0_0_1;
FieldInfo PatternCompiler_t1420____pgm_0_FieldInfo = 
{
	"pgm"/* name */
	, &ArrayList_t1304_0_0_1/* type */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* parent */
	, offsetof(PatternCompiler_t1420, ___pgm_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PatternCompiler_t1420_FieldInfos[] =
{
	&PatternCompiler_t1420____pgm_0_FieldInfo,
	NULL
};
extern MethodInfo PatternCompiler_get_CurrentAddress_m7680_MethodInfo;
static PropertyInfo PatternCompiler_t1420____CurrentAddress_PropertyInfo = 
{
	&PatternCompiler_t1420_il2cpp_TypeInfo/* parent */
	, "CurrentAddress"/* name */
	, &PatternCompiler_get_CurrentAddress_m7680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* PatternCompiler_t1420_PropertyInfos[] =
{
	&PatternCompiler_t1420____CurrentAddress_PropertyInfo,
	NULL
};
static const Il2CppType* PatternCompiler_t1420_il2cpp_TypeInfo__nestedTypes[1] =
{
	&PatternLinkStack_t1418_0_0_0,
};
extern MethodInfo PatternCompiler_GetMachineFactory_m7645_MethodInfo;
extern MethodInfo PatternCompiler_EmitFalse_m7646_MethodInfo;
extern MethodInfo PatternCompiler_EmitTrue_m7647_MethodInfo;
extern MethodInfo PatternCompiler_EmitCharacter_m7649_MethodInfo;
extern MethodInfo PatternCompiler_EmitCategory_m7650_MethodInfo;
extern MethodInfo PatternCompiler_EmitNotCategory_m7651_MethodInfo;
extern MethodInfo PatternCompiler_EmitRange_m7652_MethodInfo;
extern MethodInfo PatternCompiler_EmitSet_m7653_MethodInfo;
extern MethodInfo PatternCompiler_EmitString_m7654_MethodInfo;
extern MethodInfo PatternCompiler_EmitPosition_m7655_MethodInfo;
extern MethodInfo PatternCompiler_EmitOpen_m7656_MethodInfo;
extern MethodInfo PatternCompiler_EmitClose_m7657_MethodInfo;
extern MethodInfo PatternCompiler_EmitBalanceStart_m7658_MethodInfo;
extern MethodInfo PatternCompiler_EmitBalance_m7659_MethodInfo;
extern MethodInfo PatternCompiler_EmitReference_m7660_MethodInfo;
extern MethodInfo PatternCompiler_EmitIfDefined_m7661_MethodInfo;
extern MethodInfo PatternCompiler_EmitSub_m7662_MethodInfo;
extern MethodInfo PatternCompiler_EmitTest_m7663_MethodInfo;
extern MethodInfo PatternCompiler_EmitBranch_m7664_MethodInfo;
extern MethodInfo PatternCompiler_EmitJump_m7665_MethodInfo;
extern MethodInfo PatternCompiler_EmitRepeat_m7666_MethodInfo;
extern MethodInfo PatternCompiler_EmitUntil_m7667_MethodInfo;
extern MethodInfo PatternCompiler_EmitIn_m7669_MethodInfo;
extern MethodInfo PatternCompiler_EmitInfo_m7671_MethodInfo;
extern MethodInfo PatternCompiler_EmitFastRepeat_m7668_MethodInfo;
extern MethodInfo PatternCompiler_EmitAnchor_m7670_MethodInfo;
extern MethodInfo PatternCompiler_EmitBranchEnd_m7674_MethodInfo;
extern MethodInfo PatternCompiler_EmitAlternationEnd_m7675_MethodInfo;
extern MethodInfo PatternCompiler_NewLink_m7672_MethodInfo;
extern MethodInfo PatternCompiler_ResolveLink_m7673_MethodInfo;
static Il2CppMethodReference PatternCompiler_t1420_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&PatternCompiler_GetMachineFactory_m7645_MethodInfo,
	&PatternCompiler_EmitFalse_m7646_MethodInfo,
	&PatternCompiler_EmitTrue_m7647_MethodInfo,
	&PatternCompiler_EmitCharacter_m7649_MethodInfo,
	&PatternCompiler_EmitCategory_m7650_MethodInfo,
	&PatternCompiler_EmitNotCategory_m7651_MethodInfo,
	&PatternCompiler_EmitRange_m7652_MethodInfo,
	&PatternCompiler_EmitSet_m7653_MethodInfo,
	&PatternCompiler_EmitString_m7654_MethodInfo,
	&PatternCompiler_EmitPosition_m7655_MethodInfo,
	&PatternCompiler_EmitOpen_m7656_MethodInfo,
	&PatternCompiler_EmitClose_m7657_MethodInfo,
	&PatternCompiler_EmitBalanceStart_m7658_MethodInfo,
	&PatternCompiler_EmitBalance_m7659_MethodInfo,
	&PatternCompiler_EmitReference_m7660_MethodInfo,
	&PatternCompiler_EmitIfDefined_m7661_MethodInfo,
	&PatternCompiler_EmitSub_m7662_MethodInfo,
	&PatternCompiler_EmitTest_m7663_MethodInfo,
	&PatternCompiler_EmitBranch_m7664_MethodInfo,
	&PatternCompiler_EmitJump_m7665_MethodInfo,
	&PatternCompiler_EmitRepeat_m7666_MethodInfo,
	&PatternCompiler_EmitUntil_m7667_MethodInfo,
	&PatternCompiler_EmitIn_m7669_MethodInfo,
	&PatternCompiler_EmitInfo_m7671_MethodInfo,
	&PatternCompiler_EmitFastRepeat_m7668_MethodInfo,
	&PatternCompiler_EmitAnchor_m7670_MethodInfo,
	&PatternCompiler_EmitBranchEnd_m7674_MethodInfo,
	&PatternCompiler_EmitAlternationEnd_m7675_MethodInfo,
	&PatternCompiler_NewLink_m7672_MethodInfo,
	&PatternCompiler_ResolveLink_m7673_MethodInfo,
};
static bool PatternCompiler_t1420_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* PatternCompiler_t1420_InterfacesTypeInfos[] = 
{
	&ICompiler_t1441_0_0_0,
};
static Il2CppInterfaceOffsetPair PatternCompiler_t1420_InterfacesOffsets[] = 
{
	{ &ICompiler_t1441_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PatternCompiler_t1420_1_0_0;
struct PatternCompiler_t1420;
const Il2CppTypeDefinitionMetadata PatternCompiler_t1420_DefinitionMetadata = 
{
	NULL/* declaringType */
	, PatternCompiler_t1420_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, PatternCompiler_t1420_InterfacesTypeInfos/* implementedInterfaces */
	, PatternCompiler_t1420_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, PatternCompiler_t1420_VTable/* vtableMethods */
	, PatternCompiler_t1420_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PatternCompiler_t1420_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PatternCompiler"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, PatternCompiler_t1420_MethodInfos/* methods */
	, PatternCompiler_t1420_PropertyInfos/* properties */
	, PatternCompiler_t1420_FieldInfos/* fields */
	, NULL/* events */
	, &PatternCompiler_t1420_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PatternCompiler_t1420_0_0_0/* byval_arg */
	, &PatternCompiler_t1420_1_0_0/* this_arg */
	, &PatternCompiler_t1420_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PatternCompiler_t1420)/* instance_size */
	, sizeof (PatternCompiler_t1420)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 40/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 34/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStack.h"
// Metadata Definition System.Text.RegularExpressions.LinkStack
extern TypeInfo LinkStack_t1419_il2cpp_TypeInfo;
// System.Text.RegularExpressions.LinkStack
#include "System_System_Text_RegularExpressions_LinkStackMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::.ctor()
MethodInfo LinkStack__ctor_m7683_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&LinkStack__ctor_m7683/* method */
	, &LinkStack_t1419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 678/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::Push()
MethodInfo LinkStack_Push_m7684_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&LinkStack_Push_m7684/* method */
	, &LinkStack_t1419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 679/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.LinkStack::Pop()
MethodInfo LinkStack_Pop_m7685_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&LinkStack_Pop_m7685/* method */
	, &LinkStack_t1419_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 680/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.LinkStack::GetCurrent()
MethodInfo LinkStack_GetCurrent_m8204_MethodInfo = 
{
	"GetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1419_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 681/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo LinkStack_t1419_LinkStack_SetCurrent_m8205_ParameterInfos[] = 
{
	{"l", 0, 134218351, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.LinkStack::SetCurrent(System.Object)
MethodInfo LinkStack_SetCurrent_m8205_MethodInfo = 
{
	"SetCurrent"/* name */
	, NULL/* method */
	, &LinkStack_t1419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, LinkStack_t1419_LinkStack_SetCurrent_m8205_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1476/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 682/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* LinkStack_t1419_MethodInfos[] =
{
	&LinkStack__ctor_m7683_MethodInfo,
	&LinkStack_Push_m7684_MethodInfo,
	&LinkStack_Pop_m7685_MethodInfo,
	&LinkStack_GetCurrent_m8204_MethodInfo,
	&LinkStack_SetCurrent_m8205_MethodInfo,
	NULL
};
extern Il2CppType Stack_t1147_0_0_1;
FieldInfo LinkStack_t1419____stack_0_FieldInfo = 
{
	"stack"/* name */
	, &Stack_t1147_0_0_1/* type */
	, &LinkStack_t1419_il2cpp_TypeInfo/* parent */
	, offsetof(LinkStack_t1419, ___stack_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* LinkStack_t1419_FieldInfos[] =
{
	&LinkStack_t1419____stack_0_FieldInfo,
	NULL
};
static Il2CppMethodReference LinkStack_t1419_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	NULL,
	NULL,
};
static bool LinkStack_t1419_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType LinkStack_t1419_1_0_0;
struct LinkStack_t1419;
const Il2CppTypeDefinitionMetadata LinkStack_t1419_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &LinkRef_t1415_0_0_0/* parent */
	, LinkStack_t1419_VTable/* vtableMethods */
	, LinkStack_t1419_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo LinkStack_t1419_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "LinkStack"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, LinkStack_t1419_MethodInfos/* methods */
	, NULL/* properties */
	, LinkStack_t1419_FieldInfos/* fields */
	, NULL/* events */
	, &LinkStack_t1419_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &LinkStack_t1419_0_0_0/* byval_arg */
	, &LinkStack_t1419_1_0_0/* this_arg */
	, &LinkStack_t1419_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (LinkStack_t1419)/* instance_size */
	, sizeof (LinkStack_t1419)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_Mark.h"
// Metadata Definition System.Text.RegularExpressions.Mark
extern TypeInfo Mark_t1422_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Mark
#include "System_System_Text_RegularExpressions_MarkMethodDeclarations.h"
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
MethodInfo Mark_get_IsDefined_m7686_MethodInfo = 
{
	"get_IsDefined"/* name */
	, (methodPointerType)&Mark_get_IsDefined_m7686/* method */
	, &Mark_t1422_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 683/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
MethodInfo Mark_get_Index_m7687_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&Mark_get_Index_m7687/* method */
	, &Mark_t1422_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 684/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
MethodInfo Mark_get_Length_m7688_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&Mark_get_Length_m7688/* method */
	, &Mark_t1422_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 685/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Mark_t1422_MethodInfos[] =
{
	&Mark_get_IsDefined_m7686_MethodInfo,
	&Mark_get_Index_m7687_MethodInfo,
	&Mark_get_Length_m7688_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Mark_t1422____Start_0_FieldInfo = 
{
	"Start"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Mark_t1422_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1422, ___Start_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Mark_t1422____End_1_FieldInfo = 
{
	"End"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Mark_t1422_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1422, ___End_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Mark_t1422____Previous_2_FieldInfo = 
{
	"Previous"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Mark_t1422_il2cpp_TypeInfo/* parent */
	, offsetof(Mark_t1422, ___Previous_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mark_t1422_FieldInfos[] =
{
	&Mark_t1422____Start_0_FieldInfo,
	&Mark_t1422____End_1_FieldInfo,
	&Mark_t1422____Previous_2_FieldInfo,
	NULL
};
extern MethodInfo Mark_get_IsDefined_m7686_MethodInfo;
static PropertyInfo Mark_t1422____IsDefined_PropertyInfo = 
{
	&Mark_t1422_il2cpp_TypeInfo/* parent */
	, "IsDefined"/* name */
	, &Mark_get_IsDefined_m7686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Mark_get_Index_m7687_MethodInfo;
static PropertyInfo Mark_t1422____Index_PropertyInfo = 
{
	&Mark_t1422_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &Mark_get_Index_m7687_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Mark_get_Length_m7688_MethodInfo;
static PropertyInfo Mark_t1422____Length_PropertyInfo = 
{
	&Mark_t1422_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &Mark_get_Length_m7688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Mark_t1422_PropertyInfos[] =
{
	&Mark_t1422____IsDefined_PropertyInfo,
	&Mark_t1422____Index_PropertyInfo,
	&Mark_t1422____Length_PropertyInfo,
	NULL
};
static Il2CppMethodReference Mark_t1422_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
};
static bool Mark_t1422_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Mark_t1422_0_0_0;
extern Il2CppType Mark_t1422_1_0_0;
const Il2CppTypeDefinitionMetadata Mark_t1422_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, Mark_t1422_VTable/* vtableMethods */
	, Mark_t1422_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Mark_t1422_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mark"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Mark_t1422_MethodInfos/* methods */
	, Mark_t1422_PropertyInfos/* properties */
	, Mark_t1422_FieldInfos/* fields */
	, NULL/* events */
	, &Mark_t1422_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Mark_t1422_0_0_0/* byval_arg */
	, &Mark_t1422_1_0_0/* this_arg */
	, &Mark_t1422_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mark_t1422)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mark_t1422)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Mark_t1422 )/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, true/* is_blittable */
	, 3/* method_count */
	, 3/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/IntStack
extern TypeInfo IntStack_t1423_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStackMethodDeclarations.h"
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
MethodInfo IntStack_Pop_m7689_MethodInfo = 
{
	"Pop"/* name */
	, (methodPointerType)&IntStack_Pop_m7689/* method */
	, &IntStack_t1423_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 707/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo IntStack_t1423_IntStack_Push_m7690_ParameterInfos[] = 
{
	{"value", 0, 134218389, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
MethodInfo IntStack_Push_m7690_MethodInfo = 
{
	"Push"/* name */
	, (methodPointerType)&IntStack_Push_m7690/* method */
	, &IntStack_t1423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, IntStack_t1423_IntStack_Push_m7690_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 708/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
MethodInfo IntStack_get_Count_m7691_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntStack_get_Count_m7691/* method */
	, &IntStack_t1423_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 709/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo IntStack_t1423_IntStack_set_Count_m7692_ParameterInfos[] = 
{
	{"value", 0, 134218390, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
MethodInfo IntStack_set_Count_m7692_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&IntStack_set_Count_m7692/* method */
	, &IntStack_t1423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, IntStack_t1423_IntStack_set_Count_m7692_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 710/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* IntStack_t1423_MethodInfos[] =
{
	&IntStack_Pop_m7689_MethodInfo,
	&IntStack_Push_m7690_MethodInfo,
	&IntStack_get_Count_m7691_MethodInfo,
	&IntStack_set_Count_m7692_MethodInfo,
	NULL
};
extern Il2CppType Int32U5BU5D_t186_0_0_1;
FieldInfo IntStack_t1423____values_0_FieldInfo = 
{
	"values"/* name */
	, &Int32U5BU5D_t186_0_0_1/* type */
	, &IntStack_t1423_il2cpp_TypeInfo/* parent */
	, offsetof(IntStack_t1423, ___values_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo IntStack_t1423____count_1_FieldInfo = 
{
	"count"/* name */
	, &Int32_t141_0_0_1/* type */
	, &IntStack_t1423_il2cpp_TypeInfo/* parent */
	, offsetof(IntStack_t1423, ___count_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* IntStack_t1423_FieldInfos[] =
{
	&IntStack_t1423____values_0_FieldInfo,
	&IntStack_t1423____count_1_FieldInfo,
	NULL
};
extern MethodInfo IntStack_get_Count_m7691_MethodInfo;
extern MethodInfo IntStack_set_Count_m7692_MethodInfo;
static PropertyInfo IntStack_t1423____Count_PropertyInfo = 
{
	&IntStack_t1423_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntStack_get_Count_m7691_MethodInfo/* get */
	, &IntStack_set_Count_m7692_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IntStack_t1423_PropertyInfos[] =
{
	&IntStack_t1423____Count_PropertyInfo,
	NULL
};
static Il2CppMethodReference IntStack_t1423_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
};
static bool IntStack_t1423_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType IntStack_t1423_0_0_0;
extern Il2CppType IntStack_t1423_1_0_0;
extern TypeInfo Interpreter_t1428_il2cpp_TypeInfo;
extern Il2CppType Interpreter_t1428_0_0_0;
const Il2CppTypeDefinitionMetadata IntStack_t1423_DefinitionMetadata = 
{
	&Interpreter_t1428_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, IntStack_t1423_VTable/* vtableMethods */
	, IntStack_t1423_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo IntStack_t1423_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntStack"/* name */
	, ""/* namespaze */
	, IntStack_t1423_MethodInfos/* methods */
	, IntStack_t1423_PropertyInfos/* properties */
	, IntStack_t1423_FieldInfos/* fields */
	, NULL/* events */
	, &IntStack_t1423_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IntStack_t1423_0_0_0/* byval_arg */
	, &IntStack_t1423_1_0_0/* this_arg */
	, &IntStack_t1423_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)IntStack_t1423_marshal/* marshal_to_native_func */
	, (methodPointerType)IntStack_t1423_marshal_back/* marshal_from_native_func */
	, (methodPointerType)IntStack_t1423_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (IntStack_t1423)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (IntStack_t1423)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(IntStack_t1423_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatCont.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/RepeatContext
extern TypeInfo RepeatContext_t1424_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/RepeatContext
#include "System_System_Text_RegularExpressions_Interpreter_RepeatContMethodDeclarations.h"
extern Il2CppType RepeatContext_t1424_0_0_0;
extern Il2CppType RepeatContext_t1424_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo RepeatContext_t1424_RepeatContext__ctor_m7693_ParameterInfos[] = 
{
	{"previous", 0, 134218391, &EmptyCustomAttributesCache, &RepeatContext_t1424_0_0_0},
	{"min", 1, 134218392, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 2, 134218393, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"lazy", 3, 134218394, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"expr_pc", 4, 134218395, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141_SByte_t202_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
MethodInfo RepeatContext__ctor_m7693_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RepeatContext__ctor_m7693/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141_SByte_t202_Int32_t141/* invoker_method */
	, RepeatContext_t1424_RepeatContext__ctor_m7693_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 711/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
MethodInfo RepeatContext_get_Count_m7694_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&RepeatContext_get_Count_m7694/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 712/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo RepeatContext_t1424_RepeatContext_set_Count_m7695_ParameterInfos[] = 
{
	{"value", 0, 134218396, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
MethodInfo RepeatContext_set_Count_m7695_MethodInfo = 
{
	"set_Count"/* name */
	, (methodPointerType)&RepeatContext_set_Count_m7695/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, RepeatContext_t1424_RepeatContext_set_Count_m7695_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 713/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
MethodInfo RepeatContext_get_Start_m7696_MethodInfo = 
{
	"get_Start"/* name */
	, (methodPointerType)&RepeatContext_get_Start_m7696/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 714/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo RepeatContext_t1424_RepeatContext_set_Start_m7697_ParameterInfos[] = 
{
	{"value", 0, 134218397, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
MethodInfo RepeatContext_set_Start_m7697_MethodInfo = 
{
	"set_Start"/* name */
	, (methodPointerType)&RepeatContext_set_Start_m7697/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, RepeatContext_t1424_RepeatContext_set_Start_m7697_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 715/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
MethodInfo RepeatContext_get_IsMinimum_m7698_MethodInfo = 
{
	"get_IsMinimum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMinimum_m7698/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 716/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
MethodInfo RepeatContext_get_IsMaximum_m7699_MethodInfo = 
{
	"get_IsMaximum"/* name */
	, (methodPointerType)&RepeatContext_get_IsMaximum_m7699/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 717/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
MethodInfo RepeatContext_get_IsLazy_m7700_MethodInfo = 
{
	"get_IsLazy"/* name */
	, (methodPointerType)&RepeatContext_get_IsLazy_m7700/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 718/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
MethodInfo RepeatContext_get_Expression_m7701_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&RepeatContext_get_Expression_m7701/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 719/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RepeatContext_t1424_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
MethodInfo RepeatContext_get_Previous_m7702_MethodInfo = 
{
	"get_Previous"/* name */
	, (methodPointerType)&RepeatContext_get_Previous_m7702/* method */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* declaring_type */
	, &RepeatContext_t1424_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 720/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RepeatContext_t1424_MethodInfos[] =
{
	&RepeatContext__ctor_m7693_MethodInfo,
	&RepeatContext_get_Count_m7694_MethodInfo,
	&RepeatContext_set_Count_m7695_MethodInfo,
	&RepeatContext_get_Start_m7696_MethodInfo,
	&RepeatContext_set_Start_m7697_MethodInfo,
	&RepeatContext_get_IsMinimum_m7698_MethodInfo,
	&RepeatContext_get_IsMaximum_m7699_MethodInfo,
	&RepeatContext_get_IsLazy_m7700_MethodInfo,
	&RepeatContext_get_Expression_m7701_MethodInfo,
	&RepeatContext_get_Previous_m7702_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo RepeatContext_t1424____start_0_FieldInfo = 
{
	"start"/* name */
	, &Int32_t141_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___start_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo RepeatContext_t1424____min_1_FieldInfo = 
{
	"min"/* name */
	, &Int32_t141_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___min_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo RepeatContext_t1424____max_2_FieldInfo = 
{
	"max"/* name */
	, &Int32_t141_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___max_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo RepeatContext_t1424____lazy_3_FieldInfo = 
{
	"lazy"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___lazy_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo RepeatContext_t1424____expr_pc_4_FieldInfo = 
{
	"expr_pc"/* name */
	, &Int32_t141_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___expr_pc_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1424_0_0_1;
FieldInfo RepeatContext_t1424____previous_5_FieldInfo = 
{
	"previous"/* name */
	, &RepeatContext_t1424_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___previous_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo RepeatContext_t1424____count_6_FieldInfo = 
{
	"count"/* name */
	, &Int32_t141_0_0_1/* type */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, offsetof(RepeatContext_t1424, ___count_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RepeatContext_t1424_FieldInfos[] =
{
	&RepeatContext_t1424____start_0_FieldInfo,
	&RepeatContext_t1424____min_1_FieldInfo,
	&RepeatContext_t1424____max_2_FieldInfo,
	&RepeatContext_t1424____lazy_3_FieldInfo,
	&RepeatContext_t1424____expr_pc_4_FieldInfo,
	&RepeatContext_t1424____previous_5_FieldInfo,
	&RepeatContext_t1424____count_6_FieldInfo,
	NULL
};
extern MethodInfo RepeatContext_get_Count_m7694_MethodInfo;
extern MethodInfo RepeatContext_set_Count_m7695_MethodInfo;
static PropertyInfo RepeatContext_t1424____Count_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &RepeatContext_get_Count_m7694_MethodInfo/* get */
	, &RepeatContext_set_Count_m7695_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Start_m7696_MethodInfo;
extern MethodInfo RepeatContext_set_Start_m7697_MethodInfo;
static PropertyInfo RepeatContext_t1424____Start_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "Start"/* name */
	, &RepeatContext_get_Start_m7696_MethodInfo/* get */
	, &RepeatContext_set_Start_m7697_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsMinimum_m7698_MethodInfo;
static PropertyInfo RepeatContext_t1424____IsMinimum_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "IsMinimum"/* name */
	, &RepeatContext_get_IsMinimum_m7698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsMaximum_m7699_MethodInfo;
static PropertyInfo RepeatContext_t1424____IsMaximum_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "IsMaximum"/* name */
	, &RepeatContext_get_IsMaximum_m7699_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_IsLazy_m7700_MethodInfo;
static PropertyInfo RepeatContext_t1424____IsLazy_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "IsLazy"/* name */
	, &RepeatContext_get_IsLazy_m7700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Expression_m7701_MethodInfo;
static PropertyInfo RepeatContext_t1424____Expression_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &RepeatContext_get_Expression_m7701_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo RepeatContext_get_Previous_m7702_MethodInfo;
static PropertyInfo RepeatContext_t1424____Previous_PropertyInfo = 
{
	&RepeatContext_t1424_il2cpp_TypeInfo/* parent */
	, "Previous"/* name */
	, &RepeatContext_get_Previous_m7702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* RepeatContext_t1424_PropertyInfos[] =
{
	&RepeatContext_t1424____Count_PropertyInfo,
	&RepeatContext_t1424____Start_PropertyInfo,
	&RepeatContext_t1424____IsMinimum_PropertyInfo,
	&RepeatContext_t1424____IsMaximum_PropertyInfo,
	&RepeatContext_t1424____IsLazy_PropertyInfo,
	&RepeatContext_t1424____Expression_PropertyInfo,
	&RepeatContext_t1424____Previous_PropertyInfo,
	NULL
};
static Il2CppMethodReference RepeatContext_t1424_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool RepeatContext_t1424_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RepeatContext_t1424_1_0_0;
struct RepeatContext_t1424;
const Il2CppTypeDefinitionMetadata RepeatContext_t1424_DefinitionMetadata = 
{
	&Interpreter_t1428_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, RepeatContext_t1424_VTable/* vtableMethods */
	, RepeatContext_t1424_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RepeatContext_t1424_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RepeatContext"/* name */
	, ""/* namespaze */
	, RepeatContext_t1424_MethodInfos/* methods */
	, RepeatContext_t1424_PropertyInfos/* properties */
	, RepeatContext_t1424_FieldInfos/* fields */
	, NULL/* events */
	, &RepeatContext_t1424_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RepeatContext_t1424_0_0_0/* byval_arg */
	, &RepeatContext_t1424_1_0_0/* this_arg */
	, &RepeatContext_t1424_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RepeatContext_t1424)/* instance_size */
	, sizeof (RepeatContext_t1424)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 7/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter/Mode
extern TypeInfo Mode_t1425_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_ModeMethodDeclarations.h"
static MethodInfo* Mode_t1425_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t141_0_0_1542;
FieldInfo Mode_t1425____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t141_0_0_1542/* type */
	, &Mode_t1425_il2cpp_TypeInfo/* parent */
	, offsetof(Mode_t1425, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1425_0_0_32854;
FieldInfo Mode_t1425____Search_2_FieldInfo = 
{
	"Search"/* name */
	, &Mode_t1425_0_0_32854/* type */
	, &Mode_t1425_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1425_0_0_32854;
FieldInfo Mode_t1425____Match_3_FieldInfo = 
{
	"Match"/* name */
	, &Mode_t1425_0_0_32854/* type */
	, &Mode_t1425_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Mode_t1425_0_0_32854;
FieldInfo Mode_t1425____Count_4_FieldInfo = 
{
	"Count"/* name */
	, &Mode_t1425_0_0_32854/* type */
	, &Mode_t1425_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Mode_t1425_FieldInfos[] =
{
	&Mode_t1425____value___1_FieldInfo,
	&Mode_t1425____Search_2_FieldInfo,
	&Mode_t1425____Match_3_FieldInfo,
	&Mode_t1425____Count_4_FieldInfo,
	NULL
};
static const int32_t Mode_t1425____Search_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry Mode_t1425____Search_2_DefaultValue = 
{
	&Mode_t1425____Search_2_FieldInfo/* field */
	, { (char*)&Mode_t1425____Search_2_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t Mode_t1425____Match_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry Mode_t1425____Match_3_DefaultValue = 
{
	&Mode_t1425____Match_3_FieldInfo/* field */
	, { (char*)&Mode_t1425____Match_3_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t Mode_t1425____Count_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry Mode_t1425____Count_4_DefaultValue = 
{
	&Mode_t1425____Count_4_FieldInfo/* field */
	, { (char*)&Mode_t1425____Count_4_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* Mode_t1425_FieldDefaultValues[] = 
{
	&Mode_t1425____Search_2_DefaultValue,
	&Mode_t1425____Match_3_DefaultValue,
	&Mode_t1425____Count_4_DefaultValue,
	NULL
};
static Il2CppMethodReference Mode_t1425_VTable[] =
{
	&Enum_Equals_m716_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Enum_GetHashCode_m717_MethodInfo,
	&Enum_ToString_m718_MethodInfo,
	&Enum_ToString_m719_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m720_MethodInfo,
	&Enum_System_IConvertible_ToByte_m721_MethodInfo,
	&Enum_System_IConvertible_ToChar_m722_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m723_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m724_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m725_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m726_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m727_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m728_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m729_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m730_MethodInfo,
	&Enum_ToString_m731_MethodInfo,
	&Enum_System_IConvertible_ToType_m732_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m733_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m734_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m735_MethodInfo,
	&Enum_CompareTo_m736_MethodInfo,
	&Enum_GetTypeCode_m737_MethodInfo,
};
static bool Mode_t1425_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair Mode_t1425_InterfacesOffsets[] = 
{
	{ &IFormattable_t204_0_0_0, 4},
	{ &IConvertible_t205_0_0_0, 5},
	{ &IComparable_t206_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Mode_t1425_0_0_0;
extern Il2CppType Mode_t1425_1_0_0;
// System.Int32
#include "mscorlib_System_Int32.h"
extern TypeInfo Int32_t141_il2cpp_TypeInfo;
const Il2CppTypeDefinitionMetadata Mode_t1425_DefinitionMetadata = 
{
	&Interpreter_t1428_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Mode_t1425_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t207_0_0_0/* parent */
	, Mode_t1425_VTable/* vtableMethods */
	, Mode_t1425_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Mode_t1425_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Mode"/* name */
	, ""/* namespaze */
	, Mode_t1425_MethodInfos/* methods */
	, NULL/* properties */
	, Mode_t1425_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t141_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Mode_t1425_0_0_0/* byval_arg */
	, &Mode_t1425_1_0_0/* this_arg */
	, &Mode_t1425_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, Mode_t1425_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Mode_t1425)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Mode_t1425)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_Interpreter.h"
// Metadata Definition System.Text.RegularExpressions.Interpreter
// System.Text.RegularExpressions.Interpreter
#include "System_System_Text_RegularExpressions_InterpreterMethodDeclarations.h"
extern Il2CppType UInt16U5BU5D_t1333_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter__ctor_m7703_ParameterInfos[] = 
{
	{"program", 0, 134218352, &EmptyCustomAttributesCache, &UInt16U5BU5D_t1333_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
MethodInfo Interpreter__ctor_m7703_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interpreter__ctor_m7703/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Interpreter_t1428_Interpreter__ctor_m7703_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 686/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_ReadProgramCount_m7704_ParameterInfos[] = 
{
	{"ptr", 0, 134218353, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
MethodInfo Interpreter_ReadProgramCount_m7704_MethodInfo = 
{
	"ReadProgramCount"/* name */
	, (methodPointerType)&Interpreter_ReadProgramCount_m7704/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_ReadProgramCount_m7704_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 687/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Regex_t858_0_0_0;
extern Il2CppType Regex_t858_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_Scan_m7705_ParameterInfos[] = 
{
	{"regex", 0, 134218354, &EmptyCustomAttributesCache, &Regex_t858_0_0_0},
	{"text", 1, 134218355, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"start", 2, 134218356, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"end", 3, 134218357, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Match_t1394_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
MethodInfo Interpreter_Scan_m7705_MethodInfo = 
{
	"Scan"/* name */
	, (methodPointerType)&Interpreter_Scan_m7705/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1394_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_Scan_m7705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 688/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
MethodInfo Interpreter_Reset_m7706_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Interpreter_Reset_m7706/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 689/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Mode_t1425_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_Eval_m7707_ParameterInfos[] = 
{
	{"mode", 0, 134218358, &EmptyCustomAttributesCache, &Mode_t1425_0_0_0},
	{"ref_ptr", 1, 134218359, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"pc", 2, 134218360, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141_Int32U26_t564_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
MethodInfo Interpreter_Eval_m7707_MethodInfo = 
{
	"Eval"/* name */
	, (methodPointerType)&Interpreter_Eval_m7707/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141_Int32U26_t564_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_Eval_m7707_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 690/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Mode_t1425_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_EvalChar_m7708_ParameterInfos[] = 
{
	{"mode", 0, 134218361, &EmptyCustomAttributesCache, &Mode_t1425_0_0_0},
	{"ptr", 1, 134218362, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"pc", 2, 134218363, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"multi", 3, 134218364, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141_Int32U26_t564_Int32U26_t564_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
MethodInfo Interpreter_EvalChar_m7708_MethodInfo = 
{
	"EvalChar"/* name */
	, (methodPointerType)&Interpreter_EvalChar_m7708/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141_Int32U26_t564_Int32U26_t564_SByte_t202/* invoker_method */
	, Interpreter_t1428_Interpreter_EvalChar_m7708_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 691/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_TryMatch_m7709_ParameterInfos[] = 
{
	{"ref_ptr", 0, 134218365, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"pc", 1, 134218366, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32U26_t564_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
MethodInfo Interpreter_TryMatch_m7709_MethodInfo = 
{
	"TryMatch"/* name */
	, (methodPointerType)&Interpreter_TryMatch_m7709/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32U26_t564_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_TryMatch_m7709_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 692/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1409_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_IsPosition_m7710_ParameterInfos[] = 
{
	{"pos", 0, 134218367, &EmptyCustomAttributesCache, &Position_t1409_0_0_0},
	{"ptr", 1, 134218368, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_UInt16_t862_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
MethodInfo Interpreter_IsPosition_m7710_MethodInfo = 
{
	"IsPosition"/* name */
	, (methodPointerType)&Interpreter_IsPosition_m7710/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_UInt16_t862_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_IsPosition_m7710_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 693/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_IsWordChar_m7711_ParameterInfos[] = 
{
	{"c", 0, 134218369, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
MethodInfo Interpreter_IsWordChar_m7711_MethodInfo = 
{
	"IsWordChar"/* name */
	, (methodPointerType)&Interpreter_IsWordChar_m7711/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int16_t563/* invoker_method */
	, Interpreter_t1428_Interpreter_IsWordChar_m7711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 694/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_GetString_m7712_ParameterInfos[] = 
{
	{"pc", 0, 134218370, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
MethodInfo Interpreter_GetString_m7712_MethodInfo = 
{
	"GetString"/* name */
	, (methodPointerType)&Interpreter_GetString_m7712/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_GetString_m7712_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 695/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_Open_m7713_ParameterInfos[] = 
{
	{"gid", 0, 134218371, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"ptr", 1, 134218372, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
MethodInfo Interpreter_Open_m7713_MethodInfo = 
{
	"Open"/* name */
	, (methodPointerType)&Interpreter_Open_m7713/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_Open_m7713_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 696/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_Close_m7714_ParameterInfos[] = 
{
	{"gid", 0, 134218373, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"ptr", 1, 134218374, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
MethodInfo Interpreter_Close_m7714_MethodInfo = 
{
	"Close"/* name */
	, (methodPointerType)&Interpreter_Close_m7714/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_Close_m7714_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 697/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_Balance_m7715_ParameterInfos[] = 
{
	{"gid", 0, 134218375, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"balance_gid", 1, 134218376, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"capture", 2, 134218377, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ptr", 3, 134218378, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141_Int32_t141_SByte_t202_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
MethodInfo Interpreter_Balance_m7715_MethodInfo = 
{
	"Balance"/* name */
	, (methodPointerType)&Interpreter_Balance_m7715/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141_Int32_t141_SByte_t202_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_Balance_m7715_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 698/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
MethodInfo Interpreter_Checkpoint_m7716_MethodInfo = 
{
	"Checkpoint"/* name */
	, (methodPointerType)&Interpreter_Checkpoint_m7716/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 699/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_Backtrack_m7717_ParameterInfos[] = 
{
	{"cp", 0, 134218379, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
MethodInfo Interpreter_Backtrack_m7717_MethodInfo = 
{
	"Backtrack"/* name */
	, (methodPointerType)&Interpreter_Backtrack_m7717/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_Backtrack_m7717_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 700/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
MethodInfo Interpreter_ResetGroups_m7718_MethodInfo = 
{
	"ResetGroups"/* name */
	, (methodPointerType)&Interpreter_ResetGroups_m7718/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 701/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_GetLastDefined_m7719_ParameterInfos[] = 
{
	{"gid", 0, 134218380, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
MethodInfo Interpreter_GetLastDefined_m7719_MethodInfo = 
{
	"GetLastDefined"/* name */
	, (methodPointerType)&Interpreter_GetLastDefined_m7719/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_GetLastDefined_m7719_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 702/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_CreateMark_m7720_ParameterInfos[] = 
{
	{"previous", 0, 134218381, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
MethodInfo Interpreter_CreateMark_m7720_MethodInfo = 
{
	"CreateMark"/* name */
	, (methodPointerType)&Interpreter_CreateMark_m7720/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_CreateMark_m7720_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 703/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Interpreter_t1428_Interpreter_GetGroupInfo_m7721_ParameterInfos[] = 
{
	{"gid", 0, 134218382, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"first_mark_index", 1, 134218383, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"n_caps", 2, 134218384, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
MethodInfo Interpreter_GetGroupInfo_m7721_MethodInfo = 
{
	"GetGroupInfo"/* name */
	, (methodPointerType)&Interpreter_GetGroupInfo_m7721/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Interpreter_t1428_Interpreter_GetGroupInfo_m7721_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 704/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Group_t1398_0_0_0;
extern Il2CppType Group_t1398_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_PopulateGroup_m7722_ParameterInfos[] = 
{
	{"g", 0, 134218385, &EmptyCustomAttributesCache, &Group_t1398_0_0_0},
	{"first_mark_index", 1, 134218386, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"n_caps", 2, 134218387, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
MethodInfo Interpreter_PopulateGroup_m7722_MethodInfo = 
{
	"PopulateGroup"/* name */
	, (methodPointerType)&Interpreter_PopulateGroup_m7722/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141/* invoker_method */
	, Interpreter_t1428_Interpreter_PopulateGroup_m7722_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 705/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Regex_t858_0_0_0;
static ParameterInfo Interpreter_t1428_Interpreter_GenerateMatch_m7723_ParameterInfos[] = 
{
	{"regex", 0, 134218388, &EmptyCustomAttributesCache, &Regex_t858_0_0_0},
};
extern Il2CppType Match_t1394_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
MethodInfo Interpreter_GenerateMatch_m7723_MethodInfo = 
{
	"GenerateMatch"/* name */
	, (methodPointerType)&Interpreter_GenerateMatch_m7723/* method */
	, &Interpreter_t1428_il2cpp_TypeInfo/* declaring_type */
	, &Match_t1394_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Interpreter_t1428_Interpreter_GenerateMatch_m7723_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 706/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Interpreter_t1428_MethodInfos[] =
{
	&Interpreter__ctor_m7703_MethodInfo,
	&Interpreter_ReadProgramCount_m7704_MethodInfo,
	&Interpreter_Scan_m7705_MethodInfo,
	&Interpreter_Reset_m7706_MethodInfo,
	&Interpreter_Eval_m7707_MethodInfo,
	&Interpreter_EvalChar_m7708_MethodInfo,
	&Interpreter_TryMatch_m7709_MethodInfo,
	&Interpreter_IsPosition_m7710_MethodInfo,
	&Interpreter_IsWordChar_m7711_MethodInfo,
	&Interpreter_GetString_m7712_MethodInfo,
	&Interpreter_Open_m7713_MethodInfo,
	&Interpreter_Close_m7714_MethodInfo,
	&Interpreter_Balance_m7715_MethodInfo,
	&Interpreter_Checkpoint_m7716_MethodInfo,
	&Interpreter_Backtrack_m7717_MethodInfo,
	&Interpreter_ResetGroups_m7718_MethodInfo,
	&Interpreter_GetLastDefined_m7719_MethodInfo,
	&Interpreter_CreateMark_m7720_MethodInfo,
	&Interpreter_GetGroupInfo_m7721_MethodInfo,
	&Interpreter_PopulateGroup_m7722_MethodInfo,
	&Interpreter_GenerateMatch_m7723_MethodInfo,
	NULL
};
extern Il2CppType UInt16U5BU5D_t1333_0_0_1;
FieldInfo Interpreter_t1428____program_1_FieldInfo = 
{
	"program"/* name */
	, &UInt16U5BU5D_t1333_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___program_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____program_start_2_FieldInfo = 
{
	"program_start"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___program_start_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Interpreter_t1428____text_3_FieldInfo = 
{
	"text"/* name */
	, &String_t_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___text_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____text_end_4_FieldInfo = 
{
	"text_end"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___text_end_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____group_count_5_FieldInfo = 
{
	"group_count"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___group_count_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____match_min_6_FieldInfo = 
{
	"match_min"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___match_min_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType QuickSearch_t1426_0_0_1;
FieldInfo Interpreter_t1428____qs_7_FieldInfo = 
{
	"qs"/* name */
	, &QuickSearch_t1426_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___qs_7)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____scan_ptr_8_FieldInfo = 
{
	"scan_ptr"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___scan_ptr_8)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1424_0_0_1;
FieldInfo Interpreter_t1428____repeat_9_FieldInfo = 
{
	"repeat"/* name */
	, &RepeatContext_t1424_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___repeat_9)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1424_0_0_1;
FieldInfo Interpreter_t1428____fast_10_FieldInfo = 
{
	"fast"/* name */
	, &RepeatContext_t1424_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___fast_10)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IntStack_t1423_0_0_1;
FieldInfo Interpreter_t1428____stack_11_FieldInfo = 
{
	"stack"/* name */
	, &IntStack_t1423_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___stack_11)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType RepeatContext_t1424_0_0_1;
FieldInfo Interpreter_t1428____deep_12_FieldInfo = 
{
	"deep"/* name */
	, &RepeatContext_t1424_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___deep_12)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType MarkU5BU5D_t1427_0_0_1;
FieldInfo Interpreter_t1428____marks_13_FieldInfo = 
{
	"marks"/* name */
	, &MarkU5BU5D_t1427_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___marks_13)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____mark_start_14_FieldInfo = 
{
	"mark_start"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___mark_start_14)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Interpreter_t1428____mark_end_15_FieldInfo = 
{
	"mark_end"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___mark_end_15)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32U5BU5D_t186_0_0_1;
FieldInfo Interpreter_t1428____groups_16_FieldInfo = 
{
	"groups"/* name */
	, &Int32U5BU5D_t186_0_0_1/* type */
	, &Interpreter_t1428_il2cpp_TypeInfo/* parent */
	, offsetof(Interpreter_t1428, ___groups_16)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Interpreter_t1428_FieldInfos[] =
{
	&Interpreter_t1428____program_1_FieldInfo,
	&Interpreter_t1428____program_start_2_FieldInfo,
	&Interpreter_t1428____text_3_FieldInfo,
	&Interpreter_t1428____text_end_4_FieldInfo,
	&Interpreter_t1428____group_count_5_FieldInfo,
	&Interpreter_t1428____match_min_6_FieldInfo,
	&Interpreter_t1428____qs_7_FieldInfo,
	&Interpreter_t1428____scan_ptr_8_FieldInfo,
	&Interpreter_t1428____repeat_9_FieldInfo,
	&Interpreter_t1428____fast_10_FieldInfo,
	&Interpreter_t1428____stack_11_FieldInfo,
	&Interpreter_t1428____deep_12_FieldInfo,
	&Interpreter_t1428____marks_13_FieldInfo,
	&Interpreter_t1428____mark_start_14_FieldInfo,
	&Interpreter_t1428____mark_end_15_FieldInfo,
	&Interpreter_t1428____groups_16_FieldInfo,
	NULL
};
static const Il2CppType* Interpreter_t1428_il2cpp_TypeInfo__nestedTypes[3] =
{
	&IntStack_t1423_0_0_0,
	&RepeatContext_t1424_0_0_0,
	&Mode_t1425_0_0_0,
};
extern MethodInfo Interpreter_Scan_m7705_MethodInfo;
extern MethodInfo BaseMachine_Split_m7534_MethodInfo;
static Il2CppMethodReference Interpreter_t1428_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Interpreter_Scan_m7705_MethodInfo,
	&BaseMachine_Split_m7534_MethodInfo,
	&BaseMachine_Split_m7534_MethodInfo,
	&Interpreter_Scan_m7705_MethodInfo,
};
static bool Interpreter_t1428_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IMachine_t1401_0_0_0;
static Il2CppInterfaceOffsetPair Interpreter_t1428_InterfacesOffsets[] = 
{
	{ &IMachine_t1401_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Interpreter_t1428_1_0_0;
extern Il2CppType BaseMachine_t1393_0_0_0;
struct Interpreter_t1428;
const Il2CppTypeDefinitionMetadata Interpreter_t1428_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Interpreter_t1428_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, Interpreter_t1428_InterfacesOffsets/* interfaceOffsets */
	, &BaseMachine_t1393_0_0_0/* parent */
	, Interpreter_t1428_VTable/* vtableMethods */
	, Interpreter_t1428_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Interpreter_t1428_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interpreter"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interpreter_t1428_MethodInfos/* methods */
	, NULL/* properties */
	, Interpreter_t1428_FieldInfos/* fields */
	, NULL/* events */
	, &Interpreter_t1428_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Interpreter_t1428_0_0_0/* byval_arg */
	, &Interpreter_t1428_1_0_0/* this_arg */
	, &Interpreter_t1428_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Interpreter_t1428)/* instance_size */
	, sizeof (Interpreter_t1428)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 21/* method_count */
	, 0/* property_count */
	, 16/* field_count */
	, 0/* event_count */
	, 3/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"
// Metadata Definition System.Text.RegularExpressions.Interval
extern TypeInfo Interval_t1429_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_IntervalMethodDeclarations.h"
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interval_t1429_Interval__ctor_m7724_ParameterInfos[] = 
{
	{"low", 0, 134218398, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"high", 1, 134218399, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::.ctor(System.Int32,System.Int32)
MethodInfo Interval__ctor_m7724_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Interval__ctor_m7724/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141/* invoker_method */
	, Interval_t1429_Interval__ctor_m7724_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 721/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
extern void* RuntimeInvoker_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Interval::get_Empty()
MethodInfo Interval_get_Empty_m7725_MethodInfo = 
{
	"get_Empty"/* name */
	, (methodPointerType)&Interval_get_Empty_m7725/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1429_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1429/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 722/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsDiscontiguous()
MethodInfo Interval_get_IsDiscontiguous_m7726_MethodInfo = 
{
	"get_IsDiscontiguous"/* name */
	, (methodPointerType)&Interval_get_IsDiscontiguous_m7726/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 723/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsSingleton()
MethodInfo Interval_get_IsSingleton_m7727_MethodInfo = 
{
	"get_IsSingleton"/* name */
	, (methodPointerType)&Interval_get_IsSingleton_m7727/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 724/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::get_IsEmpty()
MethodInfo Interval_get_IsEmpty_m7728_MethodInfo = 
{
	"get_IsEmpty"/* name */
	, (methodPointerType)&Interval_get_IsEmpty_m7728/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 725/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::get_Size()
MethodInfo Interval_get_Size_m7729_MethodInfo = 
{
	"get_Size"/* name */
	, (methodPointerType)&Interval_get_Size_m7729/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 726/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo Interval_t1429_Interval_IsDisjoint_m7730_ParameterInfos[] = 
{
	{"i", 0, 134218400, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsDisjoint(System.Text.RegularExpressions.Interval)
MethodInfo Interval_IsDisjoint_m7730_MethodInfo = 
{
	"IsDisjoint"/* name */
	, (methodPointerType)&Interval_IsDisjoint_m7730/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Interval_t1429/* invoker_method */
	, Interval_t1429_Interval_IsDisjoint_m7730_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 727/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo Interval_t1429_Interval_IsAdjacent_m7731_ParameterInfos[] = 
{
	{"i", 0, 134218401, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::IsAdjacent(System.Text.RegularExpressions.Interval)
MethodInfo Interval_IsAdjacent_m7731_MethodInfo = 
{
	"IsAdjacent"/* name */
	, (methodPointerType)&Interval_IsAdjacent_m7731/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Interval_t1429/* invoker_method */
	, Interval_t1429_Interval_IsAdjacent_m7731_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 728/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo Interval_t1429_Interval_Contains_m7732_ParameterInfos[] = 
{
	{"i", 0, 134218402, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Contains_m7732_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m7732/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Interval_t1429/* invoker_method */
	, Interval_t1429_Interval_Contains_m7732_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 729/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Interval_t1429_Interval_Contains_m7733_ParameterInfos[] = 
{
	{"i", 0, 134218403, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Contains(System.Int32)
MethodInfo Interval_Contains_m7733_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&Interval_Contains_m7733/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Interval_t1429_Interval_Contains_m7733_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 730/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo Interval_t1429_Interval_Intersects_m7734_ParameterInfos[] = 
{
	{"i", 0, 134218404, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Interval::Intersects(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Intersects_m7734_MethodInfo = 
{
	"Intersects"/* name */
	, (methodPointerType)&Interval_Intersects_m7734/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Interval_t1429/* invoker_method */
	, Interval_t1429_Interval_Intersects_m7734_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 731/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo Interval_t1429_Interval_Merge_m7735_ParameterInfos[] = 
{
	{"i", 0, 134218405, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Interval::Merge(System.Text.RegularExpressions.Interval)
MethodInfo Interval_Merge_m7735_MethodInfo = 
{
	"Merge"/* name */
	, (methodPointerType)&Interval_Merge_m7735/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Interval_t1429/* invoker_method */
	, Interval_t1429_Interval_Merge_m7735_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 732/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Interval_t1429_Interval_CompareTo_m7736_ParameterInfos[] = 
{
	{"o", 0, 134218406, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Interval::CompareTo(System.Object)
MethodInfo Interval_CompareTo_m7736_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&Interval_CompareTo_m7736/* method */
	, &Interval_t1429_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t/* invoker_method */
	, Interval_t1429_Interval_CompareTo_m7736_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 733/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Interval_t1429_MethodInfos[] =
{
	&Interval__ctor_m7724_MethodInfo,
	&Interval_get_Empty_m7725_MethodInfo,
	&Interval_get_IsDiscontiguous_m7726_MethodInfo,
	&Interval_get_IsSingleton_m7727_MethodInfo,
	&Interval_get_IsEmpty_m7728_MethodInfo,
	&Interval_get_Size_m7729_MethodInfo,
	&Interval_IsDisjoint_m7730_MethodInfo,
	&Interval_IsAdjacent_m7731_MethodInfo,
	&Interval_Contains_m7732_MethodInfo,
	&Interval_Contains_m7733_MethodInfo,
	&Interval_Intersects_m7734_MethodInfo,
	&Interval_Merge_m7735_MethodInfo,
	&Interval_CompareTo_m7736_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Interval_t1429____low_0_FieldInfo = 
{
	"low"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Interval_t1429_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1429, ___low_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo Interval_t1429____high_1_FieldInfo = 
{
	"high"/* name */
	, &Int32_t141_0_0_6/* type */
	, &Interval_t1429_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1429, ___high_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_6;
FieldInfo Interval_t1429____contiguous_2_FieldInfo = 
{
	"contiguous"/* name */
	, &Boolean_t147_0_0_6/* type */
	, &Interval_t1429_il2cpp_TypeInfo/* parent */
	, offsetof(Interval_t1429, ___contiguous_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Interval_t1429_FieldInfos[] =
{
	&Interval_t1429____low_0_FieldInfo,
	&Interval_t1429____high_1_FieldInfo,
	&Interval_t1429____contiguous_2_FieldInfo,
	NULL
};
extern MethodInfo Interval_get_Empty_m7725_MethodInfo;
static PropertyInfo Interval_t1429____Empty_PropertyInfo = 
{
	&Interval_t1429_il2cpp_TypeInfo/* parent */
	, "Empty"/* name */
	, &Interval_get_Empty_m7725_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsDiscontiguous_m7726_MethodInfo;
static PropertyInfo Interval_t1429____IsDiscontiguous_PropertyInfo = 
{
	&Interval_t1429_il2cpp_TypeInfo/* parent */
	, "IsDiscontiguous"/* name */
	, &Interval_get_IsDiscontiguous_m7726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsSingleton_m7727_MethodInfo;
static PropertyInfo Interval_t1429____IsSingleton_PropertyInfo = 
{
	&Interval_t1429_il2cpp_TypeInfo/* parent */
	, "IsSingleton"/* name */
	, &Interval_get_IsSingleton_m7727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_IsEmpty_m7728_MethodInfo;
static PropertyInfo Interval_t1429____IsEmpty_PropertyInfo = 
{
	&Interval_t1429_il2cpp_TypeInfo/* parent */
	, "IsEmpty"/* name */
	, &Interval_get_IsEmpty_m7728_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Interval_get_Size_m7729_MethodInfo;
static PropertyInfo Interval_t1429____Size_PropertyInfo = 
{
	&Interval_t1429_il2cpp_TypeInfo/* parent */
	, "Size"/* name */
	, &Interval_get_Size_m7729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Interval_t1429_PropertyInfos[] =
{
	&Interval_t1429____Empty_PropertyInfo,
	&Interval_t1429____IsDiscontiguous_PropertyInfo,
	&Interval_t1429____IsSingleton_PropertyInfo,
	&Interval_t1429____IsEmpty_PropertyInfo,
	&Interval_t1429____Size_PropertyInfo,
	NULL
};
extern MethodInfo Interval_CompareTo_m7736_MethodInfo;
static Il2CppMethodReference Interval_t1429_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
	&Interval_CompareTo_m7736_MethodInfo,
};
static bool Interval_t1429_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Interval_t1429_InterfacesTypeInfos[] = 
{
	&IComparable_t206_0_0_0,
};
static Il2CppInterfaceOffsetPair Interval_t1429_InterfacesOffsets[] = 
{
	{ &IComparable_t206_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Interval_t1429_1_0_0;
const Il2CppTypeDefinitionMetadata Interval_t1429_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, Interval_t1429_InterfacesTypeInfos/* implementedInterfaces */
	, Interval_t1429_InterfacesOffsets/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, Interval_t1429_VTable/* vtableMethods */
	, Interval_t1429_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Interval_t1429_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Interval"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, Interval_t1429_MethodInfos/* methods */
	, Interval_t1429_PropertyInfos/* properties */
	, Interval_t1429_FieldInfos/* fields */
	, NULL/* events */
	, &Interval_t1429_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Interval_t1429_0_0_0/* byval_arg */
	, &Interval_t1429_1_0_0/* this_arg */
	, &Interval_t1429_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)Interval_t1429_marshal/* marshal_to_native_func */
	, (methodPointerType)Interval_t1429_marshal_back/* marshal_from_native_func */
	, (methodPointerType)Interval_t1429_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (Interval_t1429)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (Interval_t1429)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(Interval_t1429_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048840/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 13/* method_count */
	, 5/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 5/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_Enu.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/Enumerator
extern TypeInfo Enumerator_t1431_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/Enumerator
#include "System_System_Text_RegularExpressions_IntervalCollection_EnuMethodDeclarations.h"
extern Il2CppType IList_t1430_0_0_0;
extern Il2CppType IList_t1430_0_0_0;
static ParameterInfo Enumerator_t1431_Enumerator__ctor_m7737_ParameterInfos[] = 
{
	{"list", 0, 134218416, &EmptyCustomAttributesCache, &IList_t1430_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::.ctor(System.Collections.IList)
MethodInfo Enumerator__ctor_m7737_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Enumerator__ctor_m7737/* method */
	, &Enumerator_t1431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Enumerator_t1431_Enumerator__ctor_m7737_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 745/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection/Enumerator::get_Current()
MethodInfo Enumerator_get_Current_m7738_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&Enumerator_get_Current_m7738/* method */
	, &Enumerator_t1431_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 746/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection/Enumerator::MoveNext()
MethodInfo Enumerator_MoveNext_m7739_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&Enumerator_MoveNext_m7739/* method */
	, &Enumerator_t1431_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 747/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/Enumerator::Reset()
MethodInfo Enumerator_Reset_m7740_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&Enumerator_Reset_m7740/* method */
	, &Enumerator_t1431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 748/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Enumerator_t1431_MethodInfos[] =
{
	&Enumerator__ctor_m7737_MethodInfo,
	&Enumerator_get_Current_m7738_MethodInfo,
	&Enumerator_MoveNext_m7739_MethodInfo,
	&Enumerator_Reset_m7740_MethodInfo,
	NULL
};
extern Il2CppType IList_t1430_0_0_1;
FieldInfo Enumerator_t1431____list_0_FieldInfo = 
{
	"list"/* name */
	, &IList_t1430_0_0_1/* type */
	, &Enumerator_t1431_il2cpp_TypeInfo/* parent */
	, offsetof(Enumerator_t1431, ___list_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Enumerator_t1431____ptr_1_FieldInfo = 
{
	"ptr"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Enumerator_t1431_il2cpp_TypeInfo/* parent */
	, offsetof(Enumerator_t1431, ___ptr_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Enumerator_t1431_FieldInfos[] =
{
	&Enumerator_t1431____list_0_FieldInfo,
	&Enumerator_t1431____ptr_1_FieldInfo,
	NULL
};
extern MethodInfo Enumerator_get_Current_m7738_MethodInfo;
static PropertyInfo Enumerator_t1431____Current_PropertyInfo = 
{
	&Enumerator_t1431_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &Enumerator_get_Current_m7738_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Enumerator_t1431_PropertyInfos[] =
{
	&Enumerator_t1431____Current_PropertyInfo,
	NULL
};
extern MethodInfo Enumerator_MoveNext_m7739_MethodInfo;
extern MethodInfo Enumerator_Reset_m7740_MethodInfo;
static Il2CppMethodReference Enumerator_t1431_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Enumerator_get_Current_m7738_MethodInfo,
	&Enumerator_MoveNext_m7739_MethodInfo,
	&Enumerator_Reset_m7740_MethodInfo,
};
static bool Enumerator_t1431_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType IEnumerator_t26_0_0_0;
static const Il2CppType* Enumerator_t1431_InterfacesTypeInfos[] = 
{
	&IEnumerator_t26_0_0_0,
};
static Il2CppInterfaceOffsetPair Enumerator_t1431_InterfacesOffsets[] = 
{
	{ &IEnumerator_t26_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Enumerator_t1431_0_0_0;
extern Il2CppType Enumerator_t1431_1_0_0;
extern TypeInfo IntervalCollection_t1433_il2cpp_TypeInfo;
extern Il2CppType IntervalCollection_t1433_0_0_0;
struct Enumerator_t1431;
const Il2CppTypeDefinitionMetadata Enumerator_t1431_DefinitionMetadata = 
{
	&IntervalCollection_t1433_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, Enumerator_t1431_InterfacesTypeInfos/* implementedInterfaces */
	, Enumerator_t1431_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Enumerator_t1431_VTable/* vtableMethods */
	, Enumerator_t1431_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Enumerator_t1431_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Enumerator"/* name */
	, ""/* namespaze */
	, Enumerator_t1431_MethodInfos/* methods */
	, Enumerator_t1431_PropertyInfos/* properties */
	, Enumerator_t1431_FieldInfos/* fields */
	, NULL/* events */
	, &Enumerator_t1431_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Enumerator_t1431_0_0_0/* byval_arg */
	, &Enumerator_t1431_1_0_0/* this_arg */
	, &Enumerator_t1431_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Enumerator_t1431)/* instance_size */
	, sizeof (Enumerator_t1431)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_Cos.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection/CostDelegate
extern TypeInfo CostDelegate_t1432_il2cpp_TypeInfo;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
#include "System_System_Text_RegularExpressions_IntervalCollection_CosMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo CostDelegate_t1432_CostDelegate__ctor_m7741_ParameterInfos[] = 
{
	{"object", 0, 134218417, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218418, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
MethodInfo CostDelegate__ctor_m7741_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CostDelegate__ctor_m7741/* method */
	, &CostDelegate_t1432_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_IntPtr_t/* invoker_method */
	, CostDelegate_t1432_CostDelegate__ctor_m7741_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 749/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo CostDelegate_t1432_CostDelegate_Invoke_m7742_ParameterInfos[] = 
{
	{"i", 0, 134218419, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Double_t939_0_0_0;
extern void* RuntimeInvoker_Double_t939_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
MethodInfo CostDelegate_Invoke_m7742_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CostDelegate_Invoke_m7742/* method */
	, &CostDelegate_t1432_il2cpp_TypeInfo/* declaring_type */
	, &Double_t939_0_0_0/* return_type */
	, RuntimeInvoker_Double_t939_Interval_t1429/* invoker_method */
	, CostDelegate_t1432_CostDelegate_Invoke_m7742_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 750/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
extern Il2CppType AsyncCallback_t244_0_0_0;
extern Il2CppType AsyncCallback_t244_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CostDelegate_t1432_CostDelegate_BeginInvoke_m7743_ParameterInfos[] = 
{
	{"i", 0, 134218420, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
	{"callback", 1, 134218421, &EmptyCustomAttributesCache, &AsyncCallback_t244_0_0_0},
	{"object", 2, 134218422, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t243_0_0_0;
extern void* RuntimeInvoker_Object_t_Interval_t1429_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
MethodInfo CostDelegate_BeginInvoke_m7743_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CostDelegate_BeginInvoke_m7743/* method */
	, &CostDelegate_t1432_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t243_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Interval_t1429_Object_t_Object_t/* invoker_method */
	, CostDelegate_t1432_CostDelegate_BeginInvoke_m7743_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 751/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t243_0_0_0;
extern Il2CppType IAsyncResult_t243_0_0_0;
static ParameterInfo CostDelegate_t1432_CostDelegate_EndInvoke_m7744_ParameterInfos[] = 
{
	{"result", 0, 134218423, &EmptyCustomAttributesCache, &IAsyncResult_t243_0_0_0},
};
extern Il2CppType Double_t939_0_0_0;
extern void* RuntimeInvoker_Double_t939_Object_t (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
MethodInfo CostDelegate_EndInvoke_m7744_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CostDelegate_EndInvoke_m7744/* method */
	, &CostDelegate_t1432_il2cpp_TypeInfo/* declaring_type */
	, &Double_t939_0_0_0/* return_type */
	, RuntimeInvoker_Double_t939_Object_t/* invoker_method */
	, CostDelegate_t1432_CostDelegate_EndInvoke_m7744_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 752/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CostDelegate_t1432_MethodInfos[] =
{
	&CostDelegate__ctor_m7741_MethodInfo,
	&CostDelegate_Invoke_m7742_MethodInfo,
	&CostDelegate_BeginInvoke_m7743_MethodInfo,
	&CostDelegate_EndInvoke_m7744_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m1007_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m1008_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m1009_MethodInfo;
extern MethodInfo Delegate_Clone_m1010_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m1011_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m1012_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m1013_MethodInfo;
extern MethodInfo CostDelegate_Invoke_m7742_MethodInfo;
extern MethodInfo CostDelegate_BeginInvoke_m7743_MethodInfo;
extern MethodInfo CostDelegate_EndInvoke_m7744_MethodInfo;
static Il2CppMethodReference CostDelegate_t1432_VTable[] =
{
	&MulticastDelegate_Equals_m1007_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&MulticastDelegate_GetHashCode_m1008_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&MulticastDelegate_GetObjectData_m1009_MethodInfo,
	&Delegate_Clone_m1010_MethodInfo,
	&MulticastDelegate_GetObjectData_m1009_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1011_MethodInfo,
	&MulticastDelegate_CombineImpl_m1012_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1013_MethodInfo,
	&CostDelegate_Invoke_m7742_MethodInfo,
	&CostDelegate_BeginInvoke_m7743_MethodInfo,
	&CostDelegate_EndInvoke_m7744_MethodInfo,
};
static bool CostDelegate_t1432_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType ICloneable_t251_0_0_0;
extern Il2CppType ISerializable_t252_0_0_0;
static Il2CppInterfaceOffsetPair CostDelegate_t1432_InterfacesOffsets[] = 
{
	{ &ICloneable_t251_0_0_0, 4},
	{ &ISerializable_t252_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CostDelegate_t1432_0_0_0;
extern Il2CppType CostDelegate_t1432_1_0_0;
extern Il2CppType MulticastDelegate_t246_0_0_0;
struct CostDelegate_t1432;
const Il2CppTypeDefinitionMetadata CostDelegate_t1432_DefinitionMetadata = 
{
	&IntervalCollection_t1433_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, CostDelegate_t1432_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t246_0_0_0/* parent */
	, CostDelegate_t1432_VTable/* vtableMethods */
	, CostDelegate_t1432_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CostDelegate_t1432_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CostDelegate"/* name */
	, ""/* namespaze */
	, CostDelegate_t1432_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &CostDelegate_t1432_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CostDelegate_t1432_0_0_0/* byval_arg */
	, &CostDelegate_t1432_1_0_0/* this_arg */
	, &CostDelegate_t1432_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CostDelegate_t1432/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CostDelegate_t1432)/* instance_size */
	, sizeof (CostDelegate_t1432)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 258/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollection.h"
// Metadata Definition System.Text.RegularExpressions.IntervalCollection
// System.Text.RegularExpressions.IntervalCollection
#include "System_System_Text_RegularExpressions_IntervalCollectionMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
MethodInfo IntervalCollection__ctor_m7745_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&IntervalCollection__ctor_m7745/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 734/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo IntervalCollection_t1433_IntervalCollection_get_Item_m7746_ParameterInfos[] = 
{
	{"i", 0, 134218407, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Interval_t1429_0_0_0;
extern void* RuntimeInvoker_Interval_t1429_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
MethodInfo IntervalCollection_get_Item_m7746_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&IntervalCollection_get_Item_m7746/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1429_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1429_Int32_t141/* invoker_method */
	, IntervalCollection_t1433_IntervalCollection_get_Item_m7746_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 735/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo IntervalCollection_t1433_IntervalCollection_Add_m7747_ParameterInfos[] = 
{
	{"i", 0, 134218408, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
MethodInfo IntervalCollection_Add_m7747_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&IntervalCollection_Add_m7747/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Interval_t1429/* invoker_method */
	, IntervalCollection_t1433_IntervalCollection_Add_m7747_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 736/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
MethodInfo IntervalCollection_Normalize_m7748_MethodInfo = 
{
	"Normalize"/* name */
	, (methodPointerType)&IntervalCollection_Normalize_m7748/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 737/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CostDelegate_t1432_0_0_0;
static ParameterInfo IntervalCollection_t1433_IntervalCollection_GetMetaCollection_m7749_ParameterInfos[] = 
{
	{"cost_del", 0, 134218409, &EmptyCustomAttributesCache, &CostDelegate_t1432_0_0_0},
};
extern Il2CppType IntervalCollection_t1433_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
MethodInfo IntervalCollection_GetMetaCollection_m7749_MethodInfo = 
{
	"GetMetaCollection"/* name */
	, (methodPointerType)&IntervalCollection_GetMetaCollection_m7749/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &IntervalCollection_t1433_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1433_IntervalCollection_GetMetaCollection_m7749_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 738/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType IntervalCollection_t1433_0_0_0;
extern Il2CppType CostDelegate_t1432_0_0_0;
static ParameterInfo IntervalCollection_t1433_IntervalCollection_Optimize_m7750_ParameterInfos[] = 
{
	{"begin", 0, 134218410, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"end", 1, 134218411, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"meta", 2, 134218412, &EmptyCustomAttributesCache, &IntervalCollection_t1433_0_0_0},
	{"cost_del", 3, 134218413, &EmptyCustomAttributesCache, &CostDelegate_t1432_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
MethodInfo IntervalCollection_Optimize_m7750_MethodInfo = 
{
	"Optimize"/* name */
	, (methodPointerType)&IntervalCollection_Optimize_m7750/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_Object_t_Object_t/* invoker_method */
	, IntervalCollection_t1433_IntervalCollection_Optimize_m7750_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 739/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
MethodInfo IntervalCollection_get_Count_m7751_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&IntervalCollection_get_Count_m7751/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 740/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
MethodInfo IntervalCollection_get_IsSynchronized_m7752_MethodInfo = 
{
	"get_IsSynchronized"/* name */
	, (methodPointerType)&IntervalCollection_get_IsSynchronized_m7752/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 741/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
MethodInfo IntervalCollection_get_SyncRoot_m7753_MethodInfo = 
{
	"get_SyncRoot"/* name */
	, (methodPointerType)&IntervalCollection_get_SyncRoot_m7753/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 742/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo IntervalCollection_t1433_IntervalCollection_CopyTo_m7754_ParameterInfos[] = 
{
	{"array", 0, 134218414, &EmptyCustomAttributesCache, &Array_t_0_0_0},
	{"index", 1, 134218415, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
MethodInfo IntervalCollection_CopyTo_m7754_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&IntervalCollection_CopyTo_m7754/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141/* invoker_method */
	, IntervalCollection_t1433_IntervalCollection_CopyTo_m7754_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 743/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IEnumerator_t26_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
MethodInfo IntervalCollection_GetEnumerator_m7755_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&IntervalCollection_GetEnumerator_m7755/* method */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t26_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 744/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* IntervalCollection_t1433_MethodInfos[] =
{
	&IntervalCollection__ctor_m7745_MethodInfo,
	&IntervalCollection_get_Item_m7746_MethodInfo,
	&IntervalCollection_Add_m7747_MethodInfo,
	&IntervalCollection_Normalize_m7748_MethodInfo,
	&IntervalCollection_GetMetaCollection_m7749_MethodInfo,
	&IntervalCollection_Optimize_m7750_MethodInfo,
	&IntervalCollection_get_Count_m7751_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m7752_MethodInfo,
	&IntervalCollection_get_SyncRoot_m7753_MethodInfo,
	&IntervalCollection_CopyTo_m7754_MethodInfo,
	&IntervalCollection_GetEnumerator_m7755_MethodInfo,
	NULL
};
extern Il2CppType ArrayList_t1304_0_0_1;
FieldInfo IntervalCollection_t1433____intervals_0_FieldInfo = 
{
	"intervals"/* name */
	, &ArrayList_t1304_0_0_1/* type */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* parent */
	, offsetof(IntervalCollection_t1433, ___intervals_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* IntervalCollection_t1433_FieldInfos[] =
{
	&IntervalCollection_t1433____intervals_0_FieldInfo,
	NULL
};
extern MethodInfo IntervalCollection_get_Item_m7746_MethodInfo;
static PropertyInfo IntervalCollection_t1433____Item_PropertyInfo = 
{
	&IntervalCollection_t1433_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IntervalCollection_get_Item_m7746_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_Count_m7751_MethodInfo;
static PropertyInfo IntervalCollection_t1433____Count_PropertyInfo = 
{
	&IntervalCollection_t1433_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &IntervalCollection_get_Count_m7751_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_IsSynchronized_m7752_MethodInfo;
static PropertyInfo IntervalCollection_t1433____IsSynchronized_PropertyInfo = 
{
	&IntervalCollection_t1433_il2cpp_TypeInfo/* parent */
	, "IsSynchronized"/* name */
	, &IntervalCollection_get_IsSynchronized_m7752_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo IntervalCollection_get_SyncRoot_m7753_MethodInfo;
static PropertyInfo IntervalCollection_t1433____SyncRoot_PropertyInfo = 
{
	&IntervalCollection_t1433_il2cpp_TypeInfo/* parent */
	, "SyncRoot"/* name */
	, &IntervalCollection_get_SyncRoot_m7753_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IntervalCollection_t1433_PropertyInfos[] =
{
	&IntervalCollection_t1433____Item_PropertyInfo,
	&IntervalCollection_t1433____Count_PropertyInfo,
	&IntervalCollection_t1433____IsSynchronized_PropertyInfo,
	&IntervalCollection_t1433____SyncRoot_PropertyInfo,
	NULL
};
static const Il2CppType* IntervalCollection_t1433_il2cpp_TypeInfo__nestedTypes[2] =
{
	&Enumerator_t1431_0_0_0,
	&CostDelegate_t1432_0_0_0,
};
extern MethodInfo IntervalCollection_CopyTo_m7754_MethodInfo;
extern MethodInfo IntervalCollection_GetEnumerator_m7755_MethodInfo;
static Il2CppMethodReference IntervalCollection_t1433_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&IntervalCollection_get_Count_m7751_MethodInfo,
	&IntervalCollection_get_IsSynchronized_m7752_MethodInfo,
	&IntervalCollection_get_SyncRoot_m7753_MethodInfo,
	&IntervalCollection_CopyTo_m7754_MethodInfo,
	&IntervalCollection_GetEnumerator_m7755_MethodInfo,
};
static bool IntervalCollection_t1433_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppType ICollection_t1268_0_0_0;
extern Il2CppType IEnumerable_t587_0_0_0;
static const Il2CppType* IntervalCollection_t1433_InterfacesTypeInfos[] = 
{
	&ICollection_t1268_0_0_0,
	&IEnumerable_t587_0_0_0,
};
static Il2CppInterfaceOffsetPair IntervalCollection_t1433_InterfacesOffsets[] = 
{
	{ &ICollection_t1268_0_0_0, 4},
	{ &IEnumerable_t587_0_0_0, 8},
};
extern TypeInfo DefaultMemberAttribute_t588_il2cpp_TypeInfo;
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"
// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttributeMethodDeclarations.h"
extern MethodInfo DefaultMemberAttribute__ctor_m2913_MethodInfo;
void IntervalCollection_t1433_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t588 * tmp;
		tmp = (DefaultMemberAttribute_t588 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t588_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m2913(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m2913_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache IntervalCollection_t1433__CustomAttributeCache = {
1,
NULL,
&IntervalCollection_t1433_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType IntervalCollection_t1433_1_0_0;
struct IntervalCollection_t1433;
extern CustomAttributesCache IntervalCollection_t1433__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata IntervalCollection_t1433_DefinitionMetadata = 
{
	NULL/* declaringType */
	, IntervalCollection_t1433_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, IntervalCollection_t1433_InterfacesTypeInfos/* implementedInterfaces */
	, IntervalCollection_t1433_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, IntervalCollection_t1433_VTable/* vtableMethods */
	, IntervalCollection_t1433_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo IntervalCollection_t1433_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "IntervalCollection"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, IntervalCollection_t1433_MethodInfos/* methods */
	, IntervalCollection_t1433_PropertyInfos/* properties */
	, IntervalCollection_t1433_FieldInfos/* fields */
	, NULL/* events */
	, &IntervalCollection_t1433_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &IntervalCollection_t1433__CustomAttributeCache/* custom_attributes_cache */
	, &IntervalCollection_t1433_0_0_0/* byval_arg */
	, &IntervalCollection_t1433_1_0_0/* this_arg */
	, &IntervalCollection_t1433_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (IntervalCollection_t1433)/* instance_size */
	, sizeof (IntervalCollection_t1433)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 11/* method_count */
	, 4/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 9/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_Parser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Parser
extern TypeInfo Parser_t1434_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Parser
#include "System_System_Text_RegularExpressions_Syntax_ParserMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::.ctor()
MethodInfo Parser__ctor_m7756_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Parser__ctor_m7756/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 753/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
static ParameterInfo Parser_t1434_Parser_ParseDecimal_m7757_ParameterInfos[] = 
{
	{"str", 0, 134218424, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218425, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDecimal(System.String,System.Int32&)
MethodInfo Parser_ParseDecimal_m7757_MethodInfo = 
{
	"ParseDecimal"/* name */
	, (methodPointerType)&Parser_ParseDecimal_m7757/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564/* invoker_method */
	, Parser_t1434_Parser_ParseDecimal_m7757_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 754/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
static ParameterInfo Parser_t1434_Parser_ParseOctal_m7758_ParameterInfos[] = 
{
	{"str", 0, 134218426, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218427, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseOctal(System.String,System.Int32&)
MethodInfo Parser_ParseOctal_m7758_MethodInfo = 
{
	"ParseOctal"/* name */
	, (methodPointerType)&Parser_ParseOctal_m7758/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564/* invoker_method */
	, Parser_t1434_Parser_ParseOctal_m7758_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 755/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseHex_m7759_ParameterInfos[] = 
{
	{"str", 0, 134218428, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218429, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"digits", 2, 134218430, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseHex(System.String,System.Int32&,System.Int32)
MethodInfo Parser_ParseHex_m7759_MethodInfo = 
{
	"ParseHex"/* name */
	, (methodPointerType)&Parser_ParseHex_m7759/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseHex_m7759_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 756/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseNumber_m7760_ParameterInfos[] = 
{
	{"str", 0, 134218431, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218432, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"b", 2, 134218433, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"min", 3, 134218434, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 4, 134218435, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564_Int32_t141_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.String,System.Int32&,System.Int32,System.Int32,System.Int32)
MethodInfo Parser_ParseNumber_m7760_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m7760/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t_Int32U26_t564_Int32_t141_Int32_t141_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseNumber_m7760_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 757/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
static ParameterInfo Parser_t1434_Parser_ParseName_m7761_ParameterInfos[] = 
{
	{"str", 0, 134218436, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ptr", 1, 134218437, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName(System.String,System.Int32&)
MethodInfo Parser_ParseName_m7761_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m7761/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32U26_t564/* invoker_method */
	, Parser_t1434_Parser_ParseName_m7761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 758/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseRegularExpression_m7762_ParameterInfos[] = 
{
	{"pattern", 0, 134218438, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"options", 1, 134218439, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType RegularExpression_t1435_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.RegularExpression System.Text.RegularExpressions.Syntax.Parser::ParseRegularExpression(System.String,System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseRegularExpression_m7762_MethodInfo = 
{
	"ParseRegularExpression"/* name */
	, (methodPointerType)&Parser_ParseRegularExpression_m7762/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &RegularExpression_t1435_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseRegularExpression_m7762_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 759/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Hashtable_t1291_0_0_0;
extern Il2CppType Hashtable_t1291_0_0_0;
static ParameterInfo Parser_t1434_Parser_GetMapping_m7763_ParameterInfos[] = 
{
	{"mapping", 0, 134218440, &EmptyCustomAttributesCache, &Hashtable_t1291_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::GetMapping(System.Collections.Hashtable)
MethodInfo Parser_GetMapping_m7763_MethodInfo = 
{
	"GetMapping"/* name */
	, (methodPointerType)&Parser_GetMapping_m7763/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t/* invoker_method */
	, Parser_t1434_Parser_GetMapping_m7763_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 760/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Group_t1436_0_0_0;
extern Il2CppType Group_t1436_0_0_0;
extern Il2CppType RegexOptions_t1406_0_0_0;
extern Il2CppType Assertion_t1437_0_0_0;
extern Il2CppType Assertion_t1437_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseGroup_m7764_ParameterInfos[] = 
{
	{"group", 0, 134218441, &EmptyCustomAttributesCache, &Group_t1436_0_0_0},
	{"options", 1, 134218442, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
	{"assertion", 2, 134218443, &EmptyCustomAttributesCache, &Assertion_t1437_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseGroup(System.Text.RegularExpressions.Syntax.Group,System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.Syntax.Assertion)
MethodInfo Parser_ParseGroup_m7764_MethodInfo = 
{
	"ParseGroup"/* name */
	, (methodPointerType)&Parser_ParseGroup_m7764/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141_Object_t/* invoker_method */
	, Parser_t1434_Parser_ParseGroup_m7764_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 761/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_1_0_0;
extern Il2CppType RegexOptions_t1406_1_0_0;
static ParameterInfo Parser_t1434_Parser_ParseGroupingConstruct_m7765_ParameterInfos[] = 
{
	{"options", 0, 134218444, &EmptyCustomAttributesCache, &RegexOptions_t1406_1_0_0},
};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t_RegexOptionsU26_t1531 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseGroupingConstruct(System.Text.RegularExpressions.RegexOptions&)
MethodInfo Parser_ParseGroupingConstruct_m7765_MethodInfo = 
{
	"ParseGroupingConstruct"/* name */
	, (methodPointerType)&Parser_ParseGroupingConstruct_m7765/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_RegexOptionsU26_t1531/* invoker_method */
	, Parser_t1434_Parser_ParseGroupingConstruct_m7765_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 762/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionAssertion_t1439_0_0_0;
extern Il2CppType ExpressionAssertion_t1439_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseAssertionType_m7766_ParameterInfos[] = 
{
	{"assertion", 0, 134218445, &EmptyCustomAttributesCache, &ExpressionAssertion_t1439_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseAssertionType(System.Text.RegularExpressions.Syntax.ExpressionAssertion)
MethodInfo Parser_ParseAssertionType_m7766_MethodInfo = 
{
	"ParseAssertionType"/* name */
	, (methodPointerType)&Parser_ParseAssertionType_m7766/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Parser_t1434_Parser_ParseAssertionType_m7766_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 763/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_1_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseOptions_m7767_ParameterInfos[] = 
{
	{"options", 0, 134218446, &EmptyCustomAttributesCache, &RegexOptions_t1406_1_0_0},
	{"negate", 1, 134218447, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_RegexOptionsU26_t1531_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ParseOptions(System.Text.RegularExpressions.RegexOptions&,System.Boolean)
MethodInfo Parser_ParseOptions_m7767_MethodInfo = 
{
	"ParseOptions"/* name */
	, (methodPointerType)&Parser_ParseOptions_m7767/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_RegexOptionsU26_t1531_SByte_t202/* invoker_method */
	, Parser_t1434_Parser_ParseOptions_m7767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 764/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseCharacterClass_m7768_ParameterInfos[] = 
{
	{"options", 0, 134218448, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseCharacterClass(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseCharacterClass_m7768_MethodInfo = 
{
	"ParseCharacterClass"/* name */
	, (methodPointerType)&Parser_ParseCharacterClass_m7768/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseCharacterClass_m7768_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 765/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseRepetitionBounds_m7769_ParameterInfos[] = 
{
	{"min", 0, 134218449, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218450, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"options", 2, 134218451, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32U26_t564_Int32U26_t564_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::ParseRepetitionBounds(System.Int32&,System.Int32&,System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseRepetitionBounds_m7769_MethodInfo = 
{
	"ParseRepetitionBounds"/* name */
	, (methodPointerType)&Parser_ParseRepetitionBounds_m7769/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32U26_t564_Int32U26_t564_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseRepetitionBounds_m7769_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 766/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern void* RuntimeInvoker_Category_t1413 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Category System.Text.RegularExpressions.Syntax.Parser::ParseUnicodeCategory()
MethodInfo Parser_ParseUnicodeCategory_m7770_MethodInfo = 
{
	"ParseUnicodeCategory"/* name */
	, (methodPointerType)&Parser_ParseUnicodeCategory_m7770/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Category_t1413_0_0_0/* return_type */
	, RuntimeInvoker_Category_t1413/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 767/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseSpecial_m7771_ParameterInfos[] = 
{
	{"options", 0, 134218452, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Parser::ParseSpecial(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_ParseSpecial_m7771_MethodInfo = 
{
	"ParseSpecial"/* name */
	, (methodPointerType)&Parser_ParseSpecial_m7771/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseSpecial_m7771_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 768/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseEscape()
MethodInfo Parser_ParseEscape_m7772_MethodInfo = 
{
	"ParseEscape"/* name */
	, (methodPointerType)&Parser_ParseEscape_m7772/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 769/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.Parser::ParseName()
MethodInfo Parser_ParseName_m7773_MethodInfo = 
{
	"ParseName"/* name */
	, (methodPointerType)&Parser_ParseName_m7773/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 770/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsNameChar_m7774_ParameterInfos[] = 
{
	{"c", 0, 134218453, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsNameChar(System.Char)
MethodInfo Parser_IsNameChar_m7774_MethodInfo = 
{
	"IsNameChar"/* name */
	, (methodPointerType)&Parser_IsNameChar_m7774/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int16_t563/* invoker_method */
	, Parser_t1434_Parser_IsNameChar_m7774_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 771/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseNumber_m7775_ParameterInfos[] = 
{
	{"b", 0, 134218454, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"min", 1, 134218455, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 2, 134218456, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int32_t141_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseNumber(System.Int32,System.Int32,System.Int32)
MethodInfo Parser_ParseNumber_m7775_MethodInfo = 
{
	"ParseNumber"/* name */
	, (methodPointerType)&Parser_ParseNumber_m7775/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int32_t141_Int32_t141_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseNumber_m7775_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 772/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Parser_t1434_Parser_ParseDigit_m7776_ParameterInfos[] = 
{
	{"c", 0, 134218457, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"b", 1, 134218458, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"n", 2, 134218459, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int16_t563_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ParseDigit(System.Char,System.Int32,System.Int32)
MethodInfo Parser_ParseDigit_m7776_MethodInfo = 
{
	"ParseDigit"/* name */
	, (methodPointerType)&Parser_ParseDigit_m7776/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int16_t563_Int32_t141_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_ParseDigit_m7776_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 773/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Parser_t1434_Parser_ConsumeWhitespace_m7777_ParameterInfos[] = 
{
	{"ignore", 0, 134218460, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ConsumeWhitespace(System.Boolean)
MethodInfo Parser_ConsumeWhitespace_m7777_MethodInfo = 
{
	"ConsumeWhitespace"/* name */
	, (methodPointerType)&Parser_ConsumeWhitespace_m7777/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202/* invoker_method */
	, Parser_t1434_Parser_ConsumeWhitespace_m7777_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 774/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::ResolveReferences()
MethodInfo Parser_ResolveReferences_m7778_MethodInfo = 
{
	"ResolveReferences"/* name */
	, (methodPointerType)&Parser_ResolveReferences_m7778/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 775/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ArrayList_t1304_0_0_0;
extern Il2CppType ArrayList_t1304_0_0_0;
static ParameterInfo Parser_t1434_Parser_HandleExplicitNumericGroups_m7779_ParameterInfos[] = 
{
	{"explicit_numeric_groups", 0, 134218461, &EmptyCustomAttributesCache, &ArrayList_t1304_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Parser::HandleExplicitNumericGroups(System.Collections.ArrayList)
MethodInfo Parser_HandleExplicitNumericGroups_m7779_MethodInfo = 
{
	"HandleExplicitNumericGroups"/* name */
	, (methodPointerType)&Parser_HandleExplicitNumericGroups_m7779/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Parser_t1434_Parser_HandleExplicitNumericGroups_m7779_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 776/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsIgnoreCase_m7780_ParameterInfos[] = 
{
	{"options", 0, 134218462, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnoreCase(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsIgnoreCase_m7780_MethodInfo = 
{
	"IsIgnoreCase"/* name */
	, (methodPointerType)&Parser_IsIgnoreCase_m7780/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_IsIgnoreCase_m7780_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 777/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsMultiline_m7781_ParameterInfos[] = 
{
	{"options", 0, 134218463, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsMultiline(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsMultiline_m7781_MethodInfo = 
{
	"IsMultiline"/* name */
	, (methodPointerType)&Parser_IsMultiline_m7781/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_IsMultiline_m7781_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 778/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsExplicitCapture_m7782_ParameterInfos[] = 
{
	{"options", 0, 134218464, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsExplicitCapture(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsExplicitCapture_m7782_MethodInfo = 
{
	"IsExplicitCapture"/* name */
	, (methodPointerType)&Parser_IsExplicitCapture_m7782/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_IsExplicitCapture_m7782_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 779/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsSingleline_m7783_ParameterInfos[] = 
{
	{"options", 0, 134218465, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsSingleline(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsSingleline_m7783_MethodInfo = 
{
	"IsSingleline"/* name */
	, (methodPointerType)&Parser_IsSingleline_m7783/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_IsSingleline_m7783_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 780/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsIgnorePatternWhitespace_m7784_ParameterInfos[] = 
{
	{"options", 0, 134218466, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsIgnorePatternWhitespace(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsIgnorePatternWhitespace_m7784_MethodInfo = 
{
	"IsIgnorePatternWhitespace"/* name */
	, (methodPointerType)&Parser_IsIgnorePatternWhitespace_m7784/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_IsIgnorePatternWhitespace_m7784_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 781/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType RegexOptions_t1406_0_0_0;
static ParameterInfo Parser_t1434_Parser_IsECMAScript_m7785_ParameterInfos[] = 
{
	{"options", 0, 134218467, &EmptyCustomAttributesCache, &RegexOptions_t1406_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Parser::IsECMAScript(System.Text.RegularExpressions.RegexOptions)
MethodInfo Parser_IsECMAScript_m7785_MethodInfo = 
{
	"IsECMAScript"/* name */
	, (methodPointerType)&Parser_IsECMAScript_m7785/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int32_t141/* invoker_method */
	, Parser_t1434_Parser_IsECMAScript_m7785_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 782/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Parser_t1434_Parser_NewParseException_m7786_ParameterInfos[] = 
{
	{"msg", 0, 134218468, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType ArgumentException_t521_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.ArgumentException System.Text.RegularExpressions.Syntax.Parser::NewParseException(System.String)
MethodInfo Parser_NewParseException_m7786_MethodInfo = 
{
	"NewParseException"/* name */
	, (methodPointerType)&Parser_NewParseException_m7786/* method */
	, &Parser_t1434_il2cpp_TypeInfo/* declaring_type */
	, &ArgumentException_t521_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Parser_t1434_Parser_NewParseException_m7786_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 783/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Parser_t1434_MethodInfos[] =
{
	&Parser__ctor_m7756_MethodInfo,
	&Parser_ParseDecimal_m7757_MethodInfo,
	&Parser_ParseOctal_m7758_MethodInfo,
	&Parser_ParseHex_m7759_MethodInfo,
	&Parser_ParseNumber_m7760_MethodInfo,
	&Parser_ParseName_m7761_MethodInfo,
	&Parser_ParseRegularExpression_m7762_MethodInfo,
	&Parser_GetMapping_m7763_MethodInfo,
	&Parser_ParseGroup_m7764_MethodInfo,
	&Parser_ParseGroupingConstruct_m7765_MethodInfo,
	&Parser_ParseAssertionType_m7766_MethodInfo,
	&Parser_ParseOptions_m7767_MethodInfo,
	&Parser_ParseCharacterClass_m7768_MethodInfo,
	&Parser_ParseRepetitionBounds_m7769_MethodInfo,
	&Parser_ParseUnicodeCategory_m7770_MethodInfo,
	&Parser_ParseSpecial_m7771_MethodInfo,
	&Parser_ParseEscape_m7772_MethodInfo,
	&Parser_ParseName_m7773_MethodInfo,
	&Parser_IsNameChar_m7774_MethodInfo,
	&Parser_ParseNumber_m7775_MethodInfo,
	&Parser_ParseDigit_m7776_MethodInfo,
	&Parser_ConsumeWhitespace_m7777_MethodInfo,
	&Parser_ResolveReferences_m7778_MethodInfo,
	&Parser_HandleExplicitNumericGroups_m7779_MethodInfo,
	&Parser_IsIgnoreCase_m7780_MethodInfo,
	&Parser_IsMultiline_m7781_MethodInfo,
	&Parser_IsExplicitCapture_m7782_MethodInfo,
	&Parser_IsSingleline_m7783_MethodInfo,
	&Parser_IsIgnorePatternWhitespace_m7784_MethodInfo,
	&Parser_IsECMAScript_m7785_MethodInfo,
	&Parser_NewParseException_m7786_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo Parser_t1434____pattern_0_FieldInfo = 
{
	"pattern"/* name */
	, &String_t_0_0_1/* type */
	, &Parser_t1434_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1434, ___pattern_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Parser_t1434____ptr_1_FieldInfo = 
{
	"ptr"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Parser_t1434_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1434, ___ptr_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayList_t1304_0_0_1;
FieldInfo Parser_t1434____caps_2_FieldInfo = 
{
	"caps"/* name */
	, &ArrayList_t1304_0_0_1/* type */
	, &Parser_t1434_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1434, ___caps_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1291_0_0_1;
FieldInfo Parser_t1434____refs_3_FieldInfo = 
{
	"refs"/* name */
	, &Hashtable_t1291_0_0_1/* type */
	, &Parser_t1434_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1434, ___refs_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Parser_t1434____num_groups_4_FieldInfo = 
{
	"num_groups"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Parser_t1434_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1434, ___num_groups_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Parser_t1434____gap_5_FieldInfo = 
{
	"gap"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Parser_t1434_il2cpp_TypeInfo/* parent */
	, offsetof(Parser_t1434, ___gap_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Parser_t1434_FieldInfos[] =
{
	&Parser_t1434____pattern_0_FieldInfo,
	&Parser_t1434____ptr_1_FieldInfo,
	&Parser_t1434____caps_2_FieldInfo,
	&Parser_t1434____refs_3_FieldInfo,
	&Parser_t1434____num_groups_4_FieldInfo,
	&Parser_t1434____gap_5_FieldInfo,
	NULL
};
static Il2CppMethodReference Parser_t1434_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool Parser_t1434_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Parser_t1434_0_0_0;
extern Il2CppType Parser_t1434_1_0_0;
struct Parser_t1434;
const Il2CppTypeDefinitionMetadata Parser_t1434_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Parser_t1434_VTable/* vtableMethods */
	, Parser_t1434_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Parser_t1434_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Parser"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Parser_t1434_MethodInfos/* methods */
	, NULL/* properties */
	, Parser_t1434_FieldInfos/* fields */
	, NULL/* events */
	, &Parser_t1434_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Parser_t1434_0_0_0/* byval_arg */
	, &Parser_t1434_1_0_0/* this_arg */
	, &Parser_t1434_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Parser_t1434)/* instance_size */
	, sizeof (Parser_t1434)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 31/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearch.h"
// Metadata Definition System.Text.RegularExpressions.QuickSearch
extern TypeInfo QuickSearch_t1426_il2cpp_TypeInfo;
// System.Text.RegularExpressions.QuickSearch
#include "System_System_Text_RegularExpressions_QuickSearchMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo QuickSearch_t1426_QuickSearch__ctor_m7787_ParameterInfos[] = 
{
	{"str", 0, 134218469, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218470, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 2, 134218471, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
MethodInfo QuickSearch__ctor_m7787_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&QuickSearch__ctor_m7787/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202_SByte_t202/* invoker_method */
	, QuickSearch_t1426_QuickSearch__ctor_m7787_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 784/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
MethodInfo QuickSearch__cctor_m7788_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&QuickSearch__cctor_m7788/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 785/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
MethodInfo QuickSearch_get_Length_m7789_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&QuickSearch_get_Length_m7789/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 786/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo QuickSearch_t1426_QuickSearch_Search_m7790_ParameterInfos[] = 
{
	{"text", 0, 134218472, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"start", 1, 134218473, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"end", 2, 134218474, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t_Int32_t141_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
MethodInfo QuickSearch_Search_m7790_MethodInfo = 
{
	"Search"/* name */
	, (methodPointerType)&QuickSearch_Search_m7790/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t_Int32_t141_Int32_t141/* invoker_method */
	, QuickSearch_t1426_QuickSearch_Search_m7790_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 787/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
MethodInfo QuickSearch_SetupShiftTable_m7791_MethodInfo = 
{
	"SetupShiftTable"/* name */
	, (methodPointerType)&QuickSearch_SetupShiftTable_m7791/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 788/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo QuickSearch_t1426_QuickSearch_GetShiftDistance_m7792_ParameterInfos[] = 
{
	{"c", 0, 134218475, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
MethodInfo QuickSearch_GetShiftDistance_m7792_MethodInfo = 
{
	"GetShiftDistance"/* name */
	, (methodPointerType)&QuickSearch_GetShiftDistance_m7792/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int16_t563/* invoker_method */
	, QuickSearch_t1426_QuickSearch_GetShiftDistance_m7792_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 789/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo QuickSearch_t1426_QuickSearch_GetChar_m7793_ParameterInfos[] = 
{
	{"c", 0, 134218476, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Char_t389_0_0_0;
extern void* RuntimeInvoker_Char_t389_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
MethodInfo QuickSearch_GetChar_m7793_MethodInfo = 
{
	"GetChar"/* name */
	, (methodPointerType)&QuickSearch_GetChar_m7793/* method */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* declaring_type */
	, &Char_t389_0_0_0/* return_type */
	, RuntimeInvoker_Char_t389_Int16_t563/* invoker_method */
	, QuickSearch_t1426_QuickSearch_GetChar_m7793_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 790/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* QuickSearch_t1426_MethodInfos[] =
{
	&QuickSearch__ctor_m7787_MethodInfo,
	&QuickSearch__cctor_m7788_MethodInfo,
	&QuickSearch_get_Length_m7789_MethodInfo,
	&QuickSearch_Search_m7790_MethodInfo,
	&QuickSearch_SetupShiftTable_m7791_MethodInfo,
	&QuickSearch_GetShiftDistance_m7792_MethodInfo,
	&QuickSearch_GetChar_m7793_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo QuickSearch_t1426____str_0_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426, ___str_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo QuickSearch_t1426____len_1_FieldInfo = 
{
	"len"/* name */
	, &Int32_t141_0_0_1/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426, ___len_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo QuickSearch_t1426____ignore_2_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426, ___ignore_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo QuickSearch_t1426____reverse_3_FieldInfo = 
{
	"reverse"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426, ___reverse_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t669_0_0_1;
FieldInfo QuickSearch_t1426____shift_4_FieldInfo = 
{
	"shift"/* name */
	, &ByteU5BU5D_t669_0_0_1/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426, ___shift_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1291_0_0_1;
FieldInfo QuickSearch_t1426____shiftExtended_5_FieldInfo = 
{
	"shiftExtended"/* name */
	, &Hashtable_t1291_0_0_1/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426, ___shiftExtended_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_49;
FieldInfo QuickSearch_t1426____THRESHOLD_6_FieldInfo = 
{
	"THRESHOLD"/* name */
	, &Int32_t141_0_0_49/* type */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, offsetof(QuickSearch_t1426_StaticFields, ___THRESHOLD_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* QuickSearch_t1426_FieldInfos[] =
{
	&QuickSearch_t1426____str_0_FieldInfo,
	&QuickSearch_t1426____len_1_FieldInfo,
	&QuickSearch_t1426____ignore_2_FieldInfo,
	&QuickSearch_t1426____reverse_3_FieldInfo,
	&QuickSearch_t1426____shift_4_FieldInfo,
	&QuickSearch_t1426____shiftExtended_5_FieldInfo,
	&QuickSearch_t1426____THRESHOLD_6_FieldInfo,
	NULL
};
extern MethodInfo QuickSearch_get_Length_m7789_MethodInfo;
static PropertyInfo QuickSearch_t1426____Length_PropertyInfo = 
{
	&QuickSearch_t1426_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &QuickSearch_get_Length_m7789_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* QuickSearch_t1426_PropertyInfos[] =
{
	&QuickSearch_t1426____Length_PropertyInfo,
	NULL
};
static Il2CppMethodReference QuickSearch_t1426_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool QuickSearch_t1426_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType QuickSearch_t1426_0_0_0;
extern Il2CppType QuickSearch_t1426_1_0_0;
struct QuickSearch_t1426;
const Il2CppTypeDefinitionMetadata QuickSearch_t1426_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, QuickSearch_t1426_VTable/* vtableMethods */
	, QuickSearch_t1426_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo QuickSearch_t1426_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "QuickSearch"/* name */
	, "System.Text.RegularExpressions"/* namespaze */
	, QuickSearch_t1426_MethodInfos/* methods */
	, QuickSearch_t1426_PropertyInfos/* properties */
	, QuickSearch_t1426_FieldInfos/* fields */
	, NULL/* events */
	, &QuickSearch_t1426_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &QuickSearch_t1426_0_0_0/* byval_arg */
	, &QuickSearch_t1426_1_0_0/* this_arg */
	, &QuickSearch_t1426_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (QuickSearch_t1426)/* instance_size */
	, sizeof (QuickSearch_t1426)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(QuickSearch_t1426_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 1/* property_count */
	, 7/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColle.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionCollection
extern TypeInfo ExpressionCollection_t1440_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
#include "System_System_Text_RegularExpressions_Syntax_ExpressionColleMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::.ctor()
MethodInfo ExpressionCollection__ctor_m7794_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionCollection__ctor_m7794/* method */
	, &ExpressionCollection_t1440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 791/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo ExpressionCollection_t1440_ExpressionCollection_Add_m7795_ParameterInfos[] = 
{
	{"e", 0, 134218477, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::Add(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionCollection_Add_m7795_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ExpressionCollection_Add_m7795/* method */
	, &ExpressionCollection_t1440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ExpressionCollection_t1440_ExpressionCollection_Add_m7795_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 792/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo ExpressionCollection_t1440_ExpressionCollection_get_Item_m7796_ParameterInfos[] = 
{
	{"i", 0, 134218478, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionCollection::get_Item(System.Int32)
MethodInfo ExpressionCollection_get_Item_m7796_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ExpressionCollection_get_Item_m7796/* method */
	, &ExpressionCollection_t1440_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t141/* invoker_method */
	, ExpressionCollection_t1440_ExpressionCollection_get_Item_m7796_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 793/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo ExpressionCollection_t1440_ExpressionCollection_set_Item_m7797_ParameterInfos[] = 
{
	{"i", 0, 134218479, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"value", 1, 134218480, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::set_Item(System.Int32,System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionCollection_set_Item_m7797_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ExpressionCollection_set_Item_m7797/* method */
	, &ExpressionCollection_t1440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Object_t/* invoker_method */
	, ExpressionCollection_t1440_ExpressionCollection_set_Item_m7797_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 794/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ExpressionCollection_t1440_ExpressionCollection_OnValidate_m7798_ParameterInfos[] = 
{
	{"o", 0, 134218481, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionCollection::OnValidate(System.Object)
MethodInfo ExpressionCollection_OnValidate_m7798_MethodInfo = 
{
	"OnValidate"/* name */
	, (methodPointerType)&ExpressionCollection_OnValidate_m7798/* method */
	, &ExpressionCollection_t1440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ExpressionCollection_t1440_ExpressionCollection_OnValidate_m7798_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 28/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 795/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExpressionCollection_t1440_MethodInfos[] =
{
	&ExpressionCollection__ctor_m7794_MethodInfo,
	&ExpressionCollection_Add_m7795_MethodInfo,
	&ExpressionCollection_get_Item_m7796_MethodInfo,
	&ExpressionCollection_set_Item_m7797_MethodInfo,
	&ExpressionCollection_OnValidate_m7798_MethodInfo,
	NULL
};
extern MethodInfo ExpressionCollection_get_Item_m7796_MethodInfo;
extern MethodInfo ExpressionCollection_set_Item_m7797_MethodInfo;
static PropertyInfo ExpressionCollection_t1440____Item_PropertyInfo = 
{
	&ExpressionCollection_t1440_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ExpressionCollection_get_Item_m7796_MethodInfo/* get */
	, &ExpressionCollection_set_Item_m7797_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExpressionCollection_t1440_PropertyInfos[] =
{
	&ExpressionCollection_t1440____Item_PropertyInfo,
	NULL
};
extern MethodInfo CollectionBase_GetEnumerator_m8146_MethodInfo;
extern MethodInfo CollectionBase_get_Count_m8106_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_get_IsSynchronized_m8342_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_get_SyncRoot_m8343_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_ICollection_CopyTo_m8344_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_IsFixedSize_m8345_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_IsReadOnly_m8346_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_get_Item_m8347_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_set_Item_m8348_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Add_m8349_MethodInfo;
extern MethodInfo CollectionBase_Clear_m8159_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Contains_m8350_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_IndexOf_m8351_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Insert_m8352_MethodInfo;
extern MethodInfo CollectionBase_System_Collections_IList_Remove_m8353_MethodInfo;
extern MethodInfo CollectionBase_RemoveAt_m8354_MethodInfo;
extern MethodInfo CollectionBase_OnClear_m8355_MethodInfo;
extern MethodInfo CollectionBase_OnClearComplete_m8356_MethodInfo;
extern MethodInfo CollectionBase_OnInsert_m8357_MethodInfo;
extern MethodInfo CollectionBase_OnInsertComplete_m8358_MethodInfo;
extern MethodInfo CollectionBase_OnRemove_m8359_MethodInfo;
extern MethodInfo CollectionBase_OnRemoveComplete_m8360_MethodInfo;
extern MethodInfo CollectionBase_OnSet_m8361_MethodInfo;
extern MethodInfo CollectionBase_OnSetComplete_m8362_MethodInfo;
extern MethodInfo ExpressionCollection_OnValidate_m7798_MethodInfo;
static Il2CppMethodReference ExpressionCollection_t1440_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&CollectionBase_GetEnumerator_m8146_MethodInfo,
	&CollectionBase_get_Count_m8106_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_IsSynchronized_m8342_MethodInfo,
	&CollectionBase_System_Collections_ICollection_get_SyncRoot_m8343_MethodInfo,
	&CollectionBase_System_Collections_ICollection_CopyTo_m8344_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsFixedSize_m8345_MethodInfo,
	&CollectionBase_System_Collections_IList_get_IsReadOnly_m8346_MethodInfo,
	&CollectionBase_System_Collections_IList_get_Item_m8347_MethodInfo,
	&CollectionBase_System_Collections_IList_set_Item_m8348_MethodInfo,
	&CollectionBase_System_Collections_IList_Add_m8349_MethodInfo,
	&CollectionBase_Clear_m8159_MethodInfo,
	&CollectionBase_System_Collections_IList_Contains_m8350_MethodInfo,
	&CollectionBase_System_Collections_IList_IndexOf_m8351_MethodInfo,
	&CollectionBase_System_Collections_IList_Insert_m8352_MethodInfo,
	&CollectionBase_System_Collections_IList_Remove_m8353_MethodInfo,
	&CollectionBase_RemoveAt_m8354_MethodInfo,
	&CollectionBase_OnClear_m8355_MethodInfo,
	&CollectionBase_OnClearComplete_m8356_MethodInfo,
	&CollectionBase_OnInsert_m8357_MethodInfo,
	&CollectionBase_OnInsertComplete_m8358_MethodInfo,
	&CollectionBase_OnRemove_m8359_MethodInfo,
	&CollectionBase_OnRemoveComplete_m8360_MethodInfo,
	&CollectionBase_OnSet_m8361_MethodInfo,
	&CollectionBase_OnSetComplete_m8362_MethodInfo,
	&ExpressionCollection_OnValidate_m7798_MethodInfo,
};
static bool ExpressionCollection_t1440_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair ExpressionCollection_t1440_InterfacesOffsets[] = 
{
	{ &IEnumerable_t587_0_0_0, 4},
	{ &ICollection_t1268_0_0_0, 5},
	{ &IList_t1430_0_0_0, 9},
};
void ExpressionCollection_t1440_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DefaultMemberAttribute_t588 * tmp;
		tmp = (DefaultMemberAttribute_t588 *)il2cpp_codegen_object_new (&DefaultMemberAttribute_t588_il2cpp_TypeInfo);
		DefaultMemberAttribute__ctor_m2913(tmp, il2cpp_codegen_string_new_wrapper("Item"), &DefaultMemberAttribute__ctor_m2913_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache ExpressionCollection_t1440__CustomAttributeCache = {
1,
NULL,
&ExpressionCollection_t1440_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ExpressionCollection_t1440_0_0_0;
extern Il2CppType ExpressionCollection_t1440_1_0_0;
extern Il2CppType CollectionBase_t1364_0_0_0;
struct ExpressionCollection_t1440;
extern CustomAttributesCache ExpressionCollection_t1440__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata ExpressionCollection_t1440_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, ExpressionCollection_t1440_InterfacesOffsets/* interfaceOffsets */
	, &CollectionBase_t1364_0_0_0/* parent */
	, ExpressionCollection_t1440_VTable/* vtableMethods */
	, ExpressionCollection_t1440_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ExpressionCollection_t1440_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionCollection"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionCollection_t1440_MethodInfos/* methods */
	, ExpressionCollection_t1440_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ExpressionCollection_t1440_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &ExpressionCollection_t1440__CustomAttributeCache/* custom_attributes_cache */
	, &ExpressionCollection_t1440_0_0_0/* byval_arg */
	, &ExpressionCollection_t1440_1_0_0/* this_arg */
	, &ExpressionCollection_t1440_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionCollection_t1440)/* instance_size */
	, sizeof (ExpressionCollection_t1440)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 29/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Expression
extern TypeInfo Expression_t1438_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_ExpressionMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::.ctor()
MethodInfo Expression__ctor_m7799_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Expression__ctor_m7799/* method */
	, &Expression_t1438_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 796/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Expression_t1438_Expression_Compile_m8218_ParameterInfos[] = 
{
	{"cmp", 0, 134218482, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218483, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Expression_Compile_m8218_MethodInfo = 
{
	"Compile"/* name */
	, NULL/* method */
	, &Expression_t1438_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Expression_t1438_Expression_Compile_m8218_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 797/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Expression_t1438_Expression_GetWidth_m8216_ParameterInfos[] = 
{
	{"min", 0, 134218484, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218485, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Expression::GetWidth(System.Int32&,System.Int32&)
MethodInfo Expression_GetWidth_m8216_MethodInfo = 
{
	"GetWidth"/* name */
	, NULL/* method */
	, &Expression_t1438_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Expression_t1438_Expression_GetWidth_m8216_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 798/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Expression::GetFixedWidth()
MethodInfo Expression_GetFixedWidth_m7800_MethodInfo = 
{
	"GetFixedWidth"/* name */
	, (methodPointerType)&Expression_GetFixedWidth_m7800/* method */
	, &Expression_t1438_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 799/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Expression_t1438_Expression_GetAnchorInfo_m7801_ParameterInfos[] = 
{
	{"reverse", 0, 134218486, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType AnchorInfo_t1442_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Expression::GetAnchorInfo(System.Boolean)
MethodInfo Expression_GetAnchorInfo_m7801_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Expression_GetAnchorInfo_m7801/* method */
	, &Expression_t1438_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1442_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t202/* invoker_method */
	, Expression_t1438_Expression_GetAnchorInfo_m7801_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 800/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Expression::IsComplex()
MethodInfo Expression_IsComplex_m8217_MethodInfo = 
{
	"IsComplex"/* name */
	, NULL/* method */
	, &Expression_t1438_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 801/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Expression_t1438_MethodInfos[] =
{
	&Expression__ctor_m7799_MethodInfo,
	&Expression_Compile_m8218_MethodInfo,
	&Expression_GetWidth_m8216_MethodInfo,
	&Expression_GetFixedWidth_m7800_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&Expression_IsComplex_m8217_MethodInfo,
	NULL
};
extern MethodInfo Expression_GetAnchorInfo_m7801_MethodInfo;
static Il2CppMethodReference Expression_t1438_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	NULL,
};
static bool Expression_t1438_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Expression_t1438_1_0_0;
struct Expression_t1438;
const Il2CppTypeDefinitionMetadata Expression_t1438_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Expression_t1438_VTable/* vtableMethods */
	, Expression_t1438_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Expression_t1438_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Expression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Expression_t1438_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Expression_t1438_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Expression_t1438_0_0_0/* byval_arg */
	, &Expression_t1438_1_0_0/* this_arg */
	, &Expression_t1438_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Expression_t1438)/* instance_size */
	, sizeof (Expression_t1438)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpres.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CompositeExpression
extern TypeInfo CompositeExpression_t1443_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CompositeExpression
#include "System_System_Text_RegularExpressions_Syntax_CompositeExpresMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
MethodInfo CompositeExpression__ctor_m7802_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CompositeExpression__ctor_m7802/* method */
	, &CompositeExpression_t1443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 802/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionCollection_t1440_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
MethodInfo CompositeExpression_get_Expressions_m7803_MethodInfo = 
{
	"get_Expressions"/* name */
	, (methodPointerType)&CompositeExpression_get_Expressions_m7803/* method */
	, &CompositeExpression_t1443_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1440_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2180/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 803/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo CompositeExpression_t1443_CompositeExpression_GetWidth_m7804_ParameterInfos[] = 
{
	{"min", 0, 134218487, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218488, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"count", 2, 134218489, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
MethodInfo CompositeExpression_GetWidth_m7804_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CompositeExpression_GetWidth_m7804/* method */
	, &CompositeExpression_t1443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564_Int32_t141/* invoker_method */
	, CompositeExpression_t1443_CompositeExpression_GetWidth_m7804_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 132/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 804/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
MethodInfo CompositeExpression_IsComplex_m7805_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CompositeExpression_IsComplex_m7805/* method */
	, &CompositeExpression_t1443_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 805/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CompositeExpression_t1443_MethodInfos[] =
{
	&CompositeExpression__ctor_m7802_MethodInfo,
	&CompositeExpression_get_Expressions_m7803_MethodInfo,
	&CompositeExpression_GetWidth_m7804_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
	NULL
};
extern Il2CppType ExpressionCollection_t1440_0_0_1;
FieldInfo CompositeExpression_t1443____expressions_0_FieldInfo = 
{
	"expressions"/* name */
	, &ExpressionCollection_t1440_0_0_1/* type */
	, &CompositeExpression_t1443_il2cpp_TypeInfo/* parent */
	, offsetof(CompositeExpression_t1443, ___expressions_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CompositeExpression_t1443_FieldInfos[] =
{
	&CompositeExpression_t1443____expressions_0_FieldInfo,
	NULL
};
extern MethodInfo CompositeExpression_get_Expressions_m7803_MethodInfo;
static PropertyInfo CompositeExpression_t1443____Expressions_PropertyInfo = 
{
	&CompositeExpression_t1443_il2cpp_TypeInfo/* parent */
	, "Expressions"/* name */
	, &CompositeExpression_get_Expressions_m7803_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CompositeExpression_t1443_PropertyInfos[] =
{
	&CompositeExpression_t1443____Expressions_PropertyInfo,
	NULL
};
extern MethodInfo CompositeExpression_IsComplex_m7805_MethodInfo;
static Il2CppMethodReference CompositeExpression_t1443_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	NULL,
	NULL,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
};
static bool CompositeExpression_t1443_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CompositeExpression_t1443_0_0_0;
extern Il2CppType CompositeExpression_t1443_1_0_0;
struct CompositeExpression_t1443;
const Il2CppTypeDefinitionMetadata CompositeExpression_t1443_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1438_0_0_0/* parent */
	, CompositeExpression_t1443_VTable/* vtableMethods */
	, CompositeExpression_t1443_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CompositeExpression_t1443_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CompositeExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CompositeExpression_t1443_MethodInfos/* methods */
	, CompositeExpression_t1443_PropertyInfos/* properties */
	, CompositeExpression_t1443_FieldInfos/* fields */
	, NULL/* events */
	, &CompositeExpression_t1443_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CompositeExpression_t1443_0_0_0/* byval_arg */
	, &CompositeExpression_t1443_1_0_0/* this_arg */
	, &CompositeExpression_t1443_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CompositeExpression_t1443)/* instance_size */
	, sizeof (CompositeExpression_t1443)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_Group.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Group
extern TypeInfo Group_t1436_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Group
#include "System_System_Text_RegularExpressions_Syntax_GroupMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
MethodInfo Group__ctor_m7806_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Group__ctor_m7806/* method */
	, &Group_t1436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 806/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo Group_t1436_Group_AppendExpression_m7807_ParameterInfos[] = 
{
	{"e", 0, 134218490, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Group_AppendExpression_m7807_MethodInfo = 
{
	"AppendExpression"/* name */
	, (methodPointerType)&Group_AppendExpression_m7807/* method */
	, &Group_t1436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Group_t1436_Group_AppendExpression_m7807_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 807/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Group_t1436_Group_Compile_m7808_ParameterInfos[] = 
{
	{"cmp", 0, 134218491, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218492, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Group_Compile_m7808_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Group_Compile_m7808/* method */
	, &Group_t1436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Group_t1436_Group_Compile_m7808_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 808/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Group_t1436_Group_GetWidth_m7809_ParameterInfos[] = 
{
	{"min", 0, 134218493, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218494, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
MethodInfo Group_GetWidth_m7809_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Group_GetWidth_m7809/* method */
	, &Group_t1436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Group_t1436_Group_GetWidth_m7809_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 809/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Group_t1436_Group_GetAnchorInfo_m7810_ParameterInfos[] = 
{
	{"reverse", 0, 134218495, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType AnchorInfo_t1442_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
MethodInfo Group_GetAnchorInfo_m7810_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Group_GetAnchorInfo_m7810/* method */
	, &Group_t1436_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1442_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t202/* invoker_method */
	, Group_t1436_Group_GetAnchorInfo_m7810_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 810/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Group_t1436_MethodInfos[] =
{
	&Group__ctor_m7806_MethodInfo,
	&Group_AppendExpression_m7807_MethodInfo,
	&Group_Compile_m7808_MethodInfo,
	&Group_GetWidth_m7809_MethodInfo,
	&Group_GetAnchorInfo_m7810_MethodInfo,
	NULL
};
extern MethodInfo Group_Compile_m7808_MethodInfo;
extern MethodInfo Group_GetWidth_m7809_MethodInfo;
extern MethodInfo Group_GetAnchorInfo_m7810_MethodInfo;
static Il2CppMethodReference Group_t1436_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Group_Compile_m7808_MethodInfo,
	&Group_GetWidth_m7809_MethodInfo,
	&Group_GetAnchorInfo_m7810_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
};
static bool Group_t1436_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Group_t1436_1_0_0;
struct Group_t1436;
const Il2CppTypeDefinitionMetadata Group_t1436_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1443_0_0_0/* parent */
	, Group_t1436_VTable/* vtableMethods */
	, Group_t1436_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Group_t1436_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Group"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Group_t1436_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Group_t1436_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Group_t1436_0_0_0/* byval_arg */
	, &Group_t1436_1_0_0/* this_arg */
	, &Group_t1436_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Group_t1436)/* instance_size */
	, sizeof (Group_t1436)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressi.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.RegularExpression
extern TypeInfo RegularExpression_t1435_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.RegularExpression
#include "System_System_Text_RegularExpressions_Syntax_RegularExpressiMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::.ctor()
MethodInfo RegularExpression__ctor_m7811_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RegularExpression__ctor_m7811/* method */
	, &RegularExpression_t1435_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 811/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo RegularExpression_t1435_RegularExpression_set_GroupCount_m7812_ParameterInfos[] = 
{
	{"value", 0, 134218496, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::set_GroupCount(System.Int32)
MethodInfo RegularExpression_set_GroupCount_m7812_MethodInfo = 
{
	"set_GroupCount"/* name */
	, (methodPointerType)&RegularExpression_set_GroupCount_m7812/* method */
	, &RegularExpression_t1435_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, RegularExpression_t1435_RegularExpression_set_GroupCount_m7812_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 812/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo RegularExpression_t1435_RegularExpression_Compile_m7813_ParameterInfos[] = 
{
	{"cmp", 0, 134218497, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218498, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.RegularExpression::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo RegularExpression_Compile_m7813_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&RegularExpression_Compile_m7813/* method */
	, &RegularExpression_t1435_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, RegularExpression_t1435_RegularExpression_Compile_m7813_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 813/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RegularExpression_t1435_MethodInfos[] =
{
	&RegularExpression__ctor_m7811_MethodInfo,
	&RegularExpression_set_GroupCount_m7812_MethodInfo,
	&RegularExpression_Compile_m7813_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo RegularExpression_t1435____group_count_1_FieldInfo = 
{
	"group_count"/* name */
	, &Int32_t141_0_0_1/* type */
	, &RegularExpression_t1435_il2cpp_TypeInfo/* parent */
	, offsetof(RegularExpression_t1435, ___group_count_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* RegularExpression_t1435_FieldInfos[] =
{
	&RegularExpression_t1435____group_count_1_FieldInfo,
	NULL
};
extern MethodInfo RegularExpression_set_GroupCount_m7812_MethodInfo;
static PropertyInfo RegularExpression_t1435____GroupCount_PropertyInfo = 
{
	&RegularExpression_t1435_il2cpp_TypeInfo/* parent */
	, "GroupCount"/* name */
	, NULL/* get */
	, &RegularExpression_set_GroupCount_m7812_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* RegularExpression_t1435_PropertyInfos[] =
{
	&RegularExpression_t1435____GroupCount_PropertyInfo,
	NULL
};
extern MethodInfo RegularExpression_Compile_m7813_MethodInfo;
static Il2CppMethodReference RegularExpression_t1435_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&RegularExpression_Compile_m7813_MethodInfo,
	&Group_GetWidth_m7809_MethodInfo,
	&Group_GetAnchorInfo_m7810_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
};
static bool RegularExpression_t1435_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RegularExpression_t1435_0_0_0;
extern Il2CppType RegularExpression_t1435_1_0_0;
struct RegularExpression_t1435;
const Il2CppTypeDefinitionMetadata RegularExpression_t1435_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1436_0_0_0/* parent */
	, RegularExpression_t1435_VTable/* vtableMethods */
	, RegularExpression_t1435_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RegularExpression_t1435_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RegularExpression"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, RegularExpression_t1435_MethodInfos/* methods */
	, RegularExpression_t1435_PropertyInfos/* properties */
	, RegularExpression_t1435_FieldInfos/* fields */
	, NULL/* events */
	, &RegularExpression_t1435_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RegularExpression_t1435_0_0_0/* byval_arg */
	, &RegularExpression_t1435_1_0_0/* this_arg */
	, &RegularExpression_t1435_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RegularExpression_t1435)/* instance_size */
	, sizeof (RegularExpression_t1435)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CapturingGroup
extern TypeInfo CapturingGroup_t1444_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CapturingGroup
#include "System_System_Text_RegularExpressions_Syntax_CapturingGroupMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::.ctor()
MethodInfo CapturingGroup__ctor_m7814_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CapturingGroup__ctor_m7814/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 814/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::get_Index()
MethodInfo CapturingGroup_get_Index_m7815_MethodInfo = 
{
	"get_Index"/* name */
	, (methodPointerType)&CapturingGroup_get_Index_m7815/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 815/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo CapturingGroup_t1444_CapturingGroup_set_Index_m7816_ParameterInfos[] = 
{
	{"value", 0, 134218499, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Index(System.Int32)
MethodInfo CapturingGroup_set_Index_m7816_MethodInfo = 
{
	"set_Index"/* name */
	, (methodPointerType)&CapturingGroup_set_Index_m7816/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, CapturingGroup_t1444_CapturingGroup_set_Index_m7816_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 816/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::get_Name()
MethodInfo CapturingGroup_get_Name_m7817_MethodInfo = 
{
	"get_Name"/* name */
	, (methodPointerType)&CapturingGroup_get_Name_m7817/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 817/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo CapturingGroup_t1444_CapturingGroup_set_Name_m7818_ParameterInfos[] = 
{
	{"value", 0, 134218500, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::set_Name(System.String)
MethodInfo CapturingGroup_set_Name_m7818_MethodInfo = 
{
	"set_Name"/* name */
	, (methodPointerType)&CapturingGroup_set_Name_m7818/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, CapturingGroup_t1444_CapturingGroup_set_Name_m7818_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 818/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::get_IsNamed()
MethodInfo CapturingGroup_get_IsNamed_m7819_MethodInfo = 
{
	"get_IsNamed"/* name */
	, (methodPointerType)&CapturingGroup_get_IsNamed_m7819/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 819/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo CapturingGroup_t1444_CapturingGroup_Compile_m7820_ParameterInfos[] = 
{
	{"cmp", 0, 134218501, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218502, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CapturingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CapturingGroup_Compile_m7820_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CapturingGroup_Compile_m7820/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, CapturingGroup_t1444_CapturingGroup_Compile_m7820_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 820/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CapturingGroup::IsComplex()
MethodInfo CapturingGroup_IsComplex_m7821_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CapturingGroup_IsComplex_m7821/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 821/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CapturingGroup_t1444_CapturingGroup_CompareTo_m7822_ParameterInfos[] = 
{
	{"other", 0, 134218503, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::CompareTo(System.Object)
MethodInfo CapturingGroup_CompareTo_m7822_MethodInfo = 
{
	"CompareTo"/* name */
	, (methodPointerType)&CapturingGroup_CompareTo_m7822/* method */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t/* invoker_method */
	, CapturingGroup_t1444_CapturingGroup_CompareTo_m7822_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 822/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CapturingGroup_t1444_MethodInfos[] =
{
	&CapturingGroup__ctor_m7814_MethodInfo,
	&CapturingGroup_get_Index_m7815_MethodInfo,
	&CapturingGroup_set_Index_m7816_MethodInfo,
	&CapturingGroup_get_Name_m7817_MethodInfo,
	&CapturingGroup_set_Name_m7818_MethodInfo,
	&CapturingGroup_get_IsNamed_m7819_MethodInfo,
	&CapturingGroup_Compile_m7820_MethodInfo,
	&CapturingGroup_IsComplex_m7821_MethodInfo,
	&CapturingGroup_CompareTo_m7822_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo CapturingGroup_t1444____gid_1_FieldInfo = 
{
	"gid"/* name */
	, &Int32_t141_0_0_1/* type */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* parent */
	, offsetof(CapturingGroup_t1444, ___gid_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo CapturingGroup_t1444____name_2_FieldInfo = 
{
	"name"/* name */
	, &String_t_0_0_1/* type */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* parent */
	, offsetof(CapturingGroup_t1444, ___name_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CapturingGroup_t1444_FieldInfos[] =
{
	&CapturingGroup_t1444____gid_1_FieldInfo,
	&CapturingGroup_t1444____name_2_FieldInfo,
	NULL
};
extern MethodInfo CapturingGroup_get_Index_m7815_MethodInfo;
extern MethodInfo CapturingGroup_set_Index_m7816_MethodInfo;
static PropertyInfo CapturingGroup_t1444____Index_PropertyInfo = 
{
	&CapturingGroup_t1444_il2cpp_TypeInfo/* parent */
	, "Index"/* name */
	, &CapturingGroup_get_Index_m7815_MethodInfo/* get */
	, &CapturingGroup_set_Index_m7816_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CapturingGroup_get_Name_m7817_MethodInfo;
extern MethodInfo CapturingGroup_set_Name_m7818_MethodInfo;
static PropertyInfo CapturingGroup_t1444____Name_PropertyInfo = 
{
	&CapturingGroup_t1444_il2cpp_TypeInfo/* parent */
	, "Name"/* name */
	, &CapturingGroup_get_Name_m7817_MethodInfo/* get */
	, &CapturingGroup_set_Name_m7818_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CapturingGroup_get_IsNamed_m7819_MethodInfo;
static PropertyInfo CapturingGroup_t1444____IsNamed_PropertyInfo = 
{
	&CapturingGroup_t1444_il2cpp_TypeInfo/* parent */
	, "IsNamed"/* name */
	, &CapturingGroup_get_IsNamed_m7819_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CapturingGroup_t1444_PropertyInfos[] =
{
	&CapturingGroup_t1444____Index_PropertyInfo,
	&CapturingGroup_t1444____Name_PropertyInfo,
	&CapturingGroup_t1444____IsNamed_PropertyInfo,
	NULL
};
extern MethodInfo CapturingGroup_Compile_m7820_MethodInfo;
extern MethodInfo CapturingGroup_IsComplex_m7821_MethodInfo;
extern MethodInfo CapturingGroup_CompareTo_m7822_MethodInfo;
static Il2CppMethodReference CapturingGroup_t1444_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&CapturingGroup_Compile_m7820_MethodInfo,
	&Group_GetWidth_m7809_MethodInfo,
	&Group_GetAnchorInfo_m7810_MethodInfo,
	&CapturingGroup_IsComplex_m7821_MethodInfo,
	&CapturingGroup_CompareTo_m7822_MethodInfo,
};
static bool CapturingGroup_t1444_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* CapturingGroup_t1444_InterfacesTypeInfos[] = 
{
	&IComparable_t206_0_0_0,
};
static Il2CppInterfaceOffsetPair CapturingGroup_t1444_InterfacesOffsets[] = 
{
	{ &IComparable_t206_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CapturingGroup_t1444_0_0_0;
extern Il2CppType CapturingGroup_t1444_1_0_0;
struct CapturingGroup_t1444;
const Il2CppTypeDefinitionMetadata CapturingGroup_t1444_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, CapturingGroup_t1444_InterfacesTypeInfos/* implementedInterfaces */
	, CapturingGroup_t1444_InterfacesOffsets/* interfaceOffsets */
	, &Group_t1436_0_0_0/* parent */
	, CapturingGroup_t1444_VTable/* vtableMethods */
	, CapturingGroup_t1444_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CapturingGroup_t1444_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CapturingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CapturingGroup_t1444_MethodInfos/* methods */
	, CapturingGroup_t1444_PropertyInfos/* properties */
	, CapturingGroup_t1444_FieldInfos/* fields */
	, NULL/* events */
	, &CapturingGroup_t1444_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CapturingGroup_t1444_0_0_0/* byval_arg */
	, &CapturingGroup_t1444_1_0_0/* this_arg */
	, &CapturingGroup_t1444_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CapturingGroup_t1444)/* instance_size */
	, sizeof (CapturingGroup_t1444)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 9/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroup.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BalancingGroup
extern TypeInfo BalancingGroup_t1445_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BalancingGroup
#include "System_System_Text_RegularExpressions_Syntax_BalancingGroupMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
MethodInfo BalancingGroup__ctor_m7823_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BalancingGroup__ctor_m7823/* method */
	, &BalancingGroup_t1445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 823/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1444_0_0_0;
static ParameterInfo BalancingGroup_t1445_BalancingGroup_set_Balance_m7824_ParameterInfos[] = 
{
	{"value", 0, 134218504, &EmptyCustomAttributesCache, &CapturingGroup_t1444_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo BalancingGroup_set_Balance_m7824_MethodInfo = 
{
	"set_Balance"/* name */
	, (methodPointerType)&BalancingGroup_set_Balance_m7824/* method */
	, &BalancingGroup_t1445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, BalancingGroup_t1445_BalancingGroup_set_Balance_m7824_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 824/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo BalancingGroup_t1445_BalancingGroup_Compile_m7825_ParameterInfos[] = 
{
	{"cmp", 0, 134218505, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218506, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo BalancingGroup_Compile_m7825_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BalancingGroup_Compile_m7825/* method */
	, &BalancingGroup_t1445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, BalancingGroup_t1445_BalancingGroup_Compile_m7825_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 825/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BalancingGroup_t1445_MethodInfos[] =
{
	&BalancingGroup__ctor_m7823_MethodInfo,
	&BalancingGroup_set_Balance_m7824_MethodInfo,
	&BalancingGroup_Compile_m7825_MethodInfo,
	NULL
};
extern Il2CppType CapturingGroup_t1444_0_0_1;
FieldInfo BalancingGroup_t1445____balance_3_FieldInfo = 
{
	"balance"/* name */
	, &CapturingGroup_t1444_0_0_1/* type */
	, &BalancingGroup_t1445_il2cpp_TypeInfo/* parent */
	, offsetof(BalancingGroup_t1445, ___balance_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BalancingGroup_t1445_FieldInfos[] =
{
	&BalancingGroup_t1445____balance_3_FieldInfo,
	NULL
};
extern MethodInfo BalancingGroup_set_Balance_m7824_MethodInfo;
static PropertyInfo BalancingGroup_t1445____Balance_PropertyInfo = 
{
	&BalancingGroup_t1445_il2cpp_TypeInfo/* parent */
	, "Balance"/* name */
	, NULL/* get */
	, &BalancingGroup_set_Balance_m7824_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* BalancingGroup_t1445_PropertyInfos[] =
{
	&BalancingGroup_t1445____Balance_PropertyInfo,
	NULL
};
extern MethodInfo BalancingGroup_Compile_m7825_MethodInfo;
static Il2CppMethodReference BalancingGroup_t1445_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&BalancingGroup_Compile_m7825_MethodInfo,
	&Group_GetWidth_m7809_MethodInfo,
	&Group_GetAnchorInfo_m7810_MethodInfo,
	&CapturingGroup_IsComplex_m7821_MethodInfo,
	&CapturingGroup_CompareTo_m7822_MethodInfo,
};
static bool BalancingGroup_t1445_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair BalancingGroup_t1445_InterfacesOffsets[] = 
{
	{ &IComparable_t206_0_0_0, 8},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType BalancingGroup_t1445_0_0_0;
extern Il2CppType BalancingGroup_t1445_1_0_0;
struct BalancingGroup_t1445;
const Il2CppTypeDefinitionMetadata BalancingGroup_t1445_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, BalancingGroup_t1445_InterfacesOffsets/* interfaceOffsets */
	, &CapturingGroup_t1444_0_0_0/* parent */
	, BalancingGroup_t1445_VTable/* vtableMethods */
	, BalancingGroup_t1445_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo BalancingGroup_t1445_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BalancingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BalancingGroup_t1445_MethodInfos/* methods */
	, BalancingGroup_t1445_PropertyInfos/* properties */
	, BalancingGroup_t1445_FieldInfos/* fields */
	, NULL/* events */
	, &BalancingGroup_t1445_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BalancingGroup_t1445_0_0_0/* byval_arg */
	, &BalancingGroup_t1445_1_0_0/* this_arg */
	, &BalancingGroup_t1445_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BalancingGroup_t1445)/* instance_size */
	, sizeof (BalancingGroup_t1445)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktracking.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
extern TypeInfo NonBacktrackingGroup_t1446_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
#include "System_System_Text_RegularExpressions_Syntax_NonBacktrackingMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::.ctor()
MethodInfo NonBacktrackingGroup__ctor_m7826_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&NonBacktrackingGroup__ctor_m7826/* method */
	, &NonBacktrackingGroup_t1446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 826/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo NonBacktrackingGroup_t1446_NonBacktrackingGroup_Compile_m7827_ParameterInfos[] = 
{
	{"cmp", 0, 134218507, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218508, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo NonBacktrackingGroup_Compile_m7827_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&NonBacktrackingGroup_Compile_m7827/* method */
	, &NonBacktrackingGroup_t1446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, NonBacktrackingGroup_t1446_NonBacktrackingGroup_Compile_m7827_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 827/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.NonBacktrackingGroup::IsComplex()
MethodInfo NonBacktrackingGroup_IsComplex_m7828_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&NonBacktrackingGroup_IsComplex_m7828/* method */
	, &NonBacktrackingGroup_t1446_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 828/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* NonBacktrackingGroup_t1446_MethodInfos[] =
{
	&NonBacktrackingGroup__ctor_m7826_MethodInfo,
	&NonBacktrackingGroup_Compile_m7827_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m7828_MethodInfo,
	NULL
};
extern MethodInfo NonBacktrackingGroup_Compile_m7827_MethodInfo;
extern MethodInfo NonBacktrackingGroup_IsComplex_m7828_MethodInfo;
static Il2CppMethodReference NonBacktrackingGroup_t1446_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&NonBacktrackingGroup_Compile_m7827_MethodInfo,
	&Group_GetWidth_m7809_MethodInfo,
	&Group_GetAnchorInfo_m7810_MethodInfo,
	&NonBacktrackingGroup_IsComplex_m7828_MethodInfo,
};
static bool NonBacktrackingGroup_t1446_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType NonBacktrackingGroup_t1446_0_0_0;
extern Il2CppType NonBacktrackingGroup_t1446_1_0_0;
struct NonBacktrackingGroup_t1446;
const Il2CppTypeDefinitionMetadata NonBacktrackingGroup_t1446_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Group_t1436_0_0_0/* parent */
	, NonBacktrackingGroup_t1446_VTable/* vtableMethods */
	, NonBacktrackingGroup_t1446_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo NonBacktrackingGroup_t1446_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "NonBacktrackingGroup"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, NonBacktrackingGroup_t1446_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &NonBacktrackingGroup_t1446_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &NonBacktrackingGroup_t1446_0_0_0/* byval_arg */
	, &NonBacktrackingGroup_t1446_1_0_0/* this_arg */
	, &NonBacktrackingGroup_t1446_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (NonBacktrackingGroup_t1446)/* instance_size */
	, sizeof (NonBacktrackingGroup_t1446)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_Repetition.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Repetition
extern TypeInfo Repetition_t1447_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Repetition
#include "System_System_Text_RegularExpressions_Syntax_RepetitionMethodDeclarations.h"
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Repetition_t1447_Repetition__ctor_m7829_ParameterInfos[] = 
{
	{"min", 0, 134218509, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"max", 1, 134218510, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"lazy", 2, 134218511, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
MethodInfo Repetition__ctor_m7829_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Repetition__ctor_m7829/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Int32_t141_SByte_t202/* invoker_method */
	, Repetition_t1447_Repetition__ctor_m7829_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 829/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
MethodInfo Repetition_get_Expression_m7830_MethodInfo = 
{
	"get_Expression"/* name */
	, (methodPointerType)&Repetition_get_Expression_m7830/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 830/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo Repetition_t1447_Repetition_set_Expression_m7831_ParameterInfos[] = 
{
	{"value", 0, 134218512, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Repetition_set_Expression_m7831_MethodInfo = 
{
	"set_Expression"/* name */
	, (methodPointerType)&Repetition_set_Expression_m7831/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Repetition_t1447_Repetition_set_Expression_m7831_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 831/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
MethodInfo Repetition_get_Minimum_m7832_MethodInfo = 
{
	"get_Minimum"/* name */
	, (methodPointerType)&Repetition_get_Minimum_m7832/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 832/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Repetition_t1447_Repetition_Compile_m7833_ParameterInfos[] = 
{
	{"cmp", 0, 134218513, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218514, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Repetition_Compile_m7833_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Repetition_Compile_m7833/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Repetition_t1447_Repetition_Compile_m7833_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 833/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Repetition_t1447_Repetition_GetWidth_m7834_ParameterInfos[] = 
{
	{"min", 0, 134218515, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218516, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
MethodInfo Repetition_GetWidth_m7834_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Repetition_GetWidth_m7834/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Repetition_t1447_Repetition_GetWidth_m7834_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Repetition_t1447_Repetition_GetAnchorInfo_m7835_ParameterInfos[] = 
{
	{"reverse", 0, 134218517, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType AnchorInfo_t1442_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
MethodInfo Repetition_GetAnchorInfo_m7835_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Repetition_GetAnchorInfo_m7835/* method */
	, &Repetition_t1447_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1442_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t202/* invoker_method */
	, Repetition_t1447_Repetition_GetAnchorInfo_m7835_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Repetition_t1447_MethodInfos[] =
{
	&Repetition__ctor_m7829_MethodInfo,
	&Repetition_get_Expression_m7830_MethodInfo,
	&Repetition_set_Expression_m7831_MethodInfo,
	&Repetition_get_Minimum_m7832_MethodInfo,
	&Repetition_Compile_m7833_MethodInfo,
	&Repetition_GetWidth_m7834_MethodInfo,
	&Repetition_GetAnchorInfo_m7835_MethodInfo,
	NULL
};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Repetition_t1447____min_1_FieldInfo = 
{
	"min"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Repetition_t1447_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1447, ___min_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Repetition_t1447____max_2_FieldInfo = 
{
	"max"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Repetition_t1447_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1447, ___max_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Repetition_t1447____lazy_3_FieldInfo = 
{
	"lazy"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Repetition_t1447_il2cpp_TypeInfo/* parent */
	, offsetof(Repetition_t1447, ___lazy_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Repetition_t1447_FieldInfos[] =
{
	&Repetition_t1447____min_1_FieldInfo,
	&Repetition_t1447____max_2_FieldInfo,
	&Repetition_t1447____lazy_3_FieldInfo,
	NULL
};
extern MethodInfo Repetition_get_Expression_m7830_MethodInfo;
extern MethodInfo Repetition_set_Expression_m7831_MethodInfo;
static PropertyInfo Repetition_t1447____Expression_PropertyInfo = 
{
	&Repetition_t1447_il2cpp_TypeInfo/* parent */
	, "Expression"/* name */
	, &Repetition_get_Expression_m7830_MethodInfo/* get */
	, &Repetition_set_Expression_m7831_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Repetition_get_Minimum_m7832_MethodInfo;
static PropertyInfo Repetition_t1447____Minimum_PropertyInfo = 
{
	&Repetition_t1447_il2cpp_TypeInfo/* parent */
	, "Minimum"/* name */
	, &Repetition_get_Minimum_m7832_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Repetition_t1447_PropertyInfos[] =
{
	&Repetition_t1447____Expression_PropertyInfo,
	&Repetition_t1447____Minimum_PropertyInfo,
	NULL
};
extern MethodInfo Repetition_Compile_m7833_MethodInfo;
extern MethodInfo Repetition_GetWidth_m7834_MethodInfo;
extern MethodInfo Repetition_GetAnchorInfo_m7835_MethodInfo;
static Il2CppMethodReference Repetition_t1447_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Repetition_Compile_m7833_MethodInfo,
	&Repetition_GetWidth_m7834_MethodInfo,
	&Repetition_GetAnchorInfo_m7835_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
};
static bool Repetition_t1447_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Repetition_t1447_0_0_0;
extern Il2CppType Repetition_t1447_1_0_0;
struct Repetition_t1447;
const Il2CppTypeDefinitionMetadata Repetition_t1447_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1443_0_0_0/* parent */
	, Repetition_t1447_VTable/* vtableMethods */
	, Repetition_t1447_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Repetition_t1447_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Repetition"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Repetition_t1447_MethodInfos/* methods */
	, Repetition_t1447_PropertyInfos/* properties */
	, Repetition_t1447_FieldInfos/* fields */
	, NULL/* events */
	, &Repetition_t1447_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Repetition_t1447_0_0_0/* byval_arg */
	, &Repetition_t1447_1_0_0/* this_arg */
	, &Repetition_t1447_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Repetition_t1447)/* instance_size */
	, sizeof (Repetition_t1447)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Assertion
extern TypeInfo Assertion_t1437_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_AssertionMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::.ctor()
MethodInfo Assertion__ctor_m7836_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Assertion__ctor_m7836/* method */
	, &Assertion_t1437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_TrueExpression()
MethodInfo Assertion_get_TrueExpression_m7837_MethodInfo = 
{
	"get_TrueExpression"/* name */
	, (methodPointerType)&Assertion_get_TrueExpression_m7837/* method */
	, &Assertion_t1437_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo Assertion_t1437_Assertion_set_TrueExpression_m7838_ParameterInfos[] = 
{
	{"value", 0, 134218518, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_TrueExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Assertion_set_TrueExpression_m7838_MethodInfo = 
{
	"set_TrueExpression"/* name */
	, (methodPointerType)&Assertion_set_TrueExpression_m7838/* method */
	, &Assertion_t1437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Assertion_t1437_Assertion_set_TrueExpression_m7838_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Assertion::get_FalseExpression()
MethodInfo Assertion_get_FalseExpression_m7839_MethodInfo = 
{
	"get_FalseExpression"/* name */
	, (methodPointerType)&Assertion_get_FalseExpression_m7839/* method */
	, &Assertion_t1437_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo Assertion_t1437_Assertion_set_FalseExpression_m7840_ParameterInfos[] = 
{
	{"value", 0, 134218519, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::set_FalseExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Assertion_set_FalseExpression_m7840_MethodInfo = 
{
	"set_FalseExpression"/* name */
	, (methodPointerType)&Assertion_set_FalseExpression_m7840/* method */
	, &Assertion_t1437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Assertion_t1437_Assertion_set_FalseExpression_m7840_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Assertion_t1437_Assertion_GetWidth_m7841_ParameterInfos[] = 
{
	{"min", 0, 134218520, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218521, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Assertion::GetWidth(System.Int32&,System.Int32&)
MethodInfo Assertion_GetWidth_m7841_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Assertion_GetWidth_m7841/* method */
	, &Assertion_t1437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Assertion_t1437_Assertion_GetWidth_m7841_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Assertion_t1437_MethodInfos[] =
{
	&Assertion__ctor_m7836_MethodInfo,
	&Assertion_get_TrueExpression_m7837_MethodInfo,
	&Assertion_set_TrueExpression_m7838_MethodInfo,
	&Assertion_get_FalseExpression_m7839_MethodInfo,
	&Assertion_set_FalseExpression_m7840_MethodInfo,
	&Assertion_GetWidth_m7841_MethodInfo,
	NULL
};
extern MethodInfo Assertion_get_TrueExpression_m7837_MethodInfo;
extern MethodInfo Assertion_set_TrueExpression_m7838_MethodInfo;
static PropertyInfo Assertion_t1437____TrueExpression_PropertyInfo = 
{
	&Assertion_t1437_il2cpp_TypeInfo/* parent */
	, "TrueExpression"/* name */
	, &Assertion_get_TrueExpression_m7837_MethodInfo/* get */
	, &Assertion_set_TrueExpression_m7838_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Assertion_get_FalseExpression_m7839_MethodInfo;
extern MethodInfo Assertion_set_FalseExpression_m7840_MethodInfo;
static PropertyInfo Assertion_t1437____FalseExpression_PropertyInfo = 
{
	&Assertion_t1437_il2cpp_TypeInfo/* parent */
	, "FalseExpression"/* name */
	, &Assertion_get_FalseExpression_m7839_MethodInfo/* get */
	, &Assertion_set_FalseExpression_m7840_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Assertion_t1437_PropertyInfos[] =
{
	&Assertion_t1437____TrueExpression_PropertyInfo,
	&Assertion_t1437____FalseExpression_PropertyInfo,
	NULL
};
extern MethodInfo Assertion_GetWidth_m7841_MethodInfo;
static Il2CppMethodReference Assertion_t1437_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	NULL,
	&Assertion_GetWidth_m7841_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
};
static bool Assertion_t1437_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Assertion_t1437_1_0_0;
struct Assertion_t1437;
const Il2CppTypeDefinitionMetadata Assertion_t1437_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1443_0_0_0/* parent */
	, Assertion_t1437_VTable/* vtableMethods */
	, Assertion_t1437_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Assertion_t1437_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Assertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Assertion_t1437_MethodInfos/* methods */
	, Assertion_t1437_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Assertion_t1437_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Assertion_t1437_0_0_0/* byval_arg */
	, &Assertion_t1437_1_0_0/* this_arg */
	, &Assertion_t1437_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Assertion_t1437)/* instance_size */
	, sizeof (Assertion_t1437)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048704/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertio.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CaptureAssertion
extern TypeInfo CaptureAssertion_t1449_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CaptureAssertion
#include "System_System_Text_RegularExpressions_Syntax_CaptureAssertioMethodDeclarations.h"
extern Il2CppType Literal_t1448_0_0_0;
extern Il2CppType Literal_t1448_0_0_0;
static ParameterInfo CaptureAssertion_t1449_CaptureAssertion__ctor_m7842_ParameterInfos[] = 
{
	{"l", 0, 134218522, &EmptyCustomAttributesCache, &Literal_t1448_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
MethodInfo CaptureAssertion__ctor_m7842_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CaptureAssertion__ctor_m7842/* method */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, CaptureAssertion_t1449_CaptureAssertion__ctor_m7842_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1444_0_0_0;
static ParameterInfo CaptureAssertion_t1449_CaptureAssertion_set_CapturingGroup_m7843_ParameterInfos[] = 
{
	{"value", 0, 134218523, &EmptyCustomAttributesCache, &CapturingGroup_t1444_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo CaptureAssertion_set_CapturingGroup_m7843_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&CaptureAssertion_set_CapturingGroup_m7843/* method */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, CaptureAssertion_t1449_CaptureAssertion_set_CapturingGroup_m7843_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo CaptureAssertion_t1449_CaptureAssertion_Compile_m7844_ParameterInfos[] = 
{
	{"cmp", 0, 134218524, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218525, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CaptureAssertion_Compile_m7844_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CaptureAssertion_Compile_m7844/* method */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, CaptureAssertion_t1449_CaptureAssertion_Compile_m7844_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
MethodInfo CaptureAssertion_IsComplex_m7845_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CaptureAssertion_IsComplex_m7845/* method */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionAssertion_t1439_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
MethodInfo CaptureAssertion_get_Alternate_m7846_MethodInfo = 
{
	"get_Alternate"/* name */
	, (methodPointerType)&CaptureAssertion_get_Alternate_m7846/* method */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionAssertion_t1439_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CaptureAssertion_t1449_MethodInfos[] =
{
	&CaptureAssertion__ctor_m7842_MethodInfo,
	&CaptureAssertion_set_CapturingGroup_m7843_MethodInfo,
	&CaptureAssertion_Compile_m7844_MethodInfo,
	&CaptureAssertion_IsComplex_m7845_MethodInfo,
	&CaptureAssertion_get_Alternate_m7846_MethodInfo,
	NULL
};
extern Il2CppType ExpressionAssertion_t1439_0_0_1;
FieldInfo CaptureAssertion_t1449____alternate_1_FieldInfo = 
{
	"alternate"/* name */
	, &ExpressionAssertion_t1439_0_0_1/* type */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1449, ___alternate_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CapturingGroup_t1444_0_0_1;
FieldInfo CaptureAssertion_t1449____group_2_FieldInfo = 
{
	"group"/* name */
	, &CapturingGroup_t1444_0_0_1/* type */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1449, ___group_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Literal_t1448_0_0_1;
FieldInfo CaptureAssertion_t1449____literal_3_FieldInfo = 
{
	"literal"/* name */
	, &Literal_t1448_0_0_1/* type */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* parent */
	, offsetof(CaptureAssertion_t1449, ___literal_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CaptureAssertion_t1449_FieldInfos[] =
{
	&CaptureAssertion_t1449____alternate_1_FieldInfo,
	&CaptureAssertion_t1449____group_2_FieldInfo,
	&CaptureAssertion_t1449____literal_3_FieldInfo,
	NULL
};
extern MethodInfo CaptureAssertion_set_CapturingGroup_m7843_MethodInfo;
static PropertyInfo CaptureAssertion_t1449____CapturingGroup_PropertyInfo = 
{
	&CaptureAssertion_t1449_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, NULL/* get */
	, &CaptureAssertion_set_CapturingGroup_m7843_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo CaptureAssertion_get_Alternate_m7846_MethodInfo;
static PropertyInfo CaptureAssertion_t1449____Alternate_PropertyInfo = 
{
	&CaptureAssertion_t1449_il2cpp_TypeInfo/* parent */
	, "Alternate"/* name */
	, &CaptureAssertion_get_Alternate_m7846_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* CaptureAssertion_t1449_PropertyInfos[] =
{
	&CaptureAssertion_t1449____CapturingGroup_PropertyInfo,
	&CaptureAssertion_t1449____Alternate_PropertyInfo,
	NULL
};
extern MethodInfo CaptureAssertion_Compile_m7844_MethodInfo;
extern MethodInfo CaptureAssertion_IsComplex_m7845_MethodInfo;
static Il2CppMethodReference CaptureAssertion_t1449_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&CaptureAssertion_Compile_m7844_MethodInfo,
	&Assertion_GetWidth_m7841_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&CaptureAssertion_IsComplex_m7845_MethodInfo,
};
static bool CaptureAssertion_t1449_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CaptureAssertion_t1449_0_0_0;
extern Il2CppType CaptureAssertion_t1449_1_0_0;
struct CaptureAssertion_t1449;
const Il2CppTypeDefinitionMetadata CaptureAssertion_t1449_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1437_0_0_0/* parent */
	, CaptureAssertion_t1449_VTable/* vtableMethods */
	, CaptureAssertion_t1449_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CaptureAssertion_t1449_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CaptureAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CaptureAssertion_t1449_MethodInfos/* methods */
	, CaptureAssertion_t1449_PropertyInfos/* properties */
	, CaptureAssertion_t1449_FieldInfos/* fields */
	, NULL/* events */
	, &CaptureAssertion_t1449_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CaptureAssertion_t1449_0_0_0/* byval_arg */
	, &CaptureAssertion_t1449_1_0_0/* this_arg */
	, &CaptureAssertion_t1449_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CaptureAssertion_t1449)/* instance_size */
	, sizeof (CaptureAssertion_t1449)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 2/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsser.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.ExpressionAssertion
extern TypeInfo ExpressionAssertion_t1439_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
#include "System_System_Text_RegularExpressions_Syntax_ExpressionAsserMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
MethodInfo ExpressionAssertion__ctor_m7847_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ExpressionAssertion__ctor_m7847/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ExpressionAssertion_t1439_ExpressionAssertion_set_Reverse_m7848_ParameterInfos[] = 
{
	{"value", 0, 134218526, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
MethodInfo ExpressionAssertion_set_Reverse_m7848_MethodInfo = 
{
	"set_Reverse"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Reverse_m7848/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202/* invoker_method */
	, ExpressionAssertion_t1439_ExpressionAssertion_set_Reverse_m7848_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ExpressionAssertion_t1439_ExpressionAssertion_set_Negate_m7849_ParameterInfos[] = 
{
	{"value", 0, 134218527, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
MethodInfo ExpressionAssertion_set_Negate_m7849_MethodInfo = 
{
	"set_Negate"/* name */
	, (methodPointerType)&ExpressionAssertion_set_Negate_m7849/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202/* invoker_method */
	, ExpressionAssertion_t1439_ExpressionAssertion_set_Negate_m7849_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
MethodInfo ExpressionAssertion_get_TestExpression_m7850_MethodInfo = 
{
	"get_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_get_TestExpression_m7850/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Expression_t1438_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo ExpressionAssertion_t1439_ExpressionAssertion_set_TestExpression_m7851_ParameterInfos[] = 
{
	{"value", 0, 134218528, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo ExpressionAssertion_set_TestExpression_m7851_MethodInfo = 
{
	"set_TestExpression"/* name */
	, (methodPointerType)&ExpressionAssertion_set_TestExpression_m7851/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, ExpressionAssertion_t1439_ExpressionAssertion_set_TestExpression_m7851_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo ExpressionAssertion_t1439_ExpressionAssertion_Compile_m7852_ParameterInfos[] = 
{
	{"cmp", 0, 134218529, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218530, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo ExpressionAssertion_Compile_m7852_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&ExpressionAssertion_Compile_m7852/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, ExpressionAssertion_t1439_ExpressionAssertion_Compile_m7852_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
MethodInfo ExpressionAssertion_IsComplex_m7853_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&ExpressionAssertion_IsComplex_m7853/* method */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* ExpressionAssertion_t1439_MethodInfos[] =
{
	&ExpressionAssertion__ctor_m7847_MethodInfo,
	&ExpressionAssertion_set_Reverse_m7848_MethodInfo,
	&ExpressionAssertion_set_Negate_m7849_MethodInfo,
	&ExpressionAssertion_get_TestExpression_m7850_MethodInfo,
	&ExpressionAssertion_set_TestExpression_m7851_MethodInfo,
	&ExpressionAssertion_Compile_m7852_MethodInfo,
	&ExpressionAssertion_IsComplex_m7853_MethodInfo,
	NULL
};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo ExpressionAssertion_t1439____reverse_1_FieldInfo = 
{
	"reverse"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* parent */
	, offsetof(ExpressionAssertion_t1439, ___reverse_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo ExpressionAssertion_t1439____negate_2_FieldInfo = 
{
	"negate"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* parent */
	, offsetof(ExpressionAssertion_t1439, ___negate_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ExpressionAssertion_t1439_FieldInfos[] =
{
	&ExpressionAssertion_t1439____reverse_1_FieldInfo,
	&ExpressionAssertion_t1439____negate_2_FieldInfo,
	NULL
};
extern MethodInfo ExpressionAssertion_set_Reverse_m7848_MethodInfo;
static PropertyInfo ExpressionAssertion_t1439____Reverse_PropertyInfo = 
{
	&ExpressionAssertion_t1439_il2cpp_TypeInfo/* parent */
	, "Reverse"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Reverse_m7848_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ExpressionAssertion_set_Negate_m7849_MethodInfo;
static PropertyInfo ExpressionAssertion_t1439____Negate_PropertyInfo = 
{
	&ExpressionAssertion_t1439_il2cpp_TypeInfo/* parent */
	, "Negate"/* name */
	, NULL/* get */
	, &ExpressionAssertion_set_Negate_m7849_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ExpressionAssertion_get_TestExpression_m7850_MethodInfo;
extern MethodInfo ExpressionAssertion_set_TestExpression_m7851_MethodInfo;
static PropertyInfo ExpressionAssertion_t1439____TestExpression_PropertyInfo = 
{
	&ExpressionAssertion_t1439_il2cpp_TypeInfo/* parent */
	, "TestExpression"/* name */
	, &ExpressionAssertion_get_TestExpression_m7850_MethodInfo/* get */
	, &ExpressionAssertion_set_TestExpression_m7851_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ExpressionAssertion_t1439_PropertyInfos[] =
{
	&ExpressionAssertion_t1439____Reverse_PropertyInfo,
	&ExpressionAssertion_t1439____Negate_PropertyInfo,
	&ExpressionAssertion_t1439____TestExpression_PropertyInfo,
	NULL
};
extern MethodInfo ExpressionAssertion_Compile_m7852_MethodInfo;
extern MethodInfo ExpressionAssertion_IsComplex_m7853_MethodInfo;
static Il2CppMethodReference ExpressionAssertion_t1439_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&ExpressionAssertion_Compile_m7852_MethodInfo,
	&Assertion_GetWidth_m7841_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&ExpressionAssertion_IsComplex_m7853_MethodInfo,
};
static bool ExpressionAssertion_t1439_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType ExpressionAssertion_t1439_1_0_0;
struct ExpressionAssertion_t1439;
const Il2CppTypeDefinitionMetadata ExpressionAssertion_t1439_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Assertion_t1437_0_0_0/* parent */
	, ExpressionAssertion_t1439_VTable/* vtableMethods */
	, ExpressionAssertion_t1439_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo ExpressionAssertion_t1439_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "ExpressionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, ExpressionAssertion_t1439_MethodInfos/* methods */
	, ExpressionAssertion_t1439_PropertyInfos/* properties */
	, ExpressionAssertion_t1439_FieldInfos/* fields */
	, NULL/* events */
	, &ExpressionAssertion_t1439_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ExpressionAssertion_t1439_0_0_0/* byval_arg */
	, &ExpressionAssertion_t1439_1_0_0/* this_arg */
	, &ExpressionAssertion_t1439_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ExpressionAssertion_t1439)/* instance_size */
	, sizeof (ExpressionAssertion_t1439)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 3/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_Alternation.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Alternation
extern TypeInfo Alternation_t1450_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Alternation
#include "System_System_Text_RegularExpressions_Syntax_AlternationMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
MethodInfo Alternation__ctor_m7854_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Alternation__ctor_m7854/* method */
	, &Alternation_t1450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ExpressionCollection_t1440_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
MethodInfo Alternation_get_Alternatives_m7855_MethodInfo = 
{
	"get_Alternatives"/* name */
	, (methodPointerType)&Alternation_get_Alternatives_m7855/* method */
	, &Alternation_t1450_il2cpp_TypeInfo/* declaring_type */
	, &ExpressionCollection_t1440_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
static ParameterInfo Alternation_t1450_Alternation_AddAlternative_m7856_ParameterInfos[] = 
{
	{"e", 0, 134218531, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
MethodInfo Alternation_AddAlternative_m7856_MethodInfo = 
{
	"AddAlternative"/* name */
	, (methodPointerType)&Alternation_AddAlternative_m7856/* method */
	, &Alternation_t1450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Alternation_t1450_Alternation_AddAlternative_m7856_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Alternation_t1450_Alternation_Compile_m7857_ParameterInfos[] = 
{
	{"cmp", 0, 134218532, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218533, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Alternation_Compile_m7857_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Alternation_Compile_m7857/* method */
	, &Alternation_t1450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Alternation_t1450_Alternation_Compile_m7857_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Alternation_t1450_Alternation_GetWidth_m7858_ParameterInfos[] = 
{
	{"min", 0, 134218534, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218535, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
MethodInfo Alternation_GetWidth_m7858_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Alternation_GetWidth_m7858/* method */
	, &Alternation_t1450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Alternation_t1450_Alternation_GetWidth_m7858_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Alternation_t1450_MethodInfos[] =
{
	&Alternation__ctor_m7854_MethodInfo,
	&Alternation_get_Alternatives_m7855_MethodInfo,
	&Alternation_AddAlternative_m7856_MethodInfo,
	&Alternation_Compile_m7857_MethodInfo,
	&Alternation_GetWidth_m7858_MethodInfo,
	NULL
};
extern MethodInfo Alternation_get_Alternatives_m7855_MethodInfo;
static PropertyInfo Alternation_t1450____Alternatives_PropertyInfo = 
{
	&Alternation_t1450_il2cpp_TypeInfo/* parent */
	, "Alternatives"/* name */
	, &Alternation_get_Alternatives_m7855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Alternation_t1450_PropertyInfos[] =
{
	&Alternation_t1450____Alternatives_PropertyInfo,
	NULL
};
extern MethodInfo Alternation_Compile_m7857_MethodInfo;
extern MethodInfo Alternation_GetWidth_m7858_MethodInfo;
static Il2CppMethodReference Alternation_t1450_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Alternation_Compile_m7857_MethodInfo,
	&Alternation_GetWidth_m7858_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&CompositeExpression_IsComplex_m7805_MethodInfo,
};
static bool Alternation_t1450_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Alternation_t1450_0_0_0;
extern Il2CppType Alternation_t1450_1_0_0;
struct Alternation_t1450;
const Il2CppTypeDefinitionMetadata Alternation_t1450_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &CompositeExpression_t1443_0_0_0/* parent */
	, Alternation_t1450_VTable/* vtableMethods */
	, Alternation_t1450_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Alternation_t1450_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Alternation"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Alternation_t1450_MethodInfos/* methods */
	, Alternation_t1450_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Alternation_t1450_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Alternation_t1450_0_0_0/* byval_arg */
	, &Alternation_t1450_1_0_0/* this_arg */
	, &Alternation_t1450_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Alternation_t1450)/* instance_size */
	, sizeof (Alternation_t1450)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_Literal.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Literal
extern TypeInfo Literal_t1448_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Literal
#include "System_System_Text_RegularExpressions_Syntax_LiteralMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Literal_t1448_Literal__ctor_m7859_ParameterInfos[] = 
{
	{"str", 0, 134218536, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 1, 134218537, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
MethodInfo Literal__ctor_m7859_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Literal__ctor_m7859/* method */
	, &Literal_t1448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Literal_t1448_Literal__ctor_m7859_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Literal_t1448_Literal_CompileLiteral_m7860_ParameterInfos[] = 
{
	{"str", 0, 134218538, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"cmp", 1, 134218539, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"ignore", 2, 134218540, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"reverse", 3, 134218541, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Object_t_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
MethodInfo Literal_CompileLiteral_m7860_MethodInfo = 
{
	"CompileLiteral"/* name */
	, (methodPointerType)&Literal_CompileLiteral_m7860/* method */
	, &Literal_t1448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Object_t_SByte_t202_SByte_t202/* invoker_method */
	, Literal_t1448_Literal_CompileLiteral_m7860_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Literal_t1448_Literal_Compile_m7861_ParameterInfos[] = 
{
	{"cmp", 0, 134218542, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218543, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Literal_Compile_m7861_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Literal_Compile_m7861/* method */
	, &Literal_t1448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Literal_t1448_Literal_Compile_m7861_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Literal_t1448_Literal_GetWidth_m7862_ParameterInfos[] = 
{
	{"min", 0, 134218544, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218545, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
MethodInfo Literal_GetWidth_m7862_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Literal_GetWidth_m7862/* method */
	, &Literal_t1448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Literal_t1448_Literal_GetWidth_m7862_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Literal_t1448_Literal_GetAnchorInfo_m7863_ParameterInfos[] = 
{
	{"reverse", 0, 134218546, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType AnchorInfo_t1442_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
MethodInfo Literal_GetAnchorInfo_m7863_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&Literal_GetAnchorInfo_m7863/* method */
	, &Literal_t1448_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1442_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t202/* invoker_method */
	, Literal_t1448_Literal_GetAnchorInfo_m7863_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
MethodInfo Literal_IsComplex_m7864_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Literal_IsComplex_m7864/* method */
	, &Literal_t1448_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Literal_t1448_MethodInfos[] =
{
	&Literal__ctor_m7859_MethodInfo,
	&Literal_CompileLiteral_m7860_MethodInfo,
	&Literal_Compile_m7861_MethodInfo,
	&Literal_GetWidth_m7862_MethodInfo,
	&Literal_GetAnchorInfo_m7863_MethodInfo,
	&Literal_IsComplex_m7864_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo Literal_t1448____str_0_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &Literal_t1448_il2cpp_TypeInfo/* parent */
	, offsetof(Literal_t1448, ___str_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Literal_t1448____ignore_1_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Literal_t1448_il2cpp_TypeInfo/* parent */
	, offsetof(Literal_t1448, ___ignore_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Literal_t1448_FieldInfos[] =
{
	&Literal_t1448____str_0_FieldInfo,
	&Literal_t1448____ignore_1_FieldInfo,
	NULL
};
extern MethodInfo Literal_Compile_m7861_MethodInfo;
extern MethodInfo Literal_GetWidth_m7862_MethodInfo;
extern MethodInfo Literal_GetAnchorInfo_m7863_MethodInfo;
extern MethodInfo Literal_IsComplex_m7864_MethodInfo;
static Il2CppMethodReference Literal_t1448_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Literal_Compile_m7861_MethodInfo,
	&Literal_GetWidth_m7862_MethodInfo,
	&Literal_GetAnchorInfo_m7863_MethodInfo,
	&Literal_IsComplex_m7864_MethodInfo,
};
static bool Literal_t1448_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Literal_t1448_1_0_0;
struct Literal_t1448;
const Il2CppTypeDefinitionMetadata Literal_t1448_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1438_0_0_0/* parent */
	, Literal_t1448_VTable/* vtableMethods */
	, Literal_t1448_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Literal_t1448_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Literal"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Literal_t1448_MethodInfos/* methods */
	, NULL/* properties */
	, Literal_t1448_FieldInfos/* fields */
	, NULL/* events */
	, &Literal_t1448_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Literal_t1448_0_0_0/* byval_arg */
	, &Literal_t1448_1_0_0/* this_arg */
	, &Literal_t1448_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Literal_t1448)/* instance_size */
	, sizeof (Literal_t1448)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 6/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAsserti.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.PositionAssertion
extern TypeInfo PositionAssertion_t1451_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.PositionAssertion
#include "System_System_Text_RegularExpressions_Syntax_PositionAssertiMethodDeclarations.h"
extern Il2CppType Position_t1409_0_0_0;
static ParameterInfo PositionAssertion_t1451_PositionAssertion__ctor_m7865_ParameterInfos[] = 
{
	{"pos", 0, 134218547, &EmptyCustomAttributesCache, &Position_t1409_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
MethodInfo PositionAssertion__ctor_m7865_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PositionAssertion__ctor_m7865/* method */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862/* invoker_method */
	, PositionAssertion_t1451_PositionAssertion__ctor_m7865_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PositionAssertion_t1451_PositionAssertion_Compile_m7866_ParameterInfos[] = 
{
	{"cmp", 0, 134218548, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218549, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo PositionAssertion_Compile_m7866_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&PositionAssertion_Compile_m7866/* method */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, PositionAssertion_t1451_PositionAssertion_Compile_m7866_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo PositionAssertion_t1451_PositionAssertion_GetWidth_m7867_ParameterInfos[] = 
{
	{"min", 0, 134218550, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218551, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
MethodInfo PositionAssertion_GetWidth_m7867_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&PositionAssertion_GetWidth_m7867/* method */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, PositionAssertion_t1451_PositionAssertion_GetWidth_m7867_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
MethodInfo PositionAssertion_IsComplex_m7868_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&PositionAssertion_IsComplex_m7868/* method */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo PositionAssertion_t1451_PositionAssertion_GetAnchorInfo_m7869_ParameterInfos[] = 
{
	{"revers", 0, 134218552, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType AnchorInfo_t1442_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
MethodInfo PositionAssertion_GetAnchorInfo_m7869_MethodInfo = 
{
	"GetAnchorInfo"/* name */
	, (methodPointerType)&PositionAssertion_GetAnchorInfo_m7869/* method */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* declaring_type */
	, &AnchorInfo_t1442_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t202/* invoker_method */
	, PositionAssertion_t1451_PositionAssertion_GetAnchorInfo_m7869_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PositionAssertion_t1451_MethodInfos[] =
{
	&PositionAssertion__ctor_m7865_MethodInfo,
	&PositionAssertion_Compile_m7866_MethodInfo,
	&PositionAssertion_GetWidth_m7867_MethodInfo,
	&PositionAssertion_IsComplex_m7868_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m7869_MethodInfo,
	NULL
};
extern Il2CppType Position_t1409_0_0_1;
FieldInfo PositionAssertion_t1451____pos_0_FieldInfo = 
{
	"pos"/* name */
	, &Position_t1409_0_0_1/* type */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* parent */
	, offsetof(PositionAssertion_t1451, ___pos_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* PositionAssertion_t1451_FieldInfos[] =
{
	&PositionAssertion_t1451____pos_0_FieldInfo,
	NULL
};
extern MethodInfo PositionAssertion_Compile_m7866_MethodInfo;
extern MethodInfo PositionAssertion_GetWidth_m7867_MethodInfo;
extern MethodInfo PositionAssertion_GetAnchorInfo_m7869_MethodInfo;
extern MethodInfo PositionAssertion_IsComplex_m7868_MethodInfo;
static Il2CppMethodReference PositionAssertion_t1451_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&PositionAssertion_Compile_m7866_MethodInfo,
	&PositionAssertion_GetWidth_m7867_MethodInfo,
	&PositionAssertion_GetAnchorInfo_m7869_MethodInfo,
	&PositionAssertion_IsComplex_m7868_MethodInfo,
};
static bool PositionAssertion_t1451_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType PositionAssertion_t1451_0_0_0;
extern Il2CppType PositionAssertion_t1451_1_0_0;
struct PositionAssertion_t1451;
const Il2CppTypeDefinitionMetadata PositionAssertion_t1451_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1438_0_0_0/* parent */
	, PositionAssertion_t1451_VTable/* vtableMethods */
	, PositionAssertion_t1451_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo PositionAssertion_t1451_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "PositionAssertion"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, PositionAssertion_t1451_MethodInfos/* methods */
	, NULL/* properties */
	, PositionAssertion_t1451_FieldInfos/* fields */
	, NULL/* events */
	, &PositionAssertion_t1451_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PositionAssertion_t1451_0_0_0/* byval_arg */
	, &PositionAssertion_t1451_1_0_0/* this_arg */
	, &PositionAssertion_t1451_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PositionAssertion_t1451)/* instance_size */
	, sizeof (PositionAssertion_t1451)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_Reference.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.Reference
extern TypeInfo Reference_t1452_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.Reference
#include "System_System_Text_RegularExpressions_Syntax_ReferenceMethodDeclarations.h"
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Reference_t1452_Reference__ctor_m7870_ParameterInfos[] = 
{
	{"ignore", 0, 134218553, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
MethodInfo Reference__ctor_m7870_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Reference__ctor_m7870/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202/* invoker_method */
	, Reference_t1452_Reference__ctor_m7870_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1444_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
MethodInfo Reference_get_CapturingGroup_m7871_MethodInfo = 
{
	"get_CapturingGroup"/* name */
	, (methodPointerType)&Reference_get_CapturingGroup_m7871/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &CapturingGroup_t1444_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType CapturingGroup_t1444_0_0_0;
static ParameterInfo Reference_t1452_Reference_set_CapturingGroup_m7872_ParameterInfos[] = 
{
	{"value", 0, 134218554, &EmptyCustomAttributesCache, &CapturingGroup_t1444_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
MethodInfo Reference_set_CapturingGroup_m7872_MethodInfo = 
{
	"set_CapturingGroup"/* name */
	, (methodPointerType)&Reference_set_CapturingGroup_m7872/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Reference_t1452_Reference_set_CapturingGroup_m7872_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
MethodInfo Reference_get_IgnoreCase_m7873_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&Reference_get_IgnoreCase_m7873/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Reference_t1452_Reference_Compile_m7874_ParameterInfos[] = 
{
	{"cmp", 0, 134218555, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218556, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo Reference_Compile_m7874_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&Reference_Compile_m7874/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Reference_t1452_Reference_Compile_m7874_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo Reference_t1452_Reference_GetWidth_m7875_ParameterInfos[] = 
{
	{"min", 0, 134218557, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218558, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
MethodInfo Reference_GetWidth_m7875_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&Reference_GetWidth_m7875/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, Reference_t1452_Reference_GetWidth_m7875_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
MethodInfo Reference_IsComplex_m7876_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&Reference_IsComplex_m7876/* method */
	, &Reference_t1452_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Reference_t1452_MethodInfos[] =
{
	&Reference__ctor_m7870_MethodInfo,
	&Reference_get_CapturingGroup_m7871_MethodInfo,
	&Reference_set_CapturingGroup_m7872_MethodInfo,
	&Reference_get_IgnoreCase_m7873_MethodInfo,
	&Reference_Compile_m7874_MethodInfo,
	&Reference_GetWidth_m7875_MethodInfo,
	&Reference_IsComplex_m7876_MethodInfo,
	NULL
};
extern Il2CppType CapturingGroup_t1444_0_0_1;
FieldInfo Reference_t1452____group_0_FieldInfo = 
{
	"group"/* name */
	, &CapturingGroup_t1444_0_0_1/* type */
	, &Reference_t1452_il2cpp_TypeInfo/* parent */
	, offsetof(Reference_t1452, ___group_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Reference_t1452____ignore_1_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Reference_t1452_il2cpp_TypeInfo/* parent */
	, offsetof(Reference_t1452, ___ignore_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Reference_t1452_FieldInfos[] =
{
	&Reference_t1452____group_0_FieldInfo,
	&Reference_t1452____ignore_1_FieldInfo,
	NULL
};
extern MethodInfo Reference_get_CapturingGroup_m7871_MethodInfo;
extern MethodInfo Reference_set_CapturingGroup_m7872_MethodInfo;
static PropertyInfo Reference_t1452____CapturingGroup_PropertyInfo = 
{
	&Reference_t1452_il2cpp_TypeInfo/* parent */
	, "CapturingGroup"/* name */
	, &Reference_get_CapturingGroup_m7871_MethodInfo/* get */
	, &Reference_set_CapturingGroup_m7872_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Reference_get_IgnoreCase_m7873_MethodInfo;
static PropertyInfo Reference_t1452____IgnoreCase_PropertyInfo = 
{
	&Reference_t1452_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &Reference_get_IgnoreCase_m7873_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Reference_t1452_PropertyInfos[] =
{
	&Reference_t1452____CapturingGroup_PropertyInfo,
	&Reference_t1452____IgnoreCase_PropertyInfo,
	NULL
};
extern MethodInfo Reference_Compile_m7874_MethodInfo;
extern MethodInfo Reference_GetWidth_m7875_MethodInfo;
extern MethodInfo Reference_IsComplex_m7876_MethodInfo;
static Il2CppMethodReference Reference_t1452_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&Reference_Compile_m7874_MethodInfo,
	&Reference_GetWidth_m7875_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&Reference_IsComplex_m7876_MethodInfo,
};
static bool Reference_t1452_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Reference_t1452_0_0_0;
extern Il2CppType Reference_t1452_1_0_0;
struct Reference_t1452;
const Il2CppTypeDefinitionMetadata Reference_t1452_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1438_0_0_0/* parent */
	, Reference_t1452_VTable/* vtableMethods */
	, Reference_t1452_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Reference_t1452_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Reference"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, Reference_t1452_MethodInfos/* methods */
	, Reference_t1452_PropertyInfos/* properties */
	, Reference_t1452_FieldInfos/* fields */
	, NULL/* events */
	, &Reference_t1452_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Reference_t1452_0_0_0/* byval_arg */
	, &Reference_t1452_1_0_0/* this_arg */
	, &Reference_t1452_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Reference_t1452)/* instance_size */
	, sizeof (Reference_t1452)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumber.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.BackslashNumber
extern TypeInfo BackslashNumber_t1453_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.BackslashNumber
#include "System_System_Text_RegularExpressions_Syntax_BackslashNumberMethodDeclarations.h"
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo BackslashNumber_t1453_BackslashNumber__ctor_m7877_ParameterInfos[] = 
{
	{"ignore", 0, 134218559, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ecma", 1, 134218560, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::.ctor(System.Boolean,System.Boolean)
MethodInfo BackslashNumber__ctor_m7877_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&BackslashNumber__ctor_m7877/* method */
	, &BackslashNumber_t1453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202_SByte_t202/* invoker_method */
	, BackslashNumber_t1453_BackslashNumber__ctor_m7877_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Hashtable_t1291_0_0_0;
static ParameterInfo BackslashNumber_t1453_BackslashNumber_ResolveReference_m7878_ParameterInfos[] = 
{
	{"num_str", 0, 134218561, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"groups", 1, 134218562, &EmptyCustomAttributesCache, &Hashtable_t1291_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ResolveReference(System.String,System.Collections.Hashtable)
MethodInfo BackslashNumber_ResolveReference_m7878_MethodInfo = 
{
	"ResolveReference"/* name */
	, (methodPointerType)&BackslashNumber_ResolveReference_m7878/* method */
	, &BackslashNumber_t1453_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t_Object_t/* invoker_method */
	, BackslashNumber_t1453_BackslashNumber_ResolveReference_m7878_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo BackslashNumber_t1453_BackslashNumber_Compile_m7879_ParameterInfos[] = 
{
	{"cmp", 0, 134218563, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218564, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.BackslashNumber::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo BackslashNumber_Compile_m7879_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&BackslashNumber_Compile_m7879/* method */
	, &BackslashNumber_t1453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, BackslashNumber_t1453_BackslashNumber_Compile_m7879_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* BackslashNumber_t1453_MethodInfos[] =
{
	&BackslashNumber__ctor_m7877_MethodInfo,
	&BackslashNumber_ResolveReference_m7878_MethodInfo,
	&BackslashNumber_Compile_m7879_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_1;
FieldInfo BackslashNumber_t1453____literal_2_FieldInfo = 
{
	"literal"/* name */
	, &String_t_0_0_1/* type */
	, &BackslashNumber_t1453_il2cpp_TypeInfo/* parent */
	, offsetof(BackslashNumber_t1453, ___literal_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo BackslashNumber_t1453____ecma_3_FieldInfo = 
{
	"ecma"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &BackslashNumber_t1453_il2cpp_TypeInfo/* parent */
	, offsetof(BackslashNumber_t1453, ___ecma_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* BackslashNumber_t1453_FieldInfos[] =
{
	&BackslashNumber_t1453____literal_2_FieldInfo,
	&BackslashNumber_t1453____ecma_3_FieldInfo,
	NULL
};
extern MethodInfo BackslashNumber_Compile_m7879_MethodInfo;
static Il2CppMethodReference BackslashNumber_t1453_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&BackslashNumber_Compile_m7879_MethodInfo,
	&Reference_GetWidth_m7875_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&Reference_IsComplex_m7876_MethodInfo,
};
static bool BackslashNumber_t1453_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType BackslashNumber_t1453_0_0_0;
extern Il2CppType BackslashNumber_t1453_1_0_0;
struct BackslashNumber_t1453;
const Il2CppTypeDefinitionMetadata BackslashNumber_t1453_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Reference_t1452_0_0_0/* parent */
	, BackslashNumber_t1453_VTable/* vtableMethods */
	, BackslashNumber_t1453_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo BackslashNumber_t1453_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "BackslashNumber"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, BackslashNumber_t1453_MethodInfos/* methods */
	, NULL/* properties */
	, BackslashNumber_t1453_FieldInfos/* fields */
	, NULL/* events */
	, &BackslashNumber_t1453_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &BackslashNumber_t1453_0_0_0/* byval_arg */
	, &BackslashNumber_t1453_1_0_0/* this_arg */
	, &BackslashNumber_t1453_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (BackslashNumber_t1453)/* instance_size */
	, sizeof (BackslashNumber_t1453)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 3/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClass.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.CharacterClass
extern TypeInfo CharacterClass_t1454_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.CharacterClass
#include "System_System_Text_RegularExpressions_Syntax_CharacterClassMethodDeclarations.h"
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass__ctor_m7880_ParameterInfos[] = 
{
	{"negate", 0, 134218565, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"ignore", 1, 134218566, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Boolean,System.Boolean)
MethodInfo CharacterClass__ctor_m7880_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m7880/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_SByte_t202_SByte_t202/* invoker_method */
	, CharacterClass_t1454_CharacterClass__ctor_m7880_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass__ctor_m7881_ParameterInfos[] = 
{
	{"cat", 0, 134218567, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"negate", 1, 134218568, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.ctor(System.Text.RegularExpressions.Category,System.Boolean)
MethodInfo CharacterClass__ctor_m7881_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CharacterClass__ctor_m7881/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202/* invoker_method */
	, CharacterClass_t1454_CharacterClass__ctor_m7881_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::.cctor()
MethodInfo CharacterClass__cctor_m7882_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&CharacterClass__cctor_m7882/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Category_t1413_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass_AddCategory_m7883_ParameterInfos[] = 
{
	{"cat", 0, 134218569, &EmptyCustomAttributesCache, &Category_t1413_0_0_0},
	{"negate", 1, 134218570, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCategory(System.Text.RegularExpressions.Category,System.Boolean)
MethodInfo CharacterClass_AddCategory_m7883_MethodInfo = 
{
	"AddCategory"/* name */
	, (methodPointerType)&CharacterClass_AddCategory_m7883/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_UInt16_t862_SByte_t202/* invoker_method */
	, CharacterClass_t1454_CharacterClass_AddCategory_m7883_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass_AddCharacter_m7884_ParameterInfos[] = 
{
	{"c", 0, 134218571, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddCharacter(System.Char)
MethodInfo CharacterClass_AddCharacter_m7884_MethodInfo = 
{
	"AddCharacter"/* name */
	, (methodPointerType)&CharacterClass_AddCharacter_m7884/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563/* invoker_method */
	, CharacterClass_t1454_CharacterClass_AddCharacter_m7884_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass_AddRange_m7885_ParameterInfos[] = 
{
	{"lo", 0, 134218572, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
	{"hi", 1, 134218573, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int16_t563_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::AddRange(System.Char,System.Char)
MethodInfo CharacterClass_AddRange_m7885_MethodInfo = 
{
	"AddRange"/* name */
	, (methodPointerType)&CharacterClass_AddRange_m7885/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int16_t563_Int16_t563/* invoker_method */
	, CharacterClass_t1454_CharacterClass_AddRange_m7885_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 885/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType ICompiler_t1441_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass_Compile_m7886_ParameterInfos[] = 
{
	{"cmp", 0, 134218574, &EmptyCustomAttributesCache, &ICompiler_t1441_0_0_0},
	{"reverse", 1, 134218575, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
MethodInfo CharacterClass_Compile_m7886_MethodInfo = 
{
	"Compile"/* name */
	, (methodPointerType)&CharacterClass_Compile_m7886/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, CharacterClass_t1454_CharacterClass_Compile_m7886_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 886/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_1_0_2;
extern Il2CppType Int32_t141_1_0_2;
static ParameterInfo CharacterClass_t1454_CharacterClass_GetWidth_m7887_ParameterInfos[] = 
{
	{"min", 0, 134218576, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
	{"max", 1, 134218577, &EmptyCustomAttributesCache, &Int32_t141_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.CharacterClass::GetWidth(System.Int32&,System.Int32&)
MethodInfo CharacterClass_GetWidth_m7887_MethodInfo = 
{
	"GetWidth"/* name */
	, (methodPointerType)&CharacterClass_GetWidth_m7887/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32U26_t564_Int32U26_t564/* invoker_method */
	, CharacterClass_t1454_CharacterClass_GetWidth_m7887_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 887/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::IsComplex()
MethodInfo CharacterClass_IsComplex_m7888_MethodInfo = 
{
	"IsComplex"/* name */
	, (methodPointerType)&CharacterClass_IsComplex_m7888/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 888/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Interval_t1429_0_0_0;
static ParameterInfo CharacterClass_t1454_CharacterClass_GetIntervalCost_m7889_ParameterInfos[] = 
{
	{"i", 0, 134218578, &EmptyCustomAttributesCache, &Interval_t1429_0_0_0},
};
extern Il2CppType Double_t939_0_0_0;
extern void* RuntimeInvoker_Double_t939_Interval_t1429 (MethodInfo* method, void* obj, void** args);
// System.Double System.Text.RegularExpressions.Syntax.CharacterClass::GetIntervalCost(System.Text.RegularExpressions.Interval)
MethodInfo CharacterClass_GetIntervalCost_m7889_MethodInfo = 
{
	"GetIntervalCost"/* name */
	, (methodPointerType)&CharacterClass_GetIntervalCost_m7889/* method */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* declaring_type */
	, &Double_t939_0_0_0/* return_type */
	, RuntimeInvoker_Double_t939_Interval_t1429/* invoker_method */
	, CharacterClass_t1454_CharacterClass_GetIntervalCost_m7889_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 889/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CharacterClass_t1454_MethodInfos[] =
{
	&CharacterClass__ctor_m7880_MethodInfo,
	&CharacterClass__ctor_m7881_MethodInfo,
	&CharacterClass__cctor_m7882_MethodInfo,
	&CharacterClass_AddCategory_m7883_MethodInfo,
	&CharacterClass_AddCharacter_m7884_MethodInfo,
	&CharacterClass_AddRange_m7885_MethodInfo,
	&CharacterClass_Compile_m7886_MethodInfo,
	&CharacterClass_GetWidth_m7887_MethodInfo,
	&CharacterClass_IsComplex_m7888_MethodInfo,
	&CharacterClass_GetIntervalCost_m7889_MethodInfo,
	NULL
};
extern Il2CppType Interval_t1429_0_0_17;
FieldInfo CharacterClass_t1454____upper_case_characters_0_FieldInfo = 
{
	"upper_case_characters"/* name */
	, &Interval_t1429_0_0_17/* type */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1454_StaticFields, ___upper_case_characters_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo CharacterClass_t1454____negate_1_FieldInfo = 
{
	"negate"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1454, ___negate_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo CharacterClass_t1454____ignore_2_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1454, ___ignore_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BitArray_t1421_0_0_1;
FieldInfo CharacterClass_t1454____pos_cats_3_FieldInfo = 
{
	"pos_cats"/* name */
	, &BitArray_t1421_0_0_1/* type */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1454, ___pos_cats_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType BitArray_t1421_0_0_1;
FieldInfo CharacterClass_t1454____neg_cats_4_FieldInfo = 
{
	"neg_cats"/* name */
	, &BitArray_t1421_0_0_1/* type */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1454, ___neg_cats_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IntervalCollection_t1433_0_0_1;
FieldInfo CharacterClass_t1454____intervals_5_FieldInfo = 
{
	"intervals"/* name */
	, &IntervalCollection_t1433_0_0_1/* type */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* parent */
	, offsetof(CharacterClass_t1454, ___intervals_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CharacterClass_t1454_FieldInfos[] =
{
	&CharacterClass_t1454____upper_case_characters_0_FieldInfo,
	&CharacterClass_t1454____negate_1_FieldInfo,
	&CharacterClass_t1454____ignore_2_FieldInfo,
	&CharacterClass_t1454____pos_cats_3_FieldInfo,
	&CharacterClass_t1454____neg_cats_4_FieldInfo,
	&CharacterClass_t1454____intervals_5_FieldInfo,
	NULL
};
extern MethodInfo CharacterClass_Compile_m7886_MethodInfo;
extern MethodInfo CharacterClass_GetWidth_m7887_MethodInfo;
extern MethodInfo CharacterClass_IsComplex_m7888_MethodInfo;
static Il2CppMethodReference CharacterClass_t1454_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&CharacterClass_Compile_m7886_MethodInfo,
	&CharacterClass_GetWidth_m7887_MethodInfo,
	&Expression_GetAnchorInfo_m7801_MethodInfo,
	&CharacterClass_IsComplex_m7888_MethodInfo,
};
static bool CharacterClass_t1454_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType CharacterClass_t1454_0_0_0;
extern Il2CppType CharacterClass_t1454_1_0_0;
struct CharacterClass_t1454;
const Il2CppTypeDefinitionMetadata CharacterClass_t1454_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Expression_t1438_0_0_0/* parent */
	, CharacterClass_t1454_VTable/* vtableMethods */
	, CharacterClass_t1454_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo CharacterClass_t1454_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "CharacterClass"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, CharacterClass_t1454_MethodInfos/* methods */
	, NULL/* properties */
	, CharacterClass_t1454_FieldInfos/* fields */
	, NULL/* events */
	, &CharacterClass_t1454_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CharacterClass_t1454_0_0_0/* byval_arg */
	, &CharacterClass_t1454_1_0_0/* this_arg */
	, &CharacterClass_t1454_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CharacterClass_t1454)/* instance_size */
	, sizeof (CharacterClass_t1454)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(CharacterClass_t1454_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfo.h"
// Metadata Definition System.Text.RegularExpressions.Syntax.AnchorInfo
extern TypeInfo AnchorInfo_t1442_il2cpp_TypeInfo;
// System.Text.RegularExpressions.Syntax.AnchorInfo
#include "System_System_Text_RegularExpressions_Syntax_AnchorInfoMethodDeclarations.h"
extern Il2CppType Expression_t1438_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo AnchorInfo_t1442_AnchorInfo__ctor_m7890_ParameterInfos[] = 
{
	{"expr", 0, 134218579, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
	{"width", 1, 134218580, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
MethodInfo AnchorInfo__ctor_m7890_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m7890/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141/* invoker_method */
	, AnchorInfo_t1442_AnchorInfo__ctor_m7890_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 890/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo AnchorInfo_t1442_AnchorInfo__ctor_m7891_ParameterInfos[] = 
{
	{"expr", 0, 134218581, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
	{"offset", 1, 134218582, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"width", 2, 134218583, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"str", 3, 134218584, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"ignore", 4, 134218585, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
MethodInfo AnchorInfo__ctor_m7891_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m7891/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141_Object_t_SByte_t202/* invoker_method */
	, AnchorInfo_t1442_AnchorInfo__ctor_m7891_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 5/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 891/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Expression_t1438_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
extern Il2CppType Position_t1409_0_0_0;
static ParameterInfo AnchorInfo_t1442_AnchorInfo__ctor_m7892_ParameterInfos[] = 
{
	{"expr", 0, 134218586, &EmptyCustomAttributesCache, &Expression_t1438_0_0_0},
	{"offset", 1, 134218587, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"width", 2, 134218588, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
	{"pos", 3, 134218589, &EmptyCustomAttributesCache, &Position_t1409_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141_UInt16_t862 (MethodInfo* method, void* obj, void** args);
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
MethodInfo AnchorInfo__ctor_m7892_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&AnchorInfo__ctor_m7892/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141_Int32_t141_UInt16_t862/* invoker_method */
	, AnchorInfo_t1442_AnchorInfo__ctor_m7892_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 892/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
MethodInfo AnchorInfo_get_Offset_m7893_MethodInfo = 
{
	"get_Offset"/* name */
	, (methodPointerType)&AnchorInfo_get_Offset_m7893/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 893/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
MethodInfo AnchorInfo_get_Width_m7894_MethodInfo = 
{
	"get_Width"/* name */
	, (methodPointerType)&AnchorInfo_get_Width_m7894/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 894/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
MethodInfo AnchorInfo_get_Length_m7895_MethodInfo = 
{
	"get_Length"/* name */
	, (methodPointerType)&AnchorInfo_get_Length_m7895/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 895/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
MethodInfo AnchorInfo_get_IsUnknownWidth_m7896_MethodInfo = 
{
	"get_IsUnknownWidth"/* name */
	, (methodPointerType)&AnchorInfo_get_IsUnknownWidth_m7896/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 896/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
MethodInfo AnchorInfo_get_IsComplete_m7897_MethodInfo = 
{
	"get_IsComplete"/* name */
	, (methodPointerType)&AnchorInfo_get_IsComplete_m7897/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 897/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
MethodInfo AnchorInfo_get_Substring_m7898_MethodInfo = 
{
	"get_Substring"/* name */
	, (methodPointerType)&AnchorInfo_get_Substring_m7898/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 898/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
MethodInfo AnchorInfo_get_IgnoreCase_m7899_MethodInfo = 
{
	"get_IgnoreCase"/* name */
	, (methodPointerType)&AnchorInfo_get_IgnoreCase_m7899/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 899/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Position_t1409_0_0_0;
extern void* RuntimeInvoker_Position_t1409 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
MethodInfo AnchorInfo_get_Position_m7900_MethodInfo = 
{
	"get_Position"/* name */
	, (methodPointerType)&AnchorInfo_get_Position_m7900/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Position_t1409_0_0_0/* return_type */
	, RuntimeInvoker_Position_t1409/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 900/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
MethodInfo AnchorInfo_get_IsSubstring_m7901_MethodInfo = 
{
	"get_IsSubstring"/* name */
	, (methodPointerType)&AnchorInfo_get_IsSubstring_m7901/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 901/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
MethodInfo AnchorInfo_get_IsPosition_m7902_MethodInfo = 
{
	"get_IsPosition"/* name */
	, (methodPointerType)&AnchorInfo_get_IsPosition_m7902/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 902/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo AnchorInfo_t1442_AnchorInfo_GetInterval_m7903_ParameterInfos[] = 
{
	{"start", 0, 134218590, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Interval_t1429_0_0_0;
extern void* RuntimeInvoker_Interval_t1429_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
MethodInfo AnchorInfo_GetInterval_m7903_MethodInfo = 
{
	"GetInterval"/* name */
	, (methodPointerType)&AnchorInfo_GetInterval_m7903/* method */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* declaring_type */
	, &Interval_t1429_0_0_0/* return_type */
	, RuntimeInvoker_Interval_t1429_Int32_t141/* invoker_method */
	, AnchorInfo_t1442_AnchorInfo_GetInterval_m7903_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 903/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* AnchorInfo_t1442_MethodInfos[] =
{
	&AnchorInfo__ctor_m7890_MethodInfo,
	&AnchorInfo__ctor_m7891_MethodInfo,
	&AnchorInfo__ctor_m7892_MethodInfo,
	&AnchorInfo_get_Offset_m7893_MethodInfo,
	&AnchorInfo_get_Width_m7894_MethodInfo,
	&AnchorInfo_get_Length_m7895_MethodInfo,
	&AnchorInfo_get_IsUnknownWidth_m7896_MethodInfo,
	&AnchorInfo_get_IsComplete_m7897_MethodInfo,
	&AnchorInfo_get_Substring_m7898_MethodInfo,
	&AnchorInfo_get_IgnoreCase_m7899_MethodInfo,
	&AnchorInfo_get_Position_m7900_MethodInfo,
	&AnchorInfo_get_IsSubstring_m7901_MethodInfo,
	&AnchorInfo_get_IsPosition_m7902_MethodInfo,
	&AnchorInfo_GetInterval_m7903_MethodInfo,
	NULL
};
extern Il2CppType Expression_t1438_0_0_1;
FieldInfo AnchorInfo_t1442____expr_0_FieldInfo = 
{
	"expr"/* name */
	, &Expression_t1438_0_0_1/* type */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1442, ___expr_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Position_t1409_0_0_1;
FieldInfo AnchorInfo_t1442____pos_1_FieldInfo = 
{
	"pos"/* name */
	, &Position_t1409_0_0_1/* type */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1442, ___pos_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo AnchorInfo_t1442____offset_2_FieldInfo = 
{
	"offset"/* name */
	, &Int32_t141_0_0_1/* type */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1442, ___offset_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo AnchorInfo_t1442____str_3_FieldInfo = 
{
	"str"/* name */
	, &String_t_0_0_1/* type */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1442, ___str_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo AnchorInfo_t1442____width_4_FieldInfo = 
{
	"width"/* name */
	, &Int32_t141_0_0_1/* type */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1442, ___width_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo AnchorInfo_t1442____ignore_5_FieldInfo = 
{
	"ignore"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, offsetof(AnchorInfo_t1442, ___ignore_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* AnchorInfo_t1442_FieldInfos[] =
{
	&AnchorInfo_t1442____expr_0_FieldInfo,
	&AnchorInfo_t1442____pos_1_FieldInfo,
	&AnchorInfo_t1442____offset_2_FieldInfo,
	&AnchorInfo_t1442____str_3_FieldInfo,
	&AnchorInfo_t1442____width_4_FieldInfo,
	&AnchorInfo_t1442____ignore_5_FieldInfo,
	NULL
};
extern MethodInfo AnchorInfo_get_Offset_m7893_MethodInfo;
static PropertyInfo AnchorInfo_t1442____Offset_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "Offset"/* name */
	, &AnchorInfo_get_Offset_m7893_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Width_m7894_MethodInfo;
static PropertyInfo AnchorInfo_t1442____Width_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "Width"/* name */
	, &AnchorInfo_get_Width_m7894_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Length_m7895_MethodInfo;
static PropertyInfo AnchorInfo_t1442____Length_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "Length"/* name */
	, &AnchorInfo_get_Length_m7895_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsUnknownWidth_m7896_MethodInfo;
static PropertyInfo AnchorInfo_t1442____IsUnknownWidth_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "IsUnknownWidth"/* name */
	, &AnchorInfo_get_IsUnknownWidth_m7896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsComplete_m7897_MethodInfo;
static PropertyInfo AnchorInfo_t1442____IsComplete_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "IsComplete"/* name */
	, &AnchorInfo_get_IsComplete_m7897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Substring_m7898_MethodInfo;
static PropertyInfo AnchorInfo_t1442____Substring_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "Substring"/* name */
	, &AnchorInfo_get_Substring_m7898_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IgnoreCase_m7899_MethodInfo;
static PropertyInfo AnchorInfo_t1442____IgnoreCase_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "IgnoreCase"/* name */
	, &AnchorInfo_get_IgnoreCase_m7899_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_Position_m7900_MethodInfo;
static PropertyInfo AnchorInfo_t1442____Position_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "Position"/* name */
	, &AnchorInfo_get_Position_m7900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsSubstring_m7901_MethodInfo;
static PropertyInfo AnchorInfo_t1442____IsSubstring_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "IsSubstring"/* name */
	, &AnchorInfo_get_IsSubstring_m7901_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo AnchorInfo_get_IsPosition_m7902_MethodInfo;
static PropertyInfo AnchorInfo_t1442____IsPosition_PropertyInfo = 
{
	&AnchorInfo_t1442_il2cpp_TypeInfo/* parent */
	, "IsPosition"/* name */
	, &AnchorInfo_get_IsPosition_m7902_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* AnchorInfo_t1442_PropertyInfos[] =
{
	&AnchorInfo_t1442____Offset_PropertyInfo,
	&AnchorInfo_t1442____Width_PropertyInfo,
	&AnchorInfo_t1442____Length_PropertyInfo,
	&AnchorInfo_t1442____IsUnknownWidth_PropertyInfo,
	&AnchorInfo_t1442____IsComplete_PropertyInfo,
	&AnchorInfo_t1442____Substring_PropertyInfo,
	&AnchorInfo_t1442____IgnoreCase_PropertyInfo,
	&AnchorInfo_t1442____Position_PropertyInfo,
	&AnchorInfo_t1442____IsSubstring_PropertyInfo,
	&AnchorInfo_t1442____IsPosition_PropertyInfo,
	NULL
};
static Il2CppMethodReference AnchorInfo_t1442_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool AnchorInfo_t1442_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType AnchorInfo_t1442_0_0_0;
extern Il2CppType AnchorInfo_t1442_1_0_0;
struct AnchorInfo_t1442;
const Il2CppTypeDefinitionMetadata AnchorInfo_t1442_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, AnchorInfo_t1442_VTable/* vtableMethods */
	, AnchorInfo_t1442_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo AnchorInfo_t1442_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "AnchorInfo"/* name */
	, "System.Text.RegularExpressions.Syntax"/* namespaze */
	, AnchorInfo_t1442_MethodInfos/* methods */
	, AnchorInfo_t1442_PropertyInfos/* properties */
	, AnchorInfo_t1442_FieldInfos/* fields */
	, NULL/* events */
	, &AnchorInfo_t1442_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &AnchorInfo_t1442_0_0_0/* byval_arg */
	, &AnchorInfo_t1442_1_0_0/* this_arg */
	, &AnchorInfo_t1442_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (AnchorInfo_t1442)/* instance_size */
	, sizeof (AnchorInfo_t1442)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 14/* method_count */
	, 10/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.DefaultUriParser
#include "System_System_DefaultUriParser.h"
// Metadata Definition System.DefaultUriParser
extern TypeInfo DefaultUriParser_t1455_il2cpp_TypeInfo;
// System.DefaultUriParser
#include "System_System_DefaultUriParserMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor()
MethodInfo DefaultUriParser__ctor_m7904_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m7904/* method */
	, &DefaultUriParser_t1455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 904/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo DefaultUriParser_t1455_DefaultUriParser__ctor_m7905_ParameterInfos[] = 
{
	{"scheme", 0, 134218591, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.DefaultUriParser::.ctor(System.String)
MethodInfo DefaultUriParser__ctor_m7905_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultUriParser__ctor_m7905/* method */
	, &DefaultUriParser_t1455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, DefaultUriParser_t1455_DefaultUriParser__ctor_m7905_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 905/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* DefaultUriParser_t1455_MethodInfos[] =
{
	&DefaultUriParser__ctor_m7904_MethodInfo,
	&DefaultUriParser__ctor_m7905_MethodInfo,
	NULL
};
extern MethodInfo UriParser_InitializeAndValidate_m7961_MethodInfo;
extern MethodInfo UriParser_OnRegister_m7962_MethodInfo;
static Il2CppMethodReference DefaultUriParser_t1455_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&UriParser_InitializeAndValidate_m7961_MethodInfo,
	&UriParser_OnRegister_m7962_MethodInfo,
};
static bool DefaultUriParser_t1455_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType DefaultUriParser_t1455_0_0_0;
extern Il2CppType DefaultUriParser_t1455_1_0_0;
extern Il2CppType UriParser_t1456_0_0_0;
struct DefaultUriParser_t1455;
const Il2CppTypeDefinitionMetadata DefaultUriParser_t1455_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1456_0_0_0/* parent */
	, DefaultUriParser_t1455_VTable/* vtableMethods */
	, DefaultUriParser_t1455_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo DefaultUriParser_t1455_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultUriParser"/* name */
	, "System"/* namespaze */
	, DefaultUriParser_t1455_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &DefaultUriParser_t1455_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultUriParser_t1455_0_0_0/* byval_arg */
	, &DefaultUriParser_t1455_1_0_0/* this_arg */
	, &DefaultUriParser_t1455_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultUriParser_t1455)/* instance_size */
	, sizeof (DefaultUriParser_t1455)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.GenericUriParser
#include "System_System_GenericUriParser.h"
// Metadata Definition System.GenericUriParser
extern TypeInfo GenericUriParser_t1457_il2cpp_TypeInfo;
// System.GenericUriParser
#include "System_System_GenericUriParserMethodDeclarations.h"
static MethodInfo* GenericUriParser_t1457_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference GenericUriParser_t1457_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&UriParser_InitializeAndValidate_m7961_MethodInfo,
	&UriParser_OnRegister_m7962_MethodInfo,
};
static bool GenericUriParser_t1457_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType GenericUriParser_t1457_0_0_0;
extern Il2CppType GenericUriParser_t1457_1_0_0;
struct GenericUriParser_t1457;
const Il2CppTypeDefinitionMetadata GenericUriParser_t1457_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &UriParser_t1456_0_0_0/* parent */
	, GenericUriParser_t1457_VTable/* vtableMethods */
	, GenericUriParser_t1457_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo GenericUriParser_t1457_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericUriParser"/* name */
	, "System"/* namespaze */
	, GenericUriParser_t1457_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &GenericUriParser_t1457_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericUriParser_t1457_0_0_0/* byval_arg */
	, &GenericUriParser_t1457_1_0_0/* this_arg */
	, &GenericUriParser_t1457_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericUriParser_t1457)/* instance_size */
	, sizeof (GenericUriParser_t1457)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri/UriScheme
#include "System_System_Uri_UriScheme.h"
// Metadata Definition System.Uri/UriScheme
extern TypeInfo UriScheme_t1458_il2cpp_TypeInfo;
// System.Uri/UriScheme
#include "System_System_Uri_UriSchemeMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo UriScheme_t1458_UriScheme__ctor_m7906_ParameterInfos[] = 
{
	{"s", 0, 134218640, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"d", 1, 134218641, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"p", 2, 134218642, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri/UriScheme::.ctor(System.String,System.String,System.Int32)
MethodInfo UriScheme__ctor_m7906_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriScheme__ctor_m7906/* method */
	, &UriScheme_t1458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Object_t_Int32_t141/* invoker_method */
	, UriScheme_t1458_UriScheme__ctor_m7906_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 954/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriScheme_t1458_MethodInfos[] =
{
	&UriScheme__ctor_m7906_MethodInfo,
	NULL
};
extern Il2CppType String_t_0_0_6;
FieldInfo UriScheme_t1458____scheme_0_FieldInfo = 
{
	"scheme"/* name */
	, &String_t_0_0_6/* type */
	, &UriScheme_t1458_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1458, ___scheme_0) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_6;
FieldInfo UriScheme_t1458____delimiter_1_FieldInfo = 
{
	"delimiter"/* name */
	, &String_t_0_0_6/* type */
	, &UriScheme_t1458_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1458, ___delimiter_1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_6;
FieldInfo UriScheme_t1458____defaultPort_2_FieldInfo = 
{
	"defaultPort"/* name */
	, &Int32_t141_0_0_6/* type */
	, &UriScheme_t1458_il2cpp_TypeInfo/* parent */
	, offsetof(UriScheme_t1458, ___defaultPort_2) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriScheme_t1458_FieldInfos[] =
{
	&UriScheme_t1458____scheme_0_FieldInfo,
	&UriScheme_t1458____delimiter_1_FieldInfo,
	&UriScheme_t1458____defaultPort_2_FieldInfo,
	NULL
};
static Il2CppMethodReference UriScheme_t1458_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
};
static bool UriScheme_t1458_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriScheme_t1458_0_0_0;
extern Il2CppType UriScheme_t1458_1_0_0;
extern TypeInfo Uri_t1318_il2cpp_TypeInfo;
extern Il2CppType Uri_t1318_0_0_0;
const Il2CppTypeDefinitionMetadata UriScheme_t1458_DefinitionMetadata = 
{
	&Uri_t1318_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, UriScheme_t1458_VTable/* vtableMethods */
	, UriScheme_t1458_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriScheme_t1458_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriScheme"/* name */
	, ""/* namespaze */
	, UriScheme_t1458_MethodInfos/* methods */
	, NULL/* properties */
	, UriScheme_t1458_FieldInfos/* fields */
	, NULL/* events */
	, &UriScheme_t1458_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriScheme_t1458_0_0_0/* byval_arg */
	, &UriScheme_t1458_1_0_0/* this_arg */
	, &UriScheme_t1458_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)UriScheme_t1458_marshal/* marshal_to_native_func */
	, (methodPointerType)UriScheme_t1458_marshal_back/* marshal_from_native_func */
	, (methodPointerType)UriScheme_t1458_marshal_cleanup/* marshal_cleanup_func */
	, sizeof (UriScheme_t1458)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriScheme_t1458)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(UriScheme_t1458_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048843/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 1/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Uri
#include "System_System_Uri.h"
// Metadata Definition System.Uri
// System.Uri
#include "System_System_UriMethodDeclarations.h"
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri__ctor_m7907_ParameterInfos[] = 
{
	{"uriString", 0, 134218592, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.String)
MethodInfo Uri__ctor_m7907_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m7907/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Uri_t1318_Uri__ctor_m7907_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 906/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t1123_0_0_0;
extern Il2CppType SerializationInfo_t1123_0_0_0;
extern Il2CppType StreamingContext_t1124_0_0_0;
extern Il2CppType StreamingContext_t1124_0_0_0;
static ParameterInfo Uri_t1318_Uri__ctor_m7908_ParameterInfos[] = 
{
	{"serializationInfo", 0, 134218593, &EmptyCustomAttributesCache, &SerializationInfo_t1123_0_0_0},
	{"streamingContext", 1, 134218594, &EmptyCustomAttributesCache, &StreamingContext_t1124_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo Uri__ctor_m7908_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m7908/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124/* invoker_method */
	, Uri_t1318_Uri__ctor_m7908_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 907/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Uri_t1318_Uri__ctor_m7909_ParameterInfos[] = 
{
	{"uriString", 0, 134218595, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"dontEscape", 1, 134218596, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri__ctor_m7909;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
MethodInfo Uri__ctor_m7909_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Uri__ctor_m7909/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_SByte_t202/* invoker_method */
	, Uri_t1318_Uri__ctor_m7909_ParameterInfos/* parameters */
	, &Uri_t1318__CustomAttributeCache_Uri__ctor_m7909/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 908/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::.cctor()
MethodInfo Uri__cctor_m7910_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Uri__cctor_m7910/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 909/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t1123_0_0_0;
extern Il2CppType StreamingContext_t1124_0_0_0;
static ParameterInfo Uri_t1318_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911_ParameterInfos[] = 
{
	{"info", 0, 134218597, &EmptyCustomAttributesCache, &SerializationInfo_t1123_0_0_0},
	{"context", 1, 134218598, &EmptyCustomAttributesCache, &StreamingContext_t1124_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124/* invoker_method */
	, Uri_t1318_Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 910/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_AbsoluteUri()
MethodInfo Uri_get_AbsoluteUri_m7912_MethodInfo = 
{
	"get_AbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_AbsoluteUri_m7912/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 911/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Authority()
MethodInfo Uri_get_Authority_m7913_MethodInfo = 
{
	"get_Authority"/* name */
	, (methodPointerType)&Uri_get_Authority_m7913/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 912/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Host()
MethodInfo Uri_get_Host_m7914_MethodInfo = 
{
	"get_Host"/* name */
	, (methodPointerType)&Uri_get_Host_m7914/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 913/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsFile()
MethodInfo Uri_get_IsFile_m7915_MethodInfo = 
{
	"get_IsFile"/* name */
	, (methodPointerType)&Uri_get_IsFile_m7915/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 914/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsLoopback()
MethodInfo Uri_get_IsLoopback_m7916_MethodInfo = 
{
	"get_IsLoopback"/* name */
	, (methodPointerType)&Uri_get_IsLoopback_m7916/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 915/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsUnc()
MethodInfo Uri_get_IsUnc_m7917_MethodInfo = 
{
	"get_IsUnc"/* name */
	, (methodPointerType)&Uri_get_IsUnc_m7917/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 916/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::get_Scheme()
MethodInfo Uri_get_Scheme_m7918_MethodInfo = 
{
	"get_Scheme"/* name */
	, (methodPointerType)&Uri_get_Scheme_m7918/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 917/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::get_IsAbsoluteUri()
MethodInfo Uri_get_IsAbsoluteUri_m7919_MethodInfo = 
{
	"get_IsAbsoluteUri"/* name */
	, (methodPointerType)&Uri_get_IsAbsoluteUri_m7919/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 918/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_CheckHostName_m7920_ParameterInfos[] = 
{
	{"name", 0, 134218599, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType UriHostNameType_t1462_0_0_0;
extern void* RuntimeInvoker_UriHostNameType_t1462_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriHostNameType System.Uri::CheckHostName(System.String)
MethodInfo Uri_CheckHostName_m7920_MethodInfo = 
{
	"CheckHostName"/* name */
	, (methodPointerType)&Uri_CheckHostName_m7920/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &UriHostNameType_t1462_0_0_0/* return_type */
	, RuntimeInvoker_UriHostNameType_t1462_Object_t/* invoker_method */
	, Uri_t1318_Uri_CheckHostName_m7920_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 919/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_IsIPv4Address_m7921_ParameterInfos[] = 
{
	{"name", 0, 134218600, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsIPv4Address(System.String)
MethodInfo Uri_IsIPv4Address_m7921_MethodInfo = 
{
	"IsIPv4Address"/* name */
	, (methodPointerType)&Uri_IsIPv4Address_m7921/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_IsIPv4Address_m7921_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 920/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_IsDomainAddress_m7922_ParameterInfos[] = 
{
	{"name", 0, 134218601, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsDomainAddress(System.String)
MethodInfo Uri_IsDomainAddress_m7922_MethodInfo = 
{
	"IsDomainAddress"/* name */
	, (methodPointerType)&Uri_IsDomainAddress_m7922/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_IsDomainAddress_m7922_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 921/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_CheckSchemeName_m7923_ParameterInfos[] = 
{
	{"schemeName", 0, 134218602, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CheckSchemeName(System.String)
MethodInfo Uri_CheckSchemeName_m7923_MethodInfo = 
{
	"CheckSchemeName"/* name */
	, (methodPointerType)&Uri_CheckSchemeName_m7923/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_CheckSchemeName_m7923_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 922/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo Uri_t1318_Uri_IsAlpha_m7924_ParameterInfos[] = 
{
	{"c", 0, 134218603, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsAlpha(System.Char)
MethodInfo Uri_IsAlpha_m7924_MethodInfo = 
{
	"IsAlpha"/* name */
	, (methodPointerType)&Uri_IsAlpha_m7924/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int16_t563/* invoker_method */
	, Uri_t1318_Uri_IsAlpha_m7924_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 923/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_Equals_m7925_ParameterInfos[] = 
{
	{"comparant", 0, 134218604, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::Equals(System.Object)
MethodInfo Uri_Equals_m7925_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Uri_Equals_m7925/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_Equals_m7925_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 924/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t1318_0_0_0;
static ParameterInfo Uri_t1318_Uri_InternalEquals_m7926_ParameterInfos[] = 
{
	{"uri", 0, 134218605, &EmptyCustomAttributesCache, &Uri_t1318_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::InternalEquals(System.Uri)
MethodInfo Uri_InternalEquals_m7926_MethodInfo = 
{
	"InternalEquals"/* name */
	, (methodPointerType)&Uri_InternalEquals_m7926/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_InternalEquals_m7926_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 925/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetHashCode()
MethodInfo Uri_GetHashCode_m7927_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Uri_GetHashCode_m7927/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 926/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriPartial_t1464_0_0_0;
extern Il2CppType UriPartial_t1464_0_0_0;
static ParameterInfo Uri_t1318_Uri_GetLeftPart_m7928_ParameterInfos[] = 
{
	{"part", 0, 134218606, &EmptyCustomAttributesCache, &UriPartial_t1464_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetLeftPart(System.UriPartial)
MethodInfo Uri_GetLeftPart_m7928_MethodInfo = 
{
	"GetLeftPart"/* name */
	, (methodPointerType)&Uri_GetLeftPart_m7928/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t141/* invoker_method */
	, Uri_t1318_Uri_GetLeftPart_m7928_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 134/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 927/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo Uri_t1318_Uri_FromHex_m7929_ParameterInfos[] = 
{
	{"digit", 0, 134218607, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::FromHex(System.Char)
MethodInfo Uri_FromHex_m7929_MethodInfo = 
{
	"FromHex"/* name */
	, (methodPointerType)&Uri_FromHex_m7929/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Int16_t563/* invoker_method */
	, Uri_t1318_Uri_FromHex_m7929_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 928/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo Uri_t1318_Uri_HexEscape_m7930_ParameterInfos[] = 
{
	{"character", 0, 134218608, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::HexEscape(System.Char)
MethodInfo Uri_HexEscape_m7930_MethodInfo = 
{
	"HexEscape"/* name */
	, (methodPointerType)&Uri_HexEscape_m7930/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int16_t563/* invoker_method */
	, Uri_t1318_Uri_HexEscape_m7930_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 929/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Char_t389_0_0_0;
static ParameterInfo Uri_t1318_Uri_IsHexDigit_m7931_ParameterInfos[] = 
{
	{"digit", 0, 134218609, &EmptyCustomAttributesCache, &Char_t389_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Int16_t563 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexDigit(System.Char)
MethodInfo Uri_IsHexDigit_m7931_MethodInfo = 
{
	"IsHexDigit"/* name */
	, (methodPointerType)&Uri_IsHexDigit_m7931/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Int16_t563/* invoker_method */
	, Uri_t1318_Uri_IsHexDigit_m7931_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 930/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo Uri_t1318_Uri_IsHexEncoding_m7932_ParameterInfos[] = 
{
	{"pattern", 0, 134218610, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"index", 1, 134218611, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
MethodInfo Uri_IsHexEncoding_m7932_MethodInfo = 
{
	"IsHexEncoding"/* name */
	, (methodPointerType)&Uri_IsHexEncoding_m7932/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t_Int32_t141/* invoker_method */
	, Uri_t1318_Uri_IsHexEncoding_m7932_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 150/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 931/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_1_0_0;
extern Il2CppType String_t_1_0_0;
static ParameterInfo Uri_t1318_Uri_AppendQueryAndFragment_m7933_ParameterInfos[] = 
{
	{"result", 0, 134218612, &EmptyCustomAttributesCache, &String_t_1_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_StringU26_t1227 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
MethodInfo Uri_AppendQueryAndFragment_m7933_MethodInfo = 
{
	"AppendQueryAndFragment"/* name */
	, (methodPointerType)&Uri_AppendQueryAndFragment_m7933/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_StringU26_t1227/* invoker_method */
	, Uri_t1318_Uri_AppendQueryAndFragment_m7933_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 932/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ToString()
MethodInfo Uri_ToString_m7934_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Uri_ToString_m7934/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 933/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_EscapeString_m7935_ParameterInfos[] = 
{
	{"str", 0, 134218613, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri_EscapeString_m7935;
// System.String System.Uri::EscapeString(System.String)
MethodInfo Uri_EscapeString_m7935_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m7935/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1318_Uri_EscapeString_m7935_ParameterInfos/* parameters */
	, &Uri_t1318__CustomAttributeCache_Uri_EscapeString_m7935/* custom_attributes_cache */
	, 148/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 934/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Uri_t1318_Uri_EscapeString_m7936_ParameterInfos[] = 
{
	{"str", 0, 134218614, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"escapeReserved", 1, 134218615, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"escapeHex", 2, 134218616, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
	{"escapeBrackets", 3, 134218617, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t202_SByte_t202_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
MethodInfo Uri_EscapeString_m7936_MethodInfo = 
{
	"EscapeString"/* name */
	, (methodPointerType)&Uri_EscapeString_m7936/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t202_SByte_t202_SByte_t202/* invoker_method */
	, Uri_t1318_Uri_EscapeString_m7936_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 935/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1463_0_0_0;
extern Il2CppType UriKind_t1463_0_0_0;
static ParameterInfo Uri_t1318_Uri_ParseUri_m7937_ParameterInfos[] = 
{
	{"kind", 0, 134218618, &EmptyCustomAttributesCache, &UriKind_t1463_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseUri(System.UriKind)
MethodInfo Uri_ParseUri_m7937_MethodInfo = 
{
	"ParseUri"/* name */
	, (methodPointerType)&Uri_ParseUri_m7937/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, Uri_t1318_Uri_ParseUri_m7937_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 936/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_Unescape_m7938_ParameterInfos[] = 
{
	{"str", 0, 134218619, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri_Unescape_m7938;
// System.String System.Uri::Unescape(System.String)
MethodInfo Uri_Unescape_m7938_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m7938/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1318_Uri_Unescape_m7938_ParameterInfos/* parameters */
	, &Uri_t1318__CustomAttributeCache_Uri_Unescape_m7938/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 937/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Uri_t1318_Uri_Unescape_m7939_ParameterInfos[] = 
{
	{"str", 0, 134218620, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"excludeSpecial", 1, 134218621, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Unescape(System.String,System.Boolean)
MethodInfo Uri_Unescape_m7939_MethodInfo = 
{
	"Unescape"/* name */
	, (methodPointerType)&Uri_Unescape_m7939/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t202/* invoker_method */
	, Uri_t1318_Uri_Unescape_m7939_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 938/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_ParseAsWindowsUNC_m7940_ParameterInfos[] = 
{
	{"uriString", 0, 134218622, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
MethodInfo Uri_ParseAsWindowsUNC_m7940_MethodInfo = 
{
	"ParseAsWindowsUNC"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsUNC_m7940/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Uri_t1318_Uri_ParseAsWindowsUNC_m7940_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 939/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_ParseAsWindowsAbsoluteFilePath_m7941_ParameterInfos[] = 
{
	{"uriString", 0, 134218623, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
MethodInfo Uri_ParseAsWindowsAbsoluteFilePath_m7941_MethodInfo = 
{
	"ParseAsWindowsAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsWindowsAbsoluteFilePath_m7941/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1318_Uri_ParseAsWindowsAbsoluteFilePath_m7941_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 940/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_ParseAsUnixAbsoluteFilePath_m7942_ParameterInfos[] = 
{
	{"uriString", 0, 134218624, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
MethodInfo Uri_ParseAsUnixAbsoluteFilePath_m7942_MethodInfo = 
{
	"ParseAsUnixAbsoluteFilePath"/* name */
	, (methodPointerType)&Uri_ParseAsUnixAbsoluteFilePath_m7942/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, Uri_t1318_Uri_ParseAsUnixAbsoluteFilePath_m7942_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 941/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1463_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_Parse_m7943_ParameterInfos[] = 
{
	{"kind", 0, 134218625, &EmptyCustomAttributesCache, &UriKind_t1463_0_0_0},
	{"uriString", 1, 134218626, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::Parse(System.UriKind,System.String)
MethodInfo Uri_Parse_m7943_MethodInfo = 
{
	"Parse"/* name */
	, (methodPointerType)&Uri_Parse_m7943/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141_Object_t/* invoker_method */
	, Uri_t1318_Uri_Parse_m7943_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 942/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriKind_t1463_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_ParseNoExceptions_m7944_ParameterInfos[] = 
{
	{"kind", 0, 134218627, &EmptyCustomAttributesCache, &UriKind_t1463_0_0_0},
	{"uriString", 1, 134218628, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
MethodInfo Uri_ParseNoExceptions_m7944_MethodInfo = 
{
	"ParseNoExceptions"/* name */
	, (methodPointerType)&Uri_ParseNoExceptions_m7944/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t141_Object_t/* invoker_method */
	, Uri_t1318_Uri_ParseNoExceptions_m7944_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 943/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_CompactEscaped_m7945_ParameterInfos[] = 
{
	{"scheme", 0, 134218629, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::CompactEscaped(System.String)
MethodInfo Uri_CompactEscaped_m7945_MethodInfo = 
{
	"CompactEscaped"/* name */
	, (methodPointerType)&Uri_CompactEscaped_m7945/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_CompactEscaped_m7945_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 944/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Boolean_t147_0_0_0;
static ParameterInfo Uri_t1318_Uri_Reduce_m7946_ParameterInfos[] = 
{
	{"path", 0, 134218630, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"compact_escaped", 1, 134218631, &EmptyCustomAttributesCache, &Boolean_t147_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_SByte_t202 (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::Reduce(System.String,System.Boolean)
MethodInfo Uri_Reduce_m7946_MethodInfo = 
{
	"Reduce"/* name */
	, (methodPointerType)&Uri_Reduce_m7946/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_SByte_t202/* invoker_method */
	, Uri_t1318_Uri_Reduce_m7946_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 945/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_1_0_0;
extern Il2CppType Char_t389_1_0_2;
extern Il2CppType Char_t389_1_0_0;
static ParameterInfo Uri_t1318_Uri_HexUnescapeMultiByte_m7947_ParameterInfos[] = 
{
	{"pattern", 0, 134218632, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"index", 1, 134218633, &EmptyCustomAttributesCache, &Int32_t141_1_0_0},
	{"surrogate", 2, 134218634, &EmptyCustomAttributesCache, &Char_t389_1_0_2},
};
extern Il2CppType Char_t389_0_0_0;
extern void* RuntimeInvoker_Char_t389_Object_t_Int32U26_t564_CharU26_t1532 (MethodInfo* method, void* obj, void** args);
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
MethodInfo Uri_HexUnescapeMultiByte_m7947_MethodInfo = 
{
	"HexUnescapeMultiByte"/* name */
	, (methodPointerType)&Uri_HexUnescapeMultiByte_m7947/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Char_t389_0_0_0/* return_type */
	, RuntimeInvoker_Char_t389_Object_t_Int32U26_t564_CharU26_t1532/* invoker_method */
	, Uri_t1318_Uri_HexUnescapeMultiByte_m7947_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 946/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_GetSchemeDelimiter_m7948_ParameterInfos[] = 
{
	{"scheme", 0, 134218635, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetSchemeDelimiter(System.String)
MethodInfo Uri_GetSchemeDelimiter_m7948_MethodInfo = 
{
	"GetSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetSchemeDelimiter_m7948/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Uri_t1318_Uri_GetSchemeDelimiter_m7948_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 947/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_GetDefaultPort_m7949_ParameterInfos[] = 
{
	{"scheme", 0, 134218636, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Uri::GetDefaultPort(System.String)
MethodInfo Uri_GetDefaultPort_m7949_MethodInfo = 
{
	"GetDefaultPort"/* name */
	, (methodPointerType)&Uri_GetDefaultPort_m7949/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141_Object_t/* invoker_method */
	, Uri_t1318_Uri_GetDefaultPort_m7949_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 948/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
MethodInfo Uri_GetOpaqueWiseSchemeDelimiter_m7950_MethodInfo = 
{
	"GetOpaqueWiseSchemeDelimiter"/* name */
	, (methodPointerType)&Uri_GetOpaqueWiseSchemeDelimiter_m7950/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 949/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo Uri_t1318_Uri_IsPredefinedScheme_m7951_ParameterInfos[] = 
{
	{"scheme", 0, 134218637, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
MethodInfo Uri_IsPredefinedScheme_m7951_MethodInfo = 
{
	"IsPredefinedScheme"/* name */
	, (methodPointerType)&Uri_IsPredefinedScheme_m7951/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, Uri_t1318_Uri_IsPredefinedScheme_m7951_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 950/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType UriParser_t1456_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.Uri::get_Parser()
MethodInfo Uri_get_Parser_m7952_MethodInfo = 
{
	"get_Parser"/* name */
	, (methodPointerType)&Uri_get_Parser_m7952/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1456_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 951/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.Uri::EnsureAbsoluteUri()
MethodInfo Uri_EnsureAbsoluteUri_m7953_MethodInfo = 
{
	"EnsureAbsoluteUri"/* name */
	, (methodPointerType)&Uri_EnsureAbsoluteUri_m7953/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 952/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t1318_0_0_0;
extern Il2CppType Uri_t1318_0_0_0;
static ParameterInfo Uri_t1318_Uri_op_Equality_m7954_ParameterInfos[] = 
{
	{"u1", 0, 134218638, &EmptyCustomAttributesCache, &Uri_t1318_0_0_0},
	{"u2", 1, 134218639, &EmptyCustomAttributesCache, &Uri_t1318_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
MethodInfo Uri_op_Equality_m7954_MethodInfo = 
{
	"op_Equality"/* name */
	, (methodPointerType)&Uri_op_Equality_m7954/* method */
	, &Uri_t1318_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t_Object_t/* invoker_method */
	, Uri_t1318_Uri_op_Equality_m7954_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 953/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* Uri_t1318_MethodInfos[] =
{
	&Uri__ctor_m7907_MethodInfo,
	&Uri__ctor_m7908_MethodInfo,
	&Uri__ctor_m7909_MethodInfo,
	&Uri__cctor_m7910_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911_MethodInfo,
	&Uri_get_AbsoluteUri_m7912_MethodInfo,
	&Uri_get_Authority_m7913_MethodInfo,
	&Uri_get_Host_m7914_MethodInfo,
	&Uri_get_IsFile_m7915_MethodInfo,
	&Uri_get_IsLoopback_m7916_MethodInfo,
	&Uri_get_IsUnc_m7917_MethodInfo,
	&Uri_get_Scheme_m7918_MethodInfo,
	&Uri_get_IsAbsoluteUri_m7919_MethodInfo,
	&Uri_CheckHostName_m7920_MethodInfo,
	&Uri_IsIPv4Address_m7921_MethodInfo,
	&Uri_IsDomainAddress_m7922_MethodInfo,
	&Uri_CheckSchemeName_m7923_MethodInfo,
	&Uri_IsAlpha_m7924_MethodInfo,
	&Uri_Equals_m7925_MethodInfo,
	&Uri_InternalEquals_m7926_MethodInfo,
	&Uri_GetHashCode_m7927_MethodInfo,
	&Uri_GetLeftPart_m7928_MethodInfo,
	&Uri_FromHex_m7929_MethodInfo,
	&Uri_HexEscape_m7930_MethodInfo,
	&Uri_IsHexDigit_m7931_MethodInfo,
	&Uri_IsHexEncoding_m7932_MethodInfo,
	&Uri_AppendQueryAndFragment_m7933_MethodInfo,
	&Uri_ToString_m7934_MethodInfo,
	&Uri_EscapeString_m7935_MethodInfo,
	&Uri_EscapeString_m7936_MethodInfo,
	&Uri_ParseUri_m7937_MethodInfo,
	&Uri_Unescape_m7938_MethodInfo,
	&Uri_Unescape_m7939_MethodInfo,
	&Uri_ParseAsWindowsUNC_m7940_MethodInfo,
	&Uri_ParseAsWindowsAbsoluteFilePath_m7941_MethodInfo,
	&Uri_ParseAsUnixAbsoluteFilePath_m7942_MethodInfo,
	&Uri_Parse_m7943_MethodInfo,
	&Uri_ParseNoExceptions_m7944_MethodInfo,
	&Uri_CompactEscaped_m7945_MethodInfo,
	&Uri_Reduce_m7946_MethodInfo,
	&Uri_HexUnescapeMultiByte_m7947_MethodInfo,
	&Uri_GetSchemeDelimiter_m7948_MethodInfo,
	&Uri_GetDefaultPort_m7949_MethodInfo,
	&Uri_GetOpaqueWiseSchemeDelimiter_m7950_MethodInfo,
	&Uri_IsPredefinedScheme_m7951_MethodInfo,
	&Uri_get_Parser_m7952_MethodInfo,
	&Uri_EnsureAbsoluteUri_m7953_MethodInfo,
	&Uri_op_Equality_m7954_MethodInfo,
	NULL
};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Uri_t1318____isUnixFilePath_0_FieldInfo = 
{
	"isUnixFilePath"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___isUnixFilePath_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____source_1_FieldInfo = 
{
	"source"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___source_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____scheme_2_FieldInfo = 
{
	"scheme"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___scheme_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____host_3_FieldInfo = 
{
	"host"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___host_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Uri_t1318____port_4_FieldInfo = 
{
	"port"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___port_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____path_5_FieldInfo = 
{
	"path"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___path_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____query_6_FieldInfo = 
{
	"query"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___query_6)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____fragment_7_FieldInfo = 
{
	"fragment"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___fragment_7)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____userinfo_8_FieldInfo = 
{
	"userinfo"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___userinfo_8)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Uri_t1318____isUnc_9_FieldInfo = 
{
	"isUnc"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___isUnc_9)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Uri_t1318____isOpaquePart_10_FieldInfo = 
{
	"isOpaquePart"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___isOpaquePart_10)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Uri_t1318____isAbsoluteUri_11_FieldInfo = 
{
	"isAbsoluteUri"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___isAbsoluteUri_11)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t147_0_0_1;
FieldInfo Uri_t1318____userEscaped_12_FieldInfo = 
{
	"userEscaped"/* name */
	, &Boolean_t147_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___userEscaped_12)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____cachedAbsoluteUri_13_FieldInfo = 
{
	"cachedAbsoluteUri"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___cachedAbsoluteUri_13)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo Uri_t1318____cachedToString_14_FieldInfo = 
{
	"cachedToString"/* name */
	, &String_t_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___cachedToString_14)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo Uri_t1318____cachedHashCode_15_FieldInfo = 
{
	"cachedHashCode"/* name */
	, &Int32_t141_0_0_1/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___cachedHashCode_15)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_49;
FieldInfo Uri_t1318____hexUpperChars_16_FieldInfo = 
{
	"hexUpperChars"/* name */
	, &String_t_0_0_49/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___hexUpperChars_16)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____SchemeDelimiter_17_FieldInfo = 
{
	"SchemeDelimiter"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___SchemeDelimiter_17)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeFile_18_FieldInfo = 
{
	"UriSchemeFile"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeFile_18)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeFtp_19_FieldInfo = 
{
	"UriSchemeFtp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeFtp_19)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeGopher_20_FieldInfo = 
{
	"UriSchemeGopher"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeGopher_20)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeHttp_21_FieldInfo = 
{
	"UriSchemeHttp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeHttp_21)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeHttps_22_FieldInfo = 
{
	"UriSchemeHttps"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeHttps_22)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeMailto_23_FieldInfo = 
{
	"UriSchemeMailto"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeMailto_23)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeNews_24_FieldInfo = 
{
	"UriSchemeNews"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeNews_24)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeNntp_25_FieldInfo = 
{
	"UriSchemeNntp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeNntp_25)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeNetPipe_26_FieldInfo = 
{
	"UriSchemeNetPipe"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeNetPipe_26)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_54;
FieldInfo Uri_t1318____UriSchemeNetTcp_27_FieldInfo = 
{
	"UriSchemeNetTcp"/* name */
	, &String_t_0_0_54/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___UriSchemeNetTcp_27)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriSchemeU5BU5D_t1459_0_0_17;
FieldInfo Uri_t1318____schemes_28_FieldInfo = 
{
	"schemes"/* name */
	, &UriSchemeU5BU5D_t1459_0_0_17/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___schemes_28)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriParser_t1456_0_0_129;
FieldInfo Uri_t1318____parser_29_FieldInfo = 
{
	"parser"/* name */
	, &UriParser_t1456_0_0_129/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318, ___parser_29)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t1025_0_0_17;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map14;
FieldInfo Uri_t1318____U3CU3Ef__switch$map14_30_FieldInfo = 
{
	"<>f__switch$map14"/* name */
	, &Dictionary_2_t1025_0_0_17/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___U3CU3Ef__switch$map14_30)/* offset */
	, &Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map14/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t1025_0_0_17;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map15;
FieldInfo Uri_t1318____U3CU3Ef__switch$map15_31_FieldInfo = 
{
	"<>f__switch$map15"/* name */
	, &Dictionary_2_t1025_0_0_17/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___U3CU3Ef__switch$map15_31)/* offset */
	, &Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map15/* custom_attributes_cache */

};
extern Il2CppType Dictionary_2_t1025_0_0_17;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map16;
FieldInfo Uri_t1318____U3CU3Ef__switch$map16_32_FieldInfo = 
{
	"<>f__switch$map16"/* name */
	, &Dictionary_2_t1025_0_0_17/* type */
	, &Uri_t1318_il2cpp_TypeInfo/* parent */
	, offsetof(Uri_t1318_StaticFields, ___U3CU3Ef__switch$map16_32)/* offset */
	, &Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map16/* custom_attributes_cache */

};
static FieldInfo* Uri_t1318_FieldInfos[] =
{
	&Uri_t1318____isUnixFilePath_0_FieldInfo,
	&Uri_t1318____source_1_FieldInfo,
	&Uri_t1318____scheme_2_FieldInfo,
	&Uri_t1318____host_3_FieldInfo,
	&Uri_t1318____port_4_FieldInfo,
	&Uri_t1318____path_5_FieldInfo,
	&Uri_t1318____query_6_FieldInfo,
	&Uri_t1318____fragment_7_FieldInfo,
	&Uri_t1318____userinfo_8_FieldInfo,
	&Uri_t1318____isUnc_9_FieldInfo,
	&Uri_t1318____isOpaquePart_10_FieldInfo,
	&Uri_t1318____isAbsoluteUri_11_FieldInfo,
	&Uri_t1318____userEscaped_12_FieldInfo,
	&Uri_t1318____cachedAbsoluteUri_13_FieldInfo,
	&Uri_t1318____cachedToString_14_FieldInfo,
	&Uri_t1318____cachedHashCode_15_FieldInfo,
	&Uri_t1318____hexUpperChars_16_FieldInfo,
	&Uri_t1318____SchemeDelimiter_17_FieldInfo,
	&Uri_t1318____UriSchemeFile_18_FieldInfo,
	&Uri_t1318____UriSchemeFtp_19_FieldInfo,
	&Uri_t1318____UriSchemeGopher_20_FieldInfo,
	&Uri_t1318____UriSchemeHttp_21_FieldInfo,
	&Uri_t1318____UriSchemeHttps_22_FieldInfo,
	&Uri_t1318____UriSchemeMailto_23_FieldInfo,
	&Uri_t1318____UriSchemeNews_24_FieldInfo,
	&Uri_t1318____UriSchemeNntp_25_FieldInfo,
	&Uri_t1318____UriSchemeNetPipe_26_FieldInfo,
	&Uri_t1318____UriSchemeNetTcp_27_FieldInfo,
	&Uri_t1318____schemes_28_FieldInfo,
	&Uri_t1318____parser_29_FieldInfo,
	&Uri_t1318____U3CU3Ef__switch$map14_30_FieldInfo,
	&Uri_t1318____U3CU3Ef__switch$map15_31_FieldInfo,
	&Uri_t1318____U3CU3Ef__switch$map16_32_FieldInfo,
	NULL
};
extern MethodInfo Uri_get_AbsoluteUri_m7912_MethodInfo;
static PropertyInfo Uri_t1318____AbsoluteUri_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "AbsoluteUri"/* name */
	, &Uri_get_AbsoluteUri_m7912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Authority_m7913_MethodInfo;
static PropertyInfo Uri_t1318____Authority_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "Authority"/* name */
	, &Uri_get_Authority_m7913_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Host_m7914_MethodInfo;
static PropertyInfo Uri_t1318____Host_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "Host"/* name */
	, &Uri_get_Host_m7914_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsFile_m7915_MethodInfo;
static PropertyInfo Uri_t1318____IsFile_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "IsFile"/* name */
	, &Uri_get_IsFile_m7915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsLoopback_m7916_MethodInfo;
static PropertyInfo Uri_t1318____IsLoopback_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "IsLoopback"/* name */
	, &Uri_get_IsLoopback_m7916_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsUnc_m7917_MethodInfo;
static PropertyInfo Uri_t1318____IsUnc_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "IsUnc"/* name */
	, &Uri_get_IsUnc_m7917_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Scheme_m7918_MethodInfo;
static PropertyInfo Uri_t1318____Scheme_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "Scheme"/* name */
	, &Uri_get_Scheme_m7918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_IsAbsoluteUri_m7919_MethodInfo;
static PropertyInfo Uri_t1318____IsAbsoluteUri_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "IsAbsoluteUri"/* name */
	, &Uri_get_IsAbsoluteUri_m7919_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Uri_get_Parser_m7952_MethodInfo;
static PropertyInfo Uri_t1318____Parser_PropertyInfo = 
{
	&Uri_t1318_il2cpp_TypeInfo/* parent */
	, "Parser"/* name */
	, &Uri_get_Parser_m7952_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Uri_t1318_PropertyInfos[] =
{
	&Uri_t1318____AbsoluteUri_PropertyInfo,
	&Uri_t1318____Authority_PropertyInfo,
	&Uri_t1318____Host_PropertyInfo,
	&Uri_t1318____IsFile_PropertyInfo,
	&Uri_t1318____IsLoopback_PropertyInfo,
	&Uri_t1318____IsUnc_PropertyInfo,
	&Uri_t1318____Scheme_PropertyInfo,
	&Uri_t1318____IsAbsoluteUri_PropertyInfo,
	&Uri_t1318____Parser_PropertyInfo,
	NULL
};
static const Il2CppType* Uri_t1318_il2cpp_TypeInfo__nestedTypes[1] =
{
	&UriScheme_t1458_0_0_0,
};
extern MethodInfo Uri_Equals_m7925_MethodInfo;
extern MethodInfo Uri_GetHashCode_m7927_MethodInfo;
extern MethodInfo Uri_ToString_m7934_MethodInfo;
extern MethodInfo Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911_MethodInfo;
extern MethodInfo Uri_Unescape_m7938_MethodInfo;
static Il2CppMethodReference Uri_t1318_VTable[] =
{
	&Uri_Equals_m7925_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Uri_GetHashCode_m7927_MethodInfo,
	&Uri_ToString_m7934_MethodInfo,
	&Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m7911_MethodInfo,
	&Uri_Unescape_m7938_MethodInfo,
};
static bool Uri_t1318_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* Uri_t1318_InterfacesTypeInfos[] = 
{
	&ISerializable_t252_0_0_0,
};
static Il2CppInterfaceOffsetPair Uri_t1318_InterfacesOffsets[] = 
{
	{ &ISerializable_t252_0_0_0, 4},
};
extern TypeInfo TypeConverterAttribute_t1310_il2cpp_TypeInfo;
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttribute.h"
// System.ComponentModel.TypeConverterAttribute
#include "System_System_ComponentModel_TypeConverterAttributeMethodDeclarations.h"
extern MethodInfo TypeConverterAttribute__ctor_m7183_MethodInfo;
extern TypeInfo UriTypeConverter_t1465_il2cpp_TypeInfo;
extern Il2CppType UriTypeConverter_t1465_0_0_0;
// System.UriTypeConverter
#include "System_System_UriTypeConverter.h"
void Uri_t1318_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		TypeConverterAttribute_t1310 * tmp;
		tmp = (TypeConverterAttribute_t1310 *)il2cpp_codegen_object_new (&TypeConverterAttribute_t1310_il2cpp_TypeInfo);
		TypeConverterAttribute__ctor_m7183(tmp, il2cpp_codegen_type_get_object(&UriTypeConverter_t1465_0_0_0), &TypeConverterAttribute__ctor_m7183_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo CompilerGeneratedAttribute_t209_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m738_MethodInfo;
void Uri_t1318_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t209 * tmp;
		tmp = (CompilerGeneratedAttribute_t209 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t209_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m738(tmp, &CompilerGeneratedAttribute__ctor_m738_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t1318_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t209 * tmp;
		tmp = (CompilerGeneratedAttribute_t209 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t209_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m738(tmp, &CompilerGeneratedAttribute__ctor_m738_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t1318_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t209 * tmp;
		tmp = (CompilerGeneratedAttribute_t209 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t209_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m738(tmp, &CompilerGeneratedAttribute__ctor_m738_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
extern TypeInfo ObsoleteAttribute_t550_il2cpp_TypeInfo;
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"
// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttributeMethodDeclarations.h"
extern MethodInfo ObsoleteAttribute__ctor_m8364_MethodInfo;
void Uri_t1318_CustomAttributesCacheGenerator_Uri__ctor_m7909(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t550 * tmp;
		tmp = (ObsoleteAttribute_t550 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t550_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m8364(tmp, &ObsoleteAttribute__ctor_m8364_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t1318_CustomAttributesCacheGenerator_Uri_EscapeString_m7935(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t550 * tmp;
		tmp = (ObsoleteAttribute_t550 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t550_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m8364(tmp, &ObsoleteAttribute__ctor_m8364_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
void Uri_t1318_CustomAttributesCacheGenerator_Uri_Unescape_m7938(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		ObsoleteAttribute_t550 * tmp;
		tmp = (ObsoleteAttribute_t550 *)il2cpp_codegen_object_new (&ObsoleteAttribute_t550_il2cpp_TypeInfo);
		ObsoleteAttribute__ctor_m8364(tmp, &ObsoleteAttribute__ctor_m8364_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache Uri_t1318__CustomAttributeCache = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator
};
CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map14 = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator_U3CU3Ef__switch$map14
};
CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map15 = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator_U3CU3Ef__switch$map15
};
CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map16 = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator_U3CU3Ef__switch$map16
};
CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri__ctor_m7909 = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator_Uri__ctor_m7909
};
CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri_EscapeString_m7935 = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator_Uri_EscapeString_m7935
};
CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri_Unescape_m7938 = {
1,
NULL,
&Uri_t1318_CustomAttributesCacheGenerator_Uri_Unescape_m7938
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType Uri_t1318_1_0_0;
struct Uri_t1318;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map14;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map15;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_U3CU3Ef__switch$map16;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri__ctor_m7909;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri_EscapeString_m7935;
extern CustomAttributesCache Uri_t1318__CustomAttributeCache_Uri_Unescape_m7938;
const Il2CppTypeDefinitionMetadata Uri_t1318_DefinitionMetadata = 
{
	NULL/* declaringType */
	, Uri_t1318_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, Uri_t1318_InterfacesTypeInfos/* implementedInterfaces */
	, Uri_t1318_InterfacesOffsets/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, Uri_t1318_VTable/* vtableMethods */
	, Uri_t1318_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo Uri_t1318_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "Uri"/* name */
	, "System"/* namespaze */
	, Uri_t1318_MethodInfos/* methods */
	, Uri_t1318_PropertyInfos/* properties */
	, Uri_t1318_FieldInfos/* fields */
	, NULL/* events */
	, &Uri_t1318_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &Uri_t1318__CustomAttributeCache/* custom_attributes_cache */
	, &Uri_t1318_0_0_0/* byval_arg */
	, &Uri_t1318_1_0_0/* this_arg */
	, &Uri_t1318_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Uri_t1318)/* instance_size */
	, sizeof (Uri_t1318)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Uri_t1318_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 48/* method_count */
	, 9/* property_count */
	, 33/* field_count */
	, 0/* event_count */
	, 1/* nested_type_count */
	, 6/* vtable_count */
	, 1/* interfaces_count */
	, 1/* interface_offsets_count */

};
// System.UriFormatException
#include "System_System_UriFormatException.h"
// Metadata Definition System.UriFormatException
extern TypeInfo UriFormatException_t1460_il2cpp_TypeInfo;
// System.UriFormatException
#include "System_System_UriFormatExceptionMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor()
MethodInfo UriFormatException__ctor_m7955_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m7955/* method */
	, &UriFormatException_t1460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 955/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriFormatException_t1460_UriFormatException__ctor_m7956_ParameterInfos[] = 
{
	{"message", 0, 134218643, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.String)
MethodInfo UriFormatException__ctor_m7956_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m7956/* method */
	, &UriFormatException_t1460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, UriFormatException_t1460_UriFormatException__ctor_m7956_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 956/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t1123_0_0_0;
extern Il2CppType StreamingContext_t1124_0_0_0;
static ParameterInfo UriFormatException_t1460_UriFormatException__ctor_m7957_ParameterInfos[] = 
{
	{"info", 0, 134218644, &EmptyCustomAttributesCache, &SerializationInfo_t1123_0_0_0},
	{"context", 1, 134218645, &EmptyCustomAttributesCache, &StreamingContext_t1124_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UriFormatException__ctor_m7957_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriFormatException__ctor_m7957/* method */
	, &UriFormatException_t1460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124/* invoker_method */
	, UriFormatException_t1460_UriFormatException__ctor_m7957_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 957/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType SerializationInfo_t1123_0_0_0;
extern Il2CppType StreamingContext_t1124_0_0_0;
static ParameterInfo UriFormatException_t1460_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958_ParameterInfos[] = 
{
	{"info", 0, 134218646, &EmptyCustomAttributesCache, &SerializationInfo_t1123_0_0_0},
	{"context", 1, 134218647, &EmptyCustomAttributesCache, &StreamingContext_t1124_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriFormatException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958_MethodInfo = 
{
	"System.Runtime.Serialization.ISerializable.GetObjectData"/* name */
	, (methodPointerType)&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958/* method */
	, &UriFormatException_t1460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_StreamingContext_t1124/* invoker_method */
	, UriFormatException_t1460_UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 958/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriFormatException_t1460_MethodInfos[] =
{
	&UriFormatException__ctor_m7955_MethodInfo,
	&UriFormatException__ctor_m7956_MethodInfo,
	&UriFormatException__ctor_m7957_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958_MethodInfo,
	NULL
};
extern MethodInfo Exception_ToString_m6987_MethodInfo;
extern MethodInfo UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958_MethodInfo;
extern MethodInfo Exception_get_InnerException_m6876_MethodInfo;
extern MethodInfo Exception_get_Message_m2507_MethodInfo;
extern MethodInfo Exception_get_Source_m6989_MethodInfo;
extern MethodInfo Exception_get_StackTrace_m6927_MethodInfo;
extern MethodInfo Exception_GetObjectData_m6988_MethodInfo;
extern MethodInfo Exception_GetType_m6928_MethodInfo;
static Il2CppMethodReference UriFormatException_t1460_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Exception_ToString_m6987_MethodInfo,
	&UriFormatException_System_Runtime_Serialization_ISerializable_GetObjectData_m7958_MethodInfo,
	&Exception_get_InnerException_m6876_MethodInfo,
	&Exception_get_Message_m2507_MethodInfo,
	&Exception_get_Source_m6989_MethodInfo,
	&Exception_get_StackTrace_m6927_MethodInfo,
	&Exception_GetObjectData_m6988_MethodInfo,
	&Exception_GetType_m6928_MethodInfo,
};
static bool UriFormatException_t1460_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static const Il2CppType* UriFormatException_t1460_InterfacesTypeInfos[] = 
{
	&ISerializable_t252_0_0_0,
};
extern Il2CppType _Exception_t1188_0_0_0;
static Il2CppInterfaceOffsetPair UriFormatException_t1460_InterfacesOffsets[] = 
{
	{ &ISerializable_t252_0_0_0, 4},
	{ &_Exception_t1188_0_0_0, 5},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriFormatException_t1460_0_0_0;
extern Il2CppType UriFormatException_t1460_1_0_0;
extern Il2CppType FormatException_t1461_0_0_0;
struct UriFormatException_t1460;
const Il2CppTypeDefinitionMetadata UriFormatException_t1460_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, UriFormatException_t1460_InterfacesTypeInfos/* implementedInterfaces */
	, UriFormatException_t1460_InterfacesOffsets/* interfaceOffsets */
	, &FormatException_t1461_0_0_0/* parent */
	, UriFormatException_t1460_VTable/* vtableMethods */
	, UriFormatException_t1460_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriFormatException_t1460_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriFormatException"/* name */
	, "System"/* namespaze */
	, UriFormatException_t1460_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &UriFormatException_t1460_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriFormatException_t1460_0_0_0/* byval_arg */
	, &UriFormatException_t1460_1_0_0/* this_arg */
	, &UriFormatException_t1460_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriFormatException_t1460)/* instance_size */
	, sizeof (UriFormatException_t1460)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1056769/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 1/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.UriHostNameType
#include "System_System_UriHostNameType.h"
// Metadata Definition System.UriHostNameType
extern TypeInfo UriHostNameType_t1462_il2cpp_TypeInfo;
// System.UriHostNameType
#include "System_System_UriHostNameTypeMethodDeclarations.h"
static MethodInfo* UriHostNameType_t1462_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t141_0_0_1542;
FieldInfo UriHostNameType_t1462____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t141_0_0_1542/* type */
	, &UriHostNameType_t1462_il2cpp_TypeInfo/* parent */
	, offsetof(UriHostNameType_t1462, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1462_0_0_32854;
FieldInfo UriHostNameType_t1462____Unknown_2_FieldInfo = 
{
	"Unknown"/* name */
	, &UriHostNameType_t1462_0_0_32854/* type */
	, &UriHostNameType_t1462_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1462_0_0_32854;
FieldInfo UriHostNameType_t1462____Basic_3_FieldInfo = 
{
	"Basic"/* name */
	, &UriHostNameType_t1462_0_0_32854/* type */
	, &UriHostNameType_t1462_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1462_0_0_32854;
FieldInfo UriHostNameType_t1462____Dns_4_FieldInfo = 
{
	"Dns"/* name */
	, &UriHostNameType_t1462_0_0_32854/* type */
	, &UriHostNameType_t1462_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1462_0_0_32854;
FieldInfo UriHostNameType_t1462____IPv4_5_FieldInfo = 
{
	"IPv4"/* name */
	, &UriHostNameType_t1462_0_0_32854/* type */
	, &UriHostNameType_t1462_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriHostNameType_t1462_0_0_32854;
FieldInfo UriHostNameType_t1462____IPv6_6_FieldInfo = 
{
	"IPv6"/* name */
	, &UriHostNameType_t1462_0_0_32854/* type */
	, &UriHostNameType_t1462_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriHostNameType_t1462_FieldInfos[] =
{
	&UriHostNameType_t1462____value___1_FieldInfo,
	&UriHostNameType_t1462____Unknown_2_FieldInfo,
	&UriHostNameType_t1462____Basic_3_FieldInfo,
	&UriHostNameType_t1462____Dns_4_FieldInfo,
	&UriHostNameType_t1462____IPv4_5_FieldInfo,
	&UriHostNameType_t1462____IPv6_6_FieldInfo,
	NULL
};
static const int32_t UriHostNameType_t1462____Unknown_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1462____Unknown_2_DefaultValue = 
{
	&UriHostNameType_t1462____Unknown_2_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1462____Unknown_2_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1462____Basic_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1462____Basic_3_DefaultValue = 
{
	&UriHostNameType_t1462____Basic_3_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1462____Basic_3_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1462____Dns_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1462____Dns_4_DefaultValue = 
{
	&UriHostNameType_t1462____Dns_4_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1462____Dns_4_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1462____IPv4_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1462____IPv4_5_DefaultValue = 
{
	&UriHostNameType_t1462____IPv4_5_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1462____IPv4_5_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriHostNameType_t1462____IPv6_6_DefaultValueData = 4;
static Il2CppFieldDefaultValueEntry UriHostNameType_t1462____IPv6_6_DefaultValue = 
{
	&UriHostNameType_t1462____IPv6_6_FieldInfo/* field */
	, { (char*)&UriHostNameType_t1462____IPv6_6_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriHostNameType_t1462_FieldDefaultValues[] = 
{
	&UriHostNameType_t1462____Unknown_2_DefaultValue,
	&UriHostNameType_t1462____Basic_3_DefaultValue,
	&UriHostNameType_t1462____Dns_4_DefaultValue,
	&UriHostNameType_t1462____IPv4_5_DefaultValue,
	&UriHostNameType_t1462____IPv6_6_DefaultValue,
	NULL
};
static Il2CppMethodReference UriHostNameType_t1462_VTable[] =
{
	&Enum_Equals_m716_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Enum_GetHashCode_m717_MethodInfo,
	&Enum_ToString_m718_MethodInfo,
	&Enum_ToString_m719_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m720_MethodInfo,
	&Enum_System_IConvertible_ToByte_m721_MethodInfo,
	&Enum_System_IConvertible_ToChar_m722_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m723_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m724_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m725_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m726_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m727_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m728_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m729_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m730_MethodInfo,
	&Enum_ToString_m731_MethodInfo,
	&Enum_System_IConvertible_ToType_m732_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m733_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m734_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m735_MethodInfo,
	&Enum_CompareTo_m736_MethodInfo,
	&Enum_GetTypeCode_m737_MethodInfo,
};
static bool UriHostNameType_t1462_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriHostNameType_t1462_InterfacesOffsets[] = 
{
	{ &IFormattable_t204_0_0_0, 4},
	{ &IConvertible_t205_0_0_0, 5},
	{ &IComparable_t206_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriHostNameType_t1462_0_0_0;
extern Il2CppType UriHostNameType_t1462_1_0_0;
const Il2CppTypeDefinitionMetadata UriHostNameType_t1462_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriHostNameType_t1462_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t207_0_0_0/* parent */
	, UriHostNameType_t1462_VTable/* vtableMethods */
	, UriHostNameType_t1462_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriHostNameType_t1462_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriHostNameType"/* name */
	, "System"/* namespaze */
	, UriHostNameType_t1462_MethodInfos/* methods */
	, NULL/* properties */
	, UriHostNameType_t1462_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t141_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriHostNameType_t1462_0_0_0/* byval_arg */
	, &UriHostNameType_t1462_1_0_0/* this_arg */
	, &UriHostNameType_t1462_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriHostNameType_t1462_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriHostNameType_t1462)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriHostNameType_t1462)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriKind
#include "System_System_UriKind.h"
// Metadata Definition System.UriKind
extern TypeInfo UriKind_t1463_il2cpp_TypeInfo;
// System.UriKind
#include "System_System_UriKindMethodDeclarations.h"
static MethodInfo* UriKind_t1463_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t141_0_0_1542;
FieldInfo UriKind_t1463____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t141_0_0_1542/* type */
	, &UriKind_t1463_il2cpp_TypeInfo/* parent */
	, offsetof(UriKind_t1463, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1463_0_0_32854;
FieldInfo UriKind_t1463____RelativeOrAbsolute_2_FieldInfo = 
{
	"RelativeOrAbsolute"/* name */
	, &UriKind_t1463_0_0_32854/* type */
	, &UriKind_t1463_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1463_0_0_32854;
FieldInfo UriKind_t1463____Absolute_3_FieldInfo = 
{
	"Absolute"/* name */
	, &UriKind_t1463_0_0_32854/* type */
	, &UriKind_t1463_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriKind_t1463_0_0_32854;
FieldInfo UriKind_t1463____Relative_4_FieldInfo = 
{
	"Relative"/* name */
	, &UriKind_t1463_0_0_32854/* type */
	, &UriKind_t1463_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriKind_t1463_FieldInfos[] =
{
	&UriKind_t1463____value___1_FieldInfo,
	&UriKind_t1463____RelativeOrAbsolute_2_FieldInfo,
	&UriKind_t1463____Absolute_3_FieldInfo,
	&UriKind_t1463____Relative_4_FieldInfo,
	NULL
};
static const int32_t UriKind_t1463____RelativeOrAbsolute_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriKind_t1463____RelativeOrAbsolute_2_DefaultValue = 
{
	&UriKind_t1463____RelativeOrAbsolute_2_FieldInfo/* field */
	, { (char*)&UriKind_t1463____RelativeOrAbsolute_2_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriKind_t1463____Absolute_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriKind_t1463____Absolute_3_DefaultValue = 
{
	&UriKind_t1463____Absolute_3_FieldInfo/* field */
	, { (char*)&UriKind_t1463____Absolute_3_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriKind_t1463____Relative_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriKind_t1463____Relative_4_DefaultValue = 
{
	&UriKind_t1463____Relative_4_FieldInfo/* field */
	, { (char*)&UriKind_t1463____Relative_4_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriKind_t1463_FieldDefaultValues[] = 
{
	&UriKind_t1463____RelativeOrAbsolute_2_DefaultValue,
	&UriKind_t1463____Absolute_3_DefaultValue,
	&UriKind_t1463____Relative_4_DefaultValue,
	NULL
};
static Il2CppMethodReference UriKind_t1463_VTable[] =
{
	&Enum_Equals_m716_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Enum_GetHashCode_m717_MethodInfo,
	&Enum_ToString_m718_MethodInfo,
	&Enum_ToString_m719_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m720_MethodInfo,
	&Enum_System_IConvertible_ToByte_m721_MethodInfo,
	&Enum_System_IConvertible_ToChar_m722_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m723_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m724_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m725_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m726_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m727_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m728_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m729_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m730_MethodInfo,
	&Enum_ToString_m731_MethodInfo,
	&Enum_System_IConvertible_ToType_m732_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m733_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m734_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m735_MethodInfo,
	&Enum_CompareTo_m736_MethodInfo,
	&Enum_GetTypeCode_m737_MethodInfo,
};
static bool UriKind_t1463_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriKind_t1463_InterfacesOffsets[] = 
{
	{ &IFormattable_t204_0_0_0, 4},
	{ &IConvertible_t205_0_0_0, 5},
	{ &IComparable_t206_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriKind_t1463_1_0_0;
const Il2CppTypeDefinitionMetadata UriKind_t1463_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriKind_t1463_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t207_0_0_0/* parent */
	, UriKind_t1463_VTable/* vtableMethods */
	, UriKind_t1463_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriKind_t1463_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriKind"/* name */
	, "System"/* namespaze */
	, UriKind_t1463_MethodInfos/* methods */
	, NULL/* properties */
	, UriKind_t1463_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t141_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriKind_t1463_0_0_0/* byval_arg */
	, &UriKind_t1463_1_0_0/* this_arg */
	, &UriKind_t1463_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriKind_t1463_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriKind_t1463)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriKind_t1463)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// System.UriParser
#include "System_System_UriParser.h"
// Metadata Definition System.UriParser
extern TypeInfo UriParser_t1456_il2cpp_TypeInfo;
// System.UriParser
#include "System_System_UriParserMethodDeclarations.h"
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.ctor()
MethodInfo UriParser__ctor_m7959_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UriParser__ctor_m7959/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 959/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::.cctor()
MethodInfo UriParser__cctor_m7960_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&UriParser__cctor_m7960/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 960/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Uri_t1318_0_0_0;
extern Il2CppType UriFormatException_t1460_1_0_2;
static ParameterInfo UriParser_t1456_UriParser_InitializeAndValidate_m7961_ParameterInfos[] = 
{
	{"uri", 0, 134218648, &EmptyCustomAttributesCache, &Uri_t1318_0_0_0},
	{"parsingError", 1, 134218649, &EmptyCustomAttributesCache, &UriFormatException_t1460_1_0_2},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_UriFormatExceptionU26_t1533 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
MethodInfo UriParser_InitializeAndValidate_m7961_MethodInfo = 
{
	"InitializeAndValidate"/* name */
	, (methodPointerType)&UriParser_InitializeAndValidate_m7961/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_UriFormatExceptionU26_t1533/* invoker_method */
	, UriParser_t1456_UriParser_InitializeAndValidate_m7961_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 453/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 961/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo UriParser_t1456_UriParser_OnRegister_m7962_ParameterInfos[] = 
{
	{"schemeName", 0, 134218650, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 1, 134218651, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache UriParser_t1456__CustomAttributeCache_UriParser_OnRegister_m7962;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
MethodInfo UriParser_OnRegister_m7962_MethodInfo = 
{
	"OnRegister"/* name */
	, (methodPointerType)&UriParser_OnRegister_m7962/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Int32_t141/* invoker_method */
	, UriParser_t1456_UriParser_OnRegister_m7962_ParameterInfos/* parameters */
	, &UriParser_t1456__CustomAttributeCache_UriParser_OnRegister_m7962/* custom_attributes_cache */
	, 452/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 962/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t1456_UriParser_set_SchemeName_m7963_ParameterInfos[] = 
{
	{"value", 0, 134218652, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_SchemeName(System.String)
MethodInfo UriParser_set_SchemeName_m7963_MethodInfo = 
{
	"set_SchemeName"/* name */
	, (methodPointerType)&UriParser_set_SchemeName_m7963/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t/* invoker_method */
	, UriParser_t1456_UriParser_set_SchemeName_m7963_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 963/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
extern void* RuntimeInvoker_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.UriParser::get_DefaultPort()
MethodInfo UriParser_get_DefaultPort_m7964_MethodInfo = 
{
	"get_DefaultPort"/* name */
	, (methodPointerType)&UriParser_get_DefaultPort_m7964/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t141_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t141/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 964/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo UriParser_t1456_UriParser_set_DefaultPort_m7965_ParameterInfos[] = 
{
	{"value", 0, 134218653, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::set_DefaultPort(System.Int32)
MethodInfo UriParser_set_DefaultPort_m7965_MethodInfo = 
{
	"set_DefaultPort"/* name */
	, (methodPointerType)&UriParser_set_DefaultPort_m7965/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Int32_t141/* invoker_method */
	, UriParser_t1456_UriParser_set_DefaultPort_m7965_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2179/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 965/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::CreateDefaults()
MethodInfo UriParser_CreateDefaults_m7966_MethodInfo = 
{
	"CreateDefaults"/* name */
	, (methodPointerType)&UriParser_CreateDefaults_m7966/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 966/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Hashtable_t1291_0_0_0;
extern Il2CppType UriParser_t1456_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType Int32_t141_0_0_0;
static ParameterInfo UriParser_t1456_UriParser_InternalRegister_m7967_ParameterInfos[] = 
{
	{"table", 0, 134218654, &EmptyCustomAttributesCache, &Hashtable_t1291_0_0_0},
	{"uriParser", 1, 134218655, &EmptyCustomAttributesCache, &UriParser_t1456_0_0_0},
	{"schemeName", 2, 134218656, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"defaultPort", 3, 134218657, &EmptyCustomAttributesCache, &Int32_t141_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_Object_t_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
MethodInfo UriParser_InternalRegister_m7967_MethodInfo = 
{
	"InternalRegister"/* name */
	, (methodPointerType)&UriParser_InternalRegister_m7967/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_Object_t_Object_t_Int32_t141/* invoker_method */
	, UriParser_t1456_UriParser_InternalRegister_m7967_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 967/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo UriParser_t1456_UriParser_GetParser_m7968_ParameterInfos[] = 
{
	{"schemeName", 0, 134218658, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType UriParser_t1456_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.UriParser System.UriParser::GetParser(System.String)
MethodInfo UriParser_GetParser_m7968_MethodInfo = 
{
	"GetParser"/* name */
	, (methodPointerType)&UriParser_GetParser_m7968/* method */
	, &UriParser_t1456_il2cpp_TypeInfo/* declaring_type */
	, &UriParser_t1456_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, UriParser_t1456_UriParser_GetParser_m7968_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 147/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 968/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* UriParser_t1456_MethodInfos[] =
{
	&UriParser__ctor_m7959_MethodInfo,
	&UriParser__cctor_m7960_MethodInfo,
	&UriParser_InitializeAndValidate_m7961_MethodInfo,
	&UriParser_OnRegister_m7962_MethodInfo,
	&UriParser_set_SchemeName_m7963_MethodInfo,
	&UriParser_get_DefaultPort_m7964_MethodInfo,
	&UriParser_set_DefaultPort_m7965_MethodInfo,
	&UriParser_CreateDefaults_m7966_MethodInfo,
	&UriParser_InternalRegister_m7967_MethodInfo,
	&UriParser_GetParser_m7968_MethodInfo,
	NULL
};
extern Il2CppType Object_t_0_0_17;
FieldInfo UriParser_t1456____lock_object_0_FieldInfo = 
{
	"lock_object"/* name */
	, &Object_t_0_0_17/* type */
	, &UriParser_t1456_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1456_StaticFields, ___lock_object_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Hashtable_t1291_0_0_17;
FieldInfo UriParser_t1456____table_1_FieldInfo = 
{
	"table"/* name */
	, &Hashtable_t1291_0_0_17/* type */
	, &UriParser_t1456_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1456_StaticFields, ___table_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_3;
FieldInfo UriParser_t1456____scheme_name_2_FieldInfo = 
{
	"scheme_name"/* name */
	, &String_t_0_0_3/* type */
	, &UriParser_t1456_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1456, ___scheme_name_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t141_0_0_1;
FieldInfo UriParser_t1456____default_port_3_FieldInfo = 
{
	"default_port"/* name */
	, &Int32_t141_0_0_1/* type */
	, &UriParser_t1456_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1456, ___default_port_3)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t858_0_0_49;
FieldInfo UriParser_t1456____uri_regex_4_FieldInfo = 
{
	"uri_regex"/* name */
	, &Regex_t858_0_0_49/* type */
	, &UriParser_t1456_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1456_StaticFields, ___uri_regex_4)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Regex_t858_0_0_49;
FieldInfo UriParser_t1456____auth_regex_5_FieldInfo = 
{
	"auth_regex"/* name */
	, &Regex_t858_0_0_49/* type */
	, &UriParser_t1456_il2cpp_TypeInfo/* parent */
	, offsetof(UriParser_t1456_StaticFields, ___auth_regex_5)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriParser_t1456_FieldInfos[] =
{
	&UriParser_t1456____lock_object_0_FieldInfo,
	&UriParser_t1456____table_1_FieldInfo,
	&UriParser_t1456____scheme_name_2_FieldInfo,
	&UriParser_t1456____default_port_3_FieldInfo,
	&UriParser_t1456____uri_regex_4_FieldInfo,
	&UriParser_t1456____auth_regex_5_FieldInfo,
	NULL
};
extern MethodInfo UriParser_set_SchemeName_m7963_MethodInfo;
static PropertyInfo UriParser_t1456____SchemeName_PropertyInfo = 
{
	&UriParser_t1456_il2cpp_TypeInfo/* parent */
	, "SchemeName"/* name */
	, NULL/* get */
	, &UriParser_set_SchemeName_m7963_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo UriParser_get_DefaultPort_m7964_MethodInfo;
extern MethodInfo UriParser_set_DefaultPort_m7965_MethodInfo;
static PropertyInfo UriParser_t1456____DefaultPort_PropertyInfo = 
{
	&UriParser_t1456_il2cpp_TypeInfo/* parent */
	, "DefaultPort"/* name */
	, &UriParser_get_DefaultPort_m7964_MethodInfo/* get */
	, &UriParser_set_DefaultPort_m7965_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* UriParser_t1456_PropertyInfos[] =
{
	&UriParser_t1456____SchemeName_PropertyInfo,
	&UriParser_t1456____DefaultPort_PropertyInfo,
	NULL
};
static Il2CppMethodReference UriParser_t1456_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&UriParser_InitializeAndValidate_m7961_MethodInfo,
	&UriParser_OnRegister_m7962_MethodInfo,
};
static bool UriParser_t1456_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
};
extern TypeInfo MonoTODOAttribute_t1290_il2cpp_TypeInfo;
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttribute.h"
// System.MonoTODOAttribute
#include "System_System_MonoTODOAttributeMethodDeclarations.h"
extern MethodInfo MonoTODOAttribute__ctor_m7102_MethodInfo;
void UriParser_t1456_CustomAttributesCacheGenerator_UriParser_OnRegister_m7962(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		MonoTODOAttribute_t1290 * tmp;
		tmp = (MonoTODOAttribute_t1290 *)il2cpp_codegen_object_new (&MonoTODOAttribute_t1290_il2cpp_TypeInfo);
		MonoTODOAttribute__ctor_m7102(tmp, &MonoTODOAttribute__ctor_m7102_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache UriParser_t1456__CustomAttributeCache_UriParser_OnRegister_m7962 = {
1,
NULL,
&UriParser_t1456_CustomAttributesCacheGenerator_UriParser_OnRegister_m7962
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriParser_t1456_1_0_0;
struct UriParser_t1456;
extern CustomAttributesCache UriParser_t1456__CustomAttributeCache_UriParser_OnRegister_m7962;
const Il2CppTypeDefinitionMetadata UriParser_t1456_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, UriParser_t1456_VTable/* vtableMethods */
	, UriParser_t1456_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriParser_t1456_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriParser"/* name */
	, "System"/* namespaze */
	, UriParser_t1456_MethodInfos/* methods */
	, UriParser_t1456_PropertyInfos/* properties */
	, UriParser_t1456_FieldInfos/* fields */
	, NULL/* events */
	, &UriParser_t1456_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriParser_t1456_0_0_0/* byval_arg */
	, &UriParser_t1456_1_0_0/* this_arg */
	, &UriParser_t1456_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriParser_t1456)/* instance_size */
	, sizeof (UriParser_t1456)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(UriParser_t1456_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048705/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, 10/* method_count */
	, 2/* property_count */
	, 6/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.UriPartial
#include "System_System_UriPartial.h"
// Metadata Definition System.UriPartial
extern TypeInfo UriPartial_t1464_il2cpp_TypeInfo;
// System.UriPartial
#include "System_System_UriPartialMethodDeclarations.h"
static MethodInfo* UriPartial_t1464_MethodInfos[] =
{
	NULL
};
extern Il2CppType Int32_t141_0_0_1542;
FieldInfo UriPartial_t1464____value___1_FieldInfo = 
{
	"value__"/* name */
	, &Int32_t141_0_0_1542/* type */
	, &UriPartial_t1464_il2cpp_TypeInfo/* parent */
	, offsetof(UriPartial_t1464, ___value___1) + sizeof(Object_t)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1464_0_0_32854;
FieldInfo UriPartial_t1464____Scheme_2_FieldInfo = 
{
	"Scheme"/* name */
	, &UriPartial_t1464_0_0_32854/* type */
	, &UriPartial_t1464_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1464_0_0_32854;
FieldInfo UriPartial_t1464____Authority_3_FieldInfo = 
{
	"Authority"/* name */
	, &UriPartial_t1464_0_0_32854/* type */
	, &UriPartial_t1464_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1464_0_0_32854;
FieldInfo UriPartial_t1464____Path_4_FieldInfo = 
{
	"Path"/* name */
	, &UriPartial_t1464_0_0_32854/* type */
	, &UriPartial_t1464_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType UriPartial_t1464_0_0_32854;
FieldInfo UriPartial_t1464____Query_5_FieldInfo = 
{
	"Query"/* name */
	, &UriPartial_t1464_0_0_32854/* type */
	, &UriPartial_t1464_il2cpp_TypeInfo/* parent */
	, 0 /*field is const -> no data*//* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* UriPartial_t1464_FieldInfos[] =
{
	&UriPartial_t1464____value___1_FieldInfo,
	&UriPartial_t1464____Scheme_2_FieldInfo,
	&UriPartial_t1464____Authority_3_FieldInfo,
	&UriPartial_t1464____Path_4_FieldInfo,
	&UriPartial_t1464____Query_5_FieldInfo,
	NULL
};
static const int32_t UriPartial_t1464____Scheme_2_DefaultValueData = 0;
static Il2CppFieldDefaultValueEntry UriPartial_t1464____Scheme_2_DefaultValue = 
{
	&UriPartial_t1464____Scheme_2_FieldInfo/* field */
	, { (char*)&UriPartial_t1464____Scheme_2_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriPartial_t1464____Authority_3_DefaultValueData = 1;
static Il2CppFieldDefaultValueEntry UriPartial_t1464____Authority_3_DefaultValue = 
{
	&UriPartial_t1464____Authority_3_FieldInfo/* field */
	, { (char*)&UriPartial_t1464____Authority_3_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriPartial_t1464____Path_4_DefaultValueData = 2;
static Il2CppFieldDefaultValueEntry UriPartial_t1464____Path_4_DefaultValue = 
{
	&UriPartial_t1464____Path_4_FieldInfo/* field */
	, { (char*)&UriPartial_t1464____Path_4_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static const int32_t UriPartial_t1464____Query_5_DefaultValueData = 3;
static Il2CppFieldDefaultValueEntry UriPartial_t1464____Query_5_DefaultValue = 
{
	&UriPartial_t1464____Query_5_FieldInfo/* field */
	, { (char*)&UriPartial_t1464____Query_5_DefaultValueData, &Int32_t141_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* UriPartial_t1464_FieldDefaultValues[] = 
{
	&UriPartial_t1464____Scheme_2_DefaultValue,
	&UriPartial_t1464____Authority_3_DefaultValue,
	&UriPartial_t1464____Path_4_DefaultValue,
	&UriPartial_t1464____Query_5_DefaultValue,
	NULL
};
static Il2CppMethodReference UriPartial_t1464_VTable[] =
{
	&Enum_Equals_m716_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Enum_GetHashCode_m717_MethodInfo,
	&Enum_ToString_m718_MethodInfo,
	&Enum_ToString_m719_MethodInfo,
	&Enum_System_IConvertible_ToBoolean_m720_MethodInfo,
	&Enum_System_IConvertible_ToByte_m721_MethodInfo,
	&Enum_System_IConvertible_ToChar_m722_MethodInfo,
	&Enum_System_IConvertible_ToDateTime_m723_MethodInfo,
	&Enum_System_IConvertible_ToDecimal_m724_MethodInfo,
	&Enum_System_IConvertible_ToDouble_m725_MethodInfo,
	&Enum_System_IConvertible_ToInt16_m726_MethodInfo,
	&Enum_System_IConvertible_ToInt32_m727_MethodInfo,
	&Enum_System_IConvertible_ToInt64_m728_MethodInfo,
	&Enum_System_IConvertible_ToSByte_m729_MethodInfo,
	&Enum_System_IConvertible_ToSingle_m730_MethodInfo,
	&Enum_ToString_m731_MethodInfo,
	&Enum_System_IConvertible_ToType_m732_MethodInfo,
	&Enum_System_IConvertible_ToUInt16_m733_MethodInfo,
	&Enum_System_IConvertible_ToUInt32_m734_MethodInfo,
	&Enum_System_IConvertible_ToUInt64_m735_MethodInfo,
	&Enum_CompareTo_m736_MethodInfo,
	&Enum_GetTypeCode_m737_MethodInfo,
};
static bool UriPartial_t1464_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair UriPartial_t1464_InterfacesOffsets[] = 
{
	{ &IFormattable_t204_0_0_0, 4},
	{ &IConvertible_t205_0_0_0, 5},
	{ &IComparable_t206_0_0_0, 21},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriPartial_t1464_1_0_0;
const Il2CppTypeDefinitionMetadata UriPartial_t1464_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, UriPartial_t1464_InterfacesOffsets/* interfaceOffsets */
	, &Enum_t207_0_0_0/* parent */
	, UriPartial_t1464_VTable/* vtableMethods */
	, UriPartial_t1464_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriPartial_t1464_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriPartial"/* name */
	, "System"/* namespaze */
	, UriPartial_t1464_MethodInfos/* methods */
	, NULL/* properties */
	, UriPartial_t1464_FieldInfos/* fields */
	, NULL/* events */
	, &Int32_t141_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriPartial_t1464_0_0_0/* byval_arg */
	, &UriPartial_t1464_1_0_0/* this_arg */
	, &UriPartial_t1464_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, UriPartial_t1464_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriPartial_t1464)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof (UriPartial_t1464)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof(int32_t)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, true/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 5/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 23/* vtable_count */
	, 0/* interfaces_count */
	, 3/* interface_offsets_count */

};
// Metadata Definition System.UriTypeConverter
// System.UriTypeConverter
#include "System_System_UriTypeConverterMethodDeclarations.h"
static MethodInfo* UriTypeConverter_t1465_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference UriTypeConverter_t1465_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool UriTypeConverter_t1465_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType UriTypeConverter_t1465_1_0_0;
extern Il2CppType TypeConverter_t1309_0_0_0;
struct UriTypeConverter_t1465;
const Il2CppTypeDefinitionMetadata UriTypeConverter_t1465_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &TypeConverter_t1309_0_0_0/* parent */
	, UriTypeConverter_t1465_VTable/* vtableMethods */
	, UriTypeConverter_t1465_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo UriTypeConverter_t1465_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "UriTypeConverter"/* name */
	, "System"/* namespaze */
	, UriTypeConverter_t1465_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &UriTypeConverter_t1465_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UriTypeConverter_t1465_0_0_0/* byval_arg */
	, &UriTypeConverter_t1465_1_0_0/* this_arg */
	, &UriTypeConverter_t1465_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UriTypeConverter_t1465)/* instance_size */
	, sizeof (UriTypeConverter_t1465)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048577/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallba.h"
// Metadata Definition System.Net.Security.RemoteCertificateValidationCallback
extern TypeInfo RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo;
// System.Net.Security.RemoteCertificateValidationCallback
#include "System_System_Net_Security_RemoteCertificateValidationCallbaMethodDeclarations.h"
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback__ctor_m7969_ParameterInfos[] = 
{
	{"object", 0, 134218659, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218660, &EmptyCustomAttributesCache, &IntPtr_t_0_0_0},
};
extern Il2CppType Void_t133_0_0_0;
extern void* RuntimeInvoker_Void_t133_Object_t_IntPtr_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
MethodInfo RemoteCertificateValidationCallback__ctor_m7969_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback__ctor_m7969/* method */
	, &RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo/* declaring_type */
	, &Void_t133_0_0_0/* return_type */
	, RuntimeInvoker_Void_t133_Object_t_IntPtr_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback__ctor_m7969_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 969/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType X509Certificate_t1316_0_0_0;
extern Il2CppType X509Certificate_t1316_0_0_0;
extern Il2CppType X509Chain_t1326_0_0_0;
extern Il2CppType X509Chain_t1326_0_0_0;
extern Il2CppType SslPolicyErrors_t1312_0_0_0;
extern Il2CppType SslPolicyErrors_t1312_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback_Invoke_m7970_ParameterInfos[] = 
{
	{"sender", 0, 134218661, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"certificate", 1, 134218662, &EmptyCustomAttributesCache, &X509Certificate_t1316_0_0_0},
	{"chain", 2, 134218663, &EmptyCustomAttributesCache, &X509Chain_t1326_0_0_0},
	{"sslPolicyErrors", 3, 134218664, &EmptyCustomAttributesCache, &SslPolicyErrors_t1312_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t_Object_t_Object_t_Int32_t141 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
MethodInfo RemoteCertificateValidationCallback_Invoke_m7970_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_Invoke_m7970/* method */
	, &RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t_Object_t_Object_t_Int32_t141/* invoker_method */
	, RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback_Invoke_m7970_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 970/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType X509Certificate_t1316_0_0_0;
extern Il2CppType X509Chain_t1326_0_0_0;
extern Il2CppType SslPolicyErrors_t1312_0_0_0;
extern Il2CppType AsyncCallback_t244_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback_BeginInvoke_m7971_ParameterInfos[] = 
{
	{"sender", 0, 134218665, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"certificate", 1, 134218666, &EmptyCustomAttributesCache, &X509Certificate_t1316_0_0_0},
	{"chain", 2, 134218667, &EmptyCustomAttributesCache, &X509Chain_t1326_0_0_0},
	{"sslPolicyErrors", 3, 134218668, &EmptyCustomAttributesCache, &SslPolicyErrors_t1312_0_0_0},
	{"callback", 4, 134218669, &EmptyCustomAttributesCache, &AsyncCallback_t244_0_0_0},
	{"object", 5, 134218670, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t243_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t141_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m7971_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_BeginInvoke_m7971/* method */
	, &RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t243_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Int32_t141_Object_t_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback_BeginInvoke_m7971_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 971/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t243_0_0_0;
static ParameterInfo RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback_EndInvoke_m7972_ParameterInfos[] = 
{
	{"result", 0, 134218671, &EmptyCustomAttributesCache, &IAsyncResult_t243_0_0_0},
};
extern Il2CppType Boolean_t147_0_0_0;
extern void* RuntimeInvoker_Boolean_t147_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
MethodInfo RemoteCertificateValidationCallback_EndInvoke_m7972_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&RemoteCertificateValidationCallback_EndInvoke_m7972/* method */
	, &RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t147_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t147_Object_t/* invoker_method */
	, RemoteCertificateValidationCallback_t1324_RemoteCertificateValidationCallback_EndInvoke_m7972_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 972/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* RemoteCertificateValidationCallback_t1324_MethodInfos[] =
{
	&RemoteCertificateValidationCallback__ctor_m7969_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m7970_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m7971_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m7972_MethodInfo,
	NULL
};
extern MethodInfo RemoteCertificateValidationCallback_Invoke_m7970_MethodInfo;
extern MethodInfo RemoteCertificateValidationCallback_BeginInvoke_m7971_MethodInfo;
extern MethodInfo RemoteCertificateValidationCallback_EndInvoke_m7972_MethodInfo;
static Il2CppMethodReference RemoteCertificateValidationCallback_t1324_VTable[] =
{
	&MulticastDelegate_Equals_m1007_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&MulticastDelegate_GetHashCode_m1008_MethodInfo,
	&Object_ToString_m715_MethodInfo,
	&MulticastDelegate_GetObjectData_m1009_MethodInfo,
	&Delegate_Clone_m1010_MethodInfo,
	&MulticastDelegate_GetObjectData_m1009_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1011_MethodInfo,
	&MulticastDelegate_CombineImpl_m1012_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1013_MethodInfo,
	&RemoteCertificateValidationCallback_Invoke_m7970_MethodInfo,
	&RemoteCertificateValidationCallback_BeginInvoke_m7971_MethodInfo,
	&RemoteCertificateValidationCallback_EndInvoke_m7972_MethodInfo,
};
static bool RemoteCertificateValidationCallback_t1324_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
	false,
};
static Il2CppInterfaceOffsetPair RemoteCertificateValidationCallback_t1324_InterfacesOffsets[] = 
{
	{ &ICloneable_t251_0_0_0, 4},
	{ &ISerializable_t252_0_0_0, 4},
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType RemoteCertificateValidationCallback_t1324_0_0_0;
extern Il2CppType RemoteCertificateValidationCallback_t1324_1_0_0;
struct RemoteCertificateValidationCallback_t1324;
const Il2CppTypeDefinitionMetadata RemoteCertificateValidationCallback_t1324_DefinitionMetadata = 
{
	NULL/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, RemoteCertificateValidationCallback_t1324_InterfacesOffsets/* interfaceOffsets */
	, &MulticastDelegate_t246_0_0_0/* parent */
	, RemoteCertificateValidationCallback_t1324_VTable/* vtableMethods */
	, RemoteCertificateValidationCallback_t1324_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "RemoteCertificateValidationCallback"/* name */
	, "System.Net.Security"/* namespaze */
	, RemoteCertificateValidationCallback_t1324_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &RemoteCertificateValidationCallback_t1324_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &RemoteCertificateValidationCallback_t1324_0_0_0/* byval_arg */
	, &RemoteCertificateValidationCallback_t1324_1_0_0/* this_arg */
	, &RemoteCertificateValidationCallback_t1324_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t1324/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (RemoteCertificateValidationCallback_t1324)/* instance_size */
	, sizeof (RemoteCertificateValidationCallback_t1324)/* actualSize */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$128
extern TypeInfo $ArrayType$128_t1466_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$128
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$128MethodDeclarations.h"
static MethodInfo* $ArrayType$128_t1466_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference $ArrayType$128_t1466_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
};
static bool $ArrayType$128_t1466_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType $ArrayType$128_t1466_0_0_0;
extern Il2CppType $ArrayType$128_t1466_1_0_0;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1468_0_0_0;
const Il2CppTypeDefinitionMetadata $ArrayType$128_t1466_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1468_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, $ArrayType$128_t1466_VTable/* vtableMethods */
	, $ArrayType$128_t1466_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo $ArrayType$128_t1466_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$128"/* name */
	, ""/* namespaze */
	, $ArrayType$128_t1466_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &$ArrayType$128_t1466_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$128_t1466_0_0_0/* byval_arg */
	, &$ArrayType$128_t1466_1_0_0/* this_arg */
	, &$ArrayType$128_t1466_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$128_t1466_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$128_t1466_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$128_t1466_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$128_t1466)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof ($ArrayType$128_t1466)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof($ArrayType$128_t1466_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12.h"
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
extern TypeInfo $ArrayType$12_t1467_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "System_U3CPrivateImplementationDetailsU3E_$ArrayType$12MethodDeclarations.h"
static MethodInfo* $ArrayType$12_t1467_MethodInfos[] =
{
	NULL
};
static Il2CppMethodReference $ArrayType$12_t1467_VTable[] =
{
	&ValueType_Equals_m743_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&ValueType_GetHashCode_m744_MethodInfo,
	&ValueType_ToString_m745_MethodInfo,
};
static bool $ArrayType$12_t1467_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType $ArrayType$12_t1467_0_0_0;
extern Il2CppType $ArrayType$12_t1467_1_0_0;
const Il2CppTypeDefinitionMetadata $ArrayType$12_t1467_DefinitionMetadata = 
{
	&U3CPrivateImplementationDetailsU3E_t1468_0_0_0/* declaringType */
	, NULL/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &ValueType_t211_0_0_0/* parent */
	, $ArrayType$12_t1467_VTable/* vtableMethods */
	, $ArrayType$12_t1467_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo $ArrayType$12_t1467_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, $ArrayType$12_t1467_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &$ArrayType$12_t1467_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$12_t1467_0_0_0/* byval_arg */
	, &$ArrayType$12_t1467_1_0_0/* this_arg */
	, &$ArrayType$12_t1467_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$12_t1467_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$12_t1467_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$12_t1467_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$12_t1467)+ sizeof (Il2CppObject)/* instance_size */
	, sizeof ($ArrayType$12_t1467)+ sizeof (Il2CppObject)/* actualSize */
	, 0/* element_size */
	, sizeof($ArrayType$12_t1467_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, true/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3E.h"
// Metadata Definition <PrivateImplementationDetails>
// <PrivateImplementationDetails>
#include "System_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
static MethodInfo* U3CPrivateImplementationDetailsU3E_t1468_MethodInfos[] =
{
	NULL
};
extern Il2CppType $ArrayType$128_t1466_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_FieldInfo = 
{
	"$$field-2"/* name */
	, &$ArrayType$128_t1466_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1468_StaticFields, ___$$fieldU2D2_0)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1467_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_FieldInfo = 
{
	"$$field-3"/* name */
	, &$ArrayType$12_t1467_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1468_StaticFields, ___$$fieldU2D3_1)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1467_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_FieldInfo = 
{
	"$$field-4"/* name */
	, &$ArrayType$12_t1467_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1468_StaticFields, ___$$fieldU2D4_2)/* offset */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t1468_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_DefaultValueData[] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_DefaultValueData, &$ArrayType$128_t1466_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_DefaultValueData, &$ArrayType$12_t1467_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x7, 0x2, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_DefaultValueData, &$ArrayType$12_t1467_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t1468_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D2_0_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D3_1_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1468____$$fieldU2D4_2_DefaultValue,
	NULL
};
static const Il2CppType* U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo__nestedTypes[2] =
{
	&$ArrayType$128_t1466_0_0_0,
	&$ArrayType$12_t1467_0_0_0,
};
static Il2CppMethodReference U3CPrivateImplementationDetailsU3E_t1468_VTable[] =
{
	&Object_Equals_m713_MethodInfo,
	&Object_Finalize_m710_MethodInfo,
	&Object_GetHashCode_m714_MethodInfo,
	&Object_ToString_m715_MethodInfo,
};
static bool U3CPrivateImplementationDetailsU3E_t1468_VTableIsGenericMethod[] =
{
	false,
	false,
	false,
	false,
};
void U3CPrivateImplementationDetailsU3E_t1468_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t209 * tmp;
		tmp = (CompilerGeneratedAttribute_t209 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t209_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m738(tmp, &CompilerGeneratedAttribute__ctor_m738_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1468__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t1468_CustomAttributesCacheGenerator
};
extern Il2CppImage g_System_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1468_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1468;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1468__CustomAttributeCache;
const Il2CppTypeDefinitionMetadata U3CPrivateImplementationDetailsU3E_t1468_DefinitionMetadata = 
{
	NULL/* declaringType */
	, U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo__nestedTypes/* nestedTypes */
	, NULL/* implementedInterfaces */
	, NULL/* interfaceOffsets */
	, &Object_t_0_0_0/* parent */
	, U3CPrivateImplementationDetailsU3E_t1468_VTable/* vtableMethods */
	, U3CPrivateImplementationDetailsU3E_t1468_VTableIsGenericMethod/* vtableEntryIsGenericMethod */
	, NULL/* rgctxDefinition */

};
TypeInfo U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo = 
{
	&g_System_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1468_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t1468_FieldInfos/* fields */
	, NULL/* events */
	, &U3CPrivateImplementationDetailsU3E_t1468_il2cpp_TypeInfo/* element_class */
	, NULL/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t1468__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1468_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1468_1_0_0/* this_arg */
	, &U3CPrivateImplementationDetailsU3E_t1468_DefinitionMetadata/* definitionMetadata */
	, NULL/* runtimeMetadata */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t1468_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1468)/* instance_size */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1468)/* actualSize */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1468_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, 0/* minimumAlignment */
	, false/* valuetype */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, 0/* method_count */
	, 0/* property_count */
	, 3/* field_count */
	, 0/* event_count */
	, 2/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
