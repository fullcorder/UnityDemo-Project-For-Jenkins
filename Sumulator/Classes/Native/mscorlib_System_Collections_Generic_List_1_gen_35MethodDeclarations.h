#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t277;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t340;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1920;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2194;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1663;
// System.Object[]
struct ObjectU5BU5D_t280;
// System.Predicate`1<System.Object>
struct Predicate_1_t1669;
// System.Comparison`1<System.Object>
struct Comparison_1_t1675;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m9979_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1__ctor_m9979(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1__ctor_m9979_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m9981_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m9981(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1__ctor_m9981_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m9983_gshared (List_1_t277 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m9983(__this, ___capacity, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1__ctor_m9983_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m9985_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m9985(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m9985_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9987_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9987(__this, method) (( Object_t* (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m9987_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m9989_gshared (List_1_t277 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m9989(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t277 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m9989_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m9991_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m9991(__this, method) (( Object_t * (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m9991_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m9993_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m9993(__this, ___item, method) (( int32_t (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m9993_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m9995_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m9995(__this, ___item, method) (( bool (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m9995_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m9997_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m9997(__this, ___item, method) (( int32_t (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m9997_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m9999_gshared (List_1_t277 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m9999(__this, ___index, ___item, method) (( void (*) (List_1_t277 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m9999_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10001_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10001(__this, ___item, method) (( void (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10001_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10003_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10003(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10003_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10005_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10005(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10005_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10007_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10007(__this, method) (( Object_t * (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10007_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10009_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10009(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10009_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10011_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10011(__this, method) (( bool (*) (List_1_t277 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10011_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10013_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10013(__this, ___index, method) (( Object_t * (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10013_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10015_gshared (List_1_t277 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10015(__this, ___index, ___value, method) (( void (*) (List_1_t277 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10015_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10017_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10017(__this, ___item, method) (( void (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_Add_m10017_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10019_gshared (List_1_t277 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10019(__this, ___newCount, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10019_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10021_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10021(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10021_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10023_gshared (List_1_t277 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10023(__this, ___enumerable, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10023_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10025_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10025(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_AddRange_m10025_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1663 * List_1_AsReadOnly_m10027_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10027(__this, method) (( ReadOnlyCollection_1_t1663 * (*) (List_1_t277 *, const MethodInfo*))List_1_AsReadOnly_m10027_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10029_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_Clear_m10029(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_Clear_m10029_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10031_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10031(__this, ___item, method) (( bool (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_Contains_m10031_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10033_gshared (List_1_t277 * __this, ObjectU5BU5D_t280* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10033(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t277 *, ObjectU5BU5D_t280*, int32_t, const MethodInfo*))List_1_CopyTo_m10033_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10035_gshared (List_1_t277 * __this, Predicate_1_t1669 * ___match, const MethodInfo* method);
#define List_1_Find_m10035(__this, ___match, method) (( Object_t * (*) (List_1_t277 *, Predicate_1_t1669 *, const MethodInfo*))List_1_Find_m10035_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10037_gshared (Object_t * __this /* static, unused */, Predicate_1_t1669 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10037(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1669 *, const MethodInfo*))List_1_CheckMatch_m10037_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10039_gshared (List_1_t277 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1669 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10039(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t277 *, int32_t, int32_t, Predicate_1_t1669 *, const MethodInfo*))List_1_GetIndex_m10039_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1662  List_1_GetEnumerator_m10041_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10041(__this, method) (( Enumerator_t1662  (*) (List_1_t277 *, const MethodInfo*))List_1_GetEnumerator_m10041_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10043_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10043(__this, ___item, method) (( int32_t (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10043_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10045_gshared (List_1_t277 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10045(__this, ___start, ___delta, method) (( void (*) (List_1_t277 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10045_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10047_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10047(__this, ___index, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10047_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10049_gshared (List_1_t277 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10049(__this, ___index, ___item, method) (( void (*) (List_1_t277 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10049_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10051_gshared (List_1_t277 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10051(__this, ___collection, method) (( void (*) (List_1_t277 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10051_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10053_gshared (List_1_t277 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10053(__this, ___item, method) (( bool (*) (List_1_t277 *, Object_t *, const MethodInfo*))List_1_Remove_m10053_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10055_gshared (List_1_t277 * __this, Predicate_1_t1669 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10055(__this, ___match, method) (( int32_t (*) (List_1_t277 *, Predicate_1_t1669 *, const MethodInfo*))List_1_RemoveAll_m10055_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10057_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10057(__this, ___index, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10057_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10059_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_Reverse_m10059(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_Reverse_m10059_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10061_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_Sort_m10061(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_Sort_m10061_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10063_gshared (List_1_t277 * __this, Comparison_1_t1675 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10063(__this, ___comparison, method) (( void (*) (List_1_t277 *, Comparison_1_t1675 *, const MethodInfo*))List_1_Sort_m10063_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t280* List_1_ToArray_m10065_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_ToArray_m10065(__this, method) (( ObjectU5BU5D_t280* (*) (List_1_t277 *, const MethodInfo*))List_1_ToArray_m10065_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10067_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10067(__this, method) (( void (*) (List_1_t277 *, const MethodInfo*))List_1_TrimExcess_m10067_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10069_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10069(__this, method) (( int32_t (*) (List_1_t277 *, const MethodInfo*))List_1_get_Capacity_m10069_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10071_gshared (List_1_t277 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10071(__this, ___value, method) (( void (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10071_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10073_gshared (List_1_t277 * __this, const MethodInfo* method);
#define List_1_get_Count_m10073(__this, method) (( int32_t (*) (List_1_t277 *, const MethodInfo*))List_1_get_Count_m10073_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10075_gshared (List_1_t277 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10075(__this, ___index, method) (( Object_t * (*) (List_1_t277 *, int32_t, const MethodInfo*))List_1_get_Item_m10075_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10077_gshared (List_1_t277 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10077(__this, ___index, ___value, method) (( void (*) (List_1_t277 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10077_gshared)(__this, ___index, ___value, method)
