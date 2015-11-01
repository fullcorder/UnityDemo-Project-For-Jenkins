#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1777;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1920;
// System.Object[]
struct ObjectU5BU5D_t280;
// System.Predicate`1<System.Object>
struct Predicate_1_t1669;
// System.Comparison`1<System.Object>
struct Comparison_1_t1675;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11437_gshared (IndexedSet_1_t1777 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11437(__this, method) (( void (*) (IndexedSet_1_t1777 *, const MethodInfo*))IndexedSet_1__ctor_m11437_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11439_gshared (IndexedSet_1_t1777 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11439(__this, method) (( Object_t * (*) (IndexedSet_1_t1777 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11439_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11441_gshared (IndexedSet_1_t1777 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11441(__this, ___item, method) (( void (*) (IndexedSet_1_t1777 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11441_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11443_gshared (IndexedSet_1_t1777 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11443(__this, ___item, method) (( bool (*) (IndexedSet_1_t1777 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11443_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11445_gshared (IndexedSet_1_t1777 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11445(__this, method) (( Object_t* (*) (IndexedSet_1_t1777 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11445_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11447_gshared (IndexedSet_1_t1777 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11447(__this, method) (( void (*) (IndexedSet_1_t1777 *, const MethodInfo*))IndexedSet_1_Clear_m11447_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11449_gshared (IndexedSet_1_t1777 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11449(__this, ___item, method) (( bool (*) (IndexedSet_1_t1777 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11449_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11451_gshared (IndexedSet_1_t1777 * __this, ObjectU5BU5D_t280* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11451(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1777 *, ObjectU5BU5D_t280*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11451_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11453_gshared (IndexedSet_1_t1777 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11453(__this, method) (( int32_t (*) (IndexedSet_1_t1777 *, const MethodInfo*))IndexedSet_1_get_Count_m11453_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11455_gshared (IndexedSet_1_t1777 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11455(__this, method) (( bool (*) (IndexedSet_1_t1777 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11455_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11457_gshared (IndexedSet_1_t1777 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11457(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1777 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11457_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11459_gshared (IndexedSet_1_t1777 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11459(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1777 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11459_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11461_gshared (IndexedSet_1_t1777 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11461(__this, ___index, method) (( void (*) (IndexedSet_1_t1777 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11461_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11463_gshared (IndexedSet_1_t1777 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11463(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1777 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11463_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11465_gshared (IndexedSet_1_t1777 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11465(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1777 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11465_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11466_gshared (IndexedSet_1_t1777 * __this, Predicate_1_t1669 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11466(__this, ___match, method) (( void (*) (IndexedSet_1_t1777 *, Predicate_1_t1669 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11466_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11467_gshared (IndexedSet_1_t1777 * __this, Comparison_1_t1675 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11467(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1777 *, Comparison_1_t1675 *, const MethodInfo*))IndexedSet_1_Sort_m11467_gshared)(__this, ___sortLayoutFunction, method)
