#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t231;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2237;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2205;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2238;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t1980;
// System.Int32[]
struct Int32U5BU5D_t357;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1983;
// System.Comparison`1<System.Int32>
struct Comparison_1_t1987;
// System.Collections.Generic.List`1/Enumerator<System.Int32>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m14265_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1__ctor_m14265(__this, method) (( void (*) (List_1_t231 *, const MethodInfo*))List_1__ctor_m14265_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m14266_gshared (List_1_t231 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m14266(__this, ___collection, method) (( void (*) (List_1_t231 *, Object_t*, const MethodInfo*))List_1__ctor_m14266_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m14267_gshared (List_1_t231 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m14267(__this, ___capacity, method) (( void (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1__ctor_m14267_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m14268_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14268(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14268_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14269_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14269(__this, method) (( Object_t* (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14269_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14270_gshared (List_1_t231 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14270(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t231 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14270_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14271_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14271(__this, method) (( Object_t * (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14271_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14272_gshared (List_1_t231 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14272(__this, ___item, method) (( int32_t (*) (List_1_t231 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14272_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14273_gshared (List_1_t231 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14273(__this, ___item, method) (( bool (*) (List_1_t231 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14273_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14274_gshared (List_1_t231 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14274(__this, ___item, method) (( int32_t (*) (List_1_t231 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14274_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14275_gshared (List_1_t231 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14275(__this, ___index, ___item, method) (( void (*) (List_1_t231 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14275_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14276_gshared (List_1_t231 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14276(__this, ___item, method) (( void (*) (List_1_t231 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14276_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14277_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14277(__this, method) (( bool (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14277_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14278_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14278(__this, method) (( bool (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14278_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14279_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14279(__this, method) (( Object_t * (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14279_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14280_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14280(__this, method) (( bool (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14280_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14281_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14281(__this, method) (( bool (*) (List_1_t231 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14281_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14282_gshared (List_1_t231 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14282(__this, ___index, method) (( Object_t * (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14282_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14283_gshared (List_1_t231 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14283(__this, ___index, ___value, method) (( void (*) (List_1_t231 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14283_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m14284_gshared (List_1_t231 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m14284(__this, ___item, method) (( void (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_Add_m14284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14285_gshared (List_1_t231 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14285(__this, ___newCount, method) (( void (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14285_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14286_gshared (List_1_t231 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14286(__this, ___collection, method) (( void (*) (List_1_t231 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14286_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14287_gshared (List_1_t231 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14287(__this, ___enumerable, method) (( void (*) (List_1_t231 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14287_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m2000_gshared (List_1_t231 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m2000(__this, ___collection, method) (( void (*) (List_1_t231 *, Object_t*, const MethodInfo*))List_1_AddRange_m2000_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1980 * List_1_AsReadOnly_m14288_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14288(__this, method) (( ReadOnlyCollection_1_t1980 * (*) (List_1_t231 *, const MethodInfo*))List_1_AsReadOnly_m14288_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m14289_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_Clear_m14289(__this, method) (( void (*) (List_1_t231 *, const MethodInfo*))List_1_Clear_m14289_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m14290_gshared (List_1_t231 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m14290(__this, ___item, method) (( bool (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_Contains_m14290_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14291_gshared (List_1_t231 * __this, Int32U5BU5D_t357* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14291(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t231 *, Int32U5BU5D_t357*, int32_t, const MethodInfo*))List_1_CopyTo_m14291_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m14292_gshared (List_1_t231 * __this, Predicate_1_t1983 * ___match, const MethodInfo* method);
#define List_1_Find_m14292(__this, ___match, method) (( int32_t (*) (List_1_t231 *, Predicate_1_t1983 *, const MethodInfo*))List_1_Find_m14292_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14293_gshared (Object_t * __this /* static, unused */, Predicate_1_t1983 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14293(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1983 *, const MethodInfo*))List_1_CheckMatch_m14293_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14294_gshared (List_1_t231 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1983 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14294(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t231 *, int32_t, int32_t, Predicate_1_t1983 *, const MethodInfo*))List_1_GetIndex_m14294_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t1979  List_1_GetEnumerator_m14295_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14295(__this, method) (( Enumerator_t1979  (*) (List_1_t231 *, const MethodInfo*))List_1_GetEnumerator_m14295_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14296_gshared (List_1_t231 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m14296(__this, ___item, method) (( int32_t (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_IndexOf_m14296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14297_gshared (List_1_t231 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14297(__this, ___start, ___delta, method) (( void (*) (List_1_t231 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14297_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14298_gshared (List_1_t231 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14298(__this, ___index, method) (( void (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14298_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14299_gshared (List_1_t231 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m14299(__this, ___index, ___item, method) (( void (*) (List_1_t231 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m14299_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14300_gshared (List_1_t231 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14300(__this, ___collection, method) (( void (*) (List_1_t231 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14300_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m14301_gshared (List_1_t231 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m14301(__this, ___item, method) (( bool (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_Remove_m14301_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14302_gshared (List_1_t231 * __this, Predicate_1_t1983 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14302(__this, ___match, method) (( int32_t (*) (List_1_t231 *, Predicate_1_t1983 *, const MethodInfo*))List_1_RemoveAll_m14302_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14303_gshared (List_1_t231 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14303(__this, ___index, method) (( void (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14303_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m14304_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_Reverse_m14304(__this, method) (( void (*) (List_1_t231 *, const MethodInfo*))List_1_Reverse_m14304_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m14305_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_Sort_m14305(__this, method) (( void (*) (List_1_t231 *, const MethodInfo*))List_1_Sort_m14305_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14306_gshared (List_1_t231 * __this, Comparison_1_t1987 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14306(__this, ___comparison, method) (( void (*) (List_1_t231 *, Comparison_1_t1987 *, const MethodInfo*))List_1_Sort_m14306_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t357* List_1_ToArray_m14307_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_ToArray_m14307(__this, method) (( Int32U5BU5D_t357* (*) (List_1_t231 *, const MethodInfo*))List_1_ToArray_m14307_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m14308_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14308(__this, method) (( void (*) (List_1_t231 *, const MethodInfo*))List_1_TrimExcess_m14308_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14309_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14309(__this, method) (( int32_t (*) (List_1_t231 *, const MethodInfo*))List_1_get_Capacity_m14309_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14310_gshared (List_1_t231 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14310(__this, ___value, method) (( void (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14310_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m14311_gshared (List_1_t231 * __this, const MethodInfo* method);
#define List_1_get_Count_m14311(__this, method) (( int32_t (*) (List_1_t231 *, const MethodInfo*))List_1_get_Count_m14311_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m14312_gshared (List_1_t231 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14312(__this, ___index, method) (( int32_t (*) (List_1_t231 *, int32_t, const MethodInfo*))List_1_get_Item_m14312_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14313_gshared (List_1_t231 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m14313(__this, ___index, ___value, method) (( void (*) (List_1_t231 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m14313_gshared)(__this, ___index, ___value, method)
