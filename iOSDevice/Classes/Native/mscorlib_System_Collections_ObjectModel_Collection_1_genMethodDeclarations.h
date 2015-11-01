#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1665;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t261;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t280;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1920;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1664;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10119_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10119(__this, method) (( void (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1__ctor_m10119_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10120_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10120(__this, method) (( bool (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10120_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10121_gshared (Collection_1_t1665 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10121(__this, ___array, ___index, method) (( void (*) (Collection_1_t1665 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10121_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10122_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10122(__this, method) (( Object_t * (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10122_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10123_gshared (Collection_1_t1665 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10123(__this, ___value, method) (( int32_t (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10123_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10124_gshared (Collection_1_t1665 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10124(__this, ___value, method) (( bool (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10124_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10125_gshared (Collection_1_t1665 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10125(__this, ___value, method) (( int32_t (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10125_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10126_gshared (Collection_1_t1665 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10126(__this, ___index, ___value, method) (( void (*) (Collection_1_t1665 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10126_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10127_gshared (Collection_1_t1665 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10127(__this, ___value, method) (( void (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10127_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10128_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10128(__this, method) (( bool (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10128_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10129_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10129(__this, method) (( Object_t * (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10129_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10130_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10130(__this, method) (( bool (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10130_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10131_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10131(__this, method) (( bool (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10131_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10132_gshared (Collection_1_t1665 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10132(__this, ___index, method) (( Object_t * (*) (Collection_1_t1665 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10132_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10133_gshared (Collection_1_t1665 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10133(__this, ___index, ___value, method) (( void (*) (Collection_1_t1665 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10133_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10134_gshared (Collection_1_t1665 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10134(__this, ___item, method) (( void (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_Add_m10134_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10135_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10135(__this, method) (( void (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_Clear_m10135_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10136_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10136(__this, method) (( void (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_ClearItems_m10136_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10137_gshared (Collection_1_t1665 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10137(__this, ___item, method) (( bool (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10137_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10138_gshared (Collection_1_t1665 * __this, ObjectU5BU5D_t280* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10138(__this, ___array, ___index, method) (( void (*) (Collection_1_t1665 *, ObjectU5BU5D_t280*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10138_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10139_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10139(__this, method) (( Object_t* (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_GetEnumerator_m10139_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10140_gshared (Collection_1_t1665 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10140(__this, ___item, method) (( int32_t (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10140_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10141_gshared (Collection_1_t1665 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10141(__this, ___index, ___item, method) (( void (*) (Collection_1_t1665 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10141_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10142_gshared (Collection_1_t1665 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10142(__this, ___index, ___item, method) (( void (*) (Collection_1_t1665 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10142_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10143_gshared (Collection_1_t1665 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10143(__this, ___item, method) (( bool (*) (Collection_1_t1665 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10143_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10144_gshared (Collection_1_t1665 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10144(__this, ___index, method) (( void (*) (Collection_1_t1665 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10144_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m10145_gshared (Collection_1_t1665 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m10145(__this, ___index, method) (( void (*) (Collection_1_t1665 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m10145_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m10146_gshared (Collection_1_t1665 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m10146(__this, method) (( int32_t (*) (Collection_1_t1665 *, const MethodInfo*))Collection_1_get_Count_m10146_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m10147_gshared (Collection_1_t1665 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m10147(__this, ___index, method) (( Object_t * (*) (Collection_1_t1665 *, int32_t, const MethodInfo*))Collection_1_get_Item_m10147_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m10148_gshared (Collection_1_t1665 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m10148(__this, ___index, ___value, method) (( void (*) (Collection_1_t1665 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m10148_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m10149_gshared (Collection_1_t1665 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m10149(__this, ___index, ___item, method) (( void (*) (Collection_1_t1665 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m10149_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m10150_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m10150(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m10150_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m10151_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m10151(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m10151_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m10152_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m10152(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m10152_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m10153_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m10153(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m10153_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m10154_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m10154(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m10154_gshared)(__this /* static, unused */, ___list, method)
