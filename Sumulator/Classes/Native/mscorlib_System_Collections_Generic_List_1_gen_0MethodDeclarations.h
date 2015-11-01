#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t49;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerable_1_t2197;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.RaycastResult>
struct IEnumerator_1_t2198;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.RaycastResult>
struct ICollection_1_t2199;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.RaycastResult>
struct ReadOnlyCollection_1_t1711;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t1708;
// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1716;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t8;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_5.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void List_1__ctor_m1426_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1__ctor_m1426(__this, method) (( void (*) (List_1_t49 *, const MethodInfo*))List_1__ctor_m1426_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10526_gshared (List_1_t49 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10526(__this, ___collection, method) (( void (*) (List_1_t49 *, Object_t*, const MethodInfo*))List_1__ctor_m10526_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10527_gshared (List_1_t49 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10527(__this, ___capacity, method) (( void (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1__ctor_m10527_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.cctor()
extern "C" void List_1__cctor_m10528_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10528(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10528_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529(__this, method) (( Object_t* (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10529_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10530_gshared (List_1_t49 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10530(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t49 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10530_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10531_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10531(__this, method) (( Object_t * (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10531_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10532_gshared (List_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10532(__this, ___item, method) (( int32_t (*) (List_1_t49 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10532_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10533_gshared (List_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10533(__this, ___item, method) (( bool (*) (List_1_t49 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10533_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10534_gshared (List_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10534(__this, ___item, method) (( int32_t (*) (List_1_t49 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10534_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10535_gshared (List_1_t49 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10535(__this, ___index, ___item, method) (( void (*) (List_1_t49 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10535_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10536_gshared (List_1_t49 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10536(__this, ___item, method) (( void (*) (List_1_t49 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10536_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10537_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10537(__this, method) (( bool (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10537_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10538_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10538(__this, method) (( bool (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10538_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10539_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10539(__this, method) (( Object_t * (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10539_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10540_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10540(__this, method) (( bool (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10540_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10541_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10541(__this, method) (( bool (*) (List_1_t49 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10541_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10542_gshared (List_1_t49 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10542(__this, ___index, method) (( Object_t * (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10542_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10543_gshared (List_1_t49 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10543(__this, ___index, ___value, method) (( void (*) (List_1_t49 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10543_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
extern "C" void List_1_Add_m10544_gshared (List_1_t49 * __this, RaycastResult_t40  ___item, const MethodInfo* method);
#define List_1_Add_m10544(__this, ___item, method) (( void (*) (List_1_t49 *, RaycastResult_t40 , const MethodInfo*))List_1_Add_m10544_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10545_gshared (List_1_t49 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10545(__this, ___newCount, method) (( void (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10545_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10546_gshared (List_1_t49 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10546(__this, ___collection, method) (( void (*) (List_1_t49 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10546_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10547_gshared (List_1_t49 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10547(__this, ___enumerable, method) (( void (*) (List_1_t49 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10547_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10548_gshared (List_1_t49 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10548(__this, ___collection, method) (( void (*) (List_1_t49 *, Object_t*, const MethodInfo*))List_1_AddRange_m10548_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1711 * List_1_AsReadOnly_m10549_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10549(__this, method) (( ReadOnlyCollection_1_t1711 * (*) (List_1_t49 *, const MethodInfo*))List_1_AsReadOnly_m10549_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Clear()
extern "C" void List_1_Clear_m10550_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_Clear_m10550(__this, method) (( void (*) (List_1_t49 *, const MethodInfo*))List_1_Clear_m10550_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Contains(T)
extern "C" bool List_1_Contains_m10551_gshared (List_1_t49 * __this, RaycastResult_t40  ___item, const MethodInfo* method);
#define List_1_Contains_m10551(__this, ___item, method) (( bool (*) (List_1_t49 *, RaycastResult_t40 , const MethodInfo*))List_1_Contains_m10551_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10552_gshared (List_1_t49 * __this, RaycastResultU5BU5D_t1708* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10552(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t49 *, RaycastResultU5BU5D_t1708*, int32_t, const MethodInfo*))List_1_CopyTo_m10552_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Find(System.Predicate`1<T>)
extern "C" RaycastResult_t40  List_1_Find_m10553_gshared (List_1_t49 * __this, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_Find_m10553(__this, ___match, method) (( RaycastResult_t40  (*) (List_1_t49 *, Predicate_1_t1716 *, const MethodInfo*))List_1_Find_m10553_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10554_gshared (Object_t * __this /* static, unused */, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10554(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1716 *, const MethodInfo*))List_1_CheckMatch_m10554_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10555_gshared (List_1_t49 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10555(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t49 *, int32_t, int32_t, Predicate_1_t1716 *, const MethodInfo*))List_1_GetIndex_m10555_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
extern "C" Enumerator_t1710  List_1_GetEnumerator_m10556_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10556(__this, method) (( Enumerator_t1710  (*) (List_1_t49 *, const MethodInfo*))List_1_GetEnumerator_m10556_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10557_gshared (List_1_t49 * __this, RaycastResult_t40  ___item, const MethodInfo* method);
#define List_1_IndexOf_m10557(__this, ___item, method) (( int32_t (*) (List_1_t49 *, RaycastResult_t40 , const MethodInfo*))List_1_IndexOf_m10557_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10558_gshared (List_1_t49 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10558(__this, ___start, ___delta, method) (( void (*) (List_1_t49 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10558_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10559_gshared (List_1_t49 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10559(__this, ___index, method) (( void (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10559_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10560_gshared (List_1_t49 * __this, int32_t ___index, RaycastResult_t40  ___item, const MethodInfo* method);
#define List_1_Insert_m10560(__this, ___index, ___item, method) (( void (*) (List_1_t49 *, int32_t, RaycastResult_t40 , const MethodInfo*))List_1_Insert_m10560_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10561_gshared (List_1_t49 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10561(__this, ___collection, method) (( void (*) (List_1_t49 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10561_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Remove(T)
extern "C" bool List_1_Remove_m10562_gshared (List_1_t49 * __this, RaycastResult_t40  ___item, const MethodInfo* method);
#define List_1_Remove_m10562(__this, ___item, method) (( bool (*) (List_1_t49 *, RaycastResult_t40 , const MethodInfo*))List_1_Remove_m10562_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10563_gshared (List_1_t49 * __this, Predicate_1_t1716 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10563(__this, ___match, method) (( int32_t (*) (List_1_t49 *, Predicate_1_t1716 *, const MethodInfo*))List_1_RemoveAll_m10563_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10564_gshared (List_1_t49 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10564(__this, ___index, method) (( void (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10564_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Reverse()
extern "C" void List_1_Reverse_m10565_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_Reverse_m10565(__this, method) (( void (*) (List_1_t49 *, const MethodInfo*))List_1_Reverse_m10565_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort()
extern "C" void List_1_Sort_m10566_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_Sort_m10566(__this, method) (( void (*) (List_1_t49 *, const MethodInfo*))List_1_Sort_m10566_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m1378_gshared (List_1_t49 * __this, Comparison_1_t8 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m1378(__this, ___comparison, method) (( void (*) (List_1_t49 *, Comparison_1_t8 *, const MethodInfo*))List_1_Sort_m1378_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::ToArray()
extern "C" RaycastResultU5BU5D_t1708* List_1_ToArray_m10567_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_ToArray_m10567(__this, method) (( RaycastResultU5BU5D_t1708* (*) (List_1_t49 *, const MethodInfo*))List_1_ToArray_m10567_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::TrimExcess()
extern "C" void List_1_TrimExcess_m10568_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10568(__this, method) (( void (*) (List_1_t49 *, const MethodInfo*))List_1_TrimExcess_m10568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10569_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10569(__this, method) (( int32_t (*) (List_1_t49 *, const MethodInfo*))List_1_get_Capacity_m10569_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10570_gshared (List_1_t49 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10570(__this, ___value, method) (( void (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10570_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
extern "C" int32_t List_1_get_Count_m10571_gshared (List_1_t49 * __this, const MethodInfo* method);
#define List_1_get_Count_m10571(__this, method) (( int32_t (*) (List_1_t49 *, const MethodInfo*))List_1_get_Count_m10571_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Item(System.Int32)
extern "C" RaycastResult_t40  List_1_get_Item_m10572_gshared (List_1_t49 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10572(__this, ___index, method) (( RaycastResult_t40  (*) (List_1_t49 *, int32_t, const MethodInfo*))List_1_get_Item_m10572_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10573_gshared (List_1_t49 * __this, int32_t ___index, RaycastResult_t40  ___value, const MethodInfo* method);
#define List_1_set_Item_m10573(__this, ___index, ___value, method) (( void (*) (List_1_t49 *, int32_t, RaycastResult_t40 , const MethodInfo*))List_1_set_Item_m10573_gshared)(__this, ___index, ___value, method)
