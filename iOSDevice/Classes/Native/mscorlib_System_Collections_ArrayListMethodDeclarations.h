﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList
struct ArrayList_t607;
// System.Collections.ICollection
struct ICollection_t938;
// System.Object[]
struct ObjectU5BU5D_t280;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Collections.IComparer
struct IComparer_t789;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
extern "C" void ArrayList__ctor_m3879 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C" void ArrayList__ctor_m4922 (ArrayList_t607 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C" void ArrayList__ctor_m4944 (ArrayList_t607 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C" void ArrayList__ctor_m6423 (ArrayList_t607 * __this, ObjectU5BU5D_t280* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C" void ArrayList__cctor_m6424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C" Object_t * ArrayList_get_Item_m6425 (ArrayList_t607 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C" void ArrayList_set_Item_m6426 (ArrayList_t607 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C" int32_t ArrayList_get_Count_m6427 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C" int32_t ArrayList_get_Capacity_m6428 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C" void ArrayList_set_Capacity_m6429 (ArrayList_t607 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
extern "C" bool ArrayList_get_IsFixedSize_m6430 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C" bool ArrayList_get_IsReadOnly_m6431 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C" bool ArrayList_get_IsSynchronized_m6432 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C" Object_t * ArrayList_get_SyncRoot_m6433 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C" void ArrayList_EnsureCapacity_m6434 (ArrayList_t607 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C" void ArrayList_Shift_m6435 (ArrayList_t607 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C" int32_t ArrayList_Add_m6436 (ArrayList_t607 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C" void ArrayList_Clear_m6437 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C" bool ArrayList_Contains_m6438 (ArrayList_t607 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C" int32_t ArrayList_IndexOf_m6439 (ArrayList_t607 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m6440 (ArrayList_t607 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C" int32_t ArrayList_IndexOf_m6441 (ArrayList_t607 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C" void ArrayList_Insert_m6442 (ArrayList_t607 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C" void ArrayList_InsertRange_m6443 (ArrayList_t607 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C" void ArrayList_Remove_m6444 (ArrayList_t607 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C" void ArrayList_RemoveAt_m6445 (ArrayList_t607 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C" void ArrayList_CopyTo_m6446 (ArrayList_t607 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C" void ArrayList_CopyTo_m6447 (ArrayList_t607 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C" void ArrayList_CopyTo_m6448 (ArrayList_t607 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C" Object_t * ArrayList_GetEnumerator_m6449 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C" void ArrayList_AddRange_m6450 (ArrayList_t607 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C" void ArrayList_Sort_m6451 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C" void ArrayList_Sort_m6452 (ArrayList_t607 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C" ObjectU5BU5D_t280* ArrayList_ToArray_m6453 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C" Array_t * ArrayList_ToArray_m6454 (ArrayList_t607 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C" Object_t * ArrayList_Clone_m6455 (ArrayList_t607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C" void ArrayList_ThrowNewArgumentOutOfRangeException_m6456 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C" ArrayList_t607 * ArrayList_Synchronized_m6457 (Object_t * __this /* static, unused */, ArrayList_t607 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C" ArrayList_t607 * ArrayList_ReadOnly_m3912 (Object_t * __this /* static, unused */, ArrayList_t607 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
